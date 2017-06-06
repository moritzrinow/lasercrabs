#include "lookup.h"

namespace VI
{ 


const char* AssetLookup::Mesh::values[] =
{
	"assets/actor_collision.msh",
	"assets/battery.msh",
	"assets/character.msh",
	"assets/clouds.msh",
	"assets/compass.msh",
	"assets/cone.msh",
	"assets/core_Cube_000.msh",
	"assets/core_Cube_000_1.msh",
	"assets/core_module.msh",
	"assets/cube.msh",
	"assets/drone.msh",
	"assets/energy.msh",
	"assets/force_field_base.msh",
	"assets/force_field_sphere.msh",
	"assets/grenade_attached.msh",
	"assets/grenade_detached.msh",
	"assets/hack_kit.msh",
	"assets/hobo.msh",
	"assets/icon_active_armor.msh",
	"assets/icon_bolter.msh",
	"assets/icon_close.msh",
	"assets/icon_drone.msh",
	"assets/icon_energy.msh",
	"assets/icon_force_field.msh",
	"assets/icon_gamepad.msh",
	"assets/icon_grenade.msh",
	"assets/icon_hack_kit.msh",
	"assets/icon_minion.msh",
	"assets/icon_network_error.msh",
	"assets/icon_select.msh",
	"assets/icon_sensor.msh",
	"assets/icon_sniper.msh",
	"assets/interactable.msh",
	"assets/interactable_collision.msh",
	"assets/ivory_ad.msh",
	"assets/locke.msh",
	"assets/meursault.msh",
	"assets/parkour.msh",
	"assets/parkour_headless.msh",
	"assets/plane.msh",
	"assets/rope_base.msh",
	"assets/sailor.msh",
	"assets/seven.msh",
	"assets/shop.msh",
	"assets/shop_collision.msh",
	"assets/sky_decal.msh",
	"assets/sky_pattern.msh",
	"assets/skybox.msh",
	"assets/spawn.msh",
	"assets/sphere.msh",
	"assets/sphere_highres.msh",
	"assets/support.msh",
	"assets/support2.msh",
	"assets/terminal.msh",
	"assets/terminal_collision.msh",
	"assets/tram_collision.msh",
	"assets/tram_collision_door.msh",
	"assets/tram_doors.msh",
	"assets/tram_mesh.msh",
	"assets/tram_mesh_1.msh",
	"assets/tram_runner.msh",
	"assets/tri_tube.msh",
	"assets/turret_base.msh",
	"assets/turret_top.msh",
	"assets/lvl/Commons_Cube.msh",
	"assets/lvl/Commons_Cube_000_proxy.msh",
	"assets/lvl/Commons_Cube_000_proxy_1.msh",
	"assets/lvl/Commons_Cube_002.msh",
	"assets/lvl/Commons_Cube_004.msh",
	"assets/lvl/Commons_Cube_005.msh",
	"assets/lvl/Commons_Cube_006.msh",
	"assets/lvl/Commons_Cube_007.msh",
	"assets/lvl/Commons_bsp_model_0_006.msh",
	"assets/lvl/Commons_bsp_model_0_006_1.msh",
	"assets/lvl/Commons_bsp_model_0_008.msh",
	"assets/lvl/Commons_bsp_model_0_009.msh",
	"assets/lvl/Commons_bsp_model_0_010.msh",
	"assets/lvl/Commons_bsp_model_0_011.msh",
	"assets/lvl/Commons_bsp_model_0_012.msh",
	"assets/lvl/Commons_bsp_model_0_013.msh",
	"assets/lvl/Crossing_Cube_000_proxy.msh",
	"assets/lvl/Crossing_Cube_000_proxy_1.msh",
	"assets/lvl/Crossing_concept3_001.msh",
	"assets/lvl/Crossing_concept3_001_1.msh",
	"assets/lvl/Library_Cube.msh",
	"assets/lvl/Library_Cube_000_proxy.msh",
	"assets/lvl/Library_Cube_000_proxy_1.msh",
	"assets/lvl/Library_Cube_001.msh",
	"assets/lvl/Library_Cube_003.msh",
	"assets/lvl/Library_Cube_003_proxy_000.msh",
	"assets/lvl/Library_Cube_003_proxy_001.msh",
	"assets/lvl/Library_Cube_003_proxy_002.msh",
	"assets/lvl/Library_Cube_005.msh",
	"assets/lvl/Library_Cube_1.msh",
	"assets/lvl/Library_mountain_001_proxy_000.msh",
	"assets/lvl/Library_mountain_001_proxy_001.msh",
	"assets/lvl/Library_mountain_001_proxy_002.msh",
	"assets/lvl/Media_Tower_Cube.msh",
	"assets/lvl/Media_Tower_Cube_000_proxy.msh",
	"assets/lvl/Media_Tower_Cube_000_proxy_1.msh",
	"assets/lvl/Media_Tower_Cube_001.msh",
	"assets/lvl/Media_Tower_Cube_002.msh",
	"assets/lvl/Media_Tower_Cube_004.msh",
	"assets/lvl/Media_Tower_Cube_005.msh",
	"assets/lvl/Media_Tower_Cube_006.msh",
	"assets/lvl/Media_Tower_Cube_007.msh",
	"assets/lvl/Media_Tower_Cube_008.msh",
	"assets/lvl/Media_Tower_Cube_1.msh",
	"assets/lvl/Media_Tower_Plane.msh",
	"assets/lvl/Office_Cube.msh",
	"assets/lvl/Office_Cube_000_proxy.msh",
	"assets/lvl/Office_Cube_000_proxy_1.msh",
	"assets/lvl/Office_Cube_1.msh",
	"assets/lvl/Port_District_Circle.msh",
	"assets/lvl/Port_District_Circle_001.msh",
	"assets/lvl/Port_District_Circle_002.msh",
	"assets/lvl/Port_District_Circle_003.msh",
	"assets/lvl/Port_District_Circle_004.msh",
	"assets/lvl/Port_District_Circle_005.msh",
	"assets/lvl/Port_District_Circle_006.msh",
	"assets/lvl/Port_District_Circle_007.msh",
	"assets/lvl/Port_District_Cube.msh",
	"assets/lvl/Port_District_Cube_000.msh",
	"assets/lvl/Port_District_Cube_000_proxy.msh",
	"assets/lvl/Port_District_Cube_000_proxy_1.msh",
	"assets/lvl/Port_District_Cube_001.msh",
	"assets/lvl/Port_District_Cube_002.msh",
	"assets/lvl/Port_District_Cube_002_1.msh",
	"assets/lvl/Port_District_Cube_003.msh",
	"assets/lvl/Port_District_Cube_004.msh",
	"assets/lvl/Port_District_Cube_005.msh",
	"assets/lvl/Port_District_Cube_006.msh",
	"assets/lvl/Port_District_Cube_007.msh",
	"assets/lvl/Port_District_Cube_008.msh",
	"assets/lvl/Port_District_support_proxy_006.msh",
	"assets/lvl/Port_District_support_proxy_007.msh",
	"assets/lvl/Port_District_support_proxy_008.msh",
	"assets/lvl/Port_District_support_proxy_009.msh",
	"assets/lvl/Port_District_water.msh",
	"assets/lvl/Tier_0_Cube.msh",
	"assets/lvl/Tier_0_Cube_001.msh",
	"assets/lvl/Tier_0_Cube_002.msh",
	"assets/lvl/Tier_0_Cube_003.msh",
	"assets/lvl/Tier_0_Cube_004.msh",
	"assets/lvl/Tier_0_Cube_005.msh",
	"assets/lvl/Tier_0_Cube_006.msh",
	"assets/lvl/Tier_0_Cube_007.msh",
	"assets/lvl/Tier_0_buildings.msh",
	"assets/lvl/Tier_0_buildings_001.msh",
	"assets/lvl/Tier_0_buildings_002.msh",
	"assets/lvl/Tier_0_buildings_003.msh",
	"assets/lvl/Tier_0_buildings_004.msh",
	"assets/lvl/Tier_0_buildings_005.msh",
	"assets/lvl/Tier_0_buildings_006.msh",
	"assets/lvl/Tier_0_buildings_007.msh",
	"assets/lvl/Tier_0_buildings_008.msh",
	"assets/lvl/Tier_0_buildings_009.msh",
	"assets/lvl/Tier_0_buildings_010.msh",
	"assets/lvl/Tier_0_buildings_011.msh",
	"assets/lvl/Tier_0_buildings_012.msh",
	"assets/lvl/Tier_0_buildings_013.msh",
	"assets/lvl/Tier_0_buildings_014.msh",
	"assets/lvl/Tier_0_buildings_015.msh",
	"assets/lvl/Tier_0_buildings_016.msh",
	"assets/lvl/Tier_0_buildings_017.msh",
	"assets/lvl/Tier_0_buildings_018.msh",
	"assets/lvl/Tier_0_buildings_019.msh",
	"assets/lvl/Tier_0_buildings_020.msh",
	"assets/lvl/Tier_0_buildings_021.msh",
	"assets/lvl/Tier_0_buildings_022.msh",
	"assets/lvl/Tier_0_buildings_023.msh",
	"assets/lvl/Tier_0_buildings_024.msh",
	"assets/lvl/Tier_0_buildings_025.msh",
	"assets/lvl/Tier_0_buildings_026.msh",
	"assets/lvl/Tier_0_buildings_027.msh",
	"assets/lvl/Tier_0_buildings_028.msh",
	"assets/lvl/Tier_0_ivory_ad.msh",
	"assets/lvl/Tier_0_ivory_ad_text.msh",
	"assets/lvl/Tier_0_mountain.msh",
	"assets/lvl/Tier_0_mountain_001.msh",
	"assets/lvl/Tier_0_mountain_002.msh",
	"assets/lvl/Tier_0_water.msh",
	"assets/lvl/Tier_1_Cube_000_proxy.msh",
	"assets/lvl/Tier_1_Cube_000_proxy_1.msh",
	"assets/lvl/Tier_1_Cube_002.msh",
	"assets/lvl/Tier_1_Cube_002_1.msh",
	"assets/lvl/Tier_1_Cube_003_proxy_001.msh",
	"assets/lvl/Tier_1_Cube_003_proxy_002.msh",
	"assets/lvl/Tier_1_Cube_003_proxy_003.msh",
	"assets/lvl/Tier_1_Cube_004.msh",
	"assets/lvl/Tier_1_Cube_005.msh",
	"assets/lvl/Tier_1_Cube_006.msh",
	"assets/lvl/Tier_1_Cube_006_1.msh",
	"assets/lvl/Tier_1_Cube_007.msh",
	"assets/lvl/Tier_1_Cube_007_1.msh",
	"assets/lvl/Tier_1_Cube_008.msh",
	"assets/lvl/Tier_1_Cube_008_1.msh",
	"assets/lvl/Tier_1_Cube_009.msh",
	"assets/lvl/Tier_1_Cube_010.msh",
	"assets/lvl/Tier_1_Cylinder.msh",
	"assets/lvl/Tier_1_Text.msh",
	"assets/lvl/Tier_1_ivory_ad_text.msh",
	"assets/lvl/Tier_1_mountain_000.msh",
	"assets/lvl/Tier_1_mountain_001_proxy_001.msh",
	"assets/lvl/Tier_1_mountain_001_proxy_002.msh",
	"assets/lvl/Tier_1_water.msh",
	"assets/lvl/overworld_Circle.msh",
	"assets/lvl/overworld_Cube_000.msh",
	"assets/lvl/overworld_Cube_001.msh",
	"assets/lvl/overworld_Cube_002.msh",
	"assets/lvl/overworld_Cube_003.msh",
	"assets/lvl/overworld_Cube_004.msh",
	"assets/lvl/overworld_Cube_005.msh",
	"assets/lvl/overworld_Cube_006.msh",
	"assets/lvl/overworld_Cube_007.msh",
	"assets/lvl/overworld_Cube_008.msh",
	"assets/lvl/overworld_Cube_009.msh",
	"assets/lvl/overworld_Cube_010.msh",
	"assets/lvl/overworld_Cube_011.msh",
	"assets/lvl/overworld_Cube_012.msh",
	"assets/lvl/overworld_Cube_013.msh",
	"assets/lvl/overworld_Cube_014.msh",
	"assets/lvl/overworld_Cube_015.msh",
	"assets/lvl/overworld_Cube_016.msh",
	"assets/lvl/overworld_Cube_017.msh",
	"assets/lvl/overworld_Cube_018.msh",
	"assets/lvl/overworld_Cube_019.msh",
	"assets/lvl/overworld_Cube_020.msh",
	"assets/lvl/overworld_Cube_021.msh",
	"assets/lvl/overworld_Cube_024.msh",
	"assets/lvl/overworld_water.msh",
	0,
};


const char* AssetLookup::Mesh::names[] =
{
	"actor_collision",
	"battery",
	"character",
	"clouds",
	"compass",
	"cone",
	"core_Cube_000",
	"core_Cube_000_1",
	"core_module",
	"cube",
	"drone",
	"energy",
	"force_field_base",
	"force_field_sphere",
	"grenade_attached",
	"grenade_detached",
	"hack_kit",
	"hobo",
	"icon_active_armor",
	"icon_bolter",
	"icon_close",
	"icon_drone",
	"icon_energy",
	"icon_force_field",
	"icon_gamepad",
	"icon_grenade",
	"icon_hack_kit",
	"icon_minion",
	"icon_network_error",
	"icon_select",
	"icon_sensor",
	"icon_sniper",
	"interactable",
	"interactable_collision",
	"ivory_ad",
	"locke",
	"meursault",
	"parkour",
	"parkour_headless",
	"plane",
	"rope_base",
	"sailor",
	"seven",
	"shop",
	"shop_collision",
	"sky_decal",
	"sky_pattern",
	"skybox",
	"spawn",
	"sphere",
	"sphere_highres",
	"support",
	"support2",
	"terminal",
	"terminal_collision",
	"tram_collision",
	"tram_collision_door",
	"tram_doors",
	"tram_mesh",
	"tram_mesh_1",
	"tram_runner",
	"tri_tube",
	"turret_base",
	"turret_top",
	"Commons_Cube",
	"Commons_Cube_000_proxy",
	"Commons_Cube_000_proxy_1",
	"Commons_Cube_002",
	"Commons_Cube_004",
	"Commons_Cube_005",
	"Commons_Cube_006",
	"Commons_Cube_007",
	"Commons_bsp_model_0_006",
	"Commons_bsp_model_0_006_1",
	"Commons_bsp_model_0_008",
	"Commons_bsp_model_0_009",
	"Commons_bsp_model_0_010",
	"Commons_bsp_model_0_011",
	"Commons_bsp_model_0_012",
	"Commons_bsp_model_0_013",
	"Crossing_Cube_000_proxy",
	"Crossing_Cube_000_proxy_1",
	"Crossing_concept3_001",
	"Crossing_concept3_001_1",
	"Library_Cube",
	"Library_Cube_000_proxy",
	"Library_Cube_000_proxy_1",
	"Library_Cube_001",
	"Library_Cube_003",
	"Library_Cube_003_proxy_000",
	"Library_Cube_003_proxy_001",
	"Library_Cube_003_proxy_002",
	"Library_Cube_005",
	"Library_Cube_1",
	"Library_mountain_001_proxy_000",
	"Library_mountain_001_proxy_001",
	"Library_mountain_001_proxy_002",
	"Media_Tower_Cube",
	"Media_Tower_Cube_000_proxy",
	"Media_Tower_Cube_000_proxy_1",
	"Media_Tower_Cube_001",
	"Media_Tower_Cube_002",
	"Media_Tower_Cube_004",
	"Media_Tower_Cube_005",
	"Media_Tower_Cube_006",
	"Media_Tower_Cube_007",
	"Media_Tower_Cube_008",
	"Media_Tower_Cube_1",
	"Media_Tower_Plane",
	"Office_Cube",
	"Office_Cube_000_proxy",
	"Office_Cube_000_proxy_1",
	"Office_Cube_1",
	"Port_District_Circle",
	"Port_District_Circle_001",
	"Port_District_Circle_002",
	"Port_District_Circle_003",
	"Port_District_Circle_004",
	"Port_District_Circle_005",
	"Port_District_Circle_006",
	"Port_District_Circle_007",
	"Port_District_Cube",
	"Port_District_Cube_000",
	"Port_District_Cube_000_proxy",
	"Port_District_Cube_000_proxy_1",
	"Port_District_Cube_001",
	"Port_District_Cube_002",
	"Port_District_Cube_002_1",
	"Port_District_Cube_003",
	"Port_District_Cube_004",
	"Port_District_Cube_005",
	"Port_District_Cube_006",
	"Port_District_Cube_007",
	"Port_District_Cube_008",
	"Port_District_support_proxy_006",
	"Port_District_support_proxy_007",
	"Port_District_support_proxy_008",
	"Port_District_support_proxy_009",
	"Port_District_water",
	"Tier_0_Cube",
	"Tier_0_Cube_001",
	"Tier_0_Cube_002",
	"Tier_0_Cube_003",
	"Tier_0_Cube_004",
	"Tier_0_Cube_005",
	"Tier_0_Cube_006",
	"Tier_0_Cube_007",
	"Tier_0_buildings",
	"Tier_0_buildings_001",
	"Tier_0_buildings_002",
	"Tier_0_buildings_003",
	"Tier_0_buildings_004",
	"Tier_0_buildings_005",
	"Tier_0_buildings_006",
	"Tier_0_buildings_007",
	"Tier_0_buildings_008",
	"Tier_0_buildings_009",
	"Tier_0_buildings_010",
	"Tier_0_buildings_011",
	"Tier_0_buildings_012",
	"Tier_0_buildings_013",
	"Tier_0_buildings_014",
	"Tier_0_buildings_015",
	"Tier_0_buildings_016",
	"Tier_0_buildings_017",
	"Tier_0_buildings_018",
	"Tier_0_buildings_019",
	"Tier_0_buildings_020",
	"Tier_0_buildings_021",
	"Tier_0_buildings_022",
	"Tier_0_buildings_023",
	"Tier_0_buildings_024",
	"Tier_0_buildings_025",
	"Tier_0_buildings_026",
	"Tier_0_buildings_027",
	"Tier_0_buildings_028",
	"Tier_0_ivory_ad",
	"Tier_0_ivory_ad_text",
	"Tier_0_mountain",
	"Tier_0_mountain_001",
	"Tier_0_mountain_002",
	"Tier_0_water",
	"Tier_1_Cube_000_proxy",
	"Tier_1_Cube_000_proxy_1",
	"Tier_1_Cube_002",
	"Tier_1_Cube_002_1",
	"Tier_1_Cube_003_proxy_001",
	"Tier_1_Cube_003_proxy_002",
	"Tier_1_Cube_003_proxy_003",
	"Tier_1_Cube_004",
	"Tier_1_Cube_005",
	"Tier_1_Cube_006",
	"Tier_1_Cube_006_1",
	"Tier_1_Cube_007",
	"Tier_1_Cube_007_1",
	"Tier_1_Cube_008",
	"Tier_1_Cube_008_1",
	"Tier_1_Cube_009",
	"Tier_1_Cube_010",
	"Tier_1_Cylinder",
	"Tier_1_Text",
	"Tier_1_ivory_ad_text",
	"Tier_1_mountain_000",
	"Tier_1_mountain_001_proxy_001",
	"Tier_1_mountain_001_proxy_002",
	"Tier_1_water",
	"overworld_Circle",
	"overworld_Cube_000",
	"overworld_Cube_001",
	"overworld_Cube_002",
	"overworld_Cube_003",
	"overworld_Cube_004",
	"overworld_Cube_005",
	"overworld_Cube_006",
	"overworld_Cube_007",
	"overworld_Cube_008",
	"overworld_Cube_009",
	"overworld_Cube_010",
	"overworld_Cube_011",
	"overworld_Cube_012",
	"overworld_Cube_013",
	"overworld_Cube_014",
	"overworld_Cube_015",
	"overworld_Cube_016",
	"overworld_Cube_017",
	"overworld_Cube_018",
	"overworld_Cube_019",
	"overworld_Cube_020",
	"overworld_Cube_021",
	"overworld_Cube_024",
	"overworld_water",
	0,
};


const char* AssetLookup::Animation::values[] =
{
	"assets/character_aim.anm",
	"assets/character_climb_down.anm",
	"assets/character_climb_up.anm",
	"assets/character_fall.anm",
	"assets/character_fire.anm",
	"assets/character_hang.anm",
	"assets/character_idle.anm",
	"assets/character_interact.anm",
	"assets/character_jump1.anm",
	"assets/character_land.anm",
	"assets/character_land_hard.anm",
	"assets/character_mantle.anm",
	"assets/character_melee.anm",
	"assets/character_pickup.anm",
	"assets/character_pose.anm",
	"assets/character_roll.anm",
	"assets/character_run.anm",
	"assets/character_run_backward.anm",
	"assets/character_run_left.anm",
	"assets/character_run_right.anm",
	"assets/character_terminal_enter.anm",
	"assets/character_terminal_exit.anm",
	"assets/character_top_out.anm",
	"assets/character_walk.anm",
	"assets/character_walk_backward.anm",
	"assets/character_walk_left.anm",
	"assets/character_walk_right.anm",
	"assets/character_wall_run_left.anm",
	"assets/character_wall_run_right.anm",
	"assets/character_wall_run_straight.anm",
	"assets/drone_dash.anm",
	"assets/drone_fly.anm",
	"assets/drone_idle.anm",
	"assets/hobo_idle.anm",
	"assets/interactable_disabled.anm",
	"assets/interactable_enabled.anm",
	"assets/interactable_interact.anm",
	"assets/interactable_interact_disable.anm",
	"assets/locke_gesture_both_arms.anm",
	"assets/locke_gesture_one_hand.anm",
	"assets/locke_gesture_one_hand_short.anm",
	"assets/locke_idle.anm",
	"assets/locke_shift_weight.anm",
	"assets/sailor_close_door.anm",
	"assets/sailor_talk.anm",
	"assets/sailor_wait.anm",
	"assets/terminal_close.anm",
	"assets/terminal_open.anm",
	"assets/terminal_opened.anm",
	"assets/tram_doors_close.anm",
	"assets/tram_doors_open.anm",
	"assets/tram_doors_opened.anm",
	0,
};


const char* AssetLookup::Animation::names[] =
{
	"character_aim",
	"character_climb_down",
	"character_climb_up",
	"character_fall",
	"character_fire",
	"character_hang",
	"character_idle",
	"character_interact",
	"character_jump1",
	"character_land",
	"character_land_hard",
	"character_mantle",
	"character_melee",
	"character_pickup",
	"character_pose",
	"character_roll",
	"character_run",
	"character_run_backward",
	"character_run_left",
	"character_run_right",
	"character_terminal_enter",
	"character_terminal_exit",
	"character_top_out",
	"character_walk",
	"character_walk_backward",
	"character_walk_left",
	"character_walk_right",
	"character_wall_run_left",
	"character_wall_run_right",
	"character_wall_run_straight",
	"drone_dash",
	"drone_fly",
	"drone_idle",
	"hobo_idle",
	"interactable_disabled",
	"interactable_enabled",
	"interactable_interact",
	"interactable_interact_disable",
	"locke_gesture_both_arms",
	"locke_gesture_one_hand",
	"locke_gesture_one_hand_short",
	"locke_idle",
	"locke_shift_weight",
	"sailor_close_door",
	"sailor_talk",
	"sailor_wait",
	"terminal_close",
	"terminal_open",
	"terminal_opened",
	"tram_doors_close",
	"tram_doors_open",
	"tram_doors_opened",
	0,
};


const char* AssetLookup::Armature::values[] =
{
	"assets/character.arm",
	"assets/drone.arm",
	"assets/hobo.arm",
	"assets/interactable.arm",
	"assets/locke.arm",
	"assets/meursault.arm",
	"assets/parkour.arm",
	"assets/parkour_headless.arm",
	"assets/sailor.arm",
	"assets/seven.arm",
	"assets/terminal.arm",
	"assets/tram_doors.arm",
	0,
};


const char* AssetLookup::Armature::names[] =
{
	"character",
	"drone",
	"hobo",
	"interactable",
	"locke",
	"meursault",
	"parkour",
	"parkour_headless",
	"sailor",
	"seven",
	"terminal",
	"tram_doors",
	0,
};


const char* AssetLookup::Texture::values[] =
{
	"assets/blank.png",
	"assets/clouds.png",
	"assets/flare.png",
	"assets/noise.png",
	"assets/skybox_horizon.png",
	"assets/water_normal.png",
	0,
};


const char* AssetLookup::Texture::names[] =
{
	"blank",
	"clouds",
	"flare",
	"noise",
	"skybox_horizon",
	"water_normal",
	0,
};


const char* AssetLookup::Soundbank::values[] =
{
	"assets/Init.bnk",
	"assets/SOUNDBANK.bnk",
	0,
};


const char* AssetLookup::Soundbank::names[] =
{
	"Init",
	"SOUNDBANK",
	0,
};


const char* AssetLookup::Shader::values[] =
{
	"assets/shader/armature.glsl",
	"assets/shader/blit.glsl",
	"assets/shader/blit_depth.glsl",
	"assets/shader/bloom_downsample.glsl",
	"assets/shader/blur.glsl",
	"assets/shader/clouds.glsl",
	"assets/shader/composite.glsl",
	"assets/shader/culled.glsl",
	"assets/shader/debug_depth.glsl",
	"assets/shader/downsample.glsl",
	"assets/shader/flat.glsl",
	"assets/shader/flat_instanced.glsl",
	"assets/shader/flat_texture.glsl",
	"assets/shader/fresnel.glsl",
	"assets/shader/global_light.glsl",
	"assets/shader/nav_dots.glsl",
	"assets/shader/particle_eased.glsl",
	"assets/shader/particle_rain.glsl",
	"assets/shader/particle_spark.glsl",
	"assets/shader/particle_standard.glsl",
	"assets/shader/particle_textured.glsl",
	"assets/shader/point_light.glsl",
	"assets/shader/scan_lines.glsl",
	"assets/shader/sky_decal.glsl",
	"assets/shader/skybox.glsl",
	"assets/shader/spot_light.glsl",
	"assets/shader/ssao.glsl",
	"assets/shader/ssao_blur.glsl",
	"assets/shader/ssao_downsample.glsl",
	"assets/shader/standard.glsl",
	"assets/shader/standard_flat.glsl",
	"assets/shader/standard_instanced.glsl",
	"assets/shader/ui.glsl",
	"assets/shader/ui_texture.glsl",
	"assets/shader/underwater.glsl",
	"assets/shader/water.glsl",
	0,
};


const char* AssetLookup::Shader::names[] =
{
	"armature",
	"blit",
	"blit_depth",
	"bloom_downsample",
	"blur",
	"clouds",
	"composite",
	"culled",
	"debug_depth",
	"downsample",
	"flat",
	"flat_instanced",
	"flat_texture",
	"fresnel",
	"global_light",
	"nav_dots",
	"particle_eased",
	"particle_rain",
	"particle_spark",
	"particle_standard",
	"particle_textured",
	"point_light",
	"scan_lines",
	"sky_decal",
	"skybox",
	"spot_light",
	"ssao",
	"ssao_blur",
	"ssao_downsample",
	"standard",
	"standard_flat",
	"standard_instanced",
	"ui",
	"ui_texture",
	"underwater",
	"water",
	0,
};


const char* AssetLookup::Uniform::names[] =
{
	"ambient_color",
	"bones",
	"buffer_size",
	"camera_light_radius",
	"camera_light_strength",
	"cloud_alpha",
	"cloud_height_diff_scaled",
	"cloud_inv_uv_scale",
	"cloud_map",
	"cloud_uv_offset",
	"color_buffer",
	"cull_behind_wall",
	"cull_center",
	"cull_radius",
	"depth_buffer",
	"detail2_light_vp",
	"detail2_shadow_map",
	"detail_light_vp",
	"detail_shadow_map",
	"diffuse_color",
	"diffuse_map",
	"displacement",
	"fade_in",
	"far_plane",
	"fog",
	"fog_extent",
	"fog_start",
	"frontface",
	"frustum",
	"gravity",
	"inv_buffer_size",
	"inv_uv_scale",
	"lifetime",
	"light_color",
	"light_direction",
	"light_fov_dot",
	"light_pos",
	"light_radius",
	"light_vp",
	"lighting_buffer",
	"mv",
	"mvp",
	"noise_sampler",
	"normal_buffer",
	"normal_map",
	"p",
	"range",
	"range_center",
	"scan_line_interval",
	"shadow_map",
	"size",
	"ssao_buffer",
	"time",
	"tri_shadow_cascade",
	"type",
	"uv_offset",
	"uv_scale",
	"v",
	"viewport_scale",
	"vp",
	"wall_normal",
	0,
};


const char* AssetLookup::Font::values[] =
{
	"assets/lowpoly.fnt",
	"assets/pt_sans.fnt",
	0,
};


const char* AssetLookup::Font::names[] =
{
	"lowpoly",
	"pt_sans",
	0,
};


const char* AssetLookup::Level::values[] =
{
	"assets/lvl/Commons.lvl",
	"assets/lvl/Crossing.lvl",
	"assets/lvl/Library.lvl",
	"assets/lvl/Media_Tower.lvl",
	"assets/lvl/Office.lvl",
	"assets/lvl/Port_District.lvl",
	"assets/lvl/Tier_0.lvl",
	"assets/lvl/Tier_1.lvl",
	"assets/lvl/overworld.lvl",
	0,
};


const char* AssetLookup::Level::names[] =
{
	"Commons",
	"Crossing",
	"Library",
	"Media Tower",
	"Office",
	"Port District",
	"Tier 0",
	"Tier 1",
	"overworld",
	0,
};


const char* AssetLookup::NavMesh::values[] =
{
	"assets/lvl/Commons.nav",
	"assets/lvl/Crossing.nav",
	"assets/lvl/Library.nav",
	"assets/lvl/Media_Tower.nav",
	"assets/lvl/Office.nav",
	"assets/lvl/Port_District.nav",
	"assets/lvl/Tier_0.nav",
	"assets/lvl/Tier_1.nav",
	"assets/lvl/overworld.nav",
	0,
};


const char* AssetLookup::NavMesh::names[] =
{
	"Commons",
	"Crossing",
	"Library",
	"Media Tower",
	"Office",
	"Port District",
	"Tier 0",
	"Tier 1",
	"overworld",
	0,
};


const char* AssetLookup::String::names[] =
{
	"_continue",
	"ability_spawn_cost",
	"active_armor",
	"alarm",
	"allow_abilities",
	"attack",
	"attacking",
	"back",
	"binding",
	"bolter",
	"btn_A",
	"btn_B",
	"btn_Back",
	"btn_LeftClick",
	"btn_LeftShoulder",
	"btn_LeftTrigger",
	"btn_None",
	"btn_RightClick",
	"btn_RightShoulder",
	"btn_RightTrigger",
	"btn_Start",
	"btn_X",
	"btn_Y",
	"btn_ps4_A",
	"btn_ps4_B",
	"btn_ps4_Back",
	"btn_ps4_LeftClick",
	"btn_ps4_LeftShoulder",
	"btn_ps4_LeftTrigger",
	"btn_ps4_None",
	"btn_ps4_RightClick",
	"btn_ps4_RightShoulder",
	"btn_ps4_RightTrigger",
	"btn_ps4_Start",
	"btn_ps4_X",
	"btn_ps4_Y",
	"buying",
	"capture_bonus",
	"close",
	"confirm_capture",
	"confirm_defend",
	"confirm_quit",
	"confirm_spend",
	"connecting",
	"connection_failed",
	"contacting_master",
	"core_vulnerable",
	"danger",
	"deaths",
	"defeat",
	"defend",
	"defending",
	"deploy_timer",
	"deploy_timer_attacker",
	"deploy_timer_defender",
	"deploying",
	"description_active_armor",
	"description_bolter",
	"description_force_field",
	"description_grenade",
	"description_minion",
	"description_sensor",
	"description_sniper",
	"draw",
	"drones",
	"drones_remaining",
	"enemy_tracking",
	"energy",
	"energy_added",
	"energy_generation",
	"energy_generation_group",
	"energy_generation_total",
	"ephyra",
	"error_inside_tram",
	"error_zone_under_attack",
	"exit",
	"force_field",
	"game_type",
	"game_type_assault",
	"game_type_deathmatch",
	"grenade",
	"grenade_incoming",
	"group_required",
	"hack_complete",
	"hack_kits",
	"hacking",
	"hobo01",
	"hobo02",
	"hobo03",
	"hobo04",
	"hobo05",
	"hobo06",
	"hobo07",
	"hobo08",
	"hobo09",
	"hobo10",
	"in_group_queue",
	"insufficient_resource",
	"invert_y",
	"ivory_ad1",
	"ivory_ad2",
	"ivory_ad3",
	"key_A",
	"key_ACBack",
	"key_ACBookmarks",
	"key_ACForward",
	"key_ACHome",
	"key_ACRefresh",
	"key_ACSearch",
	"key_ACStop",
	"key_Again",
	"key_AltErase",
	"key_Apostrophe",
	"key_Application",
	"key_AudioMute",
	"key_AudioNext",
	"key_AudioPlay",
	"key_AudioPrev",
	"key_AudioStop",
	"key_B",
	"key_Backslash",
	"key_Backspace",
	"key_BrightnessDown",
	"key_BrightnessUp",
	"key_C",
	"key_Calculator",
	"key_Cancel",
	"key_Capslock",
	"key_Clear",
	"key_ClearAgain",
	"key_Comma",
	"key_Computer",
	"key_Copy",
	"key_CrSel",
	"key_CurrencySubunit",
	"key_CurrencyUnit",
	"key_Cut",
	"key_D",
	"key_D0",
	"key_D1",
	"key_D2",
	"key_D3",
	"key_D4",
	"key_D5",
	"key_D6",
	"key_D7",
	"key_D8",
	"key_D9",
	"key_DecimalSeparator",
	"key_Delete",
	"key_DisplaySwitch",
	"key_Down",
	"key_E",
	"key_Eject",
	"key_End",
	"key_Equals",
	"key_Escape",
	"key_ExSel",
	"key_Execute",
	"key_F",
	"key_F1",
	"key_F10",
	"key_F11",
	"key_F12",
	"key_F13",
	"key_F14",
	"key_F15",
	"key_F16",
	"key_F17",
	"key_F18",
	"key_F19",
	"key_F2",
	"key_F20",
	"key_F21",
	"key_F22",
	"key_F23",
	"key_F24",
	"key_F3",
	"key_F4",
	"key_F5",
	"key_F6",
	"key_F7",
	"key_F8",
	"key_F9",
	"key_Find",
	"key_G",
	"key_Grave",
	"key_H",
	"key_Help",
	"key_Home",
	"key_I",
	"key_Insert",
	"key_J",
	"key_K",
	"key_KbDillumDown",
	"key_KbDillumToggle",
	"key_KbDillumUp",
	"key_Keypad0",
	"key_Keypad00",
	"key_Keypad000",
	"key_Keypad1",
	"key_Keypad2",
	"key_Keypad3",
	"key_Keypad4",
	"key_Keypad5",
	"key_Keypad6",
	"key_Keypad7",
	"key_Keypad8",
	"key_Keypad9",
	"key_KeypadA",
	"key_KeypadAmpersand",
	"key_KeypadAt",
	"key_KeypadB",
	"key_KeypadBackspace",
	"key_KeypadBinary",
	"key_KeypadC",
	"key_KeypadClear",
	"key_KeypadClearEntry",
	"key_KeypadColon",
	"key_KeypadComma",
	"key_KeypadD",
	"key_KeypadDblAmpersand",
	"key_KeypadDblVerticalBar",
	"key_KeypadDecimal",
	"key_KeypadDivide",
	"key_KeypadE",
	"key_KeypadEnter",
	"key_KeypadEquals",
	"key_KeypadEqualsAS400",
	"key_KeypadExclam",
	"key_KeypadF",
	"key_KeypadGreater",
	"key_KeypadHash",
	"key_KeypadHexadecimal",
	"key_KeypadLeftBrace",
	"key_KeypadLeftParen",
	"key_KeypadLess",
	"key_KeypadMemAdd",
	"key_KeypadMemClear",
	"key_KeypadMemDivide",
	"key_KeypadMemMultiply",
	"key_KeypadMemRecall",
	"key_KeypadMemStore",
	"key_KeypadMemSubtract",
	"key_KeypadMinus",
	"key_KeypadMultiply",
	"key_KeypadOctal",
	"key_KeypadPercent",
	"key_KeypadPeriod",
	"key_KeypadPlus",
	"key_KeypadPlusMinus",
	"key_KeypadPower",
	"key_KeypadRightBrace",
	"key_KeypadRightParen",
	"key_KeypadSpace",
	"key_KeypadTab",
	"key_KeypadVerticalBar",
	"key_KeypadXor",
	"key_L",
	"key_LAlt",
	"key_LCtrl",
	"key_LGui",
	"key_LShift",
	"key_Left",
	"key_LeftBracket",
	"key_M",
	"key_Mail",
	"key_MediaSelect",
	"key_Menu",
	"key_Minus",
	"key_Mode",
	"key_MouseLeft",
	"key_MouseMiddle",
	"key_MouseRight",
	"key_Mute",
	"key_N",
	"key_None",
	"key_NumlockClear",
	"key_O",
	"key_Oper",
	"key_Out",
	"key_P",
	"key_PageDown",
	"key_PageUp",
	"key_Paste",
	"key_Pause",
	"key_Period",
	"key_Power",
	"key_Printscreen",
	"key_Prior",
	"key_Q",
	"key_R",
	"key_RAlt",
	"key_RCtrl",
	"key_RGui",
	"key_RShift",
	"key_Return",
	"key_Return2",
	"key_Right",
	"key_RightBracket",
	"key_S",
	"key_Scrolllock",
	"key_Select",
	"key_Semicolon",
	"key_Separator",
	"key_Slash",
	"key_Sleep",
	"key_Space",
	"key_Stop",
	"key_SysReq",
	"key_T",
	"key_Tab",
	"key_ThousandsSeparator",
	"key_U",
	"key_Undo",
	"key_Up",
	"key_V",
	"key_VolumeDown",
	"key_VolumeUp",
	"key_W",
	"key_Www",
	"key_X",
	"key_Y",
	"key_Z",
	"kill_limit",
	"kills",
	"left_joystick",
	"leftover_energy",
	"loading",
	"local",
	"locke1a",
	"locke1b",
	"locke2a",
	"locke2b",
	"locke2c",
	"locke3a",
	"locke3b",
	"locke3c",
	"locke3d",
	"locke4a",
	"locke4b",
	"locke4c",
	"locke5a",
	"locke5b",
	"locke5c",
	"locke5d",
	"locke5e",
	"locke6a",
	"locke6b",
	"locke6c",
	"locke7a",
	"locke7b",
	"locke7c",
	"locke7d",
	"losing",
	"main_menu",
	"master_timeout",
	"member_of_group",
	"minion",
	"multiplayer",
	"multiplayer_custom",
	"multiplayer_local",
	"multiplayer_public",
	"music",
	"need_upgrade",
	"no",
	"no_effect",
	"none",
	"online",
	"options",
	"play",
	"player",
	"player_ascended",
	"player_joined",
	"player_killed",
	"player_left",
	"prompt_accept",
	"prompt_back",
	"prompt_buy",
	"prompt_buy_more",
	"prompt_cancel",
	"prompt_cancel_ability",
	"prompt_cancel_hack",
	"prompt_capture",
	"prompt_defend",
	"prompt_deploy",
	"prompt_hack",
	"prompt_interact",
	"prompt_splitscreen",
	"prompt_splitscreen_ready",
	"prompt_sudoku_place",
	"prompt_upgrade",
	"prompt_zone_defend",
	"quit",
	"resource_collected",
	"right_joystick",
	"sailor_come_here",
	"sailor_speech_1",
	"sailor_speech_2",
	"sensitivity",
	"sensor",
	"sfx",
	"shield",
	"shield_down",
	"sniper",
	"spectating",
	"splitscreen",
	"stealth",
	"story_defeat",
	"story_victory",
	"tab_inventory",
	"tab_map",
	"target_shield_down",
	"team_a",
	"team_b",
	"team_c",
	"team_d",
	"terminal_locked",
	"time_limit",
	"timer",
	"turrets_remaining",
	"turrets_remaining_attacking",
	"turrets_remaining_defending",
	"tut_ability",
	"tut_battery",
	"tut_capture",
	"tut_climb_jump",
	"tut_crawl",
	"tut_done",
	"tut_overworld",
	"tut_turrets",
	"tut_upgrade",
	"tut_wallrun",
	"unknown",
	"upgrade_description",
	"upgrade_notification",
	"upgrading",
	"victory",
	"waiting",
	"wu_gang",
	"yes",
	"zone_already_captured",
	"zone_defense_expired",
	"zone_unlocked",
	"zones_captured",
	"zones_hostile",
	"zones_locked",
	"zones_under_attack",
	"zoom_toggle",
	0,
};


}