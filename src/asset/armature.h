#pragma once
#include "types.h"

namespace VI
{

namespace Asset
{
	namespace Armature
	{
		const s32 count = 15;
		const AssetID character = 0;
		const AssetID character_headless = 1;
		const AssetID dada = 2;
		const AssetID drone = 3;
		const AssetID hobo = 4;
		const AssetID hologram = 5;
		const AssetID interactable = 6;
		const AssetID locke = 7;
		const AssetID meursault = 8;
		const AssetID parkour = 9;
		const AssetID parkour_headless = 10;
		const AssetID samsa = 11;
		const AssetID seven = 12;
		const AssetID terminal = 13;
		const AssetID tram_doors = 14;
	}
	namespace Bone
	{
		const s32 count = 439;
		const AssetID character_camera = 0;
		const AssetID character_claw1_L = 9;
		const AssetID character_claw1_R = 15;
		const AssetID character_claw2_L = 11;
		const AssetID character_claw2_R = 16;
		const AssetID character_claw3_L = 10;
		const AssetID character_claw3_R = 17;
		const AssetID character_foot_L = 20;
		const AssetID character_foot_R = 23;
		const AssetID character_forearm_L = 7;
		const AssetID character_forearm_R = 13;
		const AssetID character_hand_L = 8;
		const AssetID character_hand_R = 14;
		const AssetID character_head = 5;
		const AssetID character_headless_camera = 0;
		const AssetID character_headless_claw1_L = 9;
		const AssetID character_headless_claw1_R = 15;
		const AssetID character_headless_claw2_L = 11;
		const AssetID character_headless_claw2_R = 16;
		const AssetID character_headless_claw3_L = 10;
		const AssetID character_headless_claw3_R = 17;
		const AssetID character_headless_foot_L = 20;
		const AssetID character_headless_foot_R = 23;
		const AssetID character_headless_forearm_L = 7;
		const AssetID character_headless_forearm_R = 13;
		const AssetID character_headless_hand_L = 8;
		const AssetID character_headless_hand_R = 14;
		const AssetID character_headless_head = 5;
		const AssetID character_headless_hips = 2;
		const AssetID character_headless_master = 1;
		const AssetID character_headless_neck = 4;
		const AssetID character_headless_shin_L = 19;
		const AssetID character_headless_shin_R = 22;
		const AssetID character_headless_spine = 3;
		const AssetID character_headless_thigh_L = 18;
		const AssetID character_headless_thigh_R = 21;
		const AssetID character_headless_upper_arm_L = 6;
		const AssetID character_headless_upper_arm_R = 12;
		const AssetID character_hips = 2;
		const AssetID character_master = 1;
		const AssetID character_neck = 4;
		const AssetID character_shin_L = 19;
		const AssetID character_shin_R = 22;
		const AssetID character_spine = 3;
		const AssetID character_thigh_L = 18;
		const AssetID character_thigh_R = 21;
		const AssetID character_upper_arm_L = 6;
		const AssetID character_upper_arm_R = 12;
		const AssetID dada_ball_l = 49;
		const AssetID dada_ball_r = 53;
		const AssetID dada_calf_l = 47;
		const AssetID dada_calf_r = 51;
		const AssetID dada_clavicle_l = 6;
		const AssetID dada_clavicle_r = 25;
		const AssetID dada_door = 0;
		const AssetID dada_foot_l = 48;
		const AssetID dada_foot_r = 52;
		const AssetID dada_hand_l = 9;
		const AssetID dada_hand_r = 28;
		const AssetID dada_head = 45;
		const AssetID dada_index_01_l = 10;
		const AssetID dada_index_01_r = 29;
		const AssetID dada_index_02_l = 11;
		const AssetID dada_index_02_r = 30;
		const AssetID dada_index_03_l = 12;
		const AssetID dada_index_03_r = 31;
		const AssetID dada_lowerarm_l = 8;
		const AssetID dada_lowerarm_r = 27;
		const AssetID dada_middle_01_l = 13;
		const AssetID dada_middle_01_r = 32;
		const AssetID dada_middle_02_l = 14;
		const AssetID dada_middle_02_r = 33;
		const AssetID dada_middle_03_l = 15;
		const AssetID dada_middle_03_r = 34;
		const AssetID dada_neck_01 = 44;
		const AssetID dada_pelvis = 2;
		const AssetID dada_pinky_01_l = 16;
		const AssetID dada_pinky_01_r = 35;
		const AssetID dada_pinky_02_l = 17;
		const AssetID dada_pinky_02_r = 36;
		const AssetID dada_pinky_03_l = 18;
		const AssetID dada_pinky_03_r = 37;
		const AssetID dada_ring_01_l = 19;
		const AssetID dada_ring_01_r = 38;
		const AssetID dada_ring_02_l = 20;
		const AssetID dada_ring_02_r = 39;
		const AssetID dada_ring_03_l = 21;
		const AssetID dada_ring_03_r = 40;
		const AssetID dada_root = 1;
		const AssetID dada_spine_01 = 3;
		const AssetID dada_spine_02 = 4;
		const AssetID dada_spine_03 = 5;
		const AssetID dada_thigh_l = 46;
		const AssetID dada_thigh_r = 50;
		const AssetID dada_thumb_01_l = 22;
		const AssetID dada_thumb_01_r = 41;
		const AssetID dada_thumb_02_l = 23;
		const AssetID dada_thumb_02_r = 42;
		const AssetID dada_thumb_03_l = 24;
		const AssetID dada_thumb_03_r = 43;
		const AssetID dada_upperarm_l = 7;
		const AssetID dada_upperarm_r = 26;
		const AssetID drone_a1 = 5;
		const AssetID drone_a2 = 6;
		const AssetID drone_b1 = 1;
		const AssetID drone_b2 = 2;
		const AssetID drone_c1 = 3;
		const AssetID drone_c2 = 4;
		const AssetID drone_root = 0;
		const AssetID hobo_ball_l = 50;
		const AssetID hobo_ball_r = 54;
		const AssetID hobo_bottle = 55;
		const AssetID hobo_calf_l = 48;
		const AssetID hobo_calf_r = 52;
		const AssetID hobo_clavicle_l = 5;
		const AssetID hobo_clavicle_r = 24;
		const AssetID hobo_foot_l = 49;
		const AssetID hobo_foot_r = 53;
		const AssetID hobo_hand_l = 8;
		const AssetID hobo_hand_r = 27;
		const AssetID hobo_head = 44;
		const AssetID hobo_index_01_l = 9;
		const AssetID hobo_index_01_r = 28;
		const AssetID hobo_index_02_l = 10;
		const AssetID hobo_index_02_r = 29;
		const AssetID hobo_index_03_l = 11;
		const AssetID hobo_index_03_r = 30;
		const AssetID hobo_lowerarm_l = 7;
		const AssetID hobo_lowerarm_r = 26;
		const AssetID hobo_middle_01_l = 12;
		const AssetID hobo_middle_01_r = 31;
		const AssetID hobo_middle_02_l = 13;
		const AssetID hobo_middle_02_r = 32;
		const AssetID hobo_middle_03_l = 14;
		const AssetID hobo_middle_03_r = 33;
		const AssetID hobo_mouth_lower = 46;
		const AssetID hobo_mouth_upper = 45;
		const AssetID hobo_neck_01 = 43;
		const AssetID hobo_pelvis = 1;
		const AssetID hobo_pinky_01_l = 15;
		const AssetID hobo_pinky_01_r = 34;
		const AssetID hobo_pinky_02_l = 16;
		const AssetID hobo_pinky_02_r = 35;
		const AssetID hobo_pinky_03_l = 17;
		const AssetID hobo_pinky_03_r = 36;
		const AssetID hobo_ring_01_l = 18;
		const AssetID hobo_ring_01_r = 37;
		const AssetID hobo_ring_02_l = 19;
		const AssetID hobo_ring_02_r = 38;
		const AssetID hobo_ring_03_l = 20;
		const AssetID hobo_ring_03_r = 39;
		const AssetID hobo_root = 0;
		const AssetID hobo_spine_01 = 2;
		const AssetID hobo_spine_02 = 3;
		const AssetID hobo_spine_03 = 4;
		const AssetID hobo_thigh_l = 47;
		const AssetID hobo_thigh_r = 51;
		const AssetID hobo_thumb_01_l = 21;
		const AssetID hobo_thumb_01_r = 40;
		const AssetID hobo_thumb_02_l = 22;
		const AssetID hobo_thumb_02_r = 41;
		const AssetID hobo_thumb_03_l = 23;
		const AssetID hobo_thumb_03_r = 42;
		const AssetID hobo_upperarm_l = 6;
		const AssetID hobo_upperarm_r = 25;
		const AssetID hologram_circle0 = 9;
		const AssetID hologram_circle1 = 10;
		const AssetID hologram_circle2 = 11;
		const AssetID hologram_outer = 4;
		const AssetID hologram_part1 = 1;
		const AssetID hologram_part2 = 2;
		const AssetID hologram_part3 = 3;
		const AssetID hologram_root = 0;
		const AssetID hologram_row0 = 5;
		const AssetID hologram_row1 = 6;
		const AssetID hologram_row2 = 7;
		const AssetID hologram_row3 = 8;
		const AssetID hologram_screen = 14;
		const AssetID hologram_square_left = 12;
		const AssetID hologram_square_right = 13;
		const AssetID interactable_outer = 4;
		const AssetID interactable_part1 = 1;
		const AssetID interactable_part2 = 2;
		const AssetID interactable_part3 = 3;
		const AssetID interactable_root = 0;
		const AssetID locke_ball_l = 48;
		const AssetID locke_ball_r = 52;
		const AssetID locke_calf_l = 46;
		const AssetID locke_calf_r = 50;
		const AssetID locke_clavicle_l = 5;
		const AssetID locke_clavicle_r = 24;
		const AssetID locke_foot_l = 47;
		const AssetID locke_foot_r = 51;
		const AssetID locke_hand_l = 8;
		const AssetID locke_hand_r = 27;
		const AssetID locke_head = 44;
		const AssetID locke_index_01_l = 9;
		const AssetID locke_index_01_r = 28;
		const AssetID locke_index_02_l = 10;
		const AssetID locke_index_02_r = 29;
		const AssetID locke_index_03_l = 11;
		const AssetID locke_index_03_r = 30;
		const AssetID locke_lowerarm_l = 7;
		const AssetID locke_lowerarm_r = 26;
		const AssetID locke_middle_01_l = 12;
		const AssetID locke_middle_01_r = 31;
		const AssetID locke_middle_02_l = 13;
		const AssetID locke_middle_02_r = 32;
		const AssetID locke_middle_03_l = 14;
		const AssetID locke_middle_03_r = 33;
		const AssetID locke_neck_01 = 43;
		const AssetID locke_pelvis = 1;
		const AssetID locke_pinky_01_l = 15;
		const AssetID locke_pinky_01_r = 34;
		const AssetID locke_pinky_02_l = 16;
		const AssetID locke_pinky_02_r = 35;
		const AssetID locke_pinky_03_l = 17;
		const AssetID locke_pinky_03_r = 36;
		const AssetID locke_ring_01_l = 18;
		const AssetID locke_ring_01_r = 37;
		const AssetID locke_ring_02_l = 19;
		const AssetID locke_ring_02_r = 38;
		const AssetID locke_ring_03_l = 20;
		const AssetID locke_ring_03_r = 39;
		const AssetID locke_root = 0;
		const AssetID locke_spine_01 = 2;
		const AssetID locke_spine_02 = 3;
		const AssetID locke_spine_03 = 4;
		const AssetID locke_thigh_l = 45;
		const AssetID locke_thigh_r = 49;
		const AssetID locke_thumb_01_l = 21;
		const AssetID locke_thumb_01_r = 40;
		const AssetID locke_thumb_02_l = 22;
		const AssetID locke_thumb_02_r = 41;
		const AssetID locke_thumb_03_l = 23;
		const AssetID locke_thumb_03_r = 42;
		const AssetID locke_upperarm_l = 6;
		const AssetID locke_upperarm_r = 25;
		const AssetID meursault_ball_l = 48;
		const AssetID meursault_ball_r = 52;
		const AssetID meursault_calf_l = 46;
		const AssetID meursault_calf_r = 50;
		const AssetID meursault_clavicle_l = 5;
		const AssetID meursault_clavicle_r = 24;
		const AssetID meursault_crossbow = 53;
		const AssetID meursault_drill = 54;
		const AssetID meursault_foot_l = 47;
		const AssetID meursault_foot_r = 51;
		const AssetID meursault_hand_l = 8;
		const AssetID meursault_hand_r = 27;
		const AssetID meursault_head = 44;
		const AssetID meursault_index_01_l = 9;
		const AssetID meursault_index_01_r = 28;
		const AssetID meursault_index_02_l = 10;
		const AssetID meursault_index_02_r = 29;
		const AssetID meursault_index_03_l = 11;
		const AssetID meursault_index_03_r = 30;
		const AssetID meursault_lowerarm_l = 7;
		const AssetID meursault_lowerarm_r = 26;
		const AssetID meursault_middle_01_l = 12;
		const AssetID meursault_middle_01_r = 31;
		const AssetID meursault_middle_02_l = 13;
		const AssetID meursault_middle_02_r = 32;
		const AssetID meursault_middle_03_l = 14;
		const AssetID meursault_middle_03_r = 33;
		const AssetID meursault_neck_01 = 43;
		const AssetID meursault_pelvis = 1;
		const AssetID meursault_pinky_01_l = 15;
		const AssetID meursault_pinky_01_r = 34;
		const AssetID meursault_pinky_02_l = 16;
		const AssetID meursault_pinky_02_r = 35;
		const AssetID meursault_pinky_03_l = 17;
		const AssetID meursault_pinky_03_r = 36;
		const AssetID meursault_ring_01_l = 18;
		const AssetID meursault_ring_01_r = 37;
		const AssetID meursault_ring_02_l = 19;
		const AssetID meursault_ring_02_r = 38;
		const AssetID meursault_ring_03_l = 20;
		const AssetID meursault_ring_03_r = 39;
		const AssetID meursault_root = 0;
		const AssetID meursault_spine_01 = 2;
		const AssetID meursault_spine_02 = 3;
		const AssetID meursault_spine_03 = 4;
		const AssetID meursault_thigh_l = 45;
		const AssetID meursault_thigh_r = 49;
		const AssetID meursault_thumb_01_l = 21;
		const AssetID meursault_thumb_01_r = 40;
		const AssetID meursault_thumb_02_l = 22;
		const AssetID meursault_thumb_02_r = 41;
		const AssetID meursault_thumb_03_l = 23;
		const AssetID meursault_thumb_03_r = 42;
		const AssetID meursault_upperarm_l = 6;
		const AssetID meursault_upperarm_r = 25;
		const AssetID parkour_attach_point = 0;
		const AssetID parkour_camera = 1;
		const AssetID parkour_claw1_L = 9;
		const AssetID parkour_claw1_R = 15;
		const AssetID parkour_claw2_L = 11;
		const AssetID parkour_claw2_R = 16;
		const AssetID parkour_claw3_L = 10;
		const AssetID parkour_claw3_R = 17;
		const AssetID parkour_foot_L = 20;
		const AssetID parkour_foot_R = 23;
		const AssetID parkour_forearm_L = 7;
		const AssetID parkour_forearm_R = 13;
		const AssetID parkour_hand_L = 8;
		const AssetID parkour_hand_R = 14;
		const AssetID parkour_head = 5;
		const AssetID parkour_headless_attach_point = 0;
		const AssetID parkour_headless_camera = 1;
		const AssetID parkour_headless_claw1_L = 9;
		const AssetID parkour_headless_claw1_R = 15;
		const AssetID parkour_headless_claw2_L = 11;
		const AssetID parkour_headless_claw2_R = 16;
		const AssetID parkour_headless_claw3_L = 10;
		const AssetID parkour_headless_claw3_R = 17;
		const AssetID parkour_headless_foot_L = 20;
		const AssetID parkour_headless_foot_R = 23;
		const AssetID parkour_headless_forearm_L = 7;
		const AssetID parkour_headless_forearm_R = 13;
		const AssetID parkour_headless_hand_L = 8;
		const AssetID parkour_headless_hand_R = 14;
		const AssetID parkour_headless_head = 5;
		const AssetID parkour_headless_hips = 2;
		const AssetID parkour_headless_neck = 4;
		const AssetID parkour_headless_shin_L = 19;
		const AssetID parkour_headless_shin_R = 22;
		const AssetID parkour_headless_spine = 3;
		const AssetID parkour_headless_thigh_L = 18;
		const AssetID parkour_headless_thigh_R = 21;
		const AssetID parkour_headless_upper_arm_L = 6;
		const AssetID parkour_headless_upper_arm_R = 12;
		const AssetID parkour_hips = 2;
		const AssetID parkour_neck = 4;
		const AssetID parkour_shin_L = 19;
		const AssetID parkour_shin_R = 22;
		const AssetID parkour_spine = 3;
		const AssetID parkour_thigh_L = 18;
		const AssetID parkour_thigh_R = 21;
		const AssetID parkour_upper_arm_L = 6;
		const AssetID parkour_upper_arm_R = 12;
		const AssetID samsa_antenna1 = 7;
		const AssetID samsa_antenna2 = 8;
		const AssetID samsa_antenna3 = 9;
		const AssetID samsa_antenna4 = 10;
		const AssetID samsa_antenna5 = 11;
		const AssetID samsa_antenna6 = 12;
		const AssetID samsa_back1 = 18;
		const AssetID samsa_back2 = 19;
		const AssetID samsa_back3 = 20;
		const AssetID samsa_eyelid_bottom = 16;
		const AssetID samsa_eyelid_top = 17;
		const AssetID samsa_head = 15;
		const AssetID samsa_leg_front_l = 1;
		const AssetID samsa_leg_front_r = 2;
		const AssetID samsa_leg_rear_l = 3;
		const AssetID samsa_leg_rear_r = 4;
		const AssetID samsa_neck = 14;
		const AssetID samsa_projector = 21;
		const AssetID samsa_root = 0;
		const AssetID samsa_torso = 5;
		const AssetID samsa_wing_l = 6;
		const AssetID samsa_wing_r = 13;
		const AssetID seven_ball_l = 50;
		const AssetID seven_ball_r = 54;
		const AssetID seven_bp_clavicle_l = 57;
		const AssetID seven_bp_clavicle_r = 59;
		const AssetID seven_bp_spine_02 = 55;
		const AssetID seven_bp_spine_03 = 56;
		const AssetID seven_bp_upperarm_l = 58;
		const AssetID seven_bp_upperarm_r = 60;
		const AssetID seven_calf_l = 48;
		const AssetID seven_calf_r = 52;
		const AssetID seven_clavicle_l = 5;
		const AssetID seven_clavicle_r = 24;
		const AssetID seven_foot_l = 49;
		const AssetID seven_foot_r = 53;
		const AssetID seven_hand_l = 8;
		const AssetID seven_hand_r = 27;
		const AssetID seven_head = 44;
		const AssetID seven_index_01_l = 9;
		const AssetID seven_index_01_r = 28;
		const AssetID seven_index_02_l = 10;
		const AssetID seven_index_02_r = 29;
		const AssetID seven_index_03_l = 11;
		const AssetID seven_index_03_r = 30;
		const AssetID seven_lowerarm_l = 7;
		const AssetID seven_lowerarm_r = 26;
		const AssetID seven_middle_01_l = 12;
		const AssetID seven_middle_01_r = 31;
		const AssetID seven_middle_02_l = 13;
		const AssetID seven_middle_02_r = 32;
		const AssetID seven_middle_03_l = 14;
		const AssetID seven_middle_03_r = 33;
		const AssetID seven_mouth_lower = 46;
		const AssetID seven_mouth_upper = 45;
		const AssetID seven_neck_01 = 43;
		const AssetID seven_pelvis = 1;
		const AssetID seven_pinky_01_l = 15;
		const AssetID seven_pinky_01_r = 34;
		const AssetID seven_pinky_02_l = 16;
		const AssetID seven_pinky_02_r = 35;
		const AssetID seven_pinky_03_l = 17;
		const AssetID seven_pinky_03_r = 36;
		const AssetID seven_ring_01_l = 18;
		const AssetID seven_ring_01_r = 37;
		const AssetID seven_ring_02_l = 19;
		const AssetID seven_ring_02_r = 38;
		const AssetID seven_ring_03_l = 20;
		const AssetID seven_ring_03_r = 39;
		const AssetID seven_root = 0;
		const AssetID seven_spine_01 = 2;
		const AssetID seven_spine_02 = 3;
		const AssetID seven_spine_03 = 4;
		const AssetID seven_thigh_l = 47;
		const AssetID seven_thigh_r = 51;
		const AssetID seven_thumb_01_l = 21;
		const AssetID seven_thumb_01_r = 40;
		const AssetID seven_thumb_02_l = 22;
		const AssetID seven_thumb_02_r = 41;
		const AssetID seven_thumb_03_l = 23;
		const AssetID seven_thumb_03_r = 42;
		const AssetID seven_upperarm_l = 6;
		const AssetID seven_upperarm_r = 25;
		const AssetID terminal_bottom_L = 1;
		const AssetID terminal_bottom_R = 2;
		const AssetID terminal_middle_L = 3;
		const AssetID terminal_middle_R = 4;
		const AssetID terminal_monitor = 8;
		const AssetID terminal_monitor_arm_1 = 6;
		const AssetID terminal_monitor_arm_2 = 7;
		const AssetID terminal_root = 0;
		const AssetID terminal_top = 5;
		const AssetID tram_doors_door1 = 0;
		const AssetID tram_doors_door2 = 1;
		const AssetID tram_doors_door3 = 2;
		const AssetID tram_doors_door4 = 3;
		const AssetID tram_doors_door5 = 4;
		const AssetID tram_doors_door6 = 5;
	}
}

}