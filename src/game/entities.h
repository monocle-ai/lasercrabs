#pragma once

#include "data/entity.h"
#include "ai.h"

namespace VI
{

namespace Net
{
	struct StreamRead;
	struct StateFrame;
}

struct PlayerManager;
struct Transform;
struct RigidBody;

void spawn_sparks(const Vec3&, const Quat&, Transform* = nullptr);

struct DroneEntity : public Entity
{
	DroneEntity(AI::Team);
};

struct HealthEvent
{
	Ref<Entity> source;
	s8 hp;
	s8 shield;
};

struct Health : public ComponentType<Health>
{
	static b8 net_msg(Net::StreamRead*);

	r32 invincible_timer;
	r32 regen_timer;
	LinkArg<const HealthEvent&> changed;
	LinkArg<Entity*> killed;
	s8 shield;
	s8 shield_max;
	s8 hp;
	s8 hp_max;

	Health(s8 = 0, s8 = 0, s8 = 0, s8 = 0);

	void update_server(const Update&);
	void update_client(const Update&);
	void awake() {}
	void damage(Entity*, s8);
	void take_shield();
	void reset_hp();
	void kill(Entity*);
	void add(s8);
	s8 total() const;
	b8 invincible() const;
};

struct Shield : public ComponentType<Shield>
{
	static void update_client_all(const Update&);

	Ref<Entity> inner;
	Ref<Entity> outer;

	void awake();
	~Shield();

	void update_client(const Update&);
};

struct BatteryEntity : public Entity
{
	BatteryEntity(const Vec3&, AI::Team = AI::TeamNone);
};

struct TargetEvent
{
	Entity* hit_by;
	Entity* target;
};

struct SpawnPoint;

struct Battery : public ComponentType<Battery>
{
	struct Key
	{
		Vec3 me;
		b8 closest_first;
		r32 priority(Battery*);
	};

	static r32 power_particle_timer;
	static r32 particle_accumulator;

	static void update_all(const Update&);
	static void sort_all(const Vec3&, Array<Ref<Battery>>*, b8, AI::TeamMask);
	static Battery* closest(AI::TeamMask, const Vec3&, r32* = nullptr);
	static s32 count(AI::TeamMask);
	static b8 net_msg(Net::StreamRead*);

	Ref<Entity> light;
	Ref<SpawnPoint> spawn_point;
	s16 reward_level;
	AI::Team team = AI::TeamNone;

	void awake();
	~Battery();

	s16 reward() const;
	void killed(Entity*);
	void hit(const TargetEvent&);
	b8 set_team(AI::Team, Entity* = nullptr);
	void set_team_client(AI::Team);
};

struct SpawnPointEntity : public Entity
{
	SpawnPointEntity(AI::Team, b8);
};

struct SpawnPosition
{
	Vec3 pos;
	r32 angle;
};

struct SpawnPoint : public ComponentType<SpawnPoint>
{
	static SpawnPoint* closest(AI::TeamMask, const Vec3&, r32* = nullptr);
	static SpawnPoint* first(AI::TeamMask);
	static s32 count(AI::TeamMask);
	static void update_server_all(const Update&);

	AI::Team team;

	void awake() {}
	void set_team(AI::Team);
	SpawnPosition spawn_position(PlayerManager* = nullptr) const;
};

struct SensorEntity : public Entity
{
	SensorEntity(AI::Team, const Vec3&, const Quat&);
};

struct Sensor : public ComponentType<Sensor>
{
	AI::Team team;

	Sensor(AI::Team = AI::TeamNone);

	void killed_by(Entity*);
	void awake();

	void hit_by(const TargetEvent&);
	void set_team(AI::Team);

	static b8 can_see(AI::Team, const Vec3&, const Vec3&);
	static Sensor* closest(AI::TeamMask, const Vec3&, r32* = nullptr);

	static void update_all_client(const Update&);
};

struct Rocket : public ComponentType<Rocket>
{
	static r32 particle_accumulator;
	r32 remaining_lifetime;
	Ref<Entity> target;
	Ref<PlayerManager> owner;

	static Rocket* inbound(Entity*);
	static Rocket* closest(AI::TeamMask, const Vec3&, r32* = nullptr);
	static void update_client_all(const Update&);
	static b8 net_msg(Net::StreamRead*, Net::MessageSource);

	Rocket();
	void awake();

	void explode();
	Vec3 velocity() const;
	AI::Team team() const;
	void set_owner(PlayerManager*);
	void killed(Entity*);
	void hit_by(const TargetEvent&);
	void update_server(const Update&);
	void launch(Entity*);
};

struct RocketEntity : public Entity
{
	RocketEntity(PlayerManager*, Transform*, const Vec3&, const Quat&, AI::Team);
};

struct DecoyEntity : public Entity
{
	DecoyEntity(PlayerManager*, Transform*, const Vec3&, const Quat&);
};

struct Decoy : public ComponentType<Decoy>
{
	Ref<PlayerManager> owner;

	void awake();

	void killed(Entity*);
	void destroy();
	AI::Team team() const;
};

struct CoreModuleEntity : public Entity
{
	CoreModuleEntity(AI::Team, Transform*, const Vec3&, const Quat&);
};

struct CoreModule : public ComponentType<CoreModule>
{
	static s32 count(AI::TeamMask);

	AI::Team team;

	void awake();
	void killed(Entity*);
	void destroy();
};

struct TurretEntity : public Entity
{
	TurretEntity(AI::Team);
};

struct Turret : public ComponentType<Turret>
{
	static r32 particle_accumulator;

	static void update_client_all(const Update&);
	static b8 net_msg(Net::StreamRead*, Net::MessageSource);

	r32 cooldown;
	r32 target_check_time;
	StaticArray<Vec3, 4> ingress_points; // points for AI minions to attack from
	Ref<Entity> target;
	AI::Team team;

	void awake();

	void killed(Entity*);
	void update_server(const Update&);
	void check_target();
	b8 can_see(Entity*) const;
	void hit_by(const TargetEvent&);
};

struct ForceField : public ComponentType<ForceField>
{
	static r32 particle_accumulator;

	static void update_all(const Update&);
	static ForceField* inside(AI::TeamMask, const Vec3&);
	static ForceField* closest(AI::TeamMask, const Vec3&, r32*);
	static u32 hash(AI::Team, const Vec3&);

	r32 remaining_lifetime;
	Ref<Entity> field;
	Ref<PlayerManager> owner;
	AI::Team team;
	b8 powered;

	ForceField();
	void awake();
	~ForceField();
	void hit_by(const TargetEvent&);
	void killed(Entity*);
	void destroy();
	b8 contains(const Vec3&) const;
};

struct ForceFieldEntity : public Entity
{
	ForceFieldEntity(Transform*, const Vec3&, const Quat&, PlayerManager*);
};

struct AICue : public ComponentType<AICue>
{
	enum Type
	{
		Sensor = 1,
		Rocket = 1 << 1,
		Snipe = 1 << 2,
	};

	typedef s32 TypeMask;
	static const TypeMask TypeAll = (TypeMask)-1;

	static AICue* in_range(TypeMask, const Vec3&, r32, s32* = nullptr);

	TypeMask type;
	AICue(TypeMask);
	AICue();
	void awake() {}
};

struct EffectLight
{
	enum class Type
	{
		Bolt,
		Spark,
		Shockwave,
		Alpha,
		count,
	};

	static PinArray<EffectLight, MAX_ENTITIES> list;

	static EffectLight* add(const Vec3&, r32, r32, Type, Transform* = nullptr, Quat = Quat::identity);
	static void remove(EffectLight*);
	static void draw_alpha(const RenderParams&);

	Quat rot;
	Vec3 pos;
	r32 max_radius;
	r32 timer;
	r32 duration;
	Type type;
	Ref<Transform> parent;
	Revision revision;

	r32 radius() const;
	r32 opacity() const;
	Vec3 absolute_pos() const;
	void update(const Update&);

	inline ID id() const
	{
		return this - &list[0];
	}
};

struct WaterEntity : public Entity
{
	WaterEntity(AssetID);
};

struct Rope : public ComponentType<Rope>
{
	static Array<Mat4> instances;

	static void draw(const RenderParams&);
	static void spawn(const Vec3&, const Vec3&, r32, r32 = 0.0f, b8 = true);

	void awake() {}
	static Rope* start(RigidBody*, const Vec3&, const Vec3&, const Quat&, r32 = 0.0f);
	void end(const Vec3&, const Vec3&, RigidBody*, r32 = 0.0f, b8 = false);
};

struct BoltEntity : public Entity
{
	BoltEntity(AI::Team, PlayerManager*, const Vec3&, const Vec3&);
};

struct Bolt : public ComponentType<Bolt>
{
	static r32 particle_accumulator;

	static s16 raycast_mask(AI::Team);
	static b8 net_msg(Net::StreamRead*, Net::MessageSource);
	static void update_client_all(const Update&);
	
	Vec3 velocity;
	Vec3 last_pos;
	r32 lifetime;
	Ref<PlayerManager> owner;
	AI::Team team;
	b8 reflected;

	void awake();

	void update_server(const Update&);
	void hit_entity(Entity*, const Vec3&, const Vec3&);
};

struct ParticleEffect
{
	enum class Type
	{
		Impact,
		Explosion,
		Grenade,
		count,
	};
	static b8 spawn(Type, const Vec3&, const Quat&);
	static b8 net_msg(Net::StreamRead*);
};

struct GrenadeEntity : public Entity
{
	GrenadeEntity(PlayerManager*, const Vec3&, const Vec3&);
};

struct Grenade : public ComponentType<Grenade>
{
	static r32 particle_accumulator;

	Vec3 velocity;
	r32 timer;
	Ref<PlayerManager> owner;
	b8 active;

	void awake();

	void hit_by(const TargetEvent&);
	void killed_by(Entity*);
	AI::Team team() const;
	void explode();
	void set_owner(PlayerManager*);

	void update_server(const Update&);
	static void update_client_all(const Update&);
};

struct Target : public ComponentType<Target>
{
	Vec3 local_offset;
	Vec3 net_velocity;
	LinkArg<const TargetEvent&> target_hit;

	void awake() {}
	Vec3 velocity() const;
	Vec3 absolute_pos() const;
	void hit(Entity*);
	b8 predict_intersection(const Vec3&, r32, const Net::StateFrame*, Vec3*) const;
	r32 radius() const;
};

struct Collectible : public ComponentType<Collectible>
{
	Resource type;
	Link collected;
	ID save_id;
	s16 amount;

	void awake() {}

	void give_rewards();
};

struct CollectibleEntity : public Entity
{
	CollectibleEntity(ID, Resource = Resource::count, s16 = 0);
};

struct PlayerTrigger : public ComponentType<PlayerTrigger>
{
	const static s32 max_trigger = MAX_PLAYERS;
	r32 radius;
	LinkArg<Entity*> entered;
	LinkArg<Entity*> exited;
	Ref<Entity> triggered[max_trigger];

	PlayerTrigger();

	void awake() {}

	void update(const Update&);

	b8 is_triggered(const Entity*) const;
	b8 is_triggered() const;

	s32 count() const;
};

struct Interactable : public ComponentType<Interactable>
{
	enum Type
	{
		Terminal,
		Tram,
		Shop,
		Invalid,
		count = Invalid,
	};

	static Interactable* closest(const Vec3&);
	static b8 is_present(Type);
	static b8 net_msg(Net::StreamRead*, Net::MessageSource);

	s32 user_data;
	Type type;
	LinkArg<Interactable*> interacted;

	Interactable(Type = Type::Invalid);

	void awake();
	void interact();
	void interact_no_animation();
	void animation_callback();
};

struct TerminalEntity : public Entity
{
	static void open();
	static void close();
	static void closed();

	TerminalEntity();
};

struct TerminalInteractable : public Entity
{
	static void interacted(Interactable*);

	TerminalInteractable();
};

struct ShopEntity : public Entity
{
	ShopEntity();
};

struct ShopInteractable : public Entity
{
	static void interacted(Interactable*);

	ShopInteractable();
};

struct TramRunnerEntity : public Entity
{
	TramRunnerEntity(s8, b8);
};

struct TramRunner : public ComponentType<TramRunner>
{
	enum class State
	{
		Idle,
		Arriving,
		Departing,
		count,
	};

	static void go(s8, r32, State);

	r32 target_offset;
	r32 offset;
	r32 velocity;
	s32 offset_index;
	State state;
	s8 track;
	b8 is_front; // front is toward the exit

	void awake() {}

	void update_server(const Update&);
	void update_client(const Update&);

	void set(r32);
};

struct TramEntity : public Entity
{
	TramEntity(TramRunner*, TramRunner*);
};

struct Tram : public ComponentType<Tram>
{
	static Tram* by_track(s8);
	static b8 net_msg(Net::StreamRead*, Net::MessageSource);
	static Tram* player_inside(Entity*);
	static void setup();

	Ref<TramRunner> runner_a;
	Ref<TramRunner> runner_b;
	Ref<Entity> doors;
	b8 departing;

	b8 doors_open() const;
	void doors_open(b8);
	s8 track() const;
	void set_position();

	void player_entered(Entity*);
	void player_exited(Entity*);

	void awake();
};

struct TramInteractableEntity : public Entity
{
	static void interacted(Interactable*);

	TramInteractableEntity(const Vec3&, const Quat&, s8);
};

struct Ascensions
{
	struct Entry
	{
		const char* username;
		r32 timer;

		Vec3 pos() const;
		r32 scale() const;
	};

	static Array<Entry> entries;
	static r32 timer;
	static r32 particle_accumulator;

	static void update(const Update&);
	static void draw_ui(const RenderParams&);
	static void clear();
};


}