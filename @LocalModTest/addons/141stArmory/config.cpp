class CfgPatches 
{
	class 141st_UNSC_Gear
	{
		author="Reiken";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_characters_f_bootcamp",
			"A3_Characters_F",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"OPTRE_FC_Units",
			"OPTRE_Vehicles",
			"OPTRE_Vehicles_Air",
			"OPTRE_Vehicles_Tracked",
			"OPTRE_Weapons",
			"MA_Armor"
		};
		units[]=
		{
			//Backpacks
			"141st_Invisible_Rucksack",
			"141st_Invisible_Rucksack_Heavy",
			"141st_Invisible_RTO_Backpack",
			"141st_UNSC_Rucksack",
			"141st_UNSC_Rucksack_Heavy",
			"141st_UNSC_Rucksack_Medic",
			"141st_UNSC_Rucksack_RTO",
			"141st_ILCS_Rucksack_Heavy",
            "141st_ILCS_Rucksack_Medic",
            "141st_ILCS_Rucksack_Black",
			"141st_ILCS_Rucksack_RTO",
			"141st_ILCS_Rucksack_Medic_RTO"
		};
		weapons[] = 
		{
			//Helmets
				"Silver_Team_Helmet_MKV",
				"Silver_Team_Helmet_MKV_DP",
				"141st_M56Reach_Unassigned_Helmet",
				"141st_M56Reach_AOR2_Helmet",
				"141st_M56Reach_MARPATDESERT_Helmet",
				"141st_M56Reach_NWU_Helmet",
				"141st_M56Reach_MARPATWINTER_Helmet",
			//Old Gear
				"141st_CH252_Marine_Base",
				"141st_CH252_Apoth",
				"141st_CH252_Apoth_Sealed",
				"141st_CH252_Apoth_Sealed_DP",
				"141st_CH252_Apoth_Medic",
				"141st_CH252_Apoth_Medic_Sealed",
				"141st_CH252_Apoth_Medic_Sealed_DP",
				"141st_CH252_Kamin",
				"141st_CH252_Kamin_Sealed",
				"141st_CH252_Kamin_Sealed_DP",
				"141st_CH252_Kamin_Medic",
				"141st_CH252_Kamin_Medic_Sealed",
				"141st_CH252_Kamin_Medic_Sealed_DP",
				"141st_CH252_Unbilleted",
				"141st_CH252_Unbilleted_Medic",
				"141st_SNCOBoard_Patrol_Cap",
				//Custom Helmets
				"141st_ODSTReachHelmet_Kavik",
				"141st_ODSTReachHelmet_Reiken",
				"141st_ODSTReachHelmet_ReikenStealth",
			
            //Vests
			"Silver_Team_Armor_027_MKV",
            "Silver_Team_Armor_099_MKV",
            "Silver_Team_Armor_107_MKV",
            "Silver_Team_Armor_MKV",
			"141st_M56Reach_AOR2_Rifleman",
			"141st_M56Reach_MARPATDESERT_Rifleman",
			"141st_M56Reach_NWU_Rifleman",
			"141st_M56Reach_MARPATWINTER_Rifleman",
			"141st_M56Reach_Unassigned_Rifleman",
			"141st_M56Reach_Unassigned_Marksman",
			"141st_M56Reach_Unassigned_CQB",
			"141st_M56Reach_Unassigned_Leader",
			"141st_M56Reach_Unassigned_Medic",
			//Old Gear
            "141st_M52A_Apoth_Rifleman",
            "141st_M52A_Apoth_Medic",
            "141st_M52A_Apoth_TeamLeader",
            "141st_M52A_Apoth_AutoRifleman",
            "141st_M52A_Apoth_Breacher",
            "141st_M52A_Apoth_Grenadier",
            "141st_M52A_Apoth_Assault",
            "141st_M52A_Apoth_Marksman",
            "141st_M52A_Kamin_Rifleman",
            "141st_M52A_Kamin_Medic",
            "141st_M52A_Kamin_TeamLeader",
            "141st_M52A_Kamin_AutoRifleman",
            "141st_M52A_Kamin_Breacher",
            "141st_M52A_Kamin_Grenadier",
            "141st_M52A_Kamin_Assault",
            "141st_M52A_Kamin_Marksman",
            "141st_M52A_Unassigned_Rifleman",
            "141st_M52A_Unassigned_Medic",
            "141st_M52A_Unassigned_TeamLeader",
            "141st_M52A_Unassigned_AutoRifleman",
            "141st_M52A_Unassigned_Breacher",
            "141st_M52A_Unassigned_Grenadier",
            "141st_M52A_Unassigned_Assault",
            "141st_M52A_Unassigned_Marksman",
			
            //Custom Vests
			"141st_ODSTReachVest_Kavik",
			"141st_ODSTReachVest_Reiken",
			"141st_ODSTReachVest_ReikenStealth",
		};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};
class CfgVehicles
{
	//Base Classes
	class B_Bergen_Base;
	class B_Kitbag_rgr;
	class MA_Backpack_Base;
	class MA_M56S_Rucksack_Medic;
	class MA_M56S_Rucksack;
	class MA_M56S_Rucksack_ODST_Radio;
	class OPTRE_UNSC_Rucksack;
	class OPTRE_ANPRC_521_Black;
	class OPTRE_ANPRC_515;
	class MA_Marine_Medium_BDU;
	class MA_Marine_ODST_BDU_HJ;
	
	class WSD_Dadpat_Medium_BDU: MA_Marine_Medium_BDU
{
    scope=2;
    scopeArsenal=2;
    UniformClass="WSD_Dadpat_BDU_Medium";
    model="MA_Armor\data\Uniforms\Marine\Marine_Uniform.p3d";
    picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",   
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
 //     "Uni_Upper",
 //     "Uni_Lower",
 //     "Uni_Collar",
 //     "Armor_Underpad",
 //     "Armor_Straps",
 //     "Armor_Upper",
 //     "Armor_Lower",
        "Shoulders_Lower1",
 //     "Shoulders_Lower2",
 //     "Shoulders_Upper"
    };
    hiddenSelectionsTextures[]=
    {
        "141stArmory\data\DADPAT\Dadpat_UpperBDU_CO.paa",
        "141stArmory\data\DADPAT\Dadpat_LowerBDU_CO.paa",
        "141stArmory\data\DADPAT\Dadpat_Collar_CO.paa",
        "141stArmory\data\DADPAT\Dadpat_Padding_CO.paa",
        "141stArmory\data\DADPAT\DadpatStraps_CO.paa",
        "141stArmory\data\DADPAT\Dadpat_Upperarmor_CO.paa",
        "141stArmory\data\DADPAT\DadpatLower_CO.paa",
        "141stArmory\data\DADPAT\Dadpat_Shoulders_CO.paa",
        "141stArmory\data\DADPAT\Dadpat_Shoulders_CO.paa",
        "141stArmory\data\DADPAT\Dadpat_Shoulders_CO.paa"
    };
};
class WSD_DesertRanger_BDU: MA_Marine_ODST_BDU_HJ
{
    scope=2;
    scopeArsenal=2;
    UniformClass="WSD_DesertRanger_NS_BDU";
    model="\MA_Armor\data\Uniforms\M52_ODST_Uniform\M52_ODST_Uniform.p3d";
    picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",   
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
 //     "Uni_Upper",
 //     "Uni_Lower",
      "Uni_Collar",
 //     "Armor_Underpad",
 //     "Armor_Straps",
 //     "Armor_Upper",
 //     "Armor_Lower",
        "Shoulders_Lower1",
        "Shoulders_Lower2",
        "Shoulders_Upper"
    };
    hiddenSelectionsTextures[]=
    {
        "141stArmory\data\RANGER\MA_UpperBDU_DesertRanger_co.paa",
        "141stArmory\data\RANGER\MA_LowerBDU_DesertRanger_co.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_Collar_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
        "141stArmory\data\RANGER\MA_UnderArmor_DesertRanger_co.paa",
        "141stArmory\data\RANGER\MA_ODSTLowerArmor_DesertRanger_co.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
        "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
    };
	hiddenselectionsMaterials[]=
    {
        "141stArmory\data\RANGER\MA_UpperBDU_DesertRanger.rvmat",
        "141stArmory\data\RANGER\MA_LowerBDU_DesertRanger.rvmat",
        "",
        "MA_Armor\data\Uniforms\Marine\data\Marine_Softpad.rvmat",
        "MA_Armor\data\Uniforms\Marine\data\Marine_Armor_Straps.rvmat",
        "141stArmory\data\RANGER\MA_UnderArmor_DesertRanger.rvmat",
        "141stArmory\data\RANGER\MA_ODSTLowerArmor_DesertRanger.rvmat",
        "",
        "",
        ""
    };
};
	//Backpacks
	class ILCS_RS_B: B_Bergen_Base
	{
		dlc="141stAuxMod";
        scope=1;
        scopeCurator=2;
        isbackpack=1;
        picture="\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
        displayName="ILCS Rucksack [Black]";
        model="\OPTRE_weapons\backpacks\ODST_ruck.p3d";
        allowedSlots[]={901};
        maximumLoad=350;
        mass=40;
		hiddenSelections[]=
		{
			"camo1",
			"AP_Heavy",
			"Biofoam"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa"
		};
		transportMaxWeapons=10;
        transportMaxMagazines=100;
        class DestructionEffects
        {
        };
        class TransportMagazines
        {
        };
        class TransportWeapons
        {
        };
        class TransportItems
        {
        };
	};
	class 141st_UNSC_Rucksack: OPTRE_UNSC_Rucksack
	{
		dlc="141stAuxMod";
		displayName="[141st] Marine Rucksack";
		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
			{
				"camo",
			"camo2",
			"B_Addons",
			"B_Medic",
			"B_Radio"
			};
			maximumLoad=450;
	};
	class 141st_UNSC_Rucksack_Heavy: OPTRE_UNSC_Rucksack
	{
		dlc="141stAuxMod";
		displayName="[141st] Marine Rucksack [Heavy]";
		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
			{
			"camo",
			"camo2",
			"B_Medic",
			"B_Radio"
			};
			maximumLoad=600;
	};
	class 141st_UNSC_Rucksack_Medic: OPTRE_UNSC_Rucksack
	{
		dlc="141stAuxMod";
		displayName="[141st] Marine Rucksack [Corpsman]";
		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
			{
			"camo",
			"camo2",
			"B_Addons",
			"B_Radio"
			};
			maximumLoad=500;
	};
	class 141st_UNSC_Rucksack_RTO: OPTRE_ANPRC_521_Black
	{
		dlc="141stAuxMod";
		displayName="[141st] AN/PRC-521 Marine Backpack";
		scope=2;
		scopeArsenal=2;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Addons"
		};
		maximumLoad=450;
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_range=120000;
		tf_hasLRradio=1;
	};
	class 141st_ILCS_Rucksack_Black: MA_M56S_Rucksack
	{
		dlc="141stAuxMod";
		displayName="[141st] ILCS Hardpack";
		scope=2;
		scopeArsenal=2;
		maximumLoad=450;
	};
	class 141st_ILCS_Rucksack_Medic: MA_M56S_Rucksack_Medic
	{
		dlc="141stAuxMod";
		displayName="[141st] ILCS Hardpack [SARC]";
		scope=2;
		scopeArsenal=2;
		maximumLoad=500;
	};
	class 141st_ILCS_Rucksack_Heavy: MA_M56S_Rucksack
	{
		dlc="141stAuxMod";
		displayName="[141st] ILCS Hardpack [Heavy]";
		scope=2;
		scopeArsenal=2;
		maximumLoad=600;
	};
	class 141st_ILCS_Rucksack_RTO: MA_M56S_Rucksack_ODST_Radio
	{
		dlc="141stAuxMod";
		displayName="[141st] ILCS Radiopack";
		scope=2;
		scopeArsenal=2;
		maximumLoad=450;
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_range=120000;
		tf_hasLRradio=1;
	};
	class 141st_ILCS_Rucksack_Medic_RTO: MA_M56S_Rucksack_ODST_Radio
	{
		dlc="141stAuxMod";
		displayName="[141st] ILCS Medical Radiopack";
		scope=2;
		scopeArsenal=2;
		maximumLoad=500;
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_range=120000;
		tf_hasLRradio=1;
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Backpacks\ODST_Rucksack\Medical_ODST_Ruck_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa"
		};
	};
};
class CfgWeapons
{
    //Base Classes
    class ItemInfo;
	class HeadgearItem;
	class VestItem;
	class UniformItem;
	class MA_M56SR_Helmet;
	class MA_M56SR_Helmet_White_Visor;
	class MA_M56SR_Helmet_Black_Visor;
	class MA_M56R_Vest;
	class MA_M56R_CQB_Vest;
	class MA_M56R_Sniper_Vest;
	class MA_M56R_Medic_Vest;
	class MA_M56R_Vest_ODST_Radio;
	class OPTRE_UNSC_PatrolCap_Army;
	class OPTRE_FC_MJOLNIR_MKV_Helmet;
	class OPTRE_FC_MJOLNIR_MKV_Armor;
    class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_Recon_Helmet;
	class OPTRE_UNSC_CH252_Helmet_WDL;
	class OPTRE_UNSC_M52D_Armor;
	class OPTRE_UNSC_M52A_Armor_Sniper_WDL;
    class OPTRE_UNSC_M52A_Armor_Rifleman_WDL;
    class OPTRE_UNSC_M52A_Armor_MG_WDL;
    class OPTRE_UNSC_M52A_Armor_Grenadier_WDL;
    class OPTRE_UNSC_M52A_Armor_Marksman_WDL;
    class OPTRE_UNSC_M52A_Armor_Breacher_WDL;
    class OPTRE_UNSC_M52A_Armor_TL_WDL;
    class OPTRE_UNSC_M52A_Armor_Medic_WDL;
	class CH252_Helmet_Standard;
	class MA_Marine_BDU_Medium;
	
	class WSD_Dadpat_BDU_Medium: MA_Marine_BDU_Medium
	{
		scope=2;
		scopeArsenal=2;
		author="Watershed Division";
		displayName="[Watershed] Sales Representative Uniform";
		class ItemInfo: UniformItem
		{
			uniformClass="WSD_Dadpat_Medium_BDU";
			containerClass="Supply150";
			mass=10;
			uniformType="Neopren";
			modelSides[]={6};
		};
	};
	class MA_Marine_BDU_ODST_HJ;
	class WSD_DesertRanger_NS_BDU: MA_Marine_BDU_ODST_HJ
	{
		scope=2;
		scopeArsenal=2;
		author="Watershed Division";
		displayName="[Watershed] M56D Combat Uniform (Desert Ranger)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WSD_DesertRanger_BDU";
			containerClass="Supply150";
			mass=10;
			uniformType="Neopren";
			modelSides[]={6};
		};
	};
	class M52_ODST_Vest_Standard_A;
	class WSD_M52_DesertRanger_Vest: M52_ODST_Vest_Standard_A
{
    scope=2;
    scopeArsenal=2;
    author="Misriah Armory";
    displayName="[Watershed] M56D Vest (Desert Ranger)";
    hiddenSelections[]=
    {
        "Camo1", //CQB Left
        "Camo2", //CQB Right
        "Camo3", //Marksman_Left
        "Camo4", //Marksman_Right
        "Camo5", //ODST_Bracer_Left
        "Camo6", //ODST_Bracer_Right
        "Camo7", //ODST_Chest
        "Camo8", //ODST_Left
        "Camo9", //ODST_Right
        "Camo10", //ChestPMLeft
        "Camo11", //ChestPMRight
        "Camo12", //ChestPouch
        "Camo13", //LShoulderRadio
        "Camo14", //RShoulderRadio
        "Camo15", //StomachPouch
        "Camo16", //TorsoPMLeft
        "Camo17", //TorsoPMRight
        "Camo18", //TorsoPouch
        "Camo19", //WaistBack
        "Camo20", //WaistGLeft
        "Camo21", //WaistGRight
        "Camo22", //WaistPLeft
        "Camo23", //WaistPRight
        "Camo24", //WaistRLeft
        "Camo25", //WaistRRight
        "Camo26", //WaistSLeft
        "Camo27", //WaistSRight
        "Camo28", //LegPouchL
        "Camo29", //LegPouchR
        "CQB_Left",
        "CQB_Right",
        "Marksman_Left",
        "Marksman_Right",
        //"ODST_Bracer_Left",
        //"ODST_Bracer_Right",
        //"ODST_Chest",
        //"ODST_Left",
        //"ODST_Right",
        "ChestPMLeft",
        "ChestPMRight",
        "ChestPouch",
        "LShoulderRadio",
        "RShoulderRadio",
        "StomachPouch",
        "TorsoPMLeft",
        "TorsoPMRight",
        "TorsoPouch",
        "WaistBack",
        "WaistGLeft",
        "WaistGRight",
        "WaistPLeft",
        "WaistPRight",
        "WaistRLeft",
        "WaistRRight",
        "WaistSLeft",
        "WaistSRight",
        "LegPouchL",
        "LegPouchR"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa", //CQB Left
        "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa", //CQB Right
        "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa", //Marksman_Left
        "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa", //Marksman_Right
        "141stArmory\data\RANGER\MA_ODST_Vest_DesertRanger_co.paa", //ODST_Bracer_Left
        "141stArmory\data\RANGER\MA_ODST_Vest_DesertRanger_co.paa", //ODST_Bracer_Right
        "141stArmory\data\RANGER\MA_ODST_Vest_DesertRanger_co.paa", //ODST_Chest
        "141stArmory\data\RANGER\MA_ODST_Shoulders_DesertRanger_co.paa", //ODST_Left
        "141stArmory\data\RANGER\MA_ODST_Shoulders_DesertRanger_co.paa", //ODST_Right
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
        "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
        "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
        "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
        "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
    };
	hiddenSelectionsMaterials[]=
    {
        "", //CQB Left
        "", //CQB Right
        "", //Marksman_Left
        "", //Marksman_Right
        "141stArmory\data\RANGER\MA_ODST_Vest_DesertRanger.rvmat", //ODST_Bracer_Left
        "141stArmory\data\RANGER\MA_ODST_Vest_DesertRanger.rvmat", //ODST_Bracer_Right
        "141stArmory\data\RANGER\MA_ODST_Vest_DesertRanger.rvmat", //ODST_Chest
        "141stArmory\data\RANGER\MA_ODST_Shoulders_DesertRanger.rvmat", //ODST_Left
        "141stArmory\data\RANGER\MA_ODST_Shoulders_DesertRanger.rvmat", //ODST_Right
        "", //ChestPMLeft
        "", //ChestPMRight
        "", //ChestPouch
        "", //LShoulderRadio
        "", //RShoulderRadio
        "", //StomachPouch
        "", //TorsoPMLeft
        "", //TorsoPMRight
        "", //TorsoPouch
        "", //WaistBack
        "", //WaistGLeft
        "", //WaistGRight
        "", //WaistPLeft
        "", //WaistPRight
        "", //WaistRLeft
        "", //WaistRRight
        "", //WaistSLeft
        "", //WaistSRight
        "", //LegPouchL
        ""  //LegPouchR
    };
    class ItemInfo: VestItem
    {
        vestType="Rebreather";
        hiddenSelections[]=
    {
        "Camo1", //CQB Left
        "Camo2", //CQB Right
        "Camo3", //Marksman_Left
        "Camo4", //Marksman_Right
        "Camo5", //ODST_Bracer_Left
        "Camo6", //ODST_Bracer_Right
        "Camo7", //ODST_Chest
        "Camo8", //ODST_Left
        "Camo9", //ODST_Right
        "Camo10", //ChestPMLeft
        "Camo11", //ChestPMRight
        "Camo12", //ChestPouch
        "Camo13", //LShoulderRadio
        "Camo14", //RShoulderRadio
        "Camo15", //StomachPouch
        "Camo16", //TorsoPMLeft
        "Camo17", //TorsoPMRight
        "Camo18", //TorsoPouch
        "Camo19", //WaistBack
        "Camo20", //WaistGLeft
        "Camo21", //WaistGRight
        "Camo22", //WaistPLeft
        "Camo23", //WaistPRight
        "Camo24", //WaistRLeft
        "Camo25", //WaistRRight
        "Camo26", //WaistSLeft
        "Camo27", //WaistSRight
        "Camo28", //LegPouchL
        "Camo29", //LegPouchR
        "CQB_Left",
        "CQB_Right",
        "Marksman_Left",
        "Marksman_Right",
        //"ODST_Bracer_Left",
        //"ODST_Bracer_Right",
        //"ODST_Chest",
        //"ODST_Left",
        //"ODST_Right",
        "ChestPMLeft",
        "ChestPMRight",
        "ChestPouch",
        "LShoulderRadio",
        "RShoulderRadio",
        "StomachPouch",
        "TorsoPMLeft",
        "TorsoPMRight",
        "TorsoPouch",
        "WaistBack",
        "WaistGLeft",
        "WaistGRight",
        "WaistPLeft",
        "WaistPRight",
        "WaistRLeft",
        "WaistRRight",
        "WaistSLeft",
        "WaistSRight",
        "LegPouchL",
        "LegPouchR"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa", //CQB Left
        "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa", //CQB Right
        "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa", //Marksman_Left
        "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa", //Marksman_Right
        "141stArmory\data\RANGER\MA_ODST_Vest_DesertRanger_co.paa", //ODST_Bracer_Left
        "141stArmory\data\RANGER\MA_ODST_Vest_DesertRanger_co.paa", //ODST_Bracer_Right
        "141stArmory\data\RANGER\MA_ODST_Vest_DesertRanger_co.paa", //ODST_Chest
        "141stArmory\data\RANGER\MA_ODST_Shoulders_DesertRanger_co.paa", //ODST_Left
        "141stArmory\data\RANGER\MA_ODST_Shoulders_DesertRanger_co.paa", //ODST_Right
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMLeft
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //ChestPMRight
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //ChestPouch
        "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //LShoulderRadio
        "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //RShoulderRadio
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //StomachPouch
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMLeft
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //TorsoPMRight
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //TorsoPouch
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistBack
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGLeft
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistGRight
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPLeft
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", //WaistPRight
        "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRLeft
        "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", //WaistRRight
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSLeft
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //WaistSRight
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", //LegPouchL
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"  //LegPouchR
    };
	hiddenSelectionsMaterials[]=
    {
        "", //CQB Left
        "", //CQB Right
        "", //Marksman_Left
        "", //Marksman_Right
        "141stArmory\data\RANGER\MA_ODST_Vest_DesertRanger.rvmat", //ODST_Bracer_Left
        "141stArmory\data\RANGER\MA_ODST_Vest_DesertRanger.rvmat", //ODST_Bracer_Right
        "141stArmory\data\RANGER\MA_ODST_Vest_DesertRanger.rvmat", //ODST_Chest
        "141stArmory\data\RANGER\MA_ODST_Shoulders_DesertRanger.rvmat", //ODST_Left
        "141stArmory\data\RANGER\MA_ODST_Shoulders_DesertRanger.rvmat", //ODST_Right
        "", //ChestPMLeft
        "", //ChestPMRight
        "", //ChestPouch
        "", //LShoulderRadio
        "", //RShoulderRadio
        "", //StomachPouch
        "", //TorsoPMLeft
        "", //TorsoPMRight
        "", //TorsoPouch
        "", //WaistBack
        "", //WaistGLeft
        "", //WaistGRight
        "", //WaistPLeft
        "", //WaistPRight
        "", //WaistRLeft
        "", //WaistRRight
        "", //WaistSLeft
        "", //WaistSRight
        "", //LegPouchL
        ""  //LegPouchR
    };
        uniformModel="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
        containerClass="Supply200";
        mass=20;
        passThrough=0.1;
        modelSides[]={6};
        class HitpointsProtectionInfo
        {
            class Neck
            {
                hitpointName="HitNeck";
                armor=20;
                passThrough=0.5;
            };
            class Legs
            {
                hitpointName="HitLegs";
                armor=20;
                passThrough=0.5;
            };
            class Arms
            {
                hitpointName="HitArms";
                armor=25;
                passThrough=0.1;
            };
            class Hands
            {
                hitpointName="HitHands";
                armor=20;
                passThrough=0.1;
            };
            class Chest
            {
                hitpointName="HitChest";
                armor=35;
                passThrough=0.1;
            };
            class Diaphragm
            {
                hitpointName="HitDiaphragm";
                armor=30;
                passThrough=0.1;
            };
            class Abdomen
            {
                hitpointName="HitAbdomen";
                armor=30;
                passThrough=0.1;
            };
            class Pelvis
            {
                hitpointName="HitPelvis";
                armor=30;
                passThrough=0.1;
            };
            class Body
            {
                hitpointName="HitBody";
                passThrough=0.1;
            };
        };
    };
};
	class CH252D_Helmet;
	class WSD_CH252DesertRanger_Helmet: CH252D_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[Watershed] CH252D Helmet (Desert Ranger)";
    model="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
    picture=""; 
    hiddenSelections[]=
    {
        "Camo1", 
        "Camo2", 
      //  "Helmet",
      //  "Visor"
       
    };
    hiddenSelectionsTextures[]=
    {
        "141stArmory\data\RANGER\MA_ODST_Helmet_DesertRanger_co.paa",
        "141stArmory\data\RANGER\MA_ODST_Visor_DesertRanger_co.paa"     
    };
	hiddenSelectionsMaterials[]=
	{
		"141stArmory\data\RANGER\MA_ODST_Helmet_DesertRanger.rvmat",
		"141stArmory\data\RANGER\MA_ODST_Visor_DesertRanger.rvmat"
	};
    class ItemInfo: ItemInfo
    {
        uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2", 
        //  "Helmet",
        //  "Visor"    
        };
        hiddenSelectionsTextures[]=
        {
            "141stArmory\data\RANGER\MA_ODST_Helmet_DesertRanger_co.paa",
			"141stArmory\data\RANGER\MA_ODST_Visor_DesertRanger_co.paa"    
        };
		hiddenSelectionsMaterials[]=
		{
			"141stArmory\data\RANGER\MA_ODST_Helmet_DesertRanger.rvmat",
		"141stArmory\data\RANGER\MA_ODST_Visor_DesertRanger.rvmat"
		};
    };
};
	class WSD_Dadpat_Helmet_Standard: CH252_Helmet_Standard
	{
    scope=2;
    scopeArsenal=2;
    displayName="[Watershed] Sales Representative Helmet";
	hiddenSelections[]=
    {
        "camo1", // Helmet
        //"camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
    //    "Helmet",
        "NVGMount",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses"
    };
    hiddenSelectionsTextures[]=
		{
        "141stArmory\data\DADPAT\Dadpat_Helmet_CO.paa",
        "141stArmory\data\DADPAT\Dadpat_Helmet_CO.paa",
        "141stArmory\data\DADPAT\Dadpat_Helmet_CO.paa",
        "",
        "",
        ""
		};
	};
    //Helmets
	class 141st_SNCOBoard_Patrol_Cap: OPTRE_UNSC_PatrolCap_Army
    {
        dlc = "141stAuxMod";
        scope= 2;
        author= "Reiken";
        displayName= "[141st] Patrol Cap (SNCO Board)";
        hiddenSelections[]=
		{
			"camo1",
			"hide_marines"
		};
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Helmets\patrolcap_woodland_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"hide_marines"
			};
			hiddenSelectionsTextures[]=
			{
				"141stArmory\data\Helmets\patrolcap_woodland_CO.paa"
			};
		};
    };
	class Silver_Team_Helmet_MKV: OPTRE_FC_MJOLNIR_MKV_Helmet
	{
		author="Vince5754 & Article 2 Studios";
		displayName="[Silver Team] MJOLNIR Mark V Helmet";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\SPARTAN\Silver_Team_Armor_MKV_CO.paa",
			"141stArmory\data\SPARTAN\Silver_Team_Armor_MKV_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"141stArmory\data\SPARTAN\Silver_Team_Armor_MKV_CO.paa",
				"141stArmory\data\SPARTAN\Silver_Team_Armor_MKV_CO.paa"
			};
		};
	};
	//Old Gear
	class 141st_CH252_Apoth: OPTRE_UNSC_CH252_Helmet_WDL
    {
        dlc = "141stAuxMod";
        scope= 2;
        author= "Reiken";
        displayName= "[M/141st] CH252 Helmet (Apotheon)";
        hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Neck","H_UNSCVacLower","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
        hiddenSelectionsTextures[] = {"141stArmory\data\Helmets\141st_CH252_Apotheon_CO.paa","optre_unsc_units\army\data\helmet_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa"};
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Neck","H_UNSCVacLower","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
            hiddenSelectionsTextures[] = {"141stArmory\data\Helmets\141st_CH252_Apotheon_CO.paa","optre_unsc_units\army\data\helmet_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa"};
        };
    };
	class 141st_CH252_Apoth_Medic: OPTRE_UNSC_CH252_Helmet_WDL
    {
        dlc = "141stAuxMod";
        scope= 2;
        author= "Reiken";
        displayName= "[M/141st] CH252 Corpsman Helmet (Apotheon)";
        hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Neck","H_UNSCVacLower","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
        hiddenSelectionsTextures[] = {"141stArmory\data\Helmets\141st_CH252_Apotheon_Medic_CO.paa","optre_unsc_units\army\data\helmet_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa"};
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Neck","H_UNSCVacLower","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
            hiddenSelectionsTextures[] = {"141stArmory\data\Helmets\141st_CH252_Apotheon_Medic_CO.paa","optre_unsc_units\army\data\helmet_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa"};
        };
    };
	class 141st_CH252_Kamin: OPTRE_UNSC_CH252_Helmet_WDL
    {
        dlc = "141stAuxMod";
        scope= 2;
        author= "Reiken";
        displayName= "[M/141st] CH252 Helmet (Kamino)";
        hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Neck","H_UNSCVacLower","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
        hiddenSelectionsTextures[] = {"141stArmory\data\Helmets\141st_CH252_Kamino_CO.paa","optre_unsc_units\army\data\helmet_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa"};
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Neck","H_UNSCVacLower","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
            hiddenSelectionsTextures[] = {"141stArmory\data\Helmets\141st_CH252_Kamino_CO.paa","optre_unsc_units\army\data\helmet_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa"};
        };
    };
	class 141st_CH252_Kamin_Medic: OPTRE_UNSC_CH252_Helmet_WDL
    {
        dlc = "141stAuxMod";
        scope= 2;
        author= "Reiken";
        displayName= "[M/141st] CH252 Corpsman Helmet (Kamino)";
        hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Neck","H_UNSCVacLower","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
        hiddenSelectionsTextures[] = {"141stArmory\data\Helmets\141st_CH252_Kamino_Medic_CO.paa","optre_unsc_units\army\data\helmet_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa"};
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Neck","H_UNSCVacLower","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
            hiddenSelectionsTextures[] = {"141stArmory\data\Helmets\141st_CH252_Kamino_Medic_CO.paa","optre_unsc_units\army\data\helmet_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa"};
        };
    };
    class 141st_CH252_Unbilleted: OPTRE_UNSC_CH252_Helmet_WDL
    {
        dlc = "141stAuxMod";
        scope= 2;
        author= "Reiken";
        displayName= "[M/141st] CH252 Helmet (Unbilleted)";
        hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Neck","H_UNSCVacLower","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
        hiddenSelectionsTextures[] = {"141stArmory\data\Helmets\141st_CH252_Unbilleted_CO.paa","optre_unsc_units\army\data\helmet_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa"};
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Neck","H_UNSCVacLower","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
            hiddenSelectionsTextures[] = {"141stArmory\data\Helmets\141st_CH252_Unbilleted_CO.paa","optre_unsc_units\army\data\helmet_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa"};
        };
    };
	class 141st_CH252_Unbilleted_Medic: OPTRE_UNSC_CH252_Helmet_WDL
    {
        dlc = "141stAuxMod";
        scope= 2;
        author= "Reiken";
        displayName= "[M/141st] CH252 Corpsman Helmet (Unbilleted)";
        hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Neck","H_UNSCVacLower","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
        hiddenSelectionsTextures[] = {"141stArmory\data\Helmets\141st_CH252_Unbilleted_Medic_CO.paa","optre_unsc_units\army\data\helmet_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa"};
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Neck","H_UNSCVacLower","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
            hiddenSelectionsTextures[] = {"141stArmory\data\Helmets\141st_CH252_Unbilleted_Medic_CO.paa","optre_unsc_units\army\data\helmet_visor_ca.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa"};
        };
    };

	//Vests
	
	class 141st_M52A_Unassigned_Rifleman: OPTRE_UNSC_M52A_Armor_Rifleman_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Unbilleted) (Rifleman)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Unbilleted_CO",
			"141stArmory\data\Armor\141st_M52A_1_Unbilleted_CO",
			"141stArmory\data\Armor\141st_M52A_2_Unbilleted_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Unassigned_AutoRifleman: OPTRE_UNSC_M52A_Armor_MG_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Unbilleted) (Autorifleman)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Unbilleted_CO",
			"141stArmory\data\Armor\141st_M52A_1_Unbilleted_CO",
			"141stArmory\data\Armor\141st_M52A_2_Unbilleted_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Unassigned_Grenadier: OPTRE_UNSC_M52A_Armor_Grenadier_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Unbilleted) (Grenadier)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Unbilleted_CO",
			"141stArmory\data\Armor\141st_M52A_1_Unbilleted_CO",
			"141stArmory\data\Armor\141st_M52A_2_Unbilleted_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Unassigned_Marksman: OPTRE_UNSC_M52A_Armor_Marksman_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Unbilleted) (Marksman)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Unbilleted_CO",
			"141stArmory\data\Armor\141st_M52A_1_Unbilleted_CO",
			"141stArmory\data\Armor\141st_M52A_2_Unbilleted_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Unassigned_Breacher: OPTRE_UNSC_M52A_Armor_Breacher_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Unbilleted) (Breacher)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Unbilleted_CO",
			"141stArmory\data\Armor\141st_M52A_1_Unbilleted_CO",
			"141stArmory\data\Armor\141st_M52A_2_Unbilleted_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Unassigned_TeamLeader: OPTRE_UNSC_M52A_Armor_TL_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Unbilleted) (Team Leader)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Unbilleted_CO",
			"141stArmory\data\Armor\141st_M52A_1_Unbilleted_CO",
			"141stArmory\data\Armor\141st_M52A_2_Unbilleted_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Unassigned_Medic: OPTRE_UNSC_M52A_Armor_Medic_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Unbilleted) (Corpsman)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Unbilleted_CO",
			"141stArmory\data\Armor\141st_M52A_1_Unbilleted_Medic_CO",
			"141stArmory\data\Armor\141st_M52A_2_Unbilleted_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
	class 141st_M52A_Apoth_Rifleman: OPTRE_UNSC_M52A_Armor_Rifleman_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Apotheon) (Rifleman)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Apotheon_CO",
			"141stArmory\data\Armor\141st_M52A_1_Apotheon_CO",
			"141stArmory\data\Armor\141st_M52A_2_Apotheon_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Apoth_AutoRifleman: OPTRE_UNSC_M52A_Armor_MG_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Apotheon) (Autorifleman)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Apotheon_CO",
			"141stArmory\data\Armor\141st_M52A_1_Apotheon_CO",
			"141stArmory\data\Armor\141st_M52A_2_Apotheon_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Apoth_Grenadier: OPTRE_UNSC_M52A_Armor_Grenadier_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Apotheon) (Grenadier)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Apotheon_CO",
			"141stArmory\data\Armor\141st_M52A_1_Apotheon_CO",
			"141stArmory\data\Armor\141st_M52A_2_Apotheon_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Apoth_Marksman: OPTRE_UNSC_M52A_Armor_Marksman_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Apotheon) (Marksman)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Apotheon_CO",
			"141stArmory\data\Armor\141st_M52A_1_Apotheon_CO",
			"141stArmory\data\Armor\141st_M52A_2_Apotheon_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Apoth_Breacher: OPTRE_UNSC_M52A_Armor_Breacher_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Apotheon) (Breacher)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Apotheon_CO",
			"141stArmory\data\Armor\141st_M52A_1_Apotheon_CO",
			"141stArmory\data\Armor\141st_M52A_2_Apotheon_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Apoth_TeamLeader: OPTRE_UNSC_M52A_Armor_TL_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Apotheon) (Team Leader)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Apotheon_CO",
			"141stArmory\data\Armor\141st_M52A_1_Apotheon_CO",
			"141stArmory\data\Armor\141st_M52A_2_Apotheon_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Apoth_Medic: OPTRE_UNSC_M52A_Armor_Medic_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Apotheon) (Corpsman)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Apotheon_CO",
			"141stArmory\data\Armor\141st_M52A_1_Apotheon_Medic_CO",
			"141stArmory\data\Armor\141st_M52A_2_Apotheon_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	
	class 141st_M52A_Kamin_Rifleman: OPTRE_UNSC_M52A_Armor_Rifleman_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Kamino) (Rifleman)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Kamino_CO",
			"141stArmory\data\Armor\141st_M52A_1_Kamino_CO",
			"141stArmory\data\Armor\141st_M52A_2_Kamino_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Kamin_AutoRifleman: OPTRE_UNSC_M52A_Armor_MG_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Kamino) (Autorifleman)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Kamino_CO",
			"141stArmory\data\Armor\141st_M52A_1_Kamino_CO",
			"141stArmory\data\Armor\141st_M52A_2_Kamino_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Kamin_Grenadier: OPTRE_UNSC_M52A_Armor_Grenadier_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Kamino) (Grenadier)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Kamino_CO",
			"141stArmory\data\Armor\141st_M52A_1_Kamino_CO",
			"141stArmory\data\Armor\141st_M52A_2_Kamino_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Kamin_Marksman: OPTRE_UNSC_M52A_Armor_Marksman_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Kamino) (Marksman)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Kamino_CO",
			"141stArmory\data\Armor\141st_M52A_1_Kamino_CO",
			"141stArmory\data\Armor\141st_M52A_2_Kamino_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Kamin_Breacher: OPTRE_UNSC_M52A_Armor_Breacher_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Kamino) (Breacher)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Kamino_CO",
			"141stArmory\data\Armor\141st_M52A_1_Kamino_CO",
			"141stArmory\data\Armor\141st_M52A_2_Kamino_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Kamin_TeamLeader: OPTRE_UNSC_M52A_Armor_TL_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Kamino) (Team Leader)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Kamino_CO",
			"141stArmory\data\Armor\141st_M52A_1_Kamino_CO",
			"141stArmory\data\Armor\141st_M52A_2_Kamino_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M52A_Kamin_Medic: OPTRE_UNSC_M52A_Armor_Medic_WDL
	{
		author="Reiken";
		displayName="[M/141st] M52A Body Armor (Kamino) (Corpsman)";
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Armor\141st_M52A_3_Kamino_CO",
			"141stArmory\data\Armor\141st_M52A_1_Kamino_Medic_CO",
			"141stArmory\data\Armor\141st_M52A_2_Kamino_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
	};
	class 141st_M56Reach_Unassigned_Rifleman: MA_M56R_Vest
	{
		author="Reiken";
		displayName="[141st] M56-R Rifleman Vest (Unbilleted)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Upper_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
	};
	class 141st_M56Reach_Mafia_Rifleman: MA_M56R_Vest
	{
		author="Reiken";
		displayName="[141st] M56-R Rifleman Vest (Mafia)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Mafia\Reach Armor Upper_CO_MAFIA.paa",
			"141stArmory\data\Mafia\Reach_Armor_Lower_CO_MAFIA.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"141stArmory\data\Mafia\Forearm_Vents_MAFIA.paa",
			"141stArmory\data\Mafia\Sniper_CO_MAFIA.paa",
			"141stArmory\data\Mafia\CQB_CO_MAFIA.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
	};
	class 141st_M56Reach_Patterson_Rifleman: MA_M56R_Vest
	{
		author="Reiken";
		displayName="[141st] M56-R Vest (Patterson)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Mafia\Patterson_Reach_Armor_Upper_CO.paa",
			"141stArmory\data\Mafia\Patterson_Reach_Armor_Lower_CO.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"141stArmory\data\Mafia\Forearm_Vents_MAFIA.paa",
			"141stArmory\data\Mafia\Sniper_CO_MAFIA.paa",
			"141stArmory\data\Mafia\CQB_CO_MAFIA.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
	};
	class 141st_M56Reach_Mafia_Marksman: MA_M56R_Sniper_Vest
	{
		author="Reiken";
		displayName="[141st] M56-R Marksman Vest (Mafia)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Mafia\Reach Armor Upper_CO_MAFIA.paa",
			"141stArmory\data\Mafia\Reach_Armor_Lower_CO_MAFIA.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"141stArmory\data\Mafia\Forearm_Vents_MAFIA.paa",
			"141stArmory\data\Mafia\Sniper_CO_MAFIA.paa",
			"141stArmory\data\Mafia\CQB_CO_MAFIA.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
	};
	class 141st_M56Reach_Mafia_CQB: MA_M56R_CQB_Vest
	{
		author="Reiken";
		displayName="[141st] M56-R Heavy Vest (Mafia)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Mafia\Reach Armor Upper_CO_MAFIA.paa",
			"141stArmory\data\Mafia\Reach_Armor_Lower_CO_MAFIA.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"141stArmory\data\Mafia\Forearm_Vents_MAFIA.paa",
			"141stArmory\data\Mafia\Sniper_CO_MAFIA.paa",
			"141stArmory\data\Mafia\CQB_CO_MAFIA.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
	};
	class 141st_M56Reach_Mafia_Leader: MA_M56R_Vest_ODST_Radio
	{
		author="Reiken";
		displayName="[141st] M56-R Leadership Vest (Mafia)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Mafia\Reach Armor Upper_CO_MAFIA.paa",
			"141stArmory\data\Mafia\Reach_Armor_Lower_CO_MAFIA.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"141stArmory\data\Mafia\Forearm_Vents_MAFIA.paa",
			"141stArmory\data\Mafia\Sniper_CO_MAFIA.paa",
			"141stArmory\data\Mafia\CQB_CO_MAFIA.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
	};
	class 141st_M56Reach_Mafia_Medic: MA_M56R_Medic_Vest
	{
		author="Reiken";
		displayName="[141st] M56-R SARC Vest (Mafia)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Mafia\Reach_Armor_Upper_MAFIA_CORPSMAN_CO.paa",
			"141stArmory\data\Mafia\Reach_Armor_Lower_CO_MAFIA.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"141stArmory\data\Mafia\Forearm_Vents_MAFIA.paa",
			"141stArmory\data\Mafia\Sniper_CO_MAFIA.paa",
			"141stArmory\data\Mafia\CQB_CO_MAFIA.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
	};
	class 141st_M56Reach_Mafia_Helmet: MA_M56SR_Helmet_White_Visor
	{
		Author="Reiken";
		displayName="[141st] M56S-R ODST Helmet (Mafia)";
        scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Mafia\HR_ODST_Helmet_CO_MAFIA.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_White_co.paa"
		};
	};
	class 141st_M56Reach_AOR2_Rifleman: MA_M56R_Vest
	{
		author="Reiken";
		displayName="[141st] M56-R Rifleman Vest (USN-AOR2)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Armor\141st_AOR2_Reach_Armor_Upper_co.paa",
			"141stArmory\data\Armor\141st_AOR2_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
	};
	class 141st_M56Reach_MARPATWINTER_Rifleman: MA_M56R_Vest
	{
		author="Reiken";
		displayName="[141st] M56-R Rifleman Vest (MARPATWINTER)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Armor\141st_MARPATWinter_Reach_Armor_Upper_co.paa",
			"141stArmory\data\Armor\141st_MARPATWinter_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
	};
	class 141st_M56Reach_MARPATDESERT_Rifleman: MA_M56R_Vest
	{
		author="Reiken";
		displayName="[141st] M56-R Rifleman Vest (MARPATDESERT)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Armor\141st_MARPATDESERT_Reach_Armor_Upper_co.paa",
			"141stArmory\data\Armor\141st_MARPATDESERT_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
	};
	class 141st_M56Reach_NWU_Rifleman: MA_M56R_Vest
	{
		author="Reiken";
		displayName="[141st] M56-R Rifleman Vest (USN-NWU)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Armor\141st_NWU_Reach_Armor_Upper_co.paa",
			"141stArmory\data\Armor\141st_NWU_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
	};
	class 141st_M56Reach_Unassigned_Marksman: MA_M56R_Sniper_Vest
	{
		author="Reiken";
		displayName="[141st] M56-R Marksman Vest (Unbilleted)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Upper_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
	};
	class 141st_M56Reach_Unassigned_CQB: MA_M56R_CQB_Vest
	{
		author="Reiken";
		displayName="[141st] M56-R Heavy Vest (Unbilleted)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Upper_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
	};
	class 141st_M56Reach_Unassigned_Leader: MA_M56R_Vest_ODST_Radio
	{
		author="Reiken";
		displayName="[141st] M56-R Leadership Vest (Unbilleted)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Upper_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
	};
	class 141st_M56Reach_Unassigned_Medic: MA_M56R_Medic_Vest
	{
		author="Reiken";
		displayName="[141st] M56-R SARC Vest (Unbilleted)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Medic_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"141stArmory\data\Armor\141st_Unbilleted_Reach_Armor_Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
	};
	class 141st_M56Reach_Unassigned_Helmet: MA_M56SR_Helmet_White_Visor
	{
		Author="Reiken";
		displayName="[141st] M56S-R ODST Helmet (Unbilleted)";
        scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Helmets\141st_Unbilleted_Reach_Helmet.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_White_co.paa"
		};
	};
	class 141st_M56Reach_AOR2_Helmet: MA_M56SR_Helmet_White_Visor
	{
		Author="Reiken";
		displayName="[141st] M56S-R ODST Helmet (USN-AOR2)";
        scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Helmets\141st_AOR2_Reach_Helmet.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_White_co.paa"
		};
	};
	class 141st_M56Reach_MARPATWINTER_Helmet: MA_M56SR_Helmet_White_Visor
	{
		Author="Reiken";
		displayName="[141st] M56S-R ODST Helmet (MARPATWinter)";
        scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Helmets\141st_MARPATWinter_Reach_Helmet_co.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_White_co.paa"
		};
	};
	class 141st_M56Reach_MARPATDESERT_Helmet: MA_M56SR_Helmet_White_Visor
	{
		Author="Reiken";
		displayName="[141st] M56S-R ODST Helmet (MARPATDESERT)";
        scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Helmets\141st_MARPATDESERT_Reach_Helmet_co.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_White_co.paa"
		};
	};
	class 141st_M56Reach_NWU_Helmet: MA_M56SR_Helmet_White_Visor
	{
		Author="Reiken";
		displayName="[141st] M56S-R ODST Helmet (USN-NWU)";
        scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Helmets\141st_NWU_Reach_Helmet_co.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_White_co.paa"
		};
	};
	//SPARTAN and Custom Stuff
	class Silver_Team_Armor_MKV: OPTRE_FC_MJOLNIR_MKV_Armor
	{
		dlc="141stAuxMod";
		author="Silver Team Armorsmith";
		displayName="[141st] MJOLNIR Mark V Armor (Silver Team)";
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\SPARTAN\Silver_Team_Armor_MKV_CO.paa"
		};
	};
	class Silver_Team_Armor_027_MKV: OPTRE_FC_MJOLNIR_MKV_Armor
	{
		dlc="141stAuxMod";
		author="Silver Team Armorsmith";
		displayName="[OLD/141st] MJOLNIR Mark V Armor (Silver-027)";
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\SPARTAN\Silver_Team_027_MKV_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"141stArmory\data\SPARTAN\Silver_Team_027_MKV_CO.paa"
			};
		};
	};
	class Silver_Team_Armor_099_MKV: OPTRE_FC_MJOLNIR_MKV_Armor
	{
		dlc="141stAuxMod";
		author="Silver Team Armorsmith";
		displayName="[OLD/141st] MJOLNIR Mark V Armor (Silver-099)";
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\SPARTAN\Silver_Team_099_MKV_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"141stArmory\data\SPARTAN\Silver_Team_099_MKV_CO.paa"
			};
		};
	};
	
	class Silver_Team_Armor_107_MKV: OPTRE_FC_MJOLNIR_MKV_Armor
	{
		dlc="141stAuxMod";
		author="Silver Team Armorsmith";
		displayName="[OLD/141st] MJOLNIR Mark V Armor (Silver-107)";
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\SPARTAN\Silver_Team_107_MKV_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"141stArmory\data\SPARTAN\Silver_Team_107_MKV_CO.paa"
			};
		};
	};
	class 141st_ODSTReachVest_Kavik: MA_M56R_Sniper_Vest
	{
		author="Kavik and Reiken";
		displayName="[141st] M56-R ODST Vest (Kavik)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Armor\141st_Kavik_Armor_Upper_CO.paa",
			"141stArmory\data\Armor\141st_Kavik_Armor_Lower_CO.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"141stArmory\data\Armor\141st_Kavik_Armor_Sniper_CO.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
	};
	class 141st_ODSTReachVest_ReikenStealth: MA_M56R_CQB_Vest
	{
		author="Kavik and Reiken";
		displayName="[141st] M56-R Vest (Reiken)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"141stArmory\data\Armor\141st_ReikenStealth_Upper_CO.paa",
			"141stArmory\data\Armor\141st_ReikenStealth_Lower_CO.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"141stArmory\data\Armor\141st_Kavik_Armor_Sniper_CO.paa",
			"141stArmory\data\Armor\141st_ReikenStealth_CQB_CO.paa", 
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
	};
	class 141st_ODSTReachHelmet_Kavik: MA_M56SR_Helmet_Black_Visor
	{
		Author="Kavik and Reiken";
		displayName="[141st] M56S-R ODST Helmet (Kavik)";
        scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Helmets\141st_Kavik_Helmet_Reach_CO.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_White_co.paa"
		};
	};
	class 141st_ODSTReachHelmet_ReikenStealth: MA_M56SR_Helmet_Black_Visor
	{
		Author="Kavik and Reiken";
		displayName="[141st] M56S-R Helmet (Reiken)";
		scope = 2;
		class XtdGearInfo
		{
			model="";
			Variant="";
		};
		hiddenSelectionsTextures[]=
		{
			"141stArmory\data\Helmets\141st_ReikenStealth_Helmet_Reach_CO.paa",
			"141stArmory\data\Helmets\141st_ReikenStealth_Visor_Reach_CO.paa"
		};
	};
};
