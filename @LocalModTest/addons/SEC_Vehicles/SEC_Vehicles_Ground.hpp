////// Inherited Classes //////

	class VES_M12;
	class VES_M813_TT;
	class VES_M12_APC;
	class VES_M12_LRV;
	class VES_M12A1_LRV;
	class VES_M12R_AA;
	class VES_M12G1_LRV;
	class TCF_Silverback_Armoured_LRV;
	class TCF_Silverback_Armoured_TOW;
	class TCF_Silverback_Armoured_FAV;
	class TCF_Silverback_LRV;
	class TCF_Silverback_TOW;
	class TCF_Silverback_FAV;
	class VES_HDV134_TT;
	class VES_HDV134_TT_C;
	
	class OPTRE_M125_APC;
	class VES_IFV76;
	class VES_IFV76_A;
	class VES_M412_IFV;
	class VES_M413_MGS;
	class VES_M494_ORYX;

	class VES_M808B_MBT;
	class VES_M808BM_MBT;
	class VES_M808S_MBT;
	class OPTRE_M850_UNSC;

	class OPTRE_M808B_UNSC_Driverless;
	class OPTRE_M808BM_UNSC_Driverless;
	class OPTRE_M808S_Driverless;
	class OPTRE_M850_UNSC_Driverless;

	class VES_M808B2_MBT;
	class OPTRE_M808B2_Driverless;

	class VES_M875_SPH;
	class B_T_MBT_01_mlrs_F;
	class B_T_MBT_01_arty_F;

	class optre_catfish_unarmed_f;
	class optre_catfish_mg_f;
	class optre_catfish_atgm_f;
	class optre_catfish_aa_f;
	class optre_catfish_gauss_f;
	class B_SDV_01_F;

	class VES_HDV134_Resupply;
	class VES_HDV134_Tanker_C;
	class OPTRE_M914_RV;
	class OPTRE_M313_UNSC;
	class OPTRE_cart;

	class VES_HDV134_Fujikawa;

////// Special //////

	class SEC_VES_HDV134_Fujikawa: VES_HDV134_Fujikawa
	{
		displayName="[SEC] HDV-134 Buffalo (Fujikawa)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Special";
	};

////// Logistics //////

	class SEC_VES_HDV134_Resupply: VES_HDV134_Resupply
	{
		displayName="[SEC] HDV-134 Buffalo (Resupply)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Logistics";
		ace_repair_canRepair = 1; // Make repair vehicle
	};
	class SEC_VES_HDV134_Tanker_C: VES_HDV134_Tanker_C
	{
		displayName="[SEC] HDV-134 Buffalo (Refuel)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Logistics";
	};
	class SEC_OPTRE_M914_RV: OPTRE_M914_RV
	{
		displayName="[SEC] M914 Warthog (Repair)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Logistics";
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_DES_CO.paa",
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_DES_W_CO.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_WDL_CO.paa",
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_WDL_W_CO.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_JUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_JUN_W_CO.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_URB_CO.paa",
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_URB_W_CO.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_CO.paa",
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_W_CO.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_FRO_CO.paa",
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_FRO_W_CO.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_TUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_TUN_W_CO.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_DUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_DUN_W_CO.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_CLS_CO.paa",
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_CLS_W_CO.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_OD3_CO.paa",
					"V_FZ_Ground_Vehicles\data\Warthog\V_M12_OD3_W_CO.paa",
					"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa",
					"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Ground_Vehicles\data\Warthog\V_M12_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Warthog\V_M12_OD3_W_CO.paa",
			"\OPTRE_Vehicles\warthog\data\decals_ca.paa",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\net_ca.paa",
			"\OPTRE_Vehicles\warthog\data\apc_lopo_co.paa"
		};
		textureList[]=
		{
			"ves_desert",
			1,
			"ves_woodland",
			1,
			"ves_jungle",
			1,
			"ves_urban",
			1,
			"ves_black",
			1,
			"ves_frost",
			1,
			"ves_tundra",
			1,
			"ves_dunes",
			1,
			"ves_classic",
			1,
			"ves_olive",
			1
		};
	};
	class SEC_OPTRE_M313_UNSC: OPTRE_M313_UNSC
	{
		displayName="[SEC] M313 HRV Elephant";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Logistics";
		hiddenSelections[]=
		{
			"OPTRE_Vehicles_Tracked\Elephant\Data\camo\green\consoles_co.paa",
			"OPTRE_Vehicles_Tracked\Elephant\Data\camo\green\exterior_details_co.paa",
			"OPTRE_Vehicles_Tracked\Elephant\Data\camo\green\flooring_co.paa",
			"OPTRE_Vehicles_Tracked\Elephant\Data\camo\green\hull_co.paa",
			"OPTRE_Vehicles_Tracked\Elephant\Data\camo\green\interior_co.paa",
			"OPTRE_Vehicles_Tracked\Elephant\Data\camo\green\tracks_co.paa",
			"OPTRE_Vehicles_Tracked\Elephant\Data\camo\green\tracks2_co.paa",
		};
	};
	class SEC_OPTRE_cart: OPTRE_cart
	{
		displayName="[SEC] Maintenance/Tow Cart";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Logistics";
	};

////// Watercraft //////

	class SEC_optre_catfish_unarmed_f: optre_catfish_unarmed_f
	{
		displayName="[SEC] M112 Wet Patrol Craft (Unarmed)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Watercraft";
		class textureSources
		{
			class ves_desert
			{
				author="Baseplate";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_DES_CO.paa"
				};
			};
			class ves_woodland
			{
				author="Baseplate";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_WDL_CO.paa"
				};
			};
			class ves_jungle
			{
				author="Baseplate";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_JUN_CO.paa"
				};
			};
			class ves_urban
			{
				author="Baseplate";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_URB_CO.paa"
				};
			};
			class ves_black
			{
				author="Baseplate";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_BLK_CO.paa"
				};
			};
			class ves_frost
			{
				author="Baseplate";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_FRO_CO.paa"
				};
			};
			class ves_tundra
			{
				author="Baseplate";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_TUN_CO.paa"
				};
			};
			class ves_dunes
			{
				author="Baseplate";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_DUN_CO.paa"
				};
			};
			class ves_classic
			{
				author="Baseplate";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_CLS_CO.paa"
				};
			};
			class ves_olive
			{
				author="Baseplate";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_OD3_CO.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Ground_Vehicles\data\Catfish\V_M112_OD3_CO.paa"
		};
		textureList[]=
		{
			"ves_desert",
			0,
			"ves_woodland",
			0,
			"ves_jungle",
			0,
			"ves_urban",
			0,
			"ves_black",
			0,
			"ves_frost",
			0,
			"ves_tundra",
			0,
			"ves_dunes",
			0,
			"ves_classic",
			0,
			"ves_olive",
			1
		};
	};
	class SEC_optre_catfish_mg_f: optre_catfish_mg_f
	{
		displayName="[SEC] M112 Wet Patrol Craft (LAAG)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Watercraft";
		class textureSources
		{
			class ves_desert
			{
				author="Baseplate";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_DES_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\optre_vehicles\warthog\data\turrets\sight_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_woodland
			{
				author="Baseplate";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_WDL_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\optre_vehicles\warthog\data\turrets\sight_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_jungle
			{
				author="Baseplate";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_JUN_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\optre_vehicles\warthog\data\turrets\sight_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_urban
			{
				author="Baseplate";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_URB_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\optre_vehicles\warthog\data\turrets\sight_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_black
			{
				author="Baseplate";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_BLK_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\optre_vehicles\warthog\data\turrets\sight_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_frost
			{
				author="Baseplate";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_FRO_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\optre_vehicles\warthog\data\turrets\sight_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_tundra
			{
				author="Baseplate";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_TUN_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\optre_vehicles\warthog\data\turrets\sight_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_dunes
			{
				author="Baseplate";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_DUN_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\optre_vehicles\warthog\data\turrets\sight_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_classic
			{
				author="Baseplate";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_CLS_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\optre_vehicles\warthog\data\turrets\sight_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_olive
			{
				author="Baseplate";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_OD3_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\optre_vehicles\warthog\data\turrets\sight_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Ground_Vehicles\data\Catfish\V_M112_OD3_CO.paa",
			"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
			"\optre_vehicles\warthog\data\turrets\sight_co.paa",
			"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
		textureList[]=
		{
			"ves_desert",
			0,
			"ves_woodland",
			0,
			"ves_jungle",
			0,
			"ves_urban",
			0,
			"ves_black",
			0,
			"ves_frost",
			0,
			"ves_tundra",
			0,
			"ves_dunes",
			0,
			"ves_classic",
			0,
			"ves_olive",
			1
		};
	};
	class SEC_optre_catfish_atgm_f: optre_catfish_atgm_f
	{
		displayName="[SEC] M112 Wet Patrol Craft (ATGM)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Watercraft";
		class textureSources
		{
			class ves_desert
			{
				author="Baseplate";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_DES_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_woodland
			{
				author="Baseplate";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_WDL_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_jungle
			{
				author="Baseplate";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_JUN_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_urban
			{
				author="Baseplate";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_URB_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_black
			{
				author="Baseplate";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_BLK_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_frost
			{
				author="Baseplate";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_FRO_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_tundra
			{
				author="Baseplate";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_TUN_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_dunes
			{
				author="Baseplate";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_DUN_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_classic
			{
				author="Baseplate";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_CLS_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
			class ves_olive
			{
				author="Baseplate";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_OD3_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Ground_Vehicles\data\Catfish\V_M112_OD3_CO.paa",
			"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			"\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"
		};
		textureList[]=
		{
			"ves_desert",
			0,
			"ves_woodland",
			0,
			"ves_jungle",
			0,
			"ves_urban",
			0,
			"ves_black",
			0,
			"ves_frost",
			0,
			"ves_tundra",
			0,
			"ves_dunes",
			0,
			"ves_classic",
			0,
			"ves_olive",
			1
		};
	};
	class SEC_optre_catfish_aa_f: optre_catfish_aa_f
	{
		displayName="[SEC] M112 Wet Patrol Craft (AA)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Watercraft";
		class textureSources
		{
			class ves_desert
			{
				author="Baseplate";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_DES_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"
				};
			};
			class ves_woodland
			{
				author="Baseplate";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_WDL_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"
				};
			};
			class ves_jungle
			{
				author="Baseplate";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_JUN_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"
				};
			};
			class ves_urban
			{
				author="Baseplate";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_URB_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"
				};
			};
			class ves_black
			{
				author="Baseplate";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_BLK_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"
				};
			};
			class ves_frost
			{
				author="Baseplate";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_FRO_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"
				};
			};
			class ves_tundra
			{
				author="Baseplate";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_TUN_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"
				};
			};
			class ves_dunes
			{
				author="Baseplate";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_DUN_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"
				};
			};
			class ves_classic
			{
				author="Baseplate";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_CLS_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"
				};
			};
			class ves_olive
			{
				author="Baseplate";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_OD3_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Ground_Vehicles\data\Catfish\V_M112_OD3_CO.paa",
			"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"
		};
		textureList[]=
		{
			"ves_desert",
			0,
			"ves_woodland",
			0,
			"ves_jungle",
			0,
			"ves_urban",
			0,
			"ves_black",
			0,
			"ves_frost",
			0,
			"ves_tundra",
			0,
			"ves_dunes",
			0,
			"ves_classic",
			0,
			"ves_olive",
			1
		};
	};
	class SEC_optre_catfish_gauss_f: optre_catfish_gauss_f
	{
		displayName="[SEC] M112 Wet Patrol Craft (Gauss)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Watercraft";
		class textureSources
		{
			class ves_desert
			{
				author="Baseplate";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_DES_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa"
				};
			};
			class ves_woodland
			{
				author="Baseplate";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_WDL_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa"
				};
			};
			class ves_jungle
			{
				author="Baseplate";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_JUN_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa"
				};
			};
			class ves_urban
			{
				author="Baseplate";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_URB_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa"
				};
			};
			class ves_black
			{
				author="Baseplate";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_BLK_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa"
				};
			};
			class ves_frost
			{
				author="Baseplate";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_FRO_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa"
				};
			};
			class ves_tundra
			{
				author="Baseplate";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_TUN_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa"
				};
			};
			class ves_dunes
			{
				author="Baseplate";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_DUN_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa"
				};
			};
			class ves_classic
			{
				author="Baseplate";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_CLS_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa"
				};
			};
			class ves_olive
			{
				author="Baseplate";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Catfish\V_M112_OD3_CO.paa",
					"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
					"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Ground_Vehicles\data\Catfish\V_M112_OD3_CO.paa",
			"\optre_vehicles\catfish\data\optre_catfish_interior_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_seats_co.paa",
			"\optre_vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa"
		};
		textureList[]=
		{
			"ves_desert",
			0,
			"ves_woodland",
			0,
			"ves_jungle",
			0,
			"ves_urban",
			0,
			"ves_black",
			0,
			"ves_frost",
			0,
			"ves_tundra",
			0,
			"ves_dunes",
			0,
			"ves_classic",
			0,
			"ves_olive",
			1
		};
	};
	class SEC_B_SDV_01_F: B_SDV_01_F
	{
		displayName="[SEC] SM-02 Dolphin";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Watercraft";
	};

////// Artillery //////

	class SEC_VES_M875_SPH: VES_M875_SPH
	{
		displayName="[SEC] M875 Scorpion SPH";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Artillery";
	};
	class SEC_B_T_MBT_01_mlrs_F: B_T_MBT_01_mlrs_F
	{
		displayName="[SEC] Hyena";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Artillery";
	};
	class SEC_B_T_MBT_01_arty_F: B_T_MBT_01_arty_F
	{
		displayName="[SEC] Hartebeest";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Artillery";
	};

////// Anti-Air //////

	class SEC_VES_M808B2_MBT: VES_M808B2_MBT
	{
		displayName="[SEC] M808B2 Sun Devil";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Antiair";
	};
	class SEC_OPTRE_M808B2_Driverless: OPTRE_M808B2_Driverless
	{
		displayName="[SEC] M808B2 Sun Devil (Driverless)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Antiair";
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DES_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_DES_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_DES_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_DES_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_DES_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_DES_CO.paa"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_WDL_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_WDL_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_WDL_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_WDL_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_WDL_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_WDL_CO.paa"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_JUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_JUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_JUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_JUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_JUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_JUN_CO.paa"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_URB_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_URB_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_URB_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_URB_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_URB_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_URB_CO.paa"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_BLK_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_BLK_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_BLK_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_BLK_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_BLK_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_BLK_CO.paa"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_FRO_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_FRO_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_FRO_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_FRO_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_FRO_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_FRO_CO.paa"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_TUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_TUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_TUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_TUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_TUN_CO.paa"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_DUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_DUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_DUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_DUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_DUN_CO.paa"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_CLS_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_CLS_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_CLS_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_CLS_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_CLS_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_CLS_CO.paa"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_OD3_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_OD3_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_OD3_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_OD3_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_OD3_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_OD3_CO.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_DVX_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_RT_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_TB_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDH_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808S_SDG_OD3_CO.paa"
		};
		textureList[]=
		{
			"ves_desert",
			1,
			"ves_woodland",
			1,
			"ves_jungle",
			1,
			"ves_urban",
			1,
			"ves_black",
			1,
			"ves_frost",
			1,
			"ves_tundra",
			1,
			"ves_dunes",
			1,
			"ves_classic",
			1,
			"ves_olive",
			1
		};
	};

////// Armored (Driverless) //////

	class SEC_OPTRE_M808B_UNSC_Driverless: OPTRE_M808B_UNSC_Driverless
	{
		displayName="[SEC] M808B Scorpion (Driverless)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Armored_Driverless";
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_DES_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_DES_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_DES_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_DES_MR_CO.paa"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_WDL_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_WDL_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_WDL_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_WDL_MR_CO.paa"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_JUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_JUN_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_JUN_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_JUN_MR_CO.paa"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_URB_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_URB_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_URB_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_URB_MR_CO.paa"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_BLK_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_BLK_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_BLK_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_BLK_MR_CO.paa"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_FRO_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_FRO_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_FRO_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_FRO_MR_CO.paa"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_TUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_TUN_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_TUN_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_TUN_MR_CO.paa"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_DUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_DUN_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_DUN_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_DUN_MR_CO.paa"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_CLS_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_CLS_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_CLS_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_CLS_MR_CO.paa"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_MR_CO.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_T_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_D3_CO.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_MR_CO.paa"
		};
		textureList[]=
		{
			"ves_desert",
			1,
			"ves_woodland",
			1,
			"ves_jungle",
			1,
			"ves_urban",
			1,
			"ves_black",
			1,
			"ves_frost",
			1,
			"ves_tundra",
			1,
			"ves_dunes",
			1,
			"ves_classic",
			1,
			"ves_olive",
			1
		};
	};
	class SEC_OPTRE_M808BM_UNSC_Driverless: OPTRE_M808BM_UNSC_Driverless
	{
		displayName="[SEC] M808B/M Scorpion (Driverless)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Armored_Driverless";
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_DES_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_DES_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_DES_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_DES_MR_CO.paa",
					"V_FZ_Ground_Vehicles\data\Oryx\V_M494_DES_MG_CO.paa"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_WDL_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_WDL_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_WDL_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_WDL_MR_CO.paa",
					"V_FZ_Ground_Vehicles\data\Oryx\V_M494_WDL_MG_CO.paa"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_JUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_JUN_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_JUN_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_JUN_MR_CO.paa",
					"V_FZ_Ground_Vehicles\data\Oryx\V_M494_JUN_MG_CO.paa"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_URB_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_URB_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_URB_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_URB_MR_CO.paa",
					"V_FZ_Ground_Vehicles\data\Oryx\V_M494_URB_MG_CO.paa"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_BLK_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_BLK_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_BLK_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_BLK_MR_CO.paa",
					"V_FZ_Ground_Vehicles\data\Oryx\V_M494_BLK_MG_CO.paa"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_FRO_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_FRO_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_FRO_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_FRO_MR_CO.paa",
					"V_FZ_Ground_Vehicles\data\Oryx\V_M494_FRO_MG_CO.paa"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_TUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_TUN_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_TUN_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_TUN_MR_CO.paa",
					"V_FZ_Ground_Vehicles\data\Oryx\V_M494_TUN_MG_CO.paa"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_DUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_DUN_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_DUN_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_DUN_MR_CO.paa",
					"V_FZ_Ground_Vehicles\data\Oryx\V_M494_DUN_MG_CO.paa"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_CLS_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_CLS_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_CLS_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_CLS_MR_CO.paa",
					"V_FZ_Ground_Vehicles\data\Oryx\V_M494_CLS_MG_CO.paa"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_T_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_D3_CO.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_MR_CO.paa",
					"V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_MG_CO.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_T_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_D3_CO.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_M808_OD3_MR_CO.paa",
			"V_FZ_Ground_Vehicles\data\Oryx\V_M494_OD3_MG_CO.paa"
		};
		textureList[]=
		{
			"ves_desert",
			1,
			"ves_woodland",
			1,
			"ves_jungle",
			1,
			"ves_urban",
			1,
			"ves_black",
			1,
			"ves_frost",
			1,
			"ves_tundra",
			1,
			"ves_dunes",
			1,
			"ves_classic",
			1,
			"ves_olive",
			1
		};
	};
	class SEC_OPTRE_M808S_Driverless: OPTRE_M808S_Driverless
	{
		displayName="[SEC] M808S Scorpion (Driverless)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Armored_Driverless";
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_DES_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_DVX_DES_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_RT_DES_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TB_DES_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TH_DES_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TG_DES_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_G_DES_CO.paa"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_WDL_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_DVX_WDL_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_RT_WDL_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TB_WDL_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TH_WDL_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TG_WDL_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_G_WDL_CO.paa"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_JUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_DVX_JUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_RT_JUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TB_JUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TH_JUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TG_JUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_G_JUN_CO.paa"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_URB_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_DVX_URB_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_RT_URB_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TB_URB_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TH_URB_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TG_URB_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_G_URB_CO.paa"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_BLK_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_DVX_BLK_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_RT_BLK_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TB_BLK_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TH_BLK_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TG_BLK_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_G_BLK_CO.paa"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_FRO_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_DVX_FRO_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_RT_FRO_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TB_FRO_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TH_FRO_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TG_FRO_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_G_FRO_CO.paa"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_DVX_TUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_RT_TUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TB_TUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TH_TUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TG_TUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_G_TUN_CO.paa"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_DUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_DVX_DUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_RT_DUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TB_DUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TH_DUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TG_DUN_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_G_DUN_CO.paa"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_CLS_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_DVX_CLS_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_RT_CLS_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TB_CLS_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TH_CLS_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TG_CLS_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_G_CLS_CO.paa"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_OD3_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_DVX_OD3_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_RT_OD3_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TB_OD3_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TH_OD3_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TG_OD3_CO.paa",
					"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_G_OD3_CO.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_DVX_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_RT_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TB_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TH_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_TG_OD3_CO.paa",
			"V_FZ_Ground_Vehicles\data\Scorpion\V_m808s_G_OD3_CO.paa"
		};
		textureList[]=
		{
			"ves_desert",
			1,
			"ves_woodland",
			1,
			"ves_jungle",
			1,
			"ves_urban",
			1,
			"ves_black",
			1,
			"ves_frost",
			1,
			"ves_tundra",
			1,
			"ves_dunes",
			1,
			"ves_classic",
			1,
			"ves_olive",
			1
		};
	};
	class SEC_OPTRE_M850_UNSC_Driverless: OPTRE_M850_UNSC_Driverless // Grizzly
	{
		displayName="[SEC] M850 Grizzly (Driverless)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Armored_Driverless";
	};

////// Armored //////

	class SEC_VES_M808B_MBT: VES_M808B_MBT
	{
		displayName="[SEC] M808B Scorpion";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Armored";
	};
	class SEC_VES_M808BM_MBT: VES_M808BM_MBT
	{
		displayName="[SEC] M808B/M Scorpion";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Armored";
	};
	class SEC_VES_M808S_MBT: VES_M808S_MBT
	{
		displayName="[SEC] M808S Scorpion";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Armored";
	};
	class SEC_OPTRE_M850_UNSC: OPTRE_M850_UNSC
	{
		displayName="[SEC] M850 Grizzly";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Armored";
	};

////// Mechanized //////

	class SEC_OPTRE_M125_APC: OPTRE_M125_APC
	{		
		displayName="[SEC] M125 Wildebeest";
		scope=2;
		scopeArsenal=2;
		editorCategory="SEC_Categ_Main";
		scopeCurator=2;
		faction="SEC_Faction_Main";
		editorsubcategory="SEC_Categ_Vic_Mechanized";
	};
	class SEC_VES_IFV76: VES_IFV76
	{
		armor=535;
		displayName="[SEC] APC-76 Honeybadger";
		editorsubcategory="SEC_Categ_Vic_Mechanized";
		editorCategory="SEC_Categ_Main";
	};
	class SEC_VES_IFV76_A: VES_IFV76_A
	{
		armor=535;
		displayName="[SEC] IFV-76 Honeybadger";
		editorsubcategory="SEC_Categ_Vic_Mechanized";
		editorCategory="SEC_Categ_Main";
	};
	class SEC_VES_M412_IFV: VES_M412_IFV
	{
		displayName="[SEC] M412 Bison IFV";
		editorsubcategory="SEC_Categ_Vic_Mechanized";
		editorCategory="SEC_Categ_Main";
	};
	class SEC_VES_M413_MGS: VES_M413_MGS
	{
		displayName="[SEC] M413 Bison MGS";
		editorsubcategory="SEC_Categ_Vic_Mechanized";
		editorCategory="SEC_Categ_Main";
	};
	class SEC_VES_M494_ORYX: VES_M494_ORYX
	{
		displayName="[SEC] M494 Oryx";
		editorsubcategory="SEC_Categ_Vic_Mechanized";
		editorCategory="SEC_Categ_Main";
	};

////// Motorized //////

	class SEC_VES_M12: VES_M12
	{
		displayName="[SEC] M12 FAV Warthog (Unarmed)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Motorized";
	};
	class SEC_VES_M813_TT: VES_M813_TT
	{
		displayName="[SEC] M813 TT Warthog";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Motorized";
	};
	class SEC_VES_M12_APC: VES_M12_APC
	{
		displayName="[SEC] M12 APC Warthog";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Motorized";
	};
	class SEC_VES_M12_LRV: VES_M12_LRV
	{
		displayName="[SEC] M12 LRV Warthog (LAAG)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Motorized";
	};
	class SEC_VES_M12A1_LRV: VES_M12A1_LRV
	{
		displayName="[SEC] M12A1 LRV Warthog (ATGM)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Motorized";
	};
	class SEC_VES_M12R_AA: VES_M12R_AA
	{
		displayName="[SEC] M12R LRV Warthog (AA)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Motorized";
	};
	class SEC_VES_M12G1_LRV: VES_M12G1_LRV
	{
		displayName="[SEC] M12G1 LRV Warthog (Gauss)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Motorized";
	};
	class SEC_TCF_Silverback_Armoured_LRV: TCF_Silverback_Armoured_LRV
	{
		armor=200;
		displayName="[SEC] SB14 LRV Silverback (Armored MG)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Motorized";
	};
	class SEC_TCF_Silverback_Armoured_TOW: TCF_Silverback_Armoured_TOW
	{
		armor=200;
		displayName="[SEC] SB14 LRV Silverback (Armored TOW)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Motorized";
	};
	class SEC_TCF_Silverback_Armoured_FAV: TCF_Silverback_Armoured_FAV
	{
		armor=200;
		displayName="[SEC] SB14 LRV Silverback (Armored)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Motorized";
	};
	class SEC_TCF_Silverback_LRV: TCF_Silverback_LRV
	{
		armor=200;
		displayName="[SEC] SB14 LRV Silverback (MG)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Motorized";
	};
	class SEC_TCF_Silverback_TOW: TCF_Silverback_TOW
	{
		armor=200;
		displayName="[SEC] SB14 LRV Silverback (TOW)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Motorized";
	};
	class SEC_TCF_Silverback_FAV: TCF_Silverback_FAV
	{
		armor=200;
		displayName="[SEC] SB14 LRV Silverback";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Motorized";
	};
	class SEC_VES_HDV134_TT: VES_HDV134_TT
	{
		displayName="[SEC] HDV-134 TT Buffalo";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Motorized";
	};
	class SEC_VES_HDV134_TT_C: VES_HDV134_TT_C
	{
		displayName="[SEC] HDV-134 TT Buffalo (Covered)";
		faction="SEC_Faction_Main";
		editorCategory="SEC_Categ_Main";
		editorsubcategory="SEC_Categ_Vic_Motorized";
	};