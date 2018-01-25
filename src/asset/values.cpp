#include "lookup.h"

namespace VI
{ 


const char* AssetLookup::Mesh::values[] =
{
	"assets/access_key.msh",
	"assets/actor_collision.msh",
	"assets/air_wave.msh",
	"assets/asteroid.msh",
	"assets/battery.msh",
	"assets/cart.msh",
	"assets/character.msh",
	"assets/cigarette_Circle.msh",
	"assets/cigarette_Circle_1.msh",
	"assets/clouds.msh",
	"assets/cone.msh",
	"assets/core_Cube_000.msh",
	"assets/core_Cube_000_1.msh",
	"assets/core_module.msh",
	"assets/cube.msh",
	"assets/cylinder.msh",
	"assets/dada.msh",
	"assets/drone.msh",
	"assets/energy.msh",
	"assets/epitaph.msh",
	"assets/flag_base.msh",
	"assets/force_field_base.msh",
	"assets/force_field_sphere.msh",
	"assets/glass_pane.msh",
	"assets/grenade_attached.msh",
	"assets/grenade_detached.msh",
	"assets/heal_effect.msh",
	"assets/helvetica_scenario.msh",
	"assets/hobo.msh",
	"assets/hologram.msh",
	"assets/icon_ability_pip.msh",
	"assets/icon_access_key.msh",
	"assets/icon_active_armor.msh",
	"assets/icon_arrow_border.msh",
	"assets/icon_arrow_main.msh",
	"assets/icon_battery.msh",
	"assets/icon_bolter.msh",
	"assets/icon_checkmark.msh",
	"assets/icon_chevron.msh",
	"assets/icon_close.msh",
	"assets/icon_core_module.msh",
	"assets/icon_drone.msh",
	"assets/icon_flag.msh",
	"assets/icon_flag_base.msh",
	"assets/icon_force_field.msh",
	"assets/icon_gamepad.msh",
	"assets/icon_grenade.msh",
	"assets/icon_minion.msh",
	"assets/icon_network_error.msh",
	"assets/icon_rectifier.msh",
	"assets/icon_reticle_invalid.msh",
	"assets/icon_shotgun.msh",
	"assets/icon_sniper.msh",
	"assets/icon_spot.msh",
	"assets/icon_turret.msh",
	"assets/icon_turret2.msh",
	"assets/icon_warning.msh",
	"assets/interactable.msh",
	"assets/interactable_collision.msh",
	"assets/ivory_ad.msh",
	"assets/locke.msh",
	"assets/meursault.msh",
	"assets/mountain.msh",
	"assets/parkour.msh",
	"assets/parkour_headless.msh",
	"assets/rectifier.msh",
	"assets/reticle_grapple.msh",
	"assets/rope_base.msh",
	"assets/samsa.msh",
	"assets/seven.msh",
	"assets/shell_casing.msh",
	"assets/shop_collision.msh",
	"assets/shop_view.msh",
	"assets/sky_decal.msh",
	"assets/sky_pattern.msh",
	"assets/skybox.msh",
	"assets/spawn_collision.msh",
	"assets/spawn_main.msh",
	"assets/spawn_upgrade_station.msh",
	"assets/sphere.msh",
	"assets/sphere_highres.msh",
	"assets/support.msh",
	"assets/support2.msh",
	"assets/terminal.msh",
	"assets/terminal_collision.msh",
	"assets/tile.msh",
	"assets/tram_collision.msh",
	"assets/tram_collision_door.msh",
	"assets/tram_doors.msh",
	"assets/tram_mesh.msh",
	"assets/tram_mesh_1.msh",
	"assets/tram_runner.msh",
	"assets/tri_tube.msh",
	"assets/turret.msh",
	"assets/water.msh",
	"assets/lvl/Bithia_Dam_Cube_000_proxy_001.msh",
	"assets/lvl/Bithia_Dam_Cube_000_proxy_001_1.msh",
	"assets/lvl/Bithia_Dam_dam_groupmesh_6481.msh",
	"assets/lvl/Bithia_Dam_dam_groupmesh_6481_001.msh",
	"assets/lvl/Bithia_Dam_dam_groupmesh_6481_001_1.msh",
	"assets/lvl/Bithia_Dam_dam_groupmesh_6481_1.msh",
	"assets/lvl/Channels_Cube.msh",
	"assets/lvl/Channels_Cube_002.msh",
	"assets/lvl/Channels_mountain_000.msh",
	"assets/lvl/Channels_mountain_001_proxy_002.msh",
	"assets/lvl/Channels_water.msh",
	"assets/lvl/Despina_Cube_000_proxy.msh",
	"assets/lvl/Despina_Cube_000_proxy_1.msh",
	"assets/lvl/Despina_Cube_011.msh",
	"assets/lvl/Despina_Cube_011_1.msh",
	"assets/lvl/Despina_mesh.msh",
	"assets/lvl/Despina_mesh_001.msh",
	"assets/lvl/Despina_mesh_002.msh",
	"assets/lvl/Despina_mesh_1.msh",
	"assets/lvl/Despina_storage_groupmesh_22666_000.msh",
	"assets/lvl/Despina_storage_groupmesh_22666_001.msh",
	"assets/lvl/Despina_water.msh",
	"assets/lvl/Despina_water_001.msh",
	"assets/lvl/Docks_Cube.msh",
	"assets/lvl/Docks_Cube_001.msh",
	"assets/lvl/Docks_Cube_002.msh",
	"assets/lvl/Docks_Cube_003.msh",
	"assets/lvl/Docks_Cube_004.msh",
	"assets/lvl/Docks_Cube_005.msh",
	"assets/lvl/Docks_Cube_006.msh",
	"assets/lvl/Docks_Cube_007.msh",
	"assets/lvl/Docks_Cube_008.msh",
	"assets/lvl/Docks_Cube_009.msh",
	"assets/lvl/Docks_Cube_010.msh",
	"assets/lvl/Docks_Cube_011.msh",
	"assets/lvl/Docks_Cube_012.msh",
	"assets/lvl/Docks_Cube_013.msh",
	"assets/lvl/Docks_Cube_014.msh",
	"assets/lvl/Docks_Cube_proxy.msh",
	"assets/lvl/Docks_Plane.msh",
	"assets/lvl/Docks_barge.msh",
	"assets/lvl/Docks_buildings.msh",
	"assets/lvl/Docks_buildings_001.msh",
	"assets/lvl/Docks_buildings_002.msh",
	"assets/lvl/Docks_buildings_003.msh",
	"assets/lvl/Docks_buildings_004.msh",
	"assets/lvl/Docks_buildings_005.msh",
	"assets/lvl/Docks_buildings_006.msh",
	"assets/lvl/Docks_buildings_007.msh",
	"assets/lvl/Docks_buildings_008.msh",
	"assets/lvl/Docks_buildings_009.msh",
	"assets/lvl/Docks_buildings_010.msh",
	"assets/lvl/Docks_buildings_011.msh",
	"assets/lvl/Docks_buildings_012.msh",
	"assets/lvl/Docks_buildings_013.msh",
	"assets/lvl/Docks_buildings_014.msh",
	"assets/lvl/Docks_buildings_015.msh",
	"assets/lvl/Docks_buildings_016.msh",
	"assets/lvl/Docks_buildings_017.msh",
	"assets/lvl/Docks_buildings_018.msh",
	"assets/lvl/Docks_buildings_018_1.msh",
	"assets/lvl/Docks_buildings_019.msh",
	"assets/lvl/Docks_buildings_020.msh",
	"assets/lvl/Docks_buildings_021.msh",
	"assets/lvl/Docks_buildings_022.msh",
	"assets/lvl/Docks_buildings_023.msh",
	"assets/lvl/Docks_buildings_024.msh",
	"assets/lvl/Docks_buildings_025.msh",
	"assets/lvl/Docks_buildings_026.msh",
	"assets/lvl/Docks_buildings_027.msh",
	"assets/lvl/Docks_buildings_028.msh",
	"assets/lvl/Docks_buildings_029.msh",
	"assets/lvl/Docks_buildings_030.msh",
	"assets/lvl/Docks_buildings_031.msh",
	"assets/lvl/Docks_buildings_031_1.msh",
	"assets/lvl/Docks_buildings_032.msh",
	"assets/lvl/Docks_buildings_032_1.msh",
	"assets/lvl/Docks_buildings_033.msh",
	"assets/lvl/Docks_buildings_033_1.msh",
	"assets/lvl/Docks_buildings_034.msh",
	"assets/lvl/Docks_buildings_035.msh",
	"assets/lvl/Docks_buildings_036.msh",
	"assets/lvl/Docks_buildings_037.msh",
	"assets/lvl/Docks_buildings_038.msh",
	"assets/lvl/Docks_buildings_038_1.msh",
	"assets/lvl/Docks_buildings_039.msh",
	"assets/lvl/Docks_buildings_040.msh",
	"assets/lvl/Docks_buildings_041.msh",
	"assets/lvl/Docks_buildings_042.msh",
	"assets/lvl/Docks_buildings_043.msh",
	"assets/lvl/Docks_buildings_044.msh",
	"assets/lvl/Docks_buildings_045.msh",
	"assets/lvl/Docks_buildings_046.msh",
	"assets/lvl/Docks_cutscene_props.msh",
	"assets/lvl/Docks_ivory_ad.msh",
	"assets/lvl/Docks_ivory_ad_text.msh",
	"assets/lvl/Docks_mountain_001.msh",
	"assets/lvl/Docks_mountain_002.msh",
	"assets/lvl/Docks_mountain_003.msh",
	"assets/lvl/Docks_stair_ramp.msh",
	"assets/lvl/Docks_tent.msh",
	"assets/lvl/Docks_tent_1.msh",
	"assets/lvl/Docks_tent_poles.msh",
	"assets/lvl/Euodia_Cube.msh",
	"assets/lvl/Euodia_Cube_000_proxy.msh",
	"assets/lvl/Euodia_Cube_000_proxy_1.msh",
	"assets/lvl/Euodia_Cube_1.msh",
	"assets/lvl/Euodia_Plane.msh",
	"assets/lvl/Euodia_Plane_001.msh",
	"assets/lvl/Euodia_Plane_001_1.msh",
	"assets/lvl/Euodia_Plane_002.msh",
	"assets/lvl/Euodia_Plane_002_1.msh",
	"assets/lvl/Euodia_Plane_003.msh",
	"assets/lvl/Euodia_Plane_003_1.msh",
	"assets/lvl/Euodia_Plane_1.msh",
	"assets/lvl/Isca_Cube.msh",
	"assets/lvl/Isca_Cube_000_proxy.msh",
	"assets/lvl/Isca_Cube_000_proxy_1.msh",
	"assets/lvl/Isca_Cube_002.msh",
	"assets/lvl/Isca_Cube_004.msh",
	"assets/lvl/Isca_Cube_005.msh",
	"assets/lvl/Isca_Cube_006.msh",
	"assets/lvl/Isca_Cube_007.msh",
	"assets/lvl/Isca_bsp_model_0_006.msh",
	"assets/lvl/Isca_bsp_model_0_006_1.msh",
	"assets/lvl/Isca_bsp_model_0_012.msh",
	"assets/lvl/Jael_Cube_000_proxy.msh",
	"assets/lvl/Jael_Cube_000_proxy_1.msh",
	"assets/lvl/Jael_Cube_001.msh",
	"assets/lvl/Jael_Cube_003.msh",
	"assets/lvl/Jael_Cube_003_proxy_001.msh",
	"assets/lvl/Jael_Cube_003_proxy_001_1.msh",
	"assets/lvl/Jael_Cube_005.msh",
	"assets/lvl/Merab_Tower_Cube.msh",
	"assets/lvl/Merab_Tower_Cube_000_proxy.msh",
	"assets/lvl/Merab_Tower_Cube_000_proxy_1.msh",
	"assets/lvl/Merab_Tower_Cube_001.msh",
	"assets/lvl/Merab_Tower_Cube_004.msh",
	"assets/lvl/Merab_Tower_Cube_005.msh",
	"assets/lvl/Merab_Tower_Cube_006.msh",
	"assets/lvl/Merab_Tower_Cube_007.msh",
	"assets/lvl/Merab_Tower_Cube_008.msh",
	"assets/lvl/Merab_Tower_Cube_1.msh",
	"assets/lvl/Merab_Tower_Plane.msh",
	"assets/lvl/Morian_Refinery_Cube.msh",
	"assets/lvl/Morian_Refinery_Cube_001.msh",
	"assets/lvl/Morian_Refinery_Cube_002.msh",
	"assets/lvl/Morian_Refinery_Cube_1.msh",
	"assets/lvl/Morian_Refinery_water.msh",
	"assets/lvl/Slum_Cube.msh",
	"assets/lvl/Slum_Cube_001.msh",
	"assets/lvl/Slum_Cube_001_1.msh",
	"assets/lvl/Slum_Cube_002.msh",
	"assets/lvl/Slum_Cube_003.msh",
	"assets/lvl/Slum_Cube_004.msh",
	"assets/lvl/Slum_Cube_005.msh",
	"assets/lvl/Slum_Cube_005_1.msh",
	"assets/lvl/Slum_Cube_006.msh",
	"assets/lvl/Slum_Cube_006_1.msh",
	"assets/lvl/Slum_Cube_007.msh",
	"assets/lvl/Slum_Cube_008.msh",
	"assets/lvl/Slum_Cube_009.msh",
	"assets/lvl/Slum_Cube_010.msh",
	"assets/lvl/Slum_Cube_011.msh",
	"assets/lvl/Slum_Cube_011_1.msh",
	"assets/lvl/Slum_Cube_012.msh",
	"assets/lvl/Slum_Cube_012_1.msh",
	"assets/lvl/Slum_Cube_013.msh",
	"assets/lvl/Slum_Cube_013_1.msh",
	"assets/lvl/Slum_Cube_014.msh",
	"assets/lvl/Slum_Cube_014_1.msh",
	"assets/lvl/Slum_Cube_015.msh",
	"assets/lvl/Slum_Cube_015_1.msh",
	"assets/lvl/Slum_Cube_proxy.msh",
	"assets/lvl/Slum_mountain_000.msh",
	"assets/lvl/Slum_mountain_001_proxy_002.msh",
	"assets/lvl/Tamar_Plaza_Cube_000_proxy.msh",
	"assets/lvl/Tamar_Plaza_Cube_000_proxy_1.msh",
	"assets/lvl/Tamar_Plaza_plaza_groupmesh_12365.msh",
	"assets/lvl/Tamar_Plaza_plaza_groupmesh_12365_001.msh",
	"assets/lvl/Tamar_Plaza_plaza_groupmesh_12365_002.msh",
	"assets/lvl/Vashti_Square_Cube_000_proxy.msh",
	"assets/lvl/Vashti_Square_Cube_000_proxy_1.msh",
	"assets/lvl/Vashti_Square_concept3_001.msh",
	"assets/lvl/Vashti_Square_concept3_001_1.msh",
	"assets/lvl/overworld_Cube_009.msh",
	"assets/lvl/overworld_Cube_016.msh",
	"assets/lvl/overworld_Cube_017.msh",
	"assets/lvl/overworld_Cube_018.msh",
	"assets/lvl/overworld_Cube_019.msh",
	"assets/lvl/overworld_Cube_020.msh",
	"assets/lvl/overworld_Cube_022.msh",
	"assets/lvl/overworld_Cube_023.msh",
	"assets/lvl/overworld_Cube_024.msh",
	"assets/lvl/overworld_Cube_026.msh",
	"assets/lvl/overworld_Cube_028.msh",
	"assets/lvl/overworld_Cube_033.msh",
	"assets/lvl/overworld_Cube_036.msh",
	"assets/lvl/overworld_Cube_037.msh",
	"assets/lvl/overworld_Cube_039.msh",
	"assets/lvl/overworld_Cube_040.msh",
	"assets/lvl/overworld_Cube_041.msh",
	"assets/lvl/overworld_Cube_042.msh",
	"assets/lvl/overworld_Plane.msh",
	"assets/lvl/overworld_Pyramid.msh",
	"assets/lvl/overworld_water.msh",
	0,
};


const char* AssetLookup::Mesh::names[] =
{
	"access_key",
	"actor_collision",
	"air_wave",
	"asteroid",
	"battery",
	"cart",
	"character",
	"cigarette_Circle",
	"cigarette_Circle_1",
	"clouds",
	"cone",
	"core_Cube_000",
	"core_Cube_000_1",
	"core_module",
	"cube",
	"cylinder",
	"dada",
	"drone",
	"energy",
	"epitaph",
	"flag_base",
	"force_field_base",
	"force_field_sphere",
	"glass_pane",
	"grenade_attached",
	"grenade_detached",
	"heal_effect",
	"helvetica_scenario",
	"hobo",
	"hologram",
	"icon_ability_pip",
	"icon_access_key",
	"icon_active_armor",
	"icon_arrow_border",
	"icon_arrow_main",
	"icon_battery",
	"icon_bolter",
	"icon_checkmark",
	"icon_chevron",
	"icon_close",
	"icon_core_module",
	"icon_drone",
	"icon_flag",
	"icon_flag_base",
	"icon_force_field",
	"icon_gamepad",
	"icon_grenade",
	"icon_minion",
	"icon_network_error",
	"icon_rectifier",
	"icon_reticle_invalid",
	"icon_shotgun",
	"icon_sniper",
	"icon_spot",
	"icon_turret",
	"icon_turret2",
	"icon_warning",
	"interactable",
	"interactable_collision",
	"ivory_ad",
	"locke",
	"meursault",
	"mountain",
	"parkour",
	"parkour_headless",
	"rectifier",
	"reticle_grapple",
	"rope_base",
	"samsa",
	"seven",
	"shell_casing",
	"shop_collision",
	"shop_view",
	"sky_decal",
	"sky_pattern",
	"skybox",
	"spawn_collision",
	"spawn_main",
	"spawn_upgrade_station",
	"sphere",
	"sphere_highres",
	"support",
	"support2",
	"terminal",
	"terminal_collision",
	"tile",
	"tram_collision",
	"tram_collision_door",
	"tram_doors",
	"tram_mesh",
	"tram_mesh_1",
	"tram_runner",
	"tri_tube",
	"turret",
	"water",
	"Bithia_Dam_Cube_000_proxy_001",
	"Bithia_Dam_Cube_000_proxy_001_1",
	"Bithia_Dam_dam_groupmesh_6481",
	"Bithia_Dam_dam_groupmesh_6481_001",
	"Bithia_Dam_dam_groupmesh_6481_001_1",
	"Bithia_Dam_dam_groupmesh_6481_1",
	"Channels_Cube",
	"Channels_Cube_002",
	"Channels_mountain_000",
	"Channels_mountain_001_proxy_002",
	"Channels_water",
	"Despina_Cube_000_proxy",
	"Despina_Cube_000_proxy_1",
	"Despina_Cube_011",
	"Despina_Cube_011_1",
	"Despina_mesh",
	"Despina_mesh_001",
	"Despina_mesh_002",
	"Despina_mesh_1",
	"Despina_storage_groupmesh_22666_000",
	"Despina_storage_groupmesh_22666_001",
	"Despina_water",
	"Despina_water_001",
	"Docks_Cube",
	"Docks_Cube_001",
	"Docks_Cube_002",
	"Docks_Cube_003",
	"Docks_Cube_004",
	"Docks_Cube_005",
	"Docks_Cube_006",
	"Docks_Cube_007",
	"Docks_Cube_008",
	"Docks_Cube_009",
	"Docks_Cube_010",
	"Docks_Cube_011",
	"Docks_Cube_012",
	"Docks_Cube_013",
	"Docks_Cube_014",
	"Docks_Cube_proxy",
	"Docks_Plane",
	"Docks_barge",
	"Docks_buildings",
	"Docks_buildings_001",
	"Docks_buildings_002",
	"Docks_buildings_003",
	"Docks_buildings_004",
	"Docks_buildings_005",
	"Docks_buildings_006",
	"Docks_buildings_007",
	"Docks_buildings_008",
	"Docks_buildings_009",
	"Docks_buildings_010",
	"Docks_buildings_011",
	"Docks_buildings_012",
	"Docks_buildings_013",
	"Docks_buildings_014",
	"Docks_buildings_015",
	"Docks_buildings_016",
	"Docks_buildings_017",
	"Docks_buildings_018",
	"Docks_buildings_018_1",
	"Docks_buildings_019",
	"Docks_buildings_020",
	"Docks_buildings_021",
	"Docks_buildings_022",
	"Docks_buildings_023",
	"Docks_buildings_024",
	"Docks_buildings_025",
	"Docks_buildings_026",
	"Docks_buildings_027",
	"Docks_buildings_028",
	"Docks_buildings_029",
	"Docks_buildings_030",
	"Docks_buildings_031",
	"Docks_buildings_031_1",
	"Docks_buildings_032",
	"Docks_buildings_032_1",
	"Docks_buildings_033",
	"Docks_buildings_033_1",
	"Docks_buildings_034",
	"Docks_buildings_035",
	"Docks_buildings_036",
	"Docks_buildings_037",
	"Docks_buildings_038",
	"Docks_buildings_038_1",
	"Docks_buildings_039",
	"Docks_buildings_040",
	"Docks_buildings_041",
	"Docks_buildings_042",
	"Docks_buildings_043",
	"Docks_buildings_044",
	"Docks_buildings_045",
	"Docks_buildings_046",
	"Docks_cutscene_props",
	"Docks_ivory_ad",
	"Docks_ivory_ad_text",
	"Docks_mountain_001",
	"Docks_mountain_002",
	"Docks_mountain_003",
	"Docks_stair_ramp",
	"Docks_tent",
	"Docks_tent_1",
	"Docks_tent_poles",
	"Euodia_Cube",
	"Euodia_Cube_000_proxy",
	"Euodia_Cube_000_proxy_1",
	"Euodia_Cube_1",
	"Euodia_Plane",
	"Euodia_Plane_001",
	"Euodia_Plane_001_1",
	"Euodia_Plane_002",
	"Euodia_Plane_002_1",
	"Euodia_Plane_003",
	"Euodia_Plane_003_1",
	"Euodia_Plane_1",
	"Isca_Cube",
	"Isca_Cube_000_proxy",
	"Isca_Cube_000_proxy_1",
	"Isca_Cube_002",
	"Isca_Cube_004",
	"Isca_Cube_005",
	"Isca_Cube_006",
	"Isca_Cube_007",
	"Isca_bsp_model_0_006",
	"Isca_bsp_model_0_006_1",
	"Isca_bsp_model_0_012",
	"Jael_Cube_000_proxy",
	"Jael_Cube_000_proxy_1",
	"Jael_Cube_001",
	"Jael_Cube_003",
	"Jael_Cube_003_proxy_001",
	"Jael_Cube_003_proxy_001_1",
	"Jael_Cube_005",
	"Merab_Tower_Cube",
	"Merab_Tower_Cube_000_proxy",
	"Merab_Tower_Cube_000_proxy_1",
	"Merab_Tower_Cube_001",
	"Merab_Tower_Cube_004",
	"Merab_Tower_Cube_005",
	"Merab_Tower_Cube_006",
	"Merab_Tower_Cube_007",
	"Merab_Tower_Cube_008",
	"Merab_Tower_Cube_1",
	"Merab_Tower_Plane",
	"Morian_Refinery_Cube",
	"Morian_Refinery_Cube_001",
	"Morian_Refinery_Cube_002",
	"Morian_Refinery_Cube_1",
	"Morian_Refinery_water",
	"Slum_Cube",
	"Slum_Cube_001",
	"Slum_Cube_001_1",
	"Slum_Cube_002",
	"Slum_Cube_003",
	"Slum_Cube_004",
	"Slum_Cube_005",
	"Slum_Cube_005_1",
	"Slum_Cube_006",
	"Slum_Cube_006_1",
	"Slum_Cube_007",
	"Slum_Cube_008",
	"Slum_Cube_009",
	"Slum_Cube_010",
	"Slum_Cube_011",
	"Slum_Cube_011_1",
	"Slum_Cube_012",
	"Slum_Cube_012_1",
	"Slum_Cube_013",
	"Slum_Cube_013_1",
	"Slum_Cube_014",
	"Slum_Cube_014_1",
	"Slum_Cube_015",
	"Slum_Cube_015_1",
	"Slum_Cube_proxy",
	"Slum_mountain_000",
	"Slum_mountain_001_proxy_002",
	"Tamar_Plaza_Cube_000_proxy",
	"Tamar_Plaza_Cube_000_proxy_1",
	"Tamar_Plaza_plaza_groupmesh_12365",
	"Tamar_Plaza_plaza_groupmesh_12365_001",
	"Tamar_Plaza_plaza_groupmesh_12365_002",
	"Vashti_Square_Cube_000_proxy",
	"Vashti_Square_Cube_000_proxy_1",
	"Vashti_Square_concept3_001",
	"Vashti_Square_concept3_001_1",
	"overworld_Cube_009",
	"overworld_Cube_016",
	"overworld_Cube_017",
	"overworld_Cube_018",
	"overworld_Cube_019",
	"overworld_Cube_020",
	"overworld_Cube_022",
	"overworld_Cube_023",
	"overworld_Cube_024",
	"overworld_Cube_026",
	"overworld_Cube_028",
	"overworld_Cube_033",
	"overworld_Cube_036",
	"overworld_Cube_037",
	"overworld_Cube_039",
	"overworld_Cube_040",
	"overworld_Cube_041",
	"overworld_Cube_042",
	"overworld_Plane",
	"overworld_Pyramid",
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
	"assets/character_grapple_aim.anm",
	"assets/character_grapple_fire.anm",
	"assets/character_hang.anm",
	"assets/character_idle.anm",
	"assets/character_interact.anm",
	"assets/character_jump1.anm",
	"assets/character_land.anm",
	"assets/character_land_hard.anm",
	"assets/character_mantle.anm",
	"assets/character_melee.anm",
	"assets/character_meursault_intro.anm",
	"assets/character_pickup.anm",
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
	"assets/character_wall_slide.anm",
	"assets/dada_close_door.anm",
	"assets/dada_talk.anm",
	"assets/dada_wait.anm",
	"assets/drone_dash.anm",
	"assets/drone_fly.anm",
	"assets/drone_idle.anm",
	"assets/drone_trailer4_drone.anm",
	"assets/hobo_idle.anm",
	"assets/hobo_trailer1.anm",
	"assets/hobo_trailer2.anm",
	"assets/hobo_trailer3.anm",
	"assets/hobo_trailer4.anm",
	"assets/hobo_trailer5.anm",
	"assets/hobo_trailer6.anm",
	"assets/hobo_trailer7.anm",
	"assets/hobo_trailer8.anm",
	"assets/hobo_trailer9.anm",
	"assets/hologram_animate.anm",
	"assets/hologram_close.anm",
	"assets/interactable_disabled.anm",
	"assets/interactable_enabled.anm",
	"assets/interactable_interact.anm",
	"assets/interactable_interact_disable.anm",
	"assets/locke_gesture_both_arms.anm",
	"assets/locke_gesture_one_hand.anm",
	"assets/locke_gesture_one_hand_short.anm",
	"assets/locke_idle.anm",
	"assets/locke_shift_weight.anm",
	"assets/meursault_intro.anm",
	"assets/meursault_wait.anm",
	"assets/parkour_trailer5_parkour.anm",
	"assets/parkour_trailer7_parkour.anm",
	"assets/parkour_trailer8_parkour.anm",
	"assets/samsa_close.anm",
	"assets/samsa_closed.anm",
	"assets/samsa_open.anm",
	"assets/samsa_opened.anm",
	"assets/samsa_wag.anm",
	"assets/samsa_walk.anm",
	"assets/seven_hands_on_hips.anm",
	"assets/seven_sitting.anm",
	"assets/seven_sling_backpack.anm",
	"assets/terminal_close.anm",
	"assets/terminal_open.anm",
	"assets/terminal_opened.anm",
	"assets/terminal_trailer3_terminal.anm",
	"assets/terminal_trailer5_terminal.anm",
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
	"character_grapple_aim",
	"character_grapple_fire",
	"character_hang",
	"character_idle",
	"character_interact",
	"character_jump1",
	"character_land",
	"character_land_hard",
	"character_mantle",
	"character_melee",
	"character_meursault_intro",
	"character_pickup",
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
	"character_wall_slide",
	"dada_close_door",
	"dada_talk",
	"dada_wait",
	"drone_dash",
	"drone_fly",
	"drone_idle",
	"drone_trailer4_drone",
	"hobo_idle",
	"hobo_trailer1",
	"hobo_trailer2",
	"hobo_trailer3",
	"hobo_trailer4",
	"hobo_trailer5",
	"hobo_trailer6",
	"hobo_trailer7",
	"hobo_trailer8",
	"hobo_trailer9",
	"hologram_animate",
	"hologram_close",
	"interactable_disabled",
	"interactable_enabled",
	"interactable_interact",
	"interactable_interact_disable",
	"locke_gesture_both_arms",
	"locke_gesture_one_hand",
	"locke_gesture_one_hand_short",
	"locke_idle",
	"locke_shift_weight",
	"meursault_intro",
	"meursault_wait",
	"parkour_trailer5_parkour",
	"parkour_trailer7_parkour",
	"parkour_trailer8_parkour",
	"samsa_close",
	"samsa_closed",
	"samsa_open",
	"samsa_opened",
	"samsa_wag",
	"samsa_walk",
	"seven_hands_on_hips",
	"seven_sitting",
	"seven_sling_backpack",
	"terminal_close",
	"terminal_open",
	"terminal_opened",
	"terminal_trailer3_terminal",
	"terminal_trailer5_terminal",
	"tram_doors_close",
	"tram_doors_open",
	"tram_doors_opened",
	0,
};


const char* AssetLookup::Armature::values[] =
{
	"assets/character.arm",
	"assets/dada.arm",
	"assets/drone.arm",
	"assets/hobo.arm",
	"assets/hologram.arm",
	"assets/interactable.arm",
	"assets/locke.arm",
	"assets/meursault.arm",
	"assets/parkour.arm",
	"assets/parkour_headless.arm",
	"assets/samsa.arm",
	"assets/seven.arm",
	"assets/terminal.arm",
	"assets/tram_doors.arm",
	0,
};


const char* AssetLookup::Armature::names[] =
{
	"character",
	"dada",
	"drone",
	"hobo",
	"hologram",
	"interactable",
	"locke",
	"meursault",
	"parkour",
	"parkour_headless",
	"samsa",
	"seven",
	"terminal",
	"tram_doors",
	0,
};


const char* AssetLookup::Texture::values[] =
{
	"assets/bars.png",
	"assets/blank.png",
	"assets/clouds.png",
	"assets/flare.png",
	"assets/logo.png",
	"assets/noise.png",
	"assets/perish_like_a_dog.png",
	"assets/skybox_horizon.png",
	"assets/water_normal.png",
	0,
};


const char* AssetLookup::Texture::names[] =
{
	"bars",
	"blank",
	"clouds",
	"flare",
	"logo",
	"noise",
	"perish_like_a_dog",
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
	"assets/shader/flat_texture_offset.glsl",
	"assets/shader/fresnel.glsl",
	"assets/shader/global_light.glsl",
	"assets/shader/nav_dots.glsl",
	"assets/shader/particle_alpha.glsl",
	"assets/shader/particle_eased.glsl",
	"assets/shader/particle_limited_size.glsl",
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
	"assets/shader/stencil_back_faces.glsl",
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
	"flat_texture_offset",
	"fresnel",
	"global_light",
	"nav_dots",
	"particle_alpha",
	"particle_eased",
	"particle_limited_size",
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
	"stencil_back_faces",
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
	"radius",
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
	"assets/lvl/Bithia_Dam.lvl",
	"assets/lvl/Channels.lvl",
	"assets/lvl/Despina.lvl",
	"assets/lvl/Docks.lvl",
	"assets/lvl/Euodia.lvl",
	"assets/lvl/Isca.lvl",
	"assets/lvl/Jael.lvl",
	"assets/lvl/Merab_Tower.lvl",
	"assets/lvl/Morian_Refinery.lvl",
	"assets/lvl/Slum.lvl",
	"assets/lvl/Tamar_Plaza.lvl",
	"assets/lvl/Vashti_Square.lvl",
	"assets/lvl/overworld.lvl",
	"assets/lvl/splash.lvl",
	0,
};


const char* AssetLookup::Level::names[] =
{
	"Bithia Dam",
	"Channels",
	"Despina",
	"Docks",
	"Euodia",
	"Isca",
	"Jael",
	"Merab Tower",
	"Morian Refinery",
	"Slum",
	"Tamar Plaza",
	"Vashti Square",
	"overworld",
	"splash",
	0,
};


const char* AssetLookup::NavMesh::values[] =
{
	"assets/lvl/Bithia_Dam.nav",
	"assets/lvl/Channels.nav",
	"assets/lvl/Despina.nav",
	"assets/lvl/Docks.nav",
	"assets/lvl/Euodia.nav",
	"assets/lvl/Isca.nav",
	"assets/lvl/Jael.nav",
	"assets/lvl/Merab_Tower.nav",
	"assets/lvl/Morian_Refinery.nav",
	"assets/lvl/Slum.nav",
	"assets/lvl/Tamar_Plaza.nav",
	"assets/lvl/Vashti_Square.nav",
	"assets/lvl/overworld.nav",
	"assets/lvl/splash.nav",
	0,
};


const char* AssetLookup::NavMesh::names[] =
{
	"Bithia Dam",
	"Channels",
	"Despina",
	"Docks",
	"Euodia",
	"Isca",
	"Jael",
	"Merab Tower",
	"Morian Refinery",
	"Slum",
	"Tamar Plaza",
	"Vashti Square",
	"overworld",
	"splash",
	0,
};


const char* AssetLookup::String::names[] =
{
	"_continue",
	"ability1",
	"ability2",
	"ability3",
	"access_keys",
	"active_armor",
	"admin_make",
	"admin_remove",
	"antialiasing",
	"attack",
	"audio_log",
	"auth_failed",
	"auth_failed_permanently",
	"back",
	"backward",
	"ban",
	"battery_lost",
	"battery_under_attack",
	"binding",
	"bolter",
	"borderless",
	"btn_A",
	"btn_B",
	"btn_Back",
	"btn_DDown",
	"btn_DLeft",
	"btn_DRight",
	"btn_DUp",
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
	"btn_ps4_DDown",
	"btn_ps4_DLeft",
	"btn_ps4_DRight",
	"btn_ps4_DUp",
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
	"buy",
	"buy_cost",
	"buying",
	"cancel",
	"capture_bonus",
	"chat_all",
	"chat_all_prompt",
	"chat_team",
	"chat_team_prefix",
	"chat_team_prompt",
	"choose_region",
	"close",
	"confirm_admin_make",
	"confirm_admin_remove",
	"confirm_ban",
	"confirm_buy",
	"confirm_capture",
	"confirm_defend",
	"confirm_entry_cancel",
	"confirm_friend_add",
	"confirm_friend_remove",
	"confirm_kick",
	"confirm_quit",
	"confirm_skip_map",
	"confirm_spend",
	"confirm_upgrade_replace",
	"connecting",
	"connection_failed",
	"contacting_master",
	"cooldown_speed",
	"core_module_under_attack",
	"core_modules_remaining",
	"core_modules_remaining_spawning",
	"core_vulnerable",
	"credits",
	"credits_full",
	"dada01",
	"dada02",
	"dada03",
	"danger",
	"deaths",
	"defeat",
	"defend",
	"demo_end",
	"deploy_timer",
	"deploy_timer_assault",
	"deploying",
	"description_active_armor",
	"description_bolter",
	"description_force_field",
	"description_grenade",
	"description_minion_boost",
	"description_rectifier",
	"description_shotgun",
	"description_sniper",
	"discord",
	"draw",
	"drone_kits",
	"drone_shield",
	"edit_name",
	"emote1",
	"emote2",
	"emote3",
	"emote4",
	"emote_everyone1",
	"emote_everyone2",
	"emote_everyone3",
	"emote_everyone4",
	"emote_misc1",
	"emote_misc2",
	"emote_misc3",
	"emote_misc4",
	"emote_teama1",
	"emote_teama2",
	"emote_teama3",
	"emote_teama4",
	"emote_teamb1",
	"emote_teamb2",
	"emote_teamb3",
	"emote_teamb4",
	"enable_batteries",
	"enable_battery_stealth",
	"enable_spawn_shields",
	"energy",
	"energy_added",
	"energy_collected",
	"energy_collected_limit",
	"energy_generation",
	"energy_generation_group",
	"energy_generation_total",
	"energy_surplus",
	"entry_create",
	"entry_saved",
	"entry_saved_in_game",
	"entry_saving",
	"ephyra",
	"error_no_levels",
	"error_no_name",
	"exit",
	"fill_bots",
	"flag_captured",
	"flag_dropped",
	"flag_limit",
	"flag_restored",
	"flag_scored",
	"flags",
	"force_field",
	"force_field_destroyed",
	"force_field_under_attack",
	"forward",
	"fov",
	"framerate_limit",
	"friend_add",
	"friend_remove",
	"fullscreen",
	"game_type",
	"game_type_assault",
	"game_type_capture_the_flag",
	"game_type_deathmatch",
	"game_type_domination",
	"god_mode_enabled",
	"grapple",
	"grapple_cancel",
	"grenade",
	"grenade_incoming",
	"group_required",
	"hack_complete",
	"hacking",
	"high",
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
	"infinite",
	"insufficient_resource",
	"interact",
	"invert_y",
	"is_private",
	"ivory_ad01",
	"ivory_ad02",
	"ivory_ad03",
	"ivory_ad04",
	"ivory_ad05",
	"ivory_ad06",
	"jump",
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
	"kick",
	"kicked",
	"kill_limit",
	"killed_player",
	"kills",
	"left",
	"left_joystick",
	"levels",
	"loading",
	"local",
	"locke_a01",
	"locke_a02",
	"locke_a03",
	"locke_a04",
	"locke_a05",
	"locke_b01",
	"locke_b02",
	"locke_c01",
	"locke_c02",
	"locke_c03",
	"locke_d01",
	"locke_d02",
	"locke_d03",
	"locke_d04",
	"locke_e01",
	"locke_e02",
	"locke_e03",
	"locke_f01",
	"locke_f02",
	"locke_f03",
	"locke_f04",
	"locke_f05",
	"locke_g01",
	"locke_g02",
	"locke_g03",
	"locke_h01",
	"locke_h02",
	"locke_h03",
	"locke_h04",
	"losing",
	"main_menu",
	"map_by",
	"master_timeout",
	"max_players",
	"medium",
	"member_of_group",
	"meursault_a01",
	"meursault_a02",
	"meursault_a03",
	"meursault_a04",
	"meursault_a05",
	"meursault_a06",
	"meursault_a07",
	"meursault_a08",
	"meursault_a09",
	"meursault_a10",
	"meursault_a11",
	"meursault_a12",
	"meursault_a13",
	"meursault_a14",
	"meursault_a15",
	"meursault_arrow",
	"min_players",
	"minion",
	"minion_boost",
	"multiplayer",
	"music",
	"need_upgrade",
	"net_client_interpolation_mode",
	"net_client_interpolation_mode_auto",
	"net_client_interpolation_mode_low_latency",
	"net_client_interpolation_mode_smooth",
	"no",
	"none",
	"off",
	"on",
	"online",
	"parkour",
	"parkour_reticle",
	"ping",
	"player",
	"player_ascended",
	"player_count",
	"player_joined",
	"player_kicked",
	"player_left",
	"presents",
	"preset",
	"preset_arcade",
	"preset_custom",
	"preset_standard",
	"primary",
	"prompt_accept",
	"prompt_accept_text",
	"prompt_back",
	"prompt_buy",
	"prompt_cancel",
	"prompt_cancel_grapple",
	"prompt_capture",
	"prompt_connect",
	"prompt_defend",
	"prompt_deploy",
	"prompt_drop_flag",
	"prompt_entry_create",
	"prompt_entry_edit",
	"prompt_entry_save",
	"prompt_gamejolt_token",
	"prompt_gamejolt_username",
	"prompt_interact",
	"prompt_itch",
	"prompt_listen",
	"prompt_name",
	"prompt_options",
	"prompt_region",
	"prompt_resolution_apply",
	"prompt_select",
	"prompt_skip_map",
	"prompt_stop",
	"prompt_upgrade",
	"prompt_zone_defend",
	"quit",
	"rectifier",
	"region",
	"region_europe",
	"region_useast",
	"region_uswest",
	"resolution",
	"resource_collected",
	"resume",
	"rex01",
	"rex02",
	"rex03",
	"rex04",
	"rex05",
	"rex06",
	"rex07",
	"rex08",
	"rex09",
	"rex10",
	"rex11",
	"rex12",
	"right",
	"right_joystick",
	"rumble",
	"save",
	"scan_lines",
	"scoreboard",
	"sensitivity",
	"server_full",
	"server_resetting",
	"server_settings",
	"settings",
	"settings_controls_gamepad",
	"settings_controls_keyboard",
	"settings_graphics",
	"sfx",
	"shadow_quality",
	"shell_casings",
	"shield",
	"shield_down",
	"shop",
	"shotgun",
	"sniper",
	"spawn_delay",
	"spectating",
	"spot",
	"ssao",
	"start_abilities",
	"start_energy",
	"stealth",
	"story",
	"story_defeat",
	"story_victory",
	"subtitles",
	"tab_inventory",
	"tab_left",
	"tab_map",
	"tab_mine",
	"tab_recent",
	"tab_right",
	"tab_top",
	"team_a",
	"team_b",
	"team_c",
	"team_d",
	"team_select_a",
	"team_select_b",
	"team_select_c",
	"team_select_d",
	"team_select_timer",
	"teams",
	"teams_type_1v1",
	"teams_type_cutthroat",
	"teams_type_free_for_all",
	"teams_type_team",
	"time_limit",
	"timer",
	"toggle_console",
	"turret1",
	"turret2",
	"turret3",
	"turret4",
	"turret5",
	"turret6",
	"turret_name",
	"turret_under_attack",
	"turrets_remaining",
	"turrets_remaining_spawning",
	"tut_ability",
	"tut_battery",
	"tut_capture",
	"tut_climb",
	"tut_crawl",
	"tut_jump",
	"tut_turrets",
	"tut_upgrade",
	"tut_wallrun",
	"ui_context_action",
	"unknown",
	"upgrade_allowed",
	"upgrade_default",
	"upgrade_disabled",
	"upgrade_notification",
	"upgrades",
	"upgrading",
	"victory",
	"volumetric_lighting",
	"vsync",
	"waiting",
	"waiting_players",
	"waypoints",
	"window_mode",
	"windowed",
	"wu_gang",
	"yes",
	"zone_lost",
	"zone_unavailable",
	"zone_unlocked",
	"zones_captured",
	"zones_hostile",
	"zones_locked",
	"zones_under_attack",
	"zoom",
	"zoom_toggle",
	0,
};


}