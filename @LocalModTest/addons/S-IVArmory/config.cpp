class CfgPatches 
{
	class 141st_UNSC_Gear
	{
		author="Reiken";
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"OPTRE_FC_Units",
			"OPTRE_Vehicles",
			"OPTRE_Vehicles_Air",
			"OPTRE_Vehicles_Tracked",
			"OPTRE_Weapons",
			"MA_Armor",
			"rubicon_gen3",
			"OPTRE_MJOLNIR_Units",
            "WSD_MisriahAdditions"
		};
		units[]=
		{

		};
		weapons[] = 
		{

		};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};
	class CfgWeapons
{
	class VestItem;
	class ItemInfo;
	class HeadgearItem;
	class V_PlateCarrier1_rgr;
	class H_HelmetB;
	class MA_MKIV_Armor;
	class MA_MKVB_Armor;
	class MA_SPI_Armor;
	class MA_Mjolnir_MKV_Helmet;
	class MA_Mjolnir_MKVB_Helmet;
	class MA_Mjolnir_Commando_Helmet;
	class MA_Mjolnir_Recon_Helmet;
	class MA_Mjolnir_Grenadier_Helmet;
	class MA_Mjolnir_Scout_Helmet;
	class MA_Mjolnir_EVA_Helmet;
	class MA_Mjolnir_Gungnir_Helmet;
	class MA_Mjolnir_JFO_Helmet;
	class MA_Mjolnir_Mjolnir_AA_Helmet;
	class MA_Mjolnir_MKIV_Helmet;
	class MA_Mjolnir_ODST_Helmet;
    class MAPO_Mjolnir_ODST_Helmet;
	class MA_Mjolnir_Pilot_Helmet;
	class MA_Mjolnir_MP_Helmet;
	class MA_Mjolnir_H3_EOD_Helmet;
	class MA_Mjolnir_HR_EOD_Helmet;
	class MA_Mjolnir_CQC_Helmet;
	class MA_EOD_CBRN_Attachment_NVG;
	class OPTRE_FC_MJOLNIR_MKV_Helmet_Human;
	class OPTRE_FC_MJOLNIR_MKV_Armor_Human;
	class MA_SPI_Helmet;
	class MAPO_MKIV_Helmet;
	class MAPO_MKIV_Armor;
	class Rubicon_MkVIIBaseArmor;
	class Rubicon_MkVIIBaseHelmet;
	class MAPO_MKV_Helmet;
	class MAPO_MKVB_Armor;
	class OPTRE_MJOLNIR_Operator;
	class Rubicon_gen3_cavhelmet;
	class OPTRE_FC_MJOLNIR_Mark_VI_Armor;
	class OPTRE_FC_MJOLNIR_Mark_VI_Helmet;
	class OPTRE_FC_MJOLNIR_Mark_VI_Armor_Human;
	class OPTRE_FC_MJOLNIR_MKVI_Helmet_Human;
	class OPTRE_FC_MJOLNIR_MKVI_Undersuit;
	class OPTRE_MJOLNIR_Undersuit;
	class OPTRE_UNSC_MJOLNIR_MKVI_Undersuit_Human;
	class Rubicon_gen3_cqbhelmet;
	class Rubicon_gen3_celoxhelmet;
	class Rubicon_gen3_trailhelmet;
	class OPTRE_UNSC_Security_Helmet;
	class MAPO_Commando_Helmet;
	class MAPO_MKVB_Helmet;
	class MAPO_Mjolnir_HR_EOD_Helmet;
	class InventoryItem_Base_F;
	class ItemCore;
	class U_BasicBody;
    class OPTRE_UNSC_Operator_Helmet;
    class WSD_MKVIG3_HelmetSkeleton;
	class UniformItem: InventoryItem_Base_F
	{
		type=801;
		uniformType="Neopren";
	};
	class Uniform_Base: ItemCore
	{
		scope=0;
		allowedSlots[]={901};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Soldier_F";
			containerClass="Supply0";
			uniformType="Neopren";
			mass=0;
		};
	};
	class SEC_MKVB_ArmorCore: MA_MKVB_Armor
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] Armor Core";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 70;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 1.3;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_CO.paa"
		};
        hiddenSelectionsMaterials[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper.rvmat",
			"S-IVArmory\data\MKVB\MKV_Lower.rvmat"
		};
		class ItemInfo: VestItem
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
                "camo1",
				"camo2",
			//	"mkvb_upper",
			//	"mkvb_lower"
			};
			hiddenSelectionsTextures[]=
			{
				"S-IVArmory\data\MKVB\MKV_Upper_CO.paa",
				"S-IVArmory\data\MKVB\MKV_Lower_CO.paa"
			};
             hiddenSelectionsMaterials[]=
		    {
                "S-IVArmory\data\MKVB\MKV_Upper.rvmat",
			    "S-IVArmory\data\MKVB\MKV_Lower.rvmat"
		    };
			uniformModel="MA_Armor\data\Vests\MKVB\MKVB_Armor.p3d";
			containerClass="Supply250";
			mass=20;
			passThrough=0.1;
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=15;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=15;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=10;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=15;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=25;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=20;
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
    class SEC_MKVB_JumpJet_ArmorCore: SEC_MKVB_ArmorCore
	{
		model="MA_Armor\data\Vests\MKVB\MKVB_Armor.p3d";
		picture="";
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Bullfrog) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_Bullfrog_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_Bullfrog_CO.paa"
		};
         hiddenSelectionsMaterials[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper.rvmat",
			"S-IVArmory\data\MKVB\MKV_Lower.rvmat"
		};
		class ItemInfo: VestItem
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
                "camo1",
				"camo2",
			//	"mkvb_upper",
			//	"mkvb_lower"
			};
			hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_Bullfrog_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_Bullfrog_CO.paa"
		};
         hiddenSelectionsMaterials[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper.rvmat",
			"S-IVArmory\data\MKVB\MKV_Lower.rvmat"
		};
			uniformModel="MA_Armor\data\Vests\MKVB\MKVB_Armor.p3d";
			containerClass="Supply450";
			mass=20;
			passThrough=0.1;
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=15;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=15;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=10;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=15;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=25;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=20;
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
    class SEC_MKVB_SIII_ArmorCore: MAPO_MKVB_Armor
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE/SPRT] MJOLNIR Mark V.[B] Armor Core";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 70;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 1.3;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
         hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_CO.paa"
		};
         hiddenSelectionsMaterials[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper.rvmat",
			"S-IVArmory\data\MKVB\MKV_Lower.rvmat"
		};
	};
    class SEC_MKVB_SIII_Helmet: MAPO_MKVB_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE/SPRT] MJOLNIR Mark V.[B] Helmet";
		MJOLNIR_helmetOutline="S-IVArmory\data\MKVB\MKVBHelmetOutline.paa";
		hiddenSelections[]=
        {
            "camo1",
            "camo2"
        };
		hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKVB_Helmet_CO.paa",
			"S-IVArmory\data\MKVB\MKVB_Visor_CO.paa"
		};
        hiddenSelectionsMaterials[]=
		{
            "S-IVArmory\data\MKVB\MKVB_Helmet.rvmat",
			"S-IVArmory\data\MKVB\MKVB_Visor.rvmat"
		};
    };
    class SEC_MKVB_Man_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Man) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_Man_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_Man_CO.paa"
		};
	};
    class SEC_MKVB_Palmer_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Palmer) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKV\MKV_Upper_Palmer_CO.paa",
			"S-IVArmory\data\MKV\MKV_Lower_Palmer_CO.paa"
		};
	};
    class SEC_MKVB_Marsh_ArmorCore: SEC_MKVB_JumpJet_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Marsh) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_Marsh_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_Marsh_CO.paa"
		};
	};
    class SEC_MKVB_Minuano_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Minuano) Armor Core";
        MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 100;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 1.0;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKV\Minuano_MKV_Upper_CO.paa",
			"S-IVArmory\data\MKV\Minuano_MKV_Lower_CO.paa"
		};
	};
    class SEC_MKVB_Codex_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Codex) Armor Core";
        MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 70;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 1.3;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKV\Codex_MKV_Upper_CO.paa",
			"S-IVArmory\data\MKV\Codex_MKV_Lower_CO.paa"
		};
	};
	class SEC_MKVB_Grif_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Grif) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKV\MKV_Upper_Grif_CO.paa",
			"S-IVArmory\data\MKV\MKV_Lower_Grif_CO.paa"
		};
	};
    class SEC_MKVB_Amare_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Amare) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\Amare_MKV_Upper_CO.paa",
			"S-IVArmory\data\MKVB\Amare_MKV_Lower_CO.paa"
		};
	};
    class SEC_MKVB_David_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (David) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\David_MKV_Upper_CO.paa",
			"S-IVArmory\data\MKVB\David_MKV_Lower_CO.paa"
		};
	};
     class SEC_MKVB_Lawnson_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Lawnson) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\Lawnson_MKV_Upper_CO.paa",
			"S-IVArmory\data\MKVB\Lawnson_MKV_Lower_CO.paa"
		};
	};
    class SEC_MKVB_Guardian_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Guardian) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\Guardian_MKV_Upper_CO.paa",
			"S-IVArmory\data\MKVB\Guardian_MKV_Lower_CO.paa"
		};
	};
    class SEC_MKVB_Rookie_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Rookie) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKV\Rook_MKV_Upper_CO.paa",
			"S-IVArmory\data\MKV\Rook_MKV_Lower_CO.paa"
		};
	};  
	class SEC_MKVB_Gambit_ArmorCore: SEC_MKVB_JumpJet_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Gambit) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\Gambit_MKV_Upper_CO.paa",
			"S-IVArmory\data\MKVB\Gambit_MKV_Lower_CO.paa"
		};
	};
    class SEC_MKVB_Kara_ArmorCore: SEC_MKVB_JumpJet_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Collin) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_Kara_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_Kara_CO.paa"
		};
	};
    class SEC_MKVB_Type_ArmorCore: SEC_MKVB_JumpJet_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Type) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_Type_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_Type_CO.paa"
		};
	};
    class SEC_MKVB_Chicken_ArmorCore: SEC_MKVB_JumpJet_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Chicken) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_Chicken_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_Chicken_CO.paa"
		};
	};
	class SEC_MKVB_Ashburn_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Ashburn) Armor Core";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 75;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 1.1;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_Ashburn_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_Ashburn_CO.paa"
		};
	};
	class SEC_MKVB_Callahan_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Callahan) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_Callahan_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_Callahan_CO.paa"
		};
	};
	class SEC_MKVB_Joker_ArmorCore: MAPO_MKVB_Armor
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Mimic) Armor Core";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 100;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 1.0;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_joker_co.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_joker_co.paa"
		};
	};
	class SEC_Guest34th_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[34PRC] MJOLNIR Mark V.[B] (Away) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\GUEST\34_MKVB_Upper_CO.paa",
			"S-IVArmory\data\GUEST\34_MKVB_Lower_CO.paa"
		};
	};
	class SEC_Guest22nd_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[22RDF] MJOLNIR Mark V.[B] (Away) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\GUEST\MKV_Upper_22nd_CO.paa",
			"S-IVArmory\data\GUEST\MKV_Lower_22nd_CO.paa"
		};
	};
	class SEC_Guest6th_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[6STB] MJOLNIR Mark V.[B] (Away) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\GUEST\MKV_Upper_6th_CO.paa",
			"S-IVArmory\data\GUEST\MKV_Lower_6th_CO.paa"
		};
	};
	class OPTRE_FC_MJOLNIR_MKV_Armor;
	class SEC_MKV_Armor_Muffin: OPTRE_FC_MJOLNIR_MKV_Armor_Human
	{
		displayName="[EAGLE] MJOLNIR Mark V Armor Core (Muffin)";
		scope = 2;
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 100;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 0.7;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelections[]=
		{
			"camo1",
			//	"A_Belt",
			"AP_AR",
			"AP_BR",
		//	"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_Knife1",
		//	"AP_Pouches",
			"AP_SMG",
		//	"AP_Smoke",
			"AP_Sniper"
		};
		hiddenSelectionsTextures[]={"S-IVArmory\data\MKV\Muffin_Armor_MKV_CO.paa"};
        hiddenSelectionsMaterials[]={"S-IVArmory\data\MKV\MKVG2.rvmat"};
    };
	class SEC_MKV_ArmorCore: SEC_MKV_Armor_Muffin
	{
		displayName="[EAGLE] MJOLNIR Mark V Armor Core";
		scope = 2;
		hiddenSelections[]=
		{
			"camo1", // Armor Texture

		//	"A_Belt",
			"AP_AR",
			"AP_BR",
		//	"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_Knife1",
		//	"AP_Pouches",
			"AP_SMG",
		//	"AP_Smoke",
			"AP_Sniper"
		};
		hiddenSelectionsTextures[]=
		{"S-IVArmory\data\MKV\MKVG2_CO.paa"};
        hiddenSelectionsMaterials[]={"S-IVArmory\data\MKV\MKVG2.rvmat"};
	};
    class SEC_MKV_Armor_Spartan: OPTRE_FC_MJOLNIR_MKV_Armor
	{
		displayName="[EAGLE/SPRT] MJOLNIR Mark V Armor Core";
		scope = 2;
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 100;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 0.7;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelections[]=
		{
			"camo1",
			//	"A_Belt",
			"AP_AR",
			"AP_BR",
		//	"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_Knife1",
		//	"AP_Pouches",
			"AP_SMG",
		//	"AP_Smoke",
			"AP_Sniper"
		};
		hiddenSelectionsTextures[]=
		{"S-IVArmory\data\MKV\MKVG2_CO.paa"};
        hiddenSelectionsMaterials[]={"S-IVArmory\data\MKV\MKVG2.rvmat"};
	};
	class SEC_MKVCore_Helmet: OPTRE_FC_MJOLNIR_MKV_Helmet_Human
	{
		displayName="[EAGLE] MJOLNIR Mark V Gen1 Helmet";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\MKV\MKVG2_CO.paa",
			"S-IVArmory\data\MKV\MKVG2_CO.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "S-IVArmory\data\MKV\MKVG2.rvmat",
            "S-IVArmory\data\MKV\MKVG2_Visor.rvmat"
        };
	};
    class SEC_MKV_Helmet_Muffin: SEC_MKVCore_Helmet
	{
		displayName="[EAGLE] MJOLNIR Mark V Gen1 Helmet (Muffin)";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\MKV\Muffin_Armor_MKV_CO.paa",
			"S-IVArmory\data\MKV\Muffin_Armor_MKV_CO.paa"
		};
	};
	class OPTRE_FC_MJOLNIR_MKV_Helmet;
    class SEC_MKVCore_Helmet_SPARTAN: OPTRE_FC_MJOLNIR_MKV_Helmet
	{
        subItems[]={""};
		displayName="[EAGLE/SPRT] MJOLNIR Mark V Gen1 Helmet";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\MKV\MKVG2_CO.paa",
			"S-IVArmory\data\MKV\MKVG2_CO.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "S-IVArmory\data\MKV\MKVG2.rvmat",
            "S-IVArmory\data\MKV\MKVG2_Visor.rvmat"
        };
	};
	class SEC_MKVI_Armor_Justin: OPTRE_FC_MJOLNIR_Mark_VI_Armor
	{

		displayName="[EAGLE] MJOLNIR Mark VI Armor Core (Justin)";
		model="OPTRE_FC_Units\Spartan\Mark_VI_Armor";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
		MJOLNIR_shieldStrength = 85;            //Shield energy capacity
		MJOLNIR_shieldChargeValue = 1.2;           //How much shield energy gets regenerated
		MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		class XtdGearInfo
		{ 
		};
		hiddenSelections[]=
		{
			"camo",
			"attach_Seva1",
			"attach_Seva2",
			"attach_Seod1",
			"attach_Seod2",
			"attach_Sscout1",
			"attach_Sscout2",
			"attach_Ssecurity1",
			"attach_Ssecurity2",
			"attach_Ceva",
			"attach_Ceod",
			"attach_Cscout",
			"attach_Csecurity"
		};
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\MKVI\Justin_MKVI_Armor_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"S-IVArmory\data\MKVI\Justin_Mark_VI_Armor.rvmat"
		};
		class ItemInfo: VestItem
		{
			uniformModel="OPTRE_FC_Units\Spartan\Mark_VI_Armor.p3d";
			containerClass="Supply250";
			hiddenSelections[]=
			{
			"camo",
			"attach_Seva1",
			"attach_Seva2",
			"attach_Seod1",
			"attach_Seod2",
			"attach_Sscout1",
			"attach_Sscout2",
			"attach_Ssecurity1",
			"attach_Ssecurity2",
			"attach_Ceva",
			"attach_Ceod",
			"attach_Cscout",
			"attach_Csecurity"
			};
			hiddenSelectionsTextures[]=
			{};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=15;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=15;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=10;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=15;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=25;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=20;
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
	class OPTRE_FC_MJOLNIR_Mark_VI_Rogue_Helmet;
	class OPTRE_FC_MJOLNIR_Mark_VI_Rogue_Helmet_Human;
    class SEC_MKVI_RogueHelmet: OPTRE_FC_MJOLNIR_Mark_VI_Rogue_Helmet_Human
	{
		displayName = "[EAGLE] MJOLNIR Mark VI.[RG] Helmet";
		scope =2;
		scopeArsenal =2;
		class XtdGearInfo
		{ }; 
		hiddenSelectionsTextures[] = {"S-IVArmory\data\ROGUE\Mark_VI_Rogue_CO.paa"};
        hiddenSelectionsMaterials[] = {"S-IVArmory\data\ROGUE\Mark_VI_Rogue.rvmat", "S-IVArmory\data\ROGUE\Mark_VI_RVisor.rvmat"};
	};
	class SEC_MKVI_RogueHelmet_Gambit: SEC_MKVI_RogueHelmet
	{
		displayName = "[EAGLE] MJOLNIR Mark VI.[RG] Helmet (Gambit)";
		scope =2;
		scopeArsenal =2;
		hiddenSelectionsTextures[] = {"S-IVArmory\data\ROGUE\Gambit_Rogue_Helmet_CO.paa"};
	};
    class SEC_MKVI_RogueHelmet_Torch: SEC_MKVI_RogueHelmet
	{
		displayName = "[EAGLE] MJOLNIR Mark VI.[RG] Helmet (Torch)";
		scope =2;
		scopeArsenal =2;
		hiddenSelectionsTextures[] = {"S-IVArmory\data\ROGUE\Mark_VI_Rogue_Torch_CO.paa"};
	};
    class SEC_MKVI_ArmorCoreSkel: OPTRE_FC_MJOLNIR_Mark_VI_Armor
    {
        scope 															= 2;
        scopeArsenal 													= 2;
        displayName = "[EAGLE/SPRT] MJOLNIR Mark VI Armor Core";
		hiddenSelectionsTextures[] = {"S-IVArmory\data\MKVI\Mark_VI_Armor_CO.paa"};
        hiddenSelectionsMaterials[] = {"S-IVArmory\data\MKVI\Mark_VI_Armor.rvmat"};
        MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
		MJOLNIR_shieldStrength = 85;            //Shield energy capacity
		MJOLNIR_shieldChargeValue = 1.2;           //How much shield energy gets regenerated
		MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		class XtdGearInfo
		{ 
		};
    };
	class SEC_MKVI_ArmorCore: OPTRE_FC_MJOLNIR_Mark_VI_Armor_Human
    {
        scope 															= 2;
        scopeArsenal 													= 2;
        displayName = "[EAGLE] MJOLNIR Mark VI Armor Core";
		hiddenSelectionsTextures[] = {"S-IVArmory\data\MKVI\Mark_VI_Armor_CO.paa"};
        hiddenSelectionsMaterials[] = {"S-IVArmory\data\MKVI\Mark_VI_Armor.rvmat"};
        MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
		MJOLNIR_shieldStrength = 85;            //Shield energy capacity
		MJOLNIR_shieldChargeValue = 1.2;           //How much shield energy gets regenerated
		MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		class XtdGearInfo
		{ 
		};
    };
	class SEC_MKVI_ArmorCore_Horne: SEC_MKVI_ArmorCore
    {
        scope 															= 2;
        scopeArsenal 													= 2;
        displayName = "[EAGLE] MJOLNIR Mark VI Armor Core (Horne)";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 70;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 1.3;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelectionsTextures[] = {"S-IVArmory\data\MKVI\MKVI_Horne_CO.paa"};
    };
	class SEC_MKVI_ArmorCore_Recruit: SEC_MKVI_ArmorCore
    {
        scope 															= 2;
        scopeArsenal 													= 2;
        displayName = "[EAGLE] MJOLNIR Mark VI Armor Core (Recruit)";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 100;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 0.7;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelectionsTextures[] = {"S-IVArmory\data\MKVI\MKVI_Recruit_CO.paa"};
    };
	class SEC_MKVI_ArmorCore_Lichen: SEC_MKVI_ArmorCore
    {
        scope 															= 2;
        scopeArsenal 													= 2;
        displayName = "[EAGLE] MJOLNIR Mark VI Armor Core (Lichen)";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 70;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 1.3;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelectionsTextures[] = {"S-IVArmory\data\MKVI\MKVI_Lichen_CO.paa"};
    };
    class SEC_MKVI_HelmetSkel: OPTRE_FC_MJOLNIR_Mark_VI_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE/SPRT] MJOLNIR Mark VI Helmet";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\MKVI\Mark_VI_Helmet_CO.paa",
		};
        hiddenSelectionsMaterials[]=
		{
			"S-IVArmory\data\MKVI\Mark_VI_Helmet.rvmat",
            "S-IVArmory\data\MKVI\Mark_VI_Visor.rvmat"
		};
	};
	class SEC_MKVI_Helmet: OPTRE_FC_MJOLNIR_MKVI_Helmet_Human
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark VI Helmet";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\MKVI\Mark_VI_Helmet_CO.paa",
		};
        hiddenSelectionsMaterials[]=
		{
			"S-IVArmory\data\MKVI\Mark_VI_Helmet.rvmat",
            "S-IVArmory\data\MKVI\Mark_VI_Visor.rvmat"
		};
	};
	class SEC_MKVI_Helmet_Justin: OPTRE_FC_MJOLNIR_Mark_VI_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark VI Helmet (Justin)";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\MKVI\Justin_MKVI_Helmet_co.paa"
		};
	};
	class SEC_MKVI_Helmet_Grif: SEC_MKVI_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark VI Helmet (Grif)";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\MKVI\Mark_VI_Grif_Helmet_CO.paa"
		};
	};
	class SEC_MKVI_Helmet_Recruit: SEC_MKVI_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark VI Helmet (Recruit)";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\MKVI\MKVI_MKVIHelm_Recruit_CO.paa"
		};
	};
	class SEC_MKVB_ArmorCore_Steel: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Steel) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\Steel_MKV_Upper_CO.paa",
			"S-IVArmory\data\MKVB\Steel_MKV_Lower_CO.paa"
		};
	};
		class SEC_MKVB_ArmorCore_Slade: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Slade) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_Slade_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_Slade_CO.paa"
		};
	};
		class SEC_MKVB_ArmorCore_Keegan: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Keegan) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_Keegan_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_Keegan_CO.paa"
		};
	};
    class SEC_MKVB_ArmorCore_Torch: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
        MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
		MJOLNIR_shieldStrength = 75;            //Shield energy capacity
		MJOLNIR_shieldChargeValue = 1.1;           //How much shield energy gets regenerated
		MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Torch) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_Torch_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_Torch_CO.paa"
		};
	};
    class SEC_MKVB_ArmorCore_Skipper: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Skipper) Armor Core";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
		MJOLNIR_shieldStrength = 100;            //Shield energy capacity
		MJOLNIR_shieldChargeValue = 1.0;           //How much shield energy gets regenerated
		MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\Skipper_MKV_Upper.paa",
			"S-IVArmory\data\MKVB\Skipper_MKV_Lower.paa"
		};
	};
	class SEC_MKVB_ArmorCore_Morrow: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Morrow) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_Morrow_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_Morrow_CO.paa"
		};
	};
	class SEC_MKVB_ArmorCore_CPD: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Colonial Police) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MP\MKV_Upper_CPD_CO.paa",
			"S-IVArmory\data\MP\MKV_Lower_CPD_CO.paa"
		};
	};
	class SEC_MKVB_HRTBRK_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Bartlett) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_HRTBRK1_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_HRTBRK1_CO.paa"
		};
	};
	class SEC_MKVB_Moon_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Moon) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKV\Moon_MKV_Upper.paa",
			"S-IVArmory\data\MKV\Moon_MKV_Lower.paa"
		};
	};
	class SEC_MKVB_Kavik_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Kavik) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\Kavik_MKV_Upper_CO.paa",
			"S-IVArmory\data\MKVB\Kavik_MKV_Lower_CO.paa"
		};
	};
	class SEC_MKVB_Avak_ArmorCore: MAPO_MKVB_Armor
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Spawn) Armor Core";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 100;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 1.0;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\Maxilos_MKV_Upper.paa",
			"S-IVArmory\data\MKVB\Maxilos_MKV_Lower.paa"
		};
	};
	class SEC_MKVB_Carter_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (NOBLE Command) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\NOBLE\Carter_MKV_Upper_CO.paa",
			"S-IVArmory\data\NOBLE\Carter_MKV_Lower_CO.paa"
		};
	};
	class SEC_MKVB_Emile_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (NOBLE Wrath) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\NOBLE\Emile_MKV_Upper_CO.paa",
			"S-IVArmory\data\NOBLE\Emile_MKV_Lower_CO.paa"
		};
	};
	class SEC_MKVB_Kat_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (NOBLE Confidence) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\NOBLE\Kat_MKV_Upper_CO.paa",
			"S-IVArmory\data\NOBLE\Kat_MKV_Lower_CO.paa"
		};
	};
	class SEC_MKVB_Jun_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (NOBLE Strike) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\NOBLE\Jun_MKV_Upper_CO.paa",
			"S-IVArmory\data\NOBLE\Jun_MKV_Lower_CO.paa"
		};
	};
	class SEC_MKVB_Jorge_ArmorCore: MAPO_MKVB_Armor
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark IV[B] (NOBLE Justice) Armor Core";
        MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 200;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 0.5;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\NOBLE\Jorge_MKV_Upper_CO.paa",
			"S-IVArmory\data\NOBLE\Jorge_MKV_Lower_CO.paa"
		};
	};
	class SEC_MKVB_Engel_ArmorCore: MAPO_MKVB_Armor
	{
		scope=2;
		scopeArsenal=2;
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 100;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 0.7;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Angel) Armor Core";
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKV_Upper_Engel_CO.paa",
			"S-IVArmory\data\MKVB\MKV_Lower_Engel_CO.paa"
		};
	};
	class SEC_MKVB_Army_ArmorCore: SEC_MKVB_ArmorCore
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Army) Armor Core";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 100;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 1.00;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelections[]=
		{
            "camo1",
			"camo2",
		//	"mkvb_upper",
		//	"mkvb_lower"
		};
        hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKVB_Myer_Upper_CO.paa",
			"S-IVArmory\data\MKVB\MKVB_Myer_Lower_CO.paa"
		};
	};
	class SEC_MIRAGEII_CarmineCore: MA_SPI_Armor
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] Semi-Powered Infiltration Harness (Frogger)";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 50;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 1.50;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\SPI\SPI_Armour_Carmine_CO.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "S-IVArmory\data\SPI\SPI_Armour_Carmine.rvmat"
        };
	};
    class SEC_MKV_Security_Helmet: OPTRE_UNSC_Security_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[EAGLE] MJOLNIR Mark V.[M] Helmet"
        hiddenSelectionsTextures[]=
        {
            "S-IVArmory\data\SECURITY\Security_Helmet_CO.paa",
            "S-IVArmory\data\SECURITY\Security_Visor_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "S-IVArmory\data\SECURITY\Security_Helmet.rvmat",
            "S-IVArmory\data\SECURITY\Security_Visor.rvmat"
        };
    };
    class OPTRE_UNSC_CQB_Helmet;
    class SEC_MKV_CQB_Helmet: OPTRE_UNSC_CQB_Helmet
    {
        scope=2;
        scopeArsenal=2;
        displayName="[EAGLE] MJOLNIR Mark V.[CQB] Helmet"
        hiddenSelectionsTextures[]=
        {
            "S-IVArmory\data\CQB\CQB_Helmet_CO.paa",
            "S-IVArmory\data\CQB\CQB_Visor_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "S-IVArmory\data\CQB\CQB_Helmet.rvmat",
            "S-IVArmory\data\CQB\CQB_Visor.rvmat"
        };
    };
    class WSD_MKIVG3_Silver : WSD_MKVIG3_HelmetSkeleton
    {
    scope=2;
    scopeArsenal=2;
    author="Watershed Division";
    displayName="[EAGLE] MJOLNIR Gen3 Mark VI Helmet (Silver)";
    hiddenSelectionsTextures[]=
    {
            "S-IVArmory\data\MKVI\MKVIHelmet_Silver_CO.paa",
            "Spartan_Stuff\data\MKVI\MKVILights_CO.paa",
            "Spartan_Stuff\data\MKVI\MKVIVisor_CO.paa"
    };
    };
    class MAPO_SPI_Helmet;
    class MAPO_SPI_Armor;
    class SEC_SPI_Xeno_ArmorCore: MAPO_SPI_Armor
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] Mirage Type II Armor Core (Xeno)";
		MJOLNIR_isArmor = 1;
        MJOLNIR_shieldStrength = 70;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 1.1;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in second
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\SPI\SPI_Armour_Xeno_CO.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "S-IVArmory\data\SPI\SPI_Armour_Xeno.rvmat"
        };
	};
    class SEC_SPI_Xeno_Helmet: MAPO_SPI_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] Mirage Type II Helmet (Xeno)";
		MJOLNIR_helmetOutline="S-IVArmory\data\EVA\EVAHelmetOutline.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\SPI\SPI_Helmet_Xeno_CO.paa",
			"S-IVArmory\data\SPI\SPI_Visor_Xeno_CO.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "S-IVArmory\data\SPI\SPI_Helmet_Xeno.rvmat",
            "S-IVArmory\data\SPI\SPI_Visor_Xeno.rvmat"
        };
	};
    class SEC_SPIHUM_ArmorCore: MA_SPI_Armor
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] Semi-Powered Infiltration Harness (Human)";
		MJOLNIR_isArmor = 1;
        MJOLNIR_shieldStrength = 50;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 0.5;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in second
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\SPI\SPI_Armour_CO.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "S-IVArmory\data\SPI\SPI_Armour.rvmat"
        };
    };
	class SEC_SPI_ArmorCore: MAPO_SPI_Armor
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] Semi-Powered Infiltration Harness";
		MJOLNIR_isArmor = 1;
        MJOLNIR_shieldStrength = 50;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 0.5;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in second
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\SPI\SPI_Armour_CO.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "S-IVArmory\data\SPI\SPI_Armour.rvmat"
        };
        class ItemInfo: VestItem
		{
			containerClass="Supply250";
			mass=20;
			uniformModel="MA_Armor_ORION\data\Vests\SPI\SPI_Spartan.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
		    {
			"S-IVArmory\data\SPI\SPI_Armour_CO.paa"
		    };
            hiddenSelectionsMaterials[]=
            {
            "S-IVArmory\data\SPI\SPI_Armour.rvmat"
            };
            passThrough = 0.1;
			modelSides[] = { 6 };
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=30;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=30;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=30;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=40;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=40;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=40;
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
    class SEC_ASPI_ArmorCore: MAPO_SPI_Armor
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] Semi-Powered Infiltration Harness (Alpha Coy.)";
		MJOLNIR_isArmor = 1;
        MJOLNIR_shieldStrength = 50;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 0.5;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in second
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\SPI\Alpha_SPI_Armour_CO.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "S-IVArmory\data\SPI\SPI_Armour.rvmat"
        };
        class ItemInfo: VestItem
		{
			containerClass="Supply250";
			mass=20;
			uniformModel="MA_Armor_ORION\data\Vests\SPI\SPI_Spartan.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
		    {
			"S-IVArmory\data\SPI\Alpha_SPI_Armour_CO.paa"
		    };
            hiddenSelectionsMaterials[]=
            {
            "S-IVArmory\data\SPI\SPI_Armour.rvmat"
            };
            passThrough = 0.1;
			modelSides[] = { 6 };
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=30;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=30;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=30;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=40;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=40;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=40;
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
    class SEC_BSPI_ArmorCore: MAPO_SPI_Armor
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] Semi-Powered Infiltration Harness (Beta Coy.)";
		MJOLNIR_isArmor = 1;
        MJOLNIR_shieldStrength = 50;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 0.5;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in second
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\SPI\Beta_SPI_Armour_CO.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "S-IVArmory\data\SPI\SPI_Armour.rvmat"
        };
        class ItemInfo: VestItem
		{
			containerClass="Supply250";
			mass=20;
			uniformModel="MA_Armor_ORION\data\Vests\SPI\SPI_Spartan.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
		    {
			"S-IVArmory\data\SPI\Beta_SPI_Armour_CO.paa"
		    };
            hiddenSelectionsMaterials[]=
            {
            "S-IVArmory\data\SPI\SPI_Armour.rvmat"
            };
            passThrough = 0.1;
			modelSides[] = { 6 };
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=30;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=30;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=30;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=40;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=40;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=40;
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
    class SEC_GSPI_ArmorCore: MAPO_SPI_Armor
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] Semi-Powered Infiltration Harness (Gamma Coy.)";
		MJOLNIR_isArmor = 1;
        MJOLNIR_shieldStrength = 50;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 0.5;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in second
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\SPI\Gamma_SPI_Armour_CO.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "S-IVArmory\data\SPI\SPI_Armour.rvmat"
        };
        class ItemInfo: VestItem
		{
			containerClass="Supply250";
			mass=20;
			uniformModel="MA_Armor_ORION\data\Vests\SPI\SPI_Spartan.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
		    {
			"S-IVArmory\data\SPI\Gamma_SPI_Armour_CO.paa"
		    };
            hiddenSelectionsMaterials[]=
            {
            "S-IVArmory\data\SPI\SPI_Armour.rvmat"
            };
            passThrough = 0.1;
			modelSides[] = { 6 };
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=30;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=30;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=30;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=40;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=40;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=40;
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
	class SEC_MIRAGEII_Carmine_Helmet: MA_SPI_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] Semi-Powered Infiltration Helmet (Frogger)";
		MJOLNIR_helmetOutline="S-IVArmory\data\EVA\EVAHelmetOutline.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\SPI\SPI_Helmet_Carmine_CO.paa",
			"S-IVArmory\data\SPI\SPI_Visor_CO.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "S-IVArmory\data\SPI\SPI_Helmet_Carmine.rvmat",
            "S-IVArmory\data\SPI\SPI_Visor.rvmat"
        };
	};
    class SEC_SPIHUM_Helmet: MA_SPI_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] Semi-Powered Infiltration Helmet (Human)";
		MJOLNIR_helmetOutline="S-IVArmory\data\EVA\EVAHelmetOutline.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\SPI\SPI_Helmet_CO.paa",
			"S-IVArmory\data\SPI\SPI_Visor_CO.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "S-IVArmory\data\SPI\SPI_Helmet.rvmat",
            "S-IVArmory\data\SPI\SPI_Visor.rvmat"
        };
	};
	class SEC_SPI_Helmet: MAPO_SPI_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] Semi-Powered Infiltration Helmet";
		MJOLNIR_helmetOutline="S-IVArmory\data\EVA\EVAHelmetOutline.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\SPI\SPI_Helmet_CO.paa",
			"S-IVArmory\data\SPI\SPI_Visor_CO.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "S-IVArmory\data\SPI\SPI_Helmet.rvmat",
            "S-IVArmory\data\SPI\SPI_Visor.rvmat"
        };
	};
	class SEC_MKVB_ODST_Helmet: MA_Mjolnir_ODST_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[ODST] Helmet";
		MJOLNIR_helmetOutline="S-IVArmory\data\ODST\ODSTHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\ODST\ODST_Helmet_CO.paa",
			"S-IVArmory\data\ODST\ODST_Visor_CO.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"S-IVArmory\data\ODST\ODST_Helmet.rvmat",
			"S-IVArmory\data\ODST\ODST_Visor.rvmat"
		};
	};
	class SEC_MKVB_Slade_Helmet: SEC_MKVB_ODST_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[ODST] Helmet (Slade)";
		MJOLNIR_helmetOutline="S-IVArmory\data\ODST\ODSTHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\ODST\ODST_Helmet_Slade_CO.paa",
			"S-IVArmory\data\ODST\ODST_Visor_Slade_CO.paa"
		};
	};
    class SEC_MKVB_Amare_Helmet: SEC_MKVB_ODST_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[ODST] Helmet (Amare)";
		MJOLNIR_helmetOutline="S-IVArmory\data\ODST\ODSTHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\ODST\Amare_ODST_Helmet_CO.paa",
			""
		};
	};
    class SEC_MKVB_Chicken_Helmet: SEC_MKVB_ODST_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[ODST] Helmet (Chicken)";
		MJOLNIR_helmetOutline="S-IVArmory\data\ODST\ODSTHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\ODST\ODST_Helmet_Chicken_CO.paa",
			"S-IVArmory\data\ODST\ODST_Visor_Chicken_CO.paa"
		};
	};
    class SEC_MKVB_Vikt_Helmet: MAPO_Mjolnir_ODST_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[ODST] Helmet (Viktoriya)";
		MJOLNIR_helmetOutline="S-IVArmory\data\ODST\ODSTHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\ODST\MKVB_Bittencourt_ODSTHelm_CO.paa",
			"S-IVArmory\data\ODST\MKVB_Bittencourt_ODSTVisor_CO.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "S-IVArmory\data\ODST\ODST_Helmet.rvmat",
            "S-IVArmory\data\ODST\MKVB_Bittencourt_ODSTVisor.rvmat"
        };
	};
	class SEC_MKVB_Marsh_Helmet: SEC_MKVB_ODST_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[ODST] Helmet (Marsh)";
		MJOLNIR_helmetOutline="S-IVArmory\data\ODST\ODSTHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\ODST\ODST_Helmet_Marsh_CO.paa",
			"S-IVArmory\data\ODST\ODST_Visor_Marsh_CO.paa"
		};
	};
	class SEC_MKVB_Ashburn_Helmet: SEC_MKVB_ODST_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[ODST] Helmet (Ashburn)";
		MJOLNIR_helmetOutline="S-IVArmory\data\ODST\ODSTHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\ODST\ODST_Helmet_Ashburn_CO.paa",
			"S-IVArmory\data\ODST\ODST_Visor_Ashburn_CO.paa"
		};
	};
	class SEC_6STB_ODST_Helmet: SEC_MKVB_ODST_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[6STB] MJOLNIR Mark V.[ODST] Helmet (Away)";
		MJOLNIR_helmetOutline="S-IVArmory\data\ODST\ODSTHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\ODST\Gray_ODST_Helmet_CO.paa",
			"S-IVArmory\data\ODST\Sky_ODST_Visor_CO.paa"
		};
	};
    class MAPO_Mjolnir_CQC_Helmet;
	class SEC_MKVB_CQC_Helmet: MA_Mjolnir_CQC_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[CQC] Helmet";
		MJOLNIR_helmetOutline="S-IVArmory\data\CQC\CQCHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\CQC\CQC_Helmet_CO.paa",
			"S-IVArmory\data\CQC\CQC_Visor_CO.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"S-IVArmory\data\CQC\CQC_Helmet.rvmat",
			"S-IVArmory\data\CQC\CQC_Visor.rvmat"
		};
	};
    class SEC_Lawnson_CQC_Helmet: SEC_MKVB_CQC_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[CQC] Helmet (Lawnson)";
		MJOLNIR_helmetOutline="S-IVArmory\data\CQC\CQCHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\CQC\Lawnson_CQC_Helmet_CO.paa",
			"S-IVArmory\data\CQC\Lawnson_CQC_Visor_CO.paa"
		};
	};
    class OPTRE_MJOLNIR_CQC;
	class SEC_MKVB_MKV_Helmet: MA_Mjolnir_MKV_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V Helmet";
	MJOLNIR_helmetOutline="S-IVArmory\data\MKV\MKVHelmetOutline_CA.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\MKV\MKV_Helmet_CO.paa",
        "S-IVArmory\data\MKV\MKV_Visor_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\MKV\MKV_Helmet.rvmat",
        "S-IVArmory\data\MKV\MKV_Visor.rvmat"
    };
};
class SEC_MKVB_Moon_Helmet: SEC_MKVB_MKV_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V Helmet (Moon)";
	MJOLNIR_helmetOutline="S-IVArmory\data\MKV\MKVHelmetOutline_CA.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\MKV\Moon_MKV_Helmet.paa",
        "S-IVArmory\data\MKV\Moon_MKV_Visor.paa"
    };
};
class SEC_MKVB_Palmer_Helmet: SEC_MKVB_MKV_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V Helmet (Palmer)";
	MJOLNIR_helmetOutline="S-IVArmory\data\MKV\MKVHelmetOutline_CA.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\MKV\MKV_Helmet_Palmer_CO.paa",
        "S-IVArmory\data\MKV\MKV_Visor_Palmer_CO.paa"
    };
};
class SEC_MKVB_Grif_Helmet: SEC_MKVB_MKV_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V Helmet (Grif)";
	MJOLNIR_helmetOutline="S-IVArmory\data\MKV\MKVHelmetOutline_CA.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\MKV\MKV_Helmet_Grif_CO.paa",
        "S-IVArmory\data\MKV\MKV_Visor_Grif_CO.paa"
    };
};
class SEC_MKVB_Callahan_Helmet: MA_Mjolnir_Commando_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V.[K] Helmet (Callahan)";
	MJOLNIR_helmetOutline="S-IVArmory\data\MKV\MKVHelmetOutline_CA.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\COMMANDO\Commando_Helmet_Callahan_CO.paa",
        "S-IVArmory\data\COMMANDO\Gold_Commando_Visor_CO.paa"
    };
};
class SEC_Guest34th_Helmet: SEC_MKVB_MKV_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[34PRC] MJOLNIR Mark V Helmet (Away)";
	MJOLNIR_helmetOutline="S-IVArmory\data\MKV\MKVHelmetOutline_CA.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GUEST\34_MKV_Helmet.paa",
        "S-IVArmory\data\GUEST\34_MKV_Helmet_Visor_Gold.paa"
    };
};

	class SEC_MKVB_EVA_Helmet: MA_Mjolnir_EVA_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[V] Helmet";
		MJOLNIR_helmetOutline="S-IVArmory\data\EVA\EVAHelmetOutline.paa";
		hiddenSelectionsTextures[]=	
		{
			"S-IVArmory\data\EVA\EVA_Helmet_CO.paa",
			"S-IVArmory\data\EVA\EVA_Visor_CO.paa"
		};
        hiddenSelectionsMaterials[]=	
		{
			"S-IVArmory\data\EVA\EVA_Helmet.rvmat",
			"S-IVArmory\data\EVA\EVA_Visor.rvmat"
		};
	};
    class SEC_MKVB_EVAC_Helmet: MA_Mjolnir_EVA_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[V](C) Helmet";
		MJOLNIR_helmetOutline="S-IVArmory\data\EVA\EVAHelmetOutline.paa";
		hiddenSelectionsTextures[]=	
		{
			"S-IVArmory\data\EVA\EVA_Helmet_CO.paa",
			"S-IVArmory\data\NOBLE\Emile_EVA_Visor_CO.paa"
		};
        hiddenSelectionsMaterials[]=	
		{
			"S-IVArmory\data\EVA\EVA_Helmet.rvmat",
			"S-IVArmory\data\NOBLE\EVA_Visor.rvmat"
		};
	};
	class SEC_MKVB_Engel_Helmet: MAPO_Commando_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[K] Helmet (Angel)";
		MJOLNIR_helmetOutline="S-IVArmory\data\EVA\EVAHelmetOutline.paa";
		hiddenSelectionsTextures[]=	
		{
			"S-IVArmory\data\COMMANDO\Commando_Helmet_Angel_CO.paa",
			"S-IVArmory\data\COMMANDO\Commando_Visor_Angel_CO.paa"
		};
        hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\COMMANDO\Commando_Helmet.rvmat",
        "S-IVArmory\data\COMMANDO\Commando_Visor.rvmat"
    };
	};
	class SEC_MKVB_Emile_Helmet: SEC_MKVB_EVA_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[V] Helmet (NOBLE Wrath)";
		MJOLNIR_helmetOutline="S-IVArmory\data\EVA\EVAHelmetOutline.paa";
		hiddenSelectionsTextures[]=	
		{
			"S-IVArmory\data\NOBLE\Emile_EVA_Helmet_CO.paa",
			"S-IVArmory\data\Noble\Emile_EVA_Visor_CO.paa"
		};
        hiddenSelectionsMaterials[]=	
		{
			"",
			"S-IVArmory\data\Noble\EVA_Visor.rvmat"
		};
	};
	class SEC_MKVB_COMMANDO_Helmet: MA_Mjolnir_Commando_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V.[K] Helmet";
	MJOLNIR_helmetOutline="S-IVArmory\data\COMMANDO\CommandoHelmetOutline.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\COMMANDO\Commando_Helmet_CO.paa",
        "S-IVArmory\data\COMMANDO\Commando_Visor_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\COMMANDO\Commando_Helmet.rvmat",
        "S-IVArmory\data\COMMANDO\Commando_Visor.rvmat"
    };
};
	
	class SEC_MKVB_Carter_Helmet: SEC_MKVB_COMMANDO_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V.[K] Helmet (NOBLE Command)";
	MJOLNIR_helmetOutline="S-IVArmory\data\COMMANDO\CommandoHelmetOutline.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\NOBLE\Carter_Commando_Helmet_CO.paa",
        "S-IVArmory\data\NOBLE\Carter_Commando_Visor_CO.paa"
    };
};
	class SEC_MKVB_RECON_Helmet: MA_Mjolnir_Recon_Helmet
{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[R] Helmet";
		MJOLNIR_helmetOutline="S-IVArmory\data\RECON\ReconHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\RECON\Recon_Helmet_CO.paa",
			"S-IVArmory\data\RECON\Recon_Visor_CO.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"S-IVArmory\data\RECON\Recon_Helmet.rvmat",
			"S-IVArmory\data\RECON\Recon_Visor.rvmat"
		};
};
	class SEC_RECON_Patterson_Helmet: SEC_MKVB_RECON_Helmet
{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[R] Helmet (Patterson)";
		MJOLNIR_helmetOutline="S-IVArmory\data\RECON\ReconHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\RECON\Recon_Helmet_Patterson_CO.paa",
			"S-IVArmory\data\RECON\Recon_Visor_Patterson_CO.paa"
		};
};
	class SEC_MKVB_GRENADIER_Helmet: MA_Mjolnir_Grenadier_Helmet
{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[G] Helmet";
		MJOLNIR_helmetOutline="S-IVArmory\data\GRENADIER\GrenadierHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\GRENADIER\Grenadier_Helmet_CO.paa",
			"S-IVArmory\data\GRENADIER\Grenadier_Visor_CO.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"S-IVArmory\data\GRENADIER\Grenadier_Helmet.rvmat",
			"S-IVArmory\data\GRENADIER\grenadier_visor.rvmat"
		};
};
class SEC_Man_GRENADIER_Helmet: SEC_MKVB_GRENADIER_Helmet
{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[G] Helmet (Man)";
		MJOLNIR_helmetOutline="S-IVArmory\data\GRENADIER\GrenadierHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\GRENADIER\Grenadier_Helmet_Man_CO.paa",
			"S-IVArmory\data\GRENADIER\Grenadier_Visor_Man_CO.paa"
		};
};
class MAPO_Grenadier_Helmet;
class SEC_MKVB_Jorge_Helmet: MAPO_Grenadier_Helmet
{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark IV.[G] Helmet (NOBLE Justice)";
		MJOLNIR_helmetOutline="S-IVArmory\data\GRENADIER\GrenadierHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\NOBLE\Jorge_Grenadier_Helmet_CO.paa",
			"S-IVArmory\data\NOBLE\Jorge_Grenadier_Visor_CO.paa"
		};
};
class SEC_MKVB_Saber_Helmet: MAPO_Grenadier_Helmet
    {
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark IV.[G] Helmet (Saber)";
		MJOLNIR_helmetOutline="S-IVArmory\data\GRENADIER\GrenadierHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\GRENADIER\Grenadier_Helmet_Saber_CO.paa",
			"S-IVArmory\data\GRENADIER\Grenadier_Visor_CO.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"S-IVArmory\data\GRENADIER\Grenadier_Helmet_Saber.rvmat",
			"S-IVArmory\data\GRENADIER\grenadier_visor.rvmat"
		};
    };
class SEC_MKVB_Morrow_Grenadier_Helmet: SEC_MKVB_GRENADIER_Helmet
{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[G] Helmet (Morrow)";
		MJOLNIR_helmetOutline="S-IVArmory\data\GRENADIER\GrenadierHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\GRENADIER\Grenadier_Helmet_Morrow_CO.paa",
			"S-IVArmory\data\GRENADIER\Grenadier_Visor_Morrow_CO.paa"
		};
};
	class SEC_MKVB_SCOUTGEN1_Helmet: MA_Mjolnir_Scout_Helmet
{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[S] Gen1 Helmet";
		MJOLNIR_helmetOutline="S-IVArmory\data\SCOUT\ScoutHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\SCOUT\Scout_Helmet_CO.paa",
			"S-IVArmory\data\SCOUT\Scout_Visor_CO.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"S-IVArmory\data\SCOUT\Scout_Helmet.rvmat",
			"S-IVArmory\data\SCOUT\Scout_Visor.rvmat"
		};
};
class MAPO_HR_Scout_Helmet;
class SEC_CBRNPipes_NVG: MA_EOD_CBRN_Attachment_NVG
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Up-Armor/EOD Attachment (NVG)";
    hiddenSelections[]=
    {
        "Camo1"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\EOD\CBRN_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\EOD\CBRN.rvmat"
    };
};
class SEC_CBRNPipes_Minuano: SEC_CBRNPipes_NVG
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Up-Armor/EOD Attachment (Minuano)";
    hiddenSelections[]=
    {
        "Camo1"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\EOD\Minuano_CBRN_CO.paa"
    };
};
class MA_Scout_Attachment_NVG;
class SEC_ScoutAttachment_Codex: MA_Scout_Attachment_NVG
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Hardened Uplink/RS (Codex)";
    hiddenSelections[]=
    {
        "Camo1"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\SCOUT\Codex_Scout_Attachment_CO.paa"
    };
};
class SEC_MKVB_Jun_Helmet: SEC_MKVB_SCOUTGEN1_Helmet
{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[S] Helmet (NOBLE Strike)";
		MJOLNIR_helmetOutline="S-IVArmory\data\SCOUT\ScoutHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\NOBLE\Jun_Scout_Helmet_CO.paa",
			"S-IVArmory\data\NOBLE\Jun_Scout_Visor_CO.paa"
		};
};
	class SEC_MKVB_GUNGNIR_Helmet: MA_Mjolnir_Gungnir_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V.[GNG] Helmet";
	MJOLNIR_helmetOutline="S-IVArmory\data\GUNGNIR\GungnirHelmetOutline.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GUNGNIR\Gungnir_Helmet_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GUNGNIR\Gungnir_Helmet.rvmat"
    };
};
class SEC_MKVB_Horne_Helmet: SEC_MKVB_GUNGNIR_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V.[GNG] Helmet (Horne)";
	MJOLNIR_helmetOutline="S-IVArmory\data\GUNGNIR\GungnirHelmetOutline.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GUNGNIR\MKVB_Horne_GungnirHelm_CO.paa"
    };
};
class SEC_MKVB_Jakes_Helmet: SEC_MKVB_GUNGNIR_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V.[GNG] Helmet (Jakes)";
	MJOLNIR_helmetOutline="S-IVArmory\data\GUNGNIR\GungnirHelmetOutline.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GUNGNIR\GUNGNIR_Helmet_Jakes_CO.paa"
    };
};
class SEC_MKVB_Rookie_Helmet: SEC_MKVB_GUNGNIR_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V.[GNG] Helmet (Rookie)";
	MJOLNIR_helmetOutline="S-IVArmory\data\GUNGNIR\GungnirHelmetOutline.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GUNGNIR\Rook_GUNGNIR_Helmet_CO.paa"
    };
};
class SEC_MKVB_Kara_Helmet: SEC_MKVB_GUNGNIR_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V.[GNG] Helmet (Collin)";
	MJOLNIR_helmetOutline="S-IVArmory\data\GUNGNIR\GungnirHelmetOutline.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GUNGNIR\GUNGNIR_Helmet_Kara_CO.paa"
    };
};
	class SEC_MKVB_JFO_Helmet: MA_Mjolnir_JFO_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V.[J] Helmet";
	MJOLNIR_helmetOutline="S-IVArmory\data\JFO\JFOHelmetOutline.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\JFO\JFO_Helmet_CO.paa",
        "S-IVArmory\data\JFO\JFO_Visor_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\JFO\JFO_Helmet.rvmat",
        "S-IVArmory\data\JFO\JFO_Visor.rvmat"
    };
};
class MAPO_JFO_Helmet;
class SEC_MKVB_JFO_Joker_Helmet: MAPO_JFO_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V.[J] Helmet (Mimic)";
	MJOLNIR_helmetOutline="S-IVArmory\data\JFO\JFOHelmetOutline.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\JFO\JFO_Helmet_Joker_co.paa",
        "S-IVArmory\data\JFO\JFO_Visor_Joker_co.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\JFO\JFO_Helmet.rvmat",
        "S-IVArmory\data\JFO\JFO_Visor.rvmat"
    };
};
class SEC_MKVB_JFO_Lichen_Helmet: SEC_MKVB_JFO_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V.[J] Helmet (Lichen)";
	MJOLNIR_helmetOutline="S-IVArmory\data\JFO\JFOHelmetOutline.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\JFO\MKVB_Lichen_JFOHelm_CO.paa",
        "S-IVArmory\data\JFO\MKVB_Lichen_JFOVisor_CO.paa"
    };
};
	
class SEC_MKVB_AA_Helmet: MA_Mjolnir_Mjolnir_AA_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V.[AA] Helmet";
	MJOLNIR_helmetOutline="S-IVArmory\data\AA\AAHelmetOutline.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\AA\AA_Helmet_CO.paa",
        "S-IVArmory\data\AA\AA_Visor_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\AA\AA_Helmet.rvmat",
        "S-IVArmory\data\AA\AA_Visor.rvmat"
    };
};
	class SEC_Army_AA_Helmet: SEC_MKVB_AA_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V.[AA] Helmet (Army)";
	MJOLNIR_helmetOutline="S-IVArmory\data\AA\AAHelmetOutline.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\AA\Myer_AA_Helmet.paa",
        "S-IVArmory\data\AA\Myer_AA_Visor.paa"
    };
};
	class SEC_MKVB_Kat_Helmet: SEC_MKVB_AA_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V.[AA] Helmet (Noble Confidence)";
	MJOLNIR_helmetOutline="S-IVArmory\data\AA\AAHelmetOutline.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\NOBLE\Kat_AA_Helmet_CO.paa",
        "S-IVArmory\data\NOBLE\Kat_AA_Visor_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "",
        "S-IVArmory\data\NOBLE\AA_Visor.rvmat"
    };
};
class SEC_MKVB_22nd_Helmet: SEC_MKVB_AA_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[22RDF] MJOLNIR Mark V.[AA] Helmet (Away)";
	MJOLNIR_helmetOutline="S-IVArmory\data\AA\AAHelmetOutline.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GUEST\AA_Helmet_22nd_CO.paa",
        "S-IVArmory\data\GUEST\AA_Visor_22nd_CO.paa"
    };
};
	class SEC_MKVB_PILOT_Helmet: MA_Mjolnir_Pilot_Helmet
{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[P] Helmet";
		MJOLNIR_helmetOutline="S-IVArmory\data\EVA\EVAHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\PILOT\Pilot_Helmet_CO.paa",
			"S-IVArmory\data\PILOT\Pilot_Visor_CO.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"S-IVArmory\data\PILOT\Pilot_Helmet.rvmat",
			"S-IVArmory\data\PILOT\Pilot_Visor.rvmat"
		};
};
class SEC_MKVB_HRTBRK_Helmet: SEC_MKVB_PILOT_Helmet
{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[P] Helmet (Bartlett)";
		MJOLNIR_helmetOutline="S-IVArmory\data\EVA\EVAHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\PILOT\Pilot_HRTBRK1_Helmet_CO.paa",
			"S-IVArmory\data\PILOT\Pilot_HRTBRK1_Visor_CO.paa"
		};
};	
class SEC_MKVB_GUARDIAN_Helmet: SEC_MKVB_PILOT_Helmet
{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[P] Helmet (Guardian Pilot)";
		MJOLNIR_helmetOutline="S-IVArmory\data\EVA\EVAHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\PILOT\Guardian_Pilot_Helmet_CO.paa",
			"S-IVArmory\data\PILOT\Guardian_Pilot_Visor_CO.paa"
		};
};	
class SEC_MKVB_Kavik_Helmet: SEC_MKVB_Pilot_Helmet
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark V.[P] Helmet (Kavik)";
	MJOLNIR_helmetOutline="S-IVArmory\data\EVA\EVAHelmetOutline.paa";
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\PILOT\Kavik_Pilot_Helmet_CO.paa",
        "S-IVArmory\data\PILOT\Black_Pilot_Visor_CO.paa"
    };
    hiddenSelectionsMaterials[]=
	{	
		"",
		"S-IVArmory\data\PILOT\Pilot_BlackVisor.rvmat"
	};	
};
	class SEC_MKVB_MP_Helmet: MA_Mjolnir_MP_Helmet
{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[MP] Helmet";
		MJOLNIR_helmetOutline="S-IVArmory\data\MP\MPHelmetOutline_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\MP\MP_Helmet_CO.paa",
			"S-IVArmory\data\MP\MP_Visor_CO.paa"
		};
        hiddenSelectionsMaterials[]=
		{
			"S-IVArmory\data\MP\MP_Helmet.rvmat",
			"S-IVArmory\data\MP\MP_Visor.rvmat"
		};
	};
	class SEC_MKVB_CPD_Helmet: SEC_MKVB_MP_Helmet
    {
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[MP] Helmet (Colonial Police)";
		MJOLNIR_helmetOutline="S-IVArmory\data\MP\MPHelmetOutline_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\MP\MP_Helmet_CPD_CO.paa",
			"S-IVArmory\data\MP\MP_Visor_CPD_CO.paa"
		};
	};
    class SEC_MKVB_Crew_Helmet: SEC_MKVB_MP_Helmet
    {
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[MP] Helmet (Guardian Crew)";
		MJOLNIR_helmetOutline="S-IVArmory\data\MP\MPHelmetOutline_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\MP\Guardian_MP_Helmet_CO.paa",
			"S-IVArmory\data\MP\Guardian_MP_Visor_CO.paa"
		};
	};
	class SEC_MKVB_Helmet: MA_Mjolnir_MKVB_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] Helmet";
		MJOLNIR_helmetOutline="S-IVArmory\data\MKVB\MKVBHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
            "S-IVArmory\data\MKVB\MKVB_Helmet_CO.paa",
			"S-IVArmory\data\MKVB\MKVB_Visor_CO.paa"
		};
        hiddenSelectionsMaterials[]=
		{
            "S-IVArmory\data\MKVB\MKVB_Helmet.rvmat",
			"S-IVArmory\data\MKVB\MKVB_Visor.rvmat"
		};
	};
    class SEC_MKVB_Skipper_Helmet: SEC_MKVB_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] Helmet (Skipper)";
		MJOLNIR_helmetOutline="S-IVArmory\data\MKVB\MKVBHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\MKVB\Skipper_MKVB_Helmet.paa",
			"S-IVArmory\data\MKVB\Skipper_MKVB_Visor.paa"
		};
	};
	class SEC_MKVB_Steel_Helmet: SEC_MKVB_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[B] (Steel) Helmet";
		MJOLNIR_helmetOutline="S-IVArmory\data\MKVB\MKVBHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\MKVB\Steel_MKVB_Helmet_CO.paa",
			"S-IVArmory\data\MKVB\Gold_MKVB_Visor_CO.paa"
		};
	};
	class SEC_MKVB_EOD_GEN2_Helmet: MA_Mjolnir_H3_EOD_Helmet
{
        scope=1;
        scopeArsenal=0;
		displayName="[EAGLE] MJOLNIR Mark V.[EOD] Gen 2 Helmet";
		MJOLNIR_helmetOutline="S-IVArmory\data\EOD\EODH3HelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\EOD\Gray_EOD_Helmet_H3_CO.paa",
			"S-IVArmory\data\EOD\Gold_EOD_Visor_H3_CO.paa",
            "MA_Armor\data\Attachments\EOD_CBRN\Color_Variants\Black_CBRN_CO.paa"
		};
};
    class MAPO_Mjolnir_H3_EOD_Helmet;
	class SEC_MKVB_EOD_Avak_Helmet: MAPO_Mjolnir_H3_EOD_Helmet
    {
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[EOD] Helmet (Spawn)";
		MJOLNIR_helmetOutline="S-IVArmory\data\EOD\EODH3HelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\EOD\Maxilos_EODH3_Helmet.paa",
			"S-IVArmory\data\EOD\Maxilos_EODH3_Visor.paa",
            "MA_Armor\data\Attachments\EOD_CBRN\Color_Variants\Black_CBRN_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"S-IVArmory\data\EOD\Maxilos_EODH3_Visor.rvmat",
			""
		};
		class ItemInfo: ItemInfo
		{
            uniformModel="MA_Armor_ORION\data\Helmets\H3_EOD\H3_EOD_Helmet_Spartan.p3d";
			hiddenSelectionsTextures[]={};
		};
    };
	class SEC_MKVB_EOD_GEN1_Helmet: MA_Mjolnir_HR_EOD_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[EOD] Gen 1 Helmet";
		MJOLNIR_helmetOutline="S-IVArmory\data\EOD\EODHRHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\EOD\EOD_Helmet_R_CO.paa",
			"S-IVArmory\data\EOD\EOD_Visor_R_CO.paa",
            ""		
        };
        hiddenSelectionsMaterials[]=
		{
			"S-IVArmory\data\EOD\EOD_Helmet.rvmat",
			"S-IVArmory\data\EOD\EOD_Visor.rvmat",
            ""		
        };
	};
    class SEC_MKVB_EOD_Minuano_Helmet: SEC_MKVB_EOD_GEN1_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[EOD] Helmet (Minuano)";
		MJOLNIR_helmetOutline="S-IVArmory\data\EOD\EODHRHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\EOD\Minuano_EOD_R_Helmet.paa",
			"S-IVArmory\data\EOD\Minuano_EOD_R_VISR.paa",
            ""		
        };
	};
    class SEC_MKVB_EOD_Type_Helmet: SEC_MKVB_EOD_GEN1_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark V.[EOD] Helmet (Type)";
		MJOLNIR_helmetOutline="S-IVArmory\data\EOD\EODHRHelmetOutline.paa";
		hiddenSelectionsTextures[]=
		{
			"S-IVArmory\data\EOD\EOD_Helmet_R_Type_CO.paa",
			"S-IVArmory\data\EOD\EOD_Visor_R_Type_CO.paa",
            ""		
        };
	};
	class SEC_HUMAN_MKIV_Helmet: MA_Mjolnir_MKIV_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Gen 2 Mark IV Helmet";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Helmet_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Visor_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Helmet.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Visor.rvmat"
		};
	};
	class SEC_Keller_MKIV_Helmet: MAPO_MKIV_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Gen 2 Mark IV Helmet (Keller)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Helmet_Keller_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Visor_Keller_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Helmet.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Visor.rvmat"
		};
	};
    class SEC_Gwain_MKIV_Helmet: MAPO_MKIV_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Gen 2 Mark IV Helmet (Gwain)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Helmet_Gwain_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Visor_Gwain_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Helmet_Gwain.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Visor_Gwain.rvmat"
		};
    };
	class SEC_Human_MKIV_Armor : MA_MKIV_Armor
	{
		scope=2;
		scopeArsenal=2;
		displayName = "[EAGLE] MJOLNIR Gen 2 Mark IV Armor";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 100;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 0.7;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Upper_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Lower_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Upper.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Lower.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat"
		};
	};
	class SEC_Hesh_MKIV_Armor : SEC_Human_MKIV_Armor
	{
		scope=2;
		scopeArsenal=2;
		displayName = "[EAGLE] MJOLNIR Gen 2 Mark IV Armor (Hesh)";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 70;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 1.3;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Upper_Hesh_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Lower_Hesh_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_Hesh_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_Hesh_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Upper_Hesh.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Lower_Hesh.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_Hesh.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_Hesh.rvmat"
		};
	};
    class SEC_Vikt_MKIV_Armor : MAPO_MKIV_Armor
	{
		scope=2;
		scopeArsenal=2;
		displayName = "[EAGLE] MJOLNIR Gen 2 Mark IV Armor (Viktoriya)";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 100;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 0.7;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Viktoriya_Upper_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Lower_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Upper.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Lower.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat"
		};
	};
	class SEC_Keller_MKIV_Armor : MAPO_MKIV_Armor
	{
		scope=2;
		scopeArsenal=2;
		displayName = "[EAGLE] MJOLNIR Gen 2 Mark IV Armor (Keller)";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 100;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 0.7;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Upper_Keller_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Lower_Keller_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_Keller_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_Keller_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Upper.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Lower.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat"
		};
	};
    class SEC_Gwain_MKIV_Armor : MAPO_MKIV_Armor
	{
		scope=2;
		scopeArsenal=2;
		displayName = "[EAGLE] MJOLNIR Gen 2 Mark IV Armor (Gwain)";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 100;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 0.7;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Upper_Gwain_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Lower_Gwain_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_Gwain_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_Gwain_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Upper_Gwain.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Lower_Gwain.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_Gwain.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_Gwain.rvmat"
		};
    };
	class SCARLET_SPARTAN_MKIV_Helmet: MAPO_MKIV_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark IV Helmet";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Helmet_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Visor_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Helmet.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Visor.rvmat"
		};
	};
	class SILVER_CAIN_MKIVO_Helmet : OPTRE_MJOLNIR_Operator
	{
		scope=2;
		scopeArsenal=2;
		displayName = "[EAGLE] MJOLNIR Mark IV.[O] Helmet (Cain)";
		model = "\OPTRE_MJOLNIR_Units\Operator_Helmet_Spartan.p3d";
		MJOLNIR_helmetOutline="S-IVArmory\data\OPERATOR\OperatorHelmetOutline.paa";
		hiddenSelections[] =
		{
			"camo1",    
			"camo2",
            "camo_nvg"
		};
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\OPERATOR\MKVB_Operator_Helmet_Cain_CO.paa",
			"S-IVArmory\data\OPERATOR\operatorvisor_CO.paa",
            "S-IVArmory\data\OPERATOR\MKVB_Operator_Attachment_Cain_CO.paa"
		};
        hiddenSelectionsMaterials[] =
		{
			"S-IVArmory\data\OPERATOR\operatorhelmet.rvmat",
			"S-IVArmory\data\OPERATOR\operatorvisor.rvmat",
            "S-IVArmory\data\OPERATOR\MKVB_Operator_Attachment_Cain.rvmat"
		};
	};
    class SEC_MKVO_Helmet : OPTRE_UNSC_Operator_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName = "[EAGLE] MJOLNIR Mark V.[O] Helmet";
		MJOLNIR_helmetOutline="S-IVArmory\data\OPERATOR\OperatorHelmetOutline.paa";
		hiddenSelections[] =
		{
			"camo1",    
			"camo2",
            "camo_nvg"
		};
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\OPERATOR\operatorhelmet_CO.paa",
			"S-IVArmory\data\OPERATOR\operatorvisor_CO.paa",
            "S-IVArmory\data\OPERATOR\MKVB_Operator_Attachment_Cain_CO.paa"
		};
        hiddenSelectionsMaterials[] =
		{
			"S-IVArmory\data\OPERATOR\operatorhelmet.rvmat",
			"S-IVArmory\data\OPERATOR\operatorvisor.rvmat",
            "S-IVArmory\data\OPERATOR\MKVB_Operator_Attachment_Cain.rvmat"
		};
	};
	class SCARLET_LEVI_MKIV_Helmet: SCARLET_SPARTAN_MKIV_Helmet
	{
        scope=2;
        scopeArsenal=2;
		displayName="[EAGLE] MJOLNIR Mark IV Helmet (Levi)";
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Helmet_Levi_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Visor_CO.paa"
		};
	};
	class SCARLET_SPARTAN_MKIV_Armor : MAPO_MKIV_Armor
	{
		displayName = "[EAGLE] MJOLNIR Mark IV Armor Core";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
        MJOLNIR_shieldStrength = 200;            //Shield energy capacity
        MJOLNIR_shieldChargeValue = 0.5;           //How much shield energy gets regenerated
        MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Upper_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Lower_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Upper.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Lower.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat"
		};
		class ItemInfo : VestItem
		{
			vestType = "Rebreather";
			hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				//	"mkvb_upper",
				//	"mkvb_lower",
				//	"mkiv_left",
				//	"mkiv_right"
			};
			hiddenSelectionsTextures[] =
			{
			"S-IVArmory\data\MKIV\MKIV_Upper_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Lower_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa"
			};
			hiddenSelectionsMaterials[] =
			{
			"S-IVArmory\data\MKIV\MKIV_Upper.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Lower.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
			"S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat"
			};
			uniformModel = "MA_Armor_ORION\data\Vests\MKIV\MKIV_Spartan.p3d";
			containerClass = "Supply250";
			mass = 20;
			passThrough = 0.1;
			modelSides[] = { 6 };
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=30;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=30;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=30;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=40;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=40;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=40;
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
	class SCARLET_Levi_MKIV_Armor : SCARLET_SPARTAN_MKIV_Armor
	{
		displayName = "[EAGLE] MJOLNIR Mark IV Armor Core (Levi)";
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Upper_Levi_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Lower_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_Levi_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Shoulders_Levi_CO.paa"
		};
	};
	class SILVER_Justin_MKIV_Armor : SCARLET_SPARTAN_MKIV_Armor
	{
		displayName = "[EAGLE] MJOLNIR Mark IV Armor Core (Justin)";
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Upper_Justin_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Lower_CO.paa",
			"S-IVArmory\data\MKIV\FoR_MKIV_Shoulders_Silver_co.paa",
			"S-IVArmory\data\MKIV\FoR_MKIV_Shoulders_Silver_co.paa"
		};
	};
	class SCARLET_Saber_MKIV_Armor : SCARLET_SPARTAN_MKIV_Armor
	{
		displayName = "[EAGLE] MJOLNIR Mark IV Armor Core (Saber)";
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Upper_Saber_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Lower_CO.paa",
			"S-IVArmory\data\MKIV\FoR_MKIV_Shoulders_Silver_co.paa",
			"S-IVArmory\data\MKIV\FoR_MKIV_Shoulders_Silver_co.paa"
		};
	};
	class SILVER_Cain_MKIV_Armor : SCARLET_SPARTAN_MKIV_Armor
	{
		displayName = "[EAGLE] MJOLNIR Mark IV Armor Core (Cain)";
		MJOLNIR_isArmor = 1;                //Add this to a vest to make it use the system
		MJOLNIR_shieldStrength = 85;            //Shield energy capacity
		MJOLNIR_shieldChargeValue = 1.2;           //How much shield energy gets regenerated
		MJOLNIR_shieldChargeDelay = 0.10;         //Recharge delay in seconds
		hiddenSelectionsTextures[] =
		{
			"S-IVArmory\data\MKIV\MKIV_Upper_Cain_CO.paa",
			"S-IVArmory\data\MKIV\MKIV_Lower_CO.paa",
			"S-IVArmory\data\MKIV\FoR_MKIV_Shoulders_Silver_co.paa",
			"S-IVArmory\data\MKIV\FoR_MKIV_Shoulders_Silver_co.paa"
		};
	};
};

	class CfgVehicles
	{
		class B_Kitbag_rgr;
		class Mjolnir_MKIV_Shoulders;
		class Mjolnir_MKIV_Shoulders_Spartan;
		class Mjolnir_MKV_Shoulders; 
		class Mjolnir_Scout_Shoulders;
		class OPTRE_MJONLIR_MKVI_Human;
		class Mjolnir_MKV_Shoulders_Spartan;
		
		class SEC_MKVB_Shoulders : Mjolnir_MKV_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Mark V Shoulders";
		maximumLoad = 400;
        mass = 50;
        hiddenSelectionsTextures[] =
        {
            "S-IVArmory\data\COMMANDO\Commando_Shoulders_CO.paa",
            "S-IVArmory\data\COMMANDO\Commando_Shoulders_CO.paa",
            "S-IVArmory\data\CQC\CQC_Shoulders_CO.paa",
            "S-IVArmory\data\CQC\CQC_Shoulders_CO.paa",
            "S-IVArmory\data\EVA\EVA_Shoulders_CO.paa",
            "S-IVArmory\data\EVA\EVA_Shoulders_CO.paa",
            "S-IVArmory\data\GRENADIER\GRENADIER_Shoulders_CO.paa",
            "S-IVArmory\data\GRENADIER\GRENADIER_Shoulders_CO.paa",
            "S-IVArmory\data\GUNGNIR\GUNGNIR_Shoulders_CO.paa",
            "S-IVArmory\data\GUNGNIR\GUNGNIR_Shoulders_CO.paa",
            "",
            "",
            "S-IVArmory\data\JFO\JFO_Shoulders_CO.paa",
            "S-IVArmory\data\JFO\JFO_Shoulders_CO.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "S-IVArmory\data\MKV\MKV_Shoulders_CO.paa",
            "S-IVArmory\data\MKV\MKV_Shoulders_CO.paa",
            "S-IVArmory\data\ODST\ODST_Shoulders_CO.paa",
            "S-IVArmory\data\ODST\ODST_Shoulders_CO.paa",
            "S-IVArmory\data\OPERATOR\Operator_Shoulders_CO.paa",
            "S-IVArmory\data\OPERATOR\Operator_Shoulders_CO.paa",
            "S-IVArmory\data\RECON\Recon_Shoulders_CO.paa",
            "S-IVArmory\data\RECON\Recon_Shoulders_CO.paa",
            "S-IVArmory\data\SECURITY\Security_Shoulders_CO.paa",
            "S-IVArmory\data\SECURITY\Security_Shoulders_CO.paa",
            "S-IVArmory\data\SCOUT\Scout_Shoulders_CO.paa",
            "S-IVArmory\data\SCOUT\Scout_Shoulders_CO.paa"
        };
        	hiddenSelectionsMaterials[] =
        {
            "S-IVArmory\data\COMMANDO\Commando_Shoulders.rvmat",
            "S-IVArmory\data\COMMANDO\Commando_Shoulders.rvmat",
            "S-IVArmory\data\CQC\CQC_Shoulders.rvmat",
            "S-IVArmory\data\CQC\CQC_Shoulders.rvmat",
            "S-IVArmory\data\EVA\EVA_Shoulders.rvmat",
            "S-IVArmory\data\EVA\EVA_Shoulders.rvmat",
            "S-IVArmory\data\GRENADIER\GRENADIER_Shoulders.rvmat",
            "S-IVArmory\data\GRENADIER\GRENADIER_Shoulders.rvmat",
            "S-IVArmory\data\GUNGNIR\GUNGNIR_Shoulders.rvmat",
            "S-IVArmory\data\GUNGNIR\GUNGNIR_Shoulders.rvmat",
            "",
            "",
            "S-IVArmory\data\JFO\JFO_Shoulders.rvmat",
            "S-IVArmory\data\JFO\JFO_Shoulders.rvmat",
            "S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
            "S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
            "S-IVArmory\data\MKV\MKV_Shoulders.rvmat",
            "S-IVArmory\data\MKV\MKV_Shoulders.rvmat",
            "S-IVArmory\data\ODST\ODST_Shoulders.rvmat",
            "S-IVArmory\data\ODST\ODST_Shoulders.rvmat",
            "S-IVArmory\data\OPERATOR\Operator_Shoulders.rvmat",
            "S-IVArmory\data\OPERATOR\Operator_Shoulders.rvmat",
            "S-IVArmory\data\RECON\Recon_Shoulders.rvmat",
            "S-IVArmory\data\RECON\Recon_Shoulders.rvmat",
            "S-IVArmory\data\SECURITY\Security_Shoulders.rvmat",
            "S-IVArmory\data\SECURITY\Security_Shoulders.rvmat",
            "S-IVArmory\data\SCOUT\Scout_Shoulders.rvmat",
            "S-IVArmory\data\SCOUT\Scout_Shoulders.rvmat"
        };
    };
    class SEC_MKVB_Shoulders_Skipper : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Skipper)";
		maximumLoad = 400;
        mass = 50;
		hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
       "odst_left",
        "odst_right",
        //"operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        //"security_right",
      "scout_left",
      "scout_right"
    };
        hiddenSelectionsTextures[] =
        {
            "S-IVArmory\data\COMMANDO\Minuano_Commando_Shoulders_CO.paa",
            "S-IVArmory\data\COMMANDO\Minuano_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "S-IVArmory\data\MKVB\MKV_Shoulders_Joe_CO.paa",
            "S-IVArmory\data\MKVB\MKV_Shoulders_Joe_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "S-IVArmory\data\OPERATOR\Skipper_Operator_Shoulder.paa",
            "S-IVArmory\data\OPERATOR\Skipper_Operator_Shoulder.paa",
            "S-IVArmory\data\RECON\Minuano_Recon_Shoulders_CO.paa",
            "S-IVArmory\data\RECON\Minuano_Recon_Shoulders_CO.paa",
            "S-IVArmory\data\SECURITY\Skipper_Security_Shoulder.paa",
            "S-IVArmory\data\SECURITY\Skipper_Security_Shoulder.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
        };
    };
    class SEC_MKVB_Shoulders_Torch : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Torch)";
		maximumLoad = 400;
        mass = 50;
		hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        //"commando_right",
        "cqc_left",
        "cqc_right",
        //"eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
       "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
      "scout_left",
      "scout_right"
    };
        hiddenSelectionsTextures[] =
        {
            "S-IVArmory\data\COMMANDO\Commando_Shoulders_Torch_CO.paa",
            "S-IVArmory\data\COMMANDO\Commando_Shoulders_Torch_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "S-IVArmory\data\EVA\EVA_Shoulders_Torch_CO.paa",
            "S-IVArmory\data\EVA\EVA_Shoulders_Torch_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "S-IVArmory\data\MKVB\MKV_Shoulders_Joe_CO.paa",
            "S-IVArmory\data\MKVB\MKV_Shoulders_Joe_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "S-IVArmory\data\OPERATOR\Skipper_Operator_Shoulder.paa",
            "S-IVArmory\data\OPERATOR\Skipper_Operator_Shoulder.paa",
            "S-IVArmory\data\RECON\Minuano_Recon_Shoulders_CO.paa",
            "S-IVArmory\data\RECON\Minuano_Recon_Shoulders_CO.paa",
            "S-IVArmory\data\SECURITY\Skipper_Security_Shoulder.paa",
            "S-IVArmory\data\SECURITY\Skipper_Security_Shoulder.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
        };
    };
    class SEC_MKVB_Shoulders_Minuano : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Minuano)";
		maximumLoad = 400;
        mass = 50;
		hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        //"commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
       "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        //"recon_right",
        "security_left",
        "security_right",
      "scout_left",
      "scout_right"
    };
        hiddenSelectionsTextures[] =
        {
            "S-IVArmory\data\COMMANDO\Minuano_Commando_Shoulders_CO.paa",
            "S-IVArmory\data\COMMANDO\Minuano_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "S-IVArmory\data\MKVB\MKV_Shoulders_Joe_CO.paa",
            "S-IVArmory\data\MKVB\MKV_Shoulders_Joe_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "S-IVArmory\data\RECON\Minuano_Recon_Shoulders_CO.paa",
            "S-IVArmory\data\RECON\Minuano_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
        };
    };
    class SEC_MKVB_Shoulders_Hawkins : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Hawkins)";
		maximumLoad = 400;
        mass = 50;
		hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        //"mkiv_left",
        //"mkiv_right",
        "mkv_left",
        "mkv_right",
       "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
      "scout_left",
      "scout_right"
    };
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_Hawkins_CO.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_Hawkins_CO.paa",
            "",
            "",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
        };
    };
    class SEC_MKVB_Shoulders_Grif : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Grif)";
		maximumLoad = 400;
        mass = 50;
		hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        //"mkv_left",
        //"mkv_right",
       "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
      "scout_left",
      "scout_right"
    };
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "S-IVArmory\data\MKV\MKV_Shoulders_Grif_CO.paa",
            "S-IVArmory\data\MKV\MKV_Shoulders_Grif_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
        };
    };
	class SEC_Guest34th_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[34PRC] MJOLNIR MKV Shoulders (Away)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "S-IVArmory\data\GUEST\34_MKV_Shoulders_CO.paa",
            "S-IVArmory\data\GUEST\34_MKV_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
        };
    };
	class SEC_Guest22nd_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[22RDF] MJOLNIR MKV Shoulders (Away)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "S-IVArmory\data\GUEST\MKV_Shoulders_22nd_CO.paa",
            "S-IVArmory\data\GUEST\MKV_Shoulders_22nd_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
        };
    };
	class SEC_MKVB_CPD_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Colonial Police Shoulders";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        //"gungnir_left",
        //"gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
       "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\GUNGNIR_Shoulders_CPD_CO.paa",
        "S-IVArmory\data\GUNGNIR\GUNGNIR_Shoulders_CPD_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa"
        
    };
};
	class SEC_MKVB_Carter_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (NOBLE Command)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        //"commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        //"mkv_right",
       "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa"
        
    };
};
class SEC_MKVB_Callahan_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Callahan)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        //"commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
       "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        //"security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\COMMANDO\Commando_Shoulders_Callahan_CO.paa",
        "S-IVArmory\data\COMMANDO\Commando_Shoulders_Callahan_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Security_Shoulders_Callahan_CO.paa",
        "S-IVArmory\data\SECURITY\Security_Shoulders_Callahan_CO.paa",
        "S-IVArmory\data\SCOUT\Scout_Shoulders_Stone_CO.paa",
        "S-IVArmory\data\SCOUT\Scout_Shoulders_Stone_CO.paa"
        
    };
};
class SEC_MKVB_Joker_Shoulders : Mjolnir_MKV_Shoulders_Spartan
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Mimic)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        //"cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       //"security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\COMMANDO\Shoulders_Joker_Commando_co.paa",
        "S-IVArmory\data\COMMANDO\Shoulders_Joker_Commando_co.paa",
        "S-IVArmory\data\CQC\CQC_Shoulders_Joker_CO.paa",
        "S-IVArmory\data\CQC\CQC_Shoulders_Joker_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Shoulders_GUNGNIR_Joker_CO.paa",
        "S-IVArmory\data\GUNGNIR\Shoulders_GUNGNIR_Joker_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\MKIV\MKIV_Shoulders_HRTBRK1_CO.paa",
		"S-IVArmory\data\MKIV\MKIV_Shoulders_HRTBRK1_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\ODST_Shoulders_Heartbreak_CO.paa",
        "S-IVArmory\data\ODST\ODST_Shoulders_Heartbreak_CO.paa", 
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Security_Shoulders_Joker_CO.paa",
        "S-IVArmory\data\SECURITY\Security_Shoulders_Joker_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa"
        
    };
};
class SEC_MKVB_ODST_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Mark V.[ODST] Shoulders";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        //"odst_left",
        //"odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
};
class SEC_MKVB_Army_Shoulders : SEC_MKVB_ODST_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Army)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        //"mkv_right",
        //"odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Myer_MKV_RShoulder.paa",
        "S-IVArmory\data\MKV\Myer_MKV_RShoulder.paa",
        "S-IVArmory\data\ODST\Myer_ODST_LShoulder.paa",
        "S-IVArmory\data\ODST\Myer_ODST_LShoulder.paa", 
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Security_Shoulders_Ded_CO.paa",
        "S-IVArmory\data\SECURITY\Security_Shoulders_Ded_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa"
        
    };
};
class  SEC_6STB_ODST_Shoulders : SEC_MKVB_ODST_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[6STB] MJOLNIR Mark V.[ODST] Shoulders (Away)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        //"odst_left",
        //"odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\GUEST\ODST_Shoulders_6th_CO.paa",
        "S-IVArmory\data\GUEST\ODST_Shoulders_6th_CO.paa", 
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Security_Shoulders_Ded_CO.paa",
        "S-IVArmory\data\SECURITY\Security_Shoulders_Ded_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa"
        
    };
};
class SEC_MKVB_JFO_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Mark V.[JFO] Shoulders";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        //"jfo_left",
        //"jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
};
class SEC_MKVB_Gambit_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Gambit)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        //"cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        //"recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gambit_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gambit_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
		"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\Gray_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\Gray_ODST_Shoulders_CO.paa", 
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\RECON\Gambit_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\RECON\Gambit_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Gray_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Gray_Scout_Shoulders_CO.paa"
        
    };
};
class SEC_MKVB_Ashburn_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Ashburn)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        //"odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        //"recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
		"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\ODST_Shoulders_Ashburn_CO.paa",
        "S-IVArmory\data\ODST\ODST_Shoulders_Ashburn_CO.paa", 
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\RECON\Recon_Shoulders_Ashburn_CO.paa",
        "S-IVArmory\data\RECON\Recon_Shoulders_Ashburn_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "",
        ""
        
    };
};
class SEC_MKVB_Amare_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Amare)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        //"operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       //"security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
		"",
        "",
        "",
        "",
        "", 
        "S-IVArmory\data\OPERATOR\Amare_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\OPERATOR\Amare_Operator_Shoulders_CO.paa",
        "",
        "",
        "S-IVArmory\data\SECURITY\Amare_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Amare_Security_Shoulders_CO.paa",
        "",
        ""
    };
};
class SEC_MKVB_Rookie_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Rookie)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        //"odst_left",
        //"odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
		"",
        "",
        "",
        "S-IVArmory\data\ODST\Rook_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\Rook_ODST_Shoulders_CO.paa", 
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };
};
class SEC_MKVB_Jakes_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Jakes)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        //"gungnir_left",
        //"gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "S-IVArmory\data\GUNGNIR\GUNGNIR_Shoulders_Jakes_CO.paa",
        "S-IVArmory\data\GUNGNIR\GUNGNIR_Shoulders_Jakes_CO.paa",
        "",
        "",
        "",
        "",
        "",
		"",
        "",
        "",
        "",
        "", 
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };
};
class SEC_MKVB_GNGNR_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Mark V.[GNG] Shoulders";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        //"gungnir_left",
        //"gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
};
class SEC_MKVB_Lawnson_Shoulders : SEC_MKVB_GNGNR_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Lawnson)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelectionsTextures[]=
    {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "S-IVArmory\data\GUNGNIR\Lawnson_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Lawnson_GUNGNIR_Shoulders_CO.paa",
        "",
        "",
        "",
        "",
        "",
		"",
        "",
        "",
        "",
        "", 
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };
};
class SEC_MKVB_GREN_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Mark V.[G] Shoulders";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        //"gren_left",
        //"gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
};
class SEC_MKVB_EVA_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Mark V.[V] Shoulders";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        //"eva_left",
        //"eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
};
class SEC_MKVB_Palmer_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Palmer)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        //"eva_left",
        //"eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\EVA_Shoulders_Palmer_CO.paa",
        "S-IVArmory\data\EVA\EVA_Shoulders_Palmer_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
		"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\Gray_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\Gray_ODST_Shoulders_CO.paa", 
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\RECON\Gray_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\RECON\Gray_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Gray_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Gray_Scout_Shoulders_CO.paa"
        
    };
};
class SEC_MKVB_CQC_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Mark V.[CQC] Shoulders";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        //"cqc_left",
        //"cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
};
class SEC_MKVB_COMMANDO_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Mark V.[K] Shoulders";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        //"commando_left",
        //"commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
};
class SEC_MKVB_MKIV_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Gen 2 Mark IV Shoulders";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        //"mkiv_left",
        //"mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
};
class SEC_Bartlett_MKIV_Shoulders : SEC_MKVB_MKIV_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Bartlett)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        //"mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        //"odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
		hiddenSelectionsTextures[]=
	{
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\MKIV\MKIV_Shoulders_HRTBRK1_CO.paa",
		"S-IVArmory\data\MKIV\MKIV_Shoulders_HRTBRK1_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\ODST_Shoulders_Heartbreak_CO.paa",
        "S-IVArmory\data\ODST\ODST_Shoulders_Heartbreak_CO.paa", 
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\RECON\Gray_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\RECON\Gray_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Gray_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Gray_Scout_Shoulders_CO.paa"
        
    };
};
class SEC_MKVB_OPER_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Mark V.[O] Shoulders";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        //"operator_left",
        //"operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
};

class SEC_MKVB_Keegan_Shoulders : SEC_MKVB_OPER_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Keegan)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        //"odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        //"recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
		"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\ODST_Shoulders_Keegan_CO.paa",
        "S-IVArmory\data\ODST\ODST_Shoulders_Keegan_CO.paa", 
        "S-IVArmory\data\OPERATOR\Operator_Shoulders_Stitch_CO.paa",
        "S-IVArmory\data\OPERATOR\Operator_Shoulders_Stitch_CO.paa",
        "S-IVArmory\data\RECON\Recon_ShouldersKeegan_CO.paa",
        "S-IVArmory\data\RECON\Recon_ShouldersKeegan_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Gray_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Gray_Scout_Shoulders_CO.paa"
        
    };
};
class SEC_MKVB_Slade_Shoulders : SEC_MKVB_OPER_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Slade)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        //"odst_left",
        //"odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
		"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\ODST_Shoulders_Slade_CO.paa",
        "S-IVArmory\data\ODST\ODST_Shoulders_Slade_CO.paa", 
        "S-IVArmory\data\OPERATOR\Operator_Shoulders_Stitch_CO.paa",
        "S-IVArmory\data\OPERATOR\Operator_Shoulders_Stitch_CO.paa",
        "S-IVArmory\data\RECON\Recon_ShouldersKeegan_CO.paa",
        "S-IVArmory\data\RECON\Recon_ShouldersKeegan_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Gray_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Gray_Scout_Shoulders_CO.paa"
        
    };
};
class  SEC_MKVB_Greyman_Shoulders : SEC_MKVB_OPER_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Greyman)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        //"operator_left",
        //"operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
		"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\Gray_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\Gray_ODST_Shoulders_CO.paa", 
        "S-IVArmory\data\OPERATOR\Operator_Shoulders_Greyman_CO.paa",
        "S-IVArmory\data\OPERATOR\Operator_Shoulders_Greyman_CO.paa",
        "S-IVArmory\data\RECON\Gray_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\RECON\Gray_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Gray_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Gray_Scout_Shoulders_CO.paa"  
    };
};
class SEC_MKVB_RECON_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Mark V.[R] Shoulders";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        //"recon_left",
        //"recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
};
class  SEC_MKVB_Morrow_Shoulders : SEC_MKVB_RECON_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Morrow)";
		maximumLoad = 400;
        mass = 50;
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
		"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\Gray_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\Gray_ODST_Shoulders_CO.paa", 
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\RECON\Recon_Shoulders_Morrow_CO.paa",
        "S-IVArmory\data\RECON\Recon_Shoulders_Morrow_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Gray_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Gray_Scout_Shoulders_CO.paa"
        
    };
};
class SEC_MKVB_GwainMKIV_Shoulders : Mjolnir_MKV_Shoulders_Spartan
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Gwain)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        //"mkiv_right",
        "mkv_left",
        "mkv_right",
        //"odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\MKIV\MKIV_Shoulders_Gwain_CO.paa",
		"S-IVArmory\data\MKIV\MKIV_Shoulders_Gwain_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\ODST_Shoulders_Gwain_CO.paa",
        "S-IVArmory\data\ODST\ODST_Shoulders_Gwain_CO.paa", 
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\RECON\Recon_Shoulder_Vance_CO.paa",
        "S-IVArmory\data\RECON\Recon_Shoulder_Vance_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Scout_Shoulder_Vance_CO.paa",
        "S-IVArmory\data\SCOUT\Scout_Shoulder_Vance_CO.paa"  
    };
};
class SEC_MKVB_SECURITY_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Mark V.[M] Shoulders";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        //"security_left",
        //"security_right",
      "scout_left",
      "scout_right"
    };
};
class SEC_MKVB_Codex_Shoulders : SEC_MKVB_Shoulders
{
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Codex)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        //"odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
      "scout_left",
      //"scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\COMMANDO\Gray_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
		"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\Codex_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\Codex_ODST_Shoulders_CO.paa", 
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\RECON\Gray_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\RECON\Gray_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Gray_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Codex_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Codex_Scout_Shoulders_CO.paa"
    };   
};

class SEC_MKVB_Man_Shoulders : SEC_MKVB_SECURITY_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Man)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        //"commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        //"recon_right",
        "security_left",
        "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\COMMANDO\Commando_Shoulders_Man_CO.paa",
        "S-IVArmory\data\COMMANDO\Commando_Shoulders_Man_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Gray_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\EVA\Gray_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GRENADIER\Gray_GRENADIER_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Gray_GUNGNIR_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\HAYABUSA\Gray_Hayabusa_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\JFO\Gray_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
		"S-IVArmory\data\MKIV\MKIV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\Gray_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\Gray_ODST_Shoulders_CO.paa", 
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\RECON\Recon_Shoulders_Man_CO.paa",
        "S-IVArmory\data\RECON\Recon_Shoulders_Man_CO.paa",
        "S-IVArmory\data\SECURITY\Security_Shoulders_Grimm_CO.paa",
        "S-IVArmory\data\SECURITY\Security_Shoulders_Grimm_CO.paa",
        "S-IVArmory\data\SCOUT\Gray_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\SCOUT\Gray_Scout_Shoulders_CO.paa"
        
    };
};
class SEC_MKVB_SCOUT_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Mark V.[S] Shoulders";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
       "security_right",
      //"scout_left",
      //"scout_right"
    };
};

class SEC_Custom_Engel_Shoulders : Mjolnir_MKV_Shoulders_Spartan
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Angel)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
       //"odst_left",
        //"odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\ODST_Shoulders_Engel_CO.paa",
        "S-IVArmory\data\ODST\ODST_Shoulders_Engel_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Security_Shoulders_Alucard_CO.paa",
        "S-IVArmory\data\SECURITY\Security_Shoulders_Alucard_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa"
        
    };
};
class SEC_Custom_Moon_Shoulders : SEC_MKVB_Shoulders
    {
        scope=2;
		scopeArsenal=2;
        displayName = "[EAGLE] MJOLNIR Custom Shoulders (Moon)";
		maximumLoad = 400;
        mass = 50;
        hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        //"gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
       "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Moon_GUNGNIR_LShoulder.paa",
        "S-IVArmory\data\GUNGNIR\Moon_GUNGNIR_LShoulder.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKV\Gray_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\ODST\ODST_Shoulders_Alucard_CO.paa",
        "S-IVArmory\data\ODST\ODST_Shoulders_Alucard_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Security_Shoulders_Alucard_CO.paa",
        "S-IVArmory\data\SECURITY\Security_Shoulders_Alucard_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa"
        
    };
};
class SEC_MKVB_Emile_Shoulders: SEC_MKVB_Shoulders
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Custom Shoulders (NOBLE Wrath)";
	maximumLoad = 400;
    mass = 50;
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        //"operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        //"security_right",
        "scout_left",
        "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "S-IVArmory\data\OPERATOR\Gray_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Red_Security_Shoulders_CO.paa",
        "S-IVArmory\data\SECURITY\Red_Security_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa"
        
    };
};
class SEC_MKVB_Jorge_Shoulders: Mjolnir_MKV_Shoulders_Spartan
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Mark IV/G Shoulders (NOBLE Justice)";
	maximumLoad = 400;
    mass = 50;
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        //"eva_right",
        //"gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
        "scout_left",
        "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jorge_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jorge_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jorge_Grenadier_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jorge_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Emile_Security_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Emile_Security_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa"
        
    };
};
class SEC_MKVB_Jun_Shoulders: SEC_MKVB_Shoulders
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Custom Shoulders (NOBLE Strike)";
	maximumLoad = 400;
    mass = 50;
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
        //"scout_left",
        "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jorge_Grenadier_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jorge_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Emile_Security_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Emile_Security_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jun_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jun_Scout_Shoulders_CO.paa"
        
    };
};
class SEC_MKVB_Kat_Shoulders: SEC_MKVB_Shoulders
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Custom Shoulders (NOBLE Confidence)";
	maximumLoad = 400;
    mass = 50;
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
        "scout_left",
        "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Kat_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Kat_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jorge_Grenadier_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jorge_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Emile_Security_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Emile_Security_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jun_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jun_Scout_Shoulders_CO.paa"
        
    };
};
class 141st_Invisible_Rucksack: SEC_MKVB_Shoulders
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] SPARTAN-IV Magnetic Plate";
	maximumLoad = 400;
    mass = 50;
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
        "scout_left",
        "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Kat_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Kat_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jorge_Grenadier_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jorge_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Emile_Security_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Emile_Security_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jun_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jun_Scout_Shoulders_CO.paa"
        
    };
};
class 141st_Invisible_RTO_Backpack: SEC_MKVB_Shoulders
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] SPARTAN-IV Radio Plate";
	maximumLoad = 400;
    mass = 50;
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
        "scout_left",
        "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Carter_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Kat_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Kat_EVA_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jorge_Grenadier_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jorge_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Emile_Security_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Emile_Security_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jun_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\NOBLE\Jun_Scout_Shoulders_CO.paa"
        
    };
};
class SEC_MKVB_Avak_Shoulders: Mjolnir_MKV_Shoulders_Spartan
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] MJOLNIR Custom Shoulders (Spawn)";
	maximumLoad = 400;
    mass = 50;
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        //"commando_right",
        //"cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        "mkiv_right",
        "mkv_left",
        "mkv_right",
       "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
      "scout_left",
      "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\COMMANDO\Maxilos_Commando_RShoulder.paa",
        "S-IVArmory\data\COMMANDO\Maxilos_Commando_RShoulder.paa",
        "S-IVArmory\data\CQC\Maxilos_CQC_LShoulder.paa",
        "S-IVArmory\data\CQC\Maxilos_CQC_LShoulder.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
		"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa",
        "S-IVArmory\data\MKVB\Olive_Scout_Shoulders_CO.paa"
        
    };
};
	class SEC_MKVB_Kavik_Shoulders: SEC_MKVB_Shoulders
{
    scope=2;
    scopeArsenal=2;
	maximumLoad = 450;
    mass = 50;
    displayName="[EAGLE] MJOLNIR Custom Shoulders (Kavik)";
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo6",
        "camo7",
        "camo8",
        "camo9",
        "camo10",
        "camo11",
        "camo12",
        "camo13",
        "camo14",
        "camo15",
        "camo16",
        "camo17",
        "camo18",
        "camo19",
        "camo20",
        "camo21",
        "camo22",
        "camo23",
        "camo24",
        "camo25",
        "camo26",
        "camo27",
        "camo28",
        "commando_left",
        "commando_right",
        "cqc_left",
        "cqc_right",
        "eva_left",
        "eva_right",
        "gren_left",
        "gren_right",
        // "gungnir_left",
        "gungnir_right",
        "hayabusa_left",
        "hayabusa_right",
        "jfo_left",
        "jfo_right",
        "mkiv_left",
        // "mkiv_right",
        "mkv_left",
        "mkv_right",
        "odst_left",
        "odst_right",
        "operator_left",
        "operator_right",
        "recon_left",
        "recon_right",
        "security_left",
        "security_right",
        "scout_left",
        "scout_right"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
        "S-IVArmory\data\CQC\Kavik_CQC_LShoulder.paa",
        "S-IVArmory\data\CQC\Kavik_CQC_LShoulder.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
        "S-IVArmory\data\GUNGNIR\Kavik_Gungnir_LShoulder.paa",
        "S-IVArmory\data\GUNGNIR\Kavik_Gungnir_LShoulder.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
        "S-IVArmory\data\MKIV\Kavik_MKIV_RShoulder.paa",
	"S-IVArmory\data\MKIV\Kavik_MKIV_RShoulder.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
        "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
        
    };
};
	class SCARLET_HUMAN_MKIV_SHOULDERS : Mjolnir_MKIV_Shoulders
    {
        scope=2;
		scopeArsenal=0;
        displayName = "[EAGLE] (Human) MJOLNIR MKIV Shoulders";
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
            "S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            ""
        };
    };
	class SCARLET_SPARTAN_MKIV_SHOULDERS : Mjolnir_MKIV_Shoulders_Spartan
    {
        scope = 2;
        scopeArsenal = 2;
		maximumLoad = 500;
        mass = 70;
        displayName = "[EAGLE] MJOLNIR Mark IV Shoulders";
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_co.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
            "S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            ""
        };
    };
	class SEC_MKIV_Keller_SHOULDERS : Mjolnir_MKIV_Shoulders_Spartan
    {
        scope = 2;
        scopeArsenal = 2;
		maximumLoad = 400;
        mass = 70;
        displayName = "[EAGLE] MJOLNIR Gen 2 Mark IV Shoulders (Keller)";
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_Keller_CO.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_Keller_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
            "S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            ""
        };
		/// TFAR LR Code
    tf_encryptionCode="tf_west_radio_code";
    tf_dialog="rt1523g_radio_dialog";
    tf_subtype="digital_lr";
    tf_range=100000;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio=1;
    };
	class SILVER_Cain_MKIV_SHOULDERS : SCARLET_SPARTAN_MKIV_SHOULDERS
    {
        scope = 2;
        scopeArsenal = 2;
		maximumLoad = 500;
        mass = 70;
        displayName = "[EAGLE] MJOLNIR Mark IV Shoulders (Cain)";
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "S-IVArmory\data\MKIV\FoR_MKIV_Shoulders_Silver_co.paa",
            "S-IVArmory\data\MKIV\FoR_MKIV_Shoulders_Silver_co.paa",
            "S-IVArmory\data\CAIN\MKVB_Cain_MKVShoulders_CO.paa",
            "S-IVArmory\data\CAIN\MKVB_Cain_MKVShoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
            "S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            ""
        };
		/// TFAR LR Code
    tf_encryptionCode="tf_west_radio_code";
    tf_dialog="rt1523g_radio_dialog";
    tf_subtype="digital_lr";
    tf_range=100000;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio=1;
    };
    class SILVER_Justin_MKIV_SHOULDERS : SCARLET_SPARTAN_MKIV_SHOULDERS
    {
        scope = 2;
        scopeArsenal = 2;
		maximumLoad = 500;
        mass = 70;
        displayName = "[EAGLE] MJOLNIR Mark IV Shoulders (Justin)";
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_Justin_CO.paa",
            "S-IVArmory\data\MKIV\MKIV_Shoulders_Justin_CO.paa",
            "S-IVArmory\data\CAIN\MKVB_Cain_MKVShoulders_CO.paa",
            "S-IVArmory\data\CAIN\MKVB_Cain_MKVShoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
            "S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            ""
        };
		/// TFAR LR Code
    tf_encryptionCode="tf_west_radio_code";
    tf_dialog="rt1523g_radio_dialog";
    tf_subtype="digital_lr";
    tf_range=100000;
    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
    tf_hasLRradio=1;
    };
	class SCARLET_Levi_MKIV_SHOULDERS : SCARLET_SPARTAN_MKIV_SHOULDERS
    {
        scope = 2;
        scopeArsenal = 2;
		maximumLoad = 500;
        mass = 70;
        displayName = "[EAGLE] MJOLNIR Mark IV Shoulders (Levi)";
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "S-IVArmory\data\MKIV\FoR_MKIV_Shoulders_Silver_co.paa",
            "S-IVArmory\data\MKIV\FoR_MKIV_Shoulders_Silver_co.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
            "S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            ""
        };
    };
	class SCARLET_Saber_MKIV_SHOULDERS : SCARLET_SPARTAN_MKIV_SHOULDERS
    {
        scope = 2;
        scopeArsenal = 2;
		maximumLoad = 500;
        mass = 70;
        displayName = "[EAGLE] MJOLNIR Mark IV Shoulders (Saber)";
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
            "S-IVArmory\data\MKIV\FoR_MKIV_Shoulders_Silver_co.paa",
            "S-IVArmory\data\MKIV\FoR_MKIV_Shoulders_Silver_co.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
            "MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
            "S-IVArmory\data\MKIV\MKIV_Shoulders.rvmat",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            ""
        };
    };
	class OPTRE_UNSC_Soldier_Base;
	class OPTRE_Spartan2_Soldier_Base;
};
class CfgGlasses
	{
    class G_Spectacles;
	class MA_MKVB_Armor_Attachements;
    class MA_MKVB_Grenadier_Chest;
    class MA_MKVB_Grenadier_Collar;
    class MA_MKVB_Scout_Vest;
    class MA_MVB_Grenadier_Kit;
    class MA_MKVB_ODST_Chest;
	class MAPO_MKVB_Armor_Attachements;
	class MA_EOD_CBRN_Facewear_Attachment;
	
	class EAGLE_ATTACHMENT_GRENADIERRIG_AVAK: MAPO_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Up-Armor/VAUNTLOCK (Spawn)";
    model="MA_Armor_ORION\data\Vests\MKVB\Attachments\MKVB_Attachments_Spartan.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
    //  "Grenadier_Collar",
    //  "Grenadier_Chest",
        "Odst_Chest",
        "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GRENADIER\Maxilos_GrenadierRig.paa",    
        "S-IVArmory\data\GRENADIER\Maxilos_Grenadier_Collar.paa",
        "MA_Armor\data\Vests\MKVB\Attachments\ODST\Olive_ODST_Chestplate_CO.paa",
        "MA_Armor\data\Vests\MKVB\Attachments\Scout\Woodland_Scout_Vest_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GRENADIER\grenadier_rig.rvmat",    
        "S-IVArmory\data\GRENADIER\grenadier_collar.rvmat",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        "S-IVArmory\data\SCOUT\Scout_Vest.rvmat"
    };
};
class EAGLE_ATTACHMENT_GRENADIERRIG_Slade: MA_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Up-Armor/VAUNTLOCK (Slade)";
    model="MA_Armor\data\Vests\MKVB\Attachments\MKVB_Attachments.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
    //  "Grenadier_Collar",
    //  "Grenadier_Chest",
        "Odst_Chest",
        "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GRENADIER\Grenadier_Rig_Slade_CO.paa",    
        "S-IVArmory\data\GRENADIER\Grenadier_Collar_Slade_CO.paa",
        "MA_Armor\data\Vests\MKVB\Attachments\ODST\Olive_ODST_Chestplate_CO.paa",
        "MA_Armor\data\Vests\MKVB\Attachments\Scout\Woodland_Scout_Vest_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GRENADIER\grenadier_rig.rvmat",    
        "S-IVArmory\data\GRENADIER\grenadier_collar.rvmat",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        "S-IVArmory\data\SCOUT\Scout_Vest.rvmat"
    };
};
class EAGLE_ATTACHMENT_GRENADIERRIG_Jakes: MA_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Up-Armor/VAUNTLOCK (Jakes)";
    model="MA_Armor\data\Vests\MKVB\Attachments\MKVB_Attachments.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
    //  "Grenadier_Collar",
    //  "Grenadier_Chest",
        "Odst_Chest",
        "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GRENADIER\Grenadier_Rig_Jakes_CO.paa",    
        "S-IVArmory\data\GRENADIER\Grenadier_Collar_Jakes_CO.paa",
        "MA_Armor\data\Vests\MKVB\Attachments\ODST\Olive_ODST_Chestplate_CO.paa",
        "MA_Armor\data\Vests\MKVB\Attachments\Scout\Woodland_Scout_Vest_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GRENADIER\grenadier_rig.rvmat",    
        "S-IVArmory\data\GRENADIER\grenadier_collar.rvmat",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        "S-IVArmory\data\SCOUT\Scout_Vest.rvmat"
    };
};
class EAGLE_ATTACHMENT_ODSTCHEST: MA_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Up-Armor/ODST";
    model="MA_Armor\data\Vests\MKVB\Attachments\MKVB_Attachments.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
		"Grenadier_Collar",
        "Grenadier_Chest",
        // "Odst_Chest",
        "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "",    
        "",
        "S-IVArmory\data\ODST\ODST_Chestplate_CO.paa",
        ""
    };
    hiddenSelectionsMaterials[]=
    {
        "",    
        "",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        ""
    };
};
class EAGLE_ATTACHMENT_AMARECHEST: EAGLE_ATTACHMENT_ODSTCHEST
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Up-Armor/ODST (Amare)";
    model="MA_Armor\data\Vests\MKVB\Attachments\MKVB_Attachments.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
		"Grenadier_Collar",
        "Grenadier_Chest",
        // "Odst_Chest",
        "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "",    
        "",
        "S-IVArmory\data\ODST\Amare_ODST_Chestplate_CO.paa",
        ""
    };
};
class EAGLE_Joker_ODSTCHEST: MAPO_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Up-Armor/ODST (Mimic)";
    model="MA_Armor_ORION\data\Vests\MKVB\Attachments\MKVB_Attachments_Spartan.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
		"Grenadier_Collar",
        "Grenadier_Chest",
        // "Odst_Chest",
        "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "",    
        "",
        "S-IVArmory\data\ODST\ODST_Chestplate_Joker_CO.paa",
        ""
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GRENADIER\grenadier_rig.rvmat",    
        "S-IVArmory\data\GRENADIER\grenadier_collar.rvmat",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        "S-IVArmory\data\SCOUT\Scout_Vest.rvmat"
    };
};
class EAGLE_PATTERSON_ODSTCHEST: MA_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Up-Armor/ODST (Patterson)";
    model="MA_Armor\data\Vests\MKVB\Attachments\MKVB_Attachments.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
		"Grenadier_Collar",
        "Grenadier_Chest",
        // "Odst_Chest",
        "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Rig_CO.paa",    
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Collar_CO.paa",
        "S-IVArmory\data\ODST\ODST_Chestplate_Patterson_CO.paa",
        "S-IVArmory\data\SCOUT\Black_Scout_Vest_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GRENADIER\grenadier_rig.rvmat",    
        "S-IVArmory\data\GRENADIER\grenadier_collar.rvmat",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        "S-IVArmory\data\SCOUT\Scout_Vest.rvmat"
    };
};
class EAGLE_6STB_ODSTCHEST: MA_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[6STB] Up-Armor/ODST (Away)";
    model="MA_Armor\data\Vests\MKVB\Attachments\MKVB_Attachments.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
		"Grenadier_Collar",
        "Grenadier_Chest",
        // "Odst_Chest",
        "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Rig_CO.paa",    
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Collar_CO.paa",
        "S-IVArmory\data\GUEST\ODST_Chestplate_6th_CO.paa",
        "S-IVArmory\data\SCOUT\Black_Scout_Vest_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GRENADIER\grenadier_rig.rvmat",    
        "S-IVArmory\data\GRENADIER\grenadier_collar.rvmat",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        "S-IVArmory\data\SCOUT\Scout_Vest.rvmat"
    };
};
class EAGLE_CALLAHAN_ODSTCHEST: MA_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Up-Armor/ODST (Callahan)";
    model="MA_Armor\data\Vests\MKVB\Attachments\MKVB_Attachments.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
		"Grenadier_Collar",
        "Grenadier_Chest",
        // "Odst_Chest",
        "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Rig_CO.paa",    
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Collar_CO.paa",
        "S-IVArmory\data\ODST\Callahan_ODST_Chestplate_co.paa",
        "S-IVArmory\data\SCOUT\Black_Scout_Vest_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GRENADIER\grenadier_rig.rvmat",    
        "S-IVArmory\data\GRENADIER\grenadier_collar.rvmat",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        "S-IVArmory\data\SCOUT\Scout_Vest.rvmat"
    };
};
class EAGLE_ASHBURN_ODSTCHEST: MA_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Up-Armor/ODST (Ashburn)";
    model="MA_Armor\data\Vests\MKVB\Attachments\MKVB_Attachments.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
		"Grenadier_Collar",
        "Grenadier_Chest",
        // "Odst_Chest",
        "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Rig_CO.paa",    
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Collar_CO.paa",
        "S-IVArmory\data\ODST\ODST_Chestplate_Ashburn_CO.paa",
        "S-IVArmory\data\SCOUT\Black_Scout_Vest_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GRENADIER\grenadier_rig.rvmat",    
        "S-IVArmory\data\GRENADIER\grenadier_collar.rvmat",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        "S-IVArmory\data\SCOUT\Scout_Vest.rvmat"
    };
};
class EAGLE_ATTACHMENT_SCOUTCHEST: MA_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (M81 - Woodland)";
    model="MA_Armor\data\Vests\MKVB\Attachments\MKVB_Attachments.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
		"Grenadier_Collar",
        "Grenadier_Chest",
        "Odst_Chest",
        // "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "",    
        "",
        "",
        "S-IVArmory\data\SCOUT\Scout_Vest_WDL_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GRENADIER\grenadier_rig.rvmat",    
        "S-IVArmory\data\GRENADIER\grenadier_collar.rvmat",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        "S-IVArmory\data\SCOUT\Scout_Vest.rvmat"
    };
};
class EAGLE_ATTACHMENT_MARP_SCOUTCHEST: EAGLE_ATTACHMENT_SCOUTCHEST
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (MARPAT)";
    hiddenSelectionsTextures[]=
    {
        "",    
        "",
        "",
        "S-IVArmory\data\SCOUT\Scout_Vest_MARPAT_CO.paa"
    };
};
class EAGLE_ATTACHMENT_FLECK_SCOUTCHEST: EAGLE_ATTACHMENT_SCOUTCHEST
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (Flecktarn)";
    hiddenSelectionsTextures[]=
    {
        "",    
        "",
        "",
        "S-IVArmory\data\SCOUT\Scout_Vest_Fleck_CO.paa"
    };
};
class EAGLE_ATTACHMENT_MARS_SCOUTCHEST: EAGLE_ATTACHMENT_SCOUTCHEST
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (Tigerstripe - Mars)";
    hiddenSelectionsTextures[]=
    {
        "",    
        "",
        "",
        "S-IVArmory\data\SCOUT\Scout_Vest_MarsStripe_CO.paa"
    };
};
class EAGLE_ATTACHMENT_MCBlack_SCOUTCHEST: EAGLE_ATTACHMENT_SCOUTCHEST
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (Multicam - Black)";
    hiddenSelectionsTextures[]=
    {
        "",    
        "",
        "",
        "S-IVArmory\data\SCOUT\Scout_Vest_MCBlack_CO.paa"
    };
};
class EAGLE_ATTACHMENT_MCDES_SCOUTCHEST: EAGLE_ATTACHMENT_SCOUTCHEST
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (Multicam - Desert)";
    hiddenSelectionsTextures[]=
    {
        "",    
        "",
        "",
        "S-IVArmory\data\SCOUT\Scout_Vest_MCDes_CO.paa"
    };
};
class EAGLE_ATTACHMENT_Navy_SCOUTCHEST: EAGLE_ATTACHMENT_SCOUTCHEST
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (Tigerstripe - Naval)";
    hiddenSelectionsTextures[]=
    {
        "",    
        "",
        "",
        "S-IVArmory\data\SCOUT\Scout_Vest_Navy_CO.paa"
    };
};
class EAGLE_ATTACHMENT_WINT_SCOUTCHEST: EAGLE_ATTACHMENT_SCOUTCHEST
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (M81 - Winter)";
    hiddenSelectionsTextures[]=
    {
        "",    
        "",
        "",
        "S-IVArmory\data\SCOUT\Scout_Vest_WNT_CO.paa"
    };
};
class EAGLE_ATTACHMENT_WHITE_SCOUTCHEST: EAGLE_ATTACHMENT_SCOUTCHEST
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (Flat - White)";
    hiddenSelectionsTextures[]=
    {
        "",    
        "",
        "",
        "S-IVArmory\data\SCOUT\Scout_Vest_White_CO.paa"
    };
};
class EAGLE_ATTACHMENT_BLACK_SCOUTCHEST: EAGLE_ATTACHMENT_SCOUTCHEST
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (Flat - Black)";
    hiddenSelectionsTextures[]=
    {
        "",    
        "",
        "",
        "S-IVArmory\data\SCOUT\Scout_Vest_Black_CO.paa"
    };
};
class EAGLE_ATTACHMENT_BRITDIS_SCOUTCHEST: EAGLE_ATTACHMENT_SCOUTCHEST
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (DPM - Woodland)";
    hiddenSelectionsTextures[]=
    {
        "",    
        "",
        "",
        "S-IVArmory\data\SCOUT\Scout_Vest_BritDis_CO.paa"
    };
};
class EAGLE_ATTACHMENT_TIGERSTRIPE_SCOUTCHEST: EAGLE_ATTACHMENT_SCOUTCHEST
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (Tigerstripe - Jungle)";
    hiddenSelectionsTextures[]=
    {
        "",    
        "",
        "",
        "S-IVArmory\data\SCOUT\Scout_Vest_Tiger_CO.paa"
    };
};
class EAGLE_ATTACHMENT_CHIP_SCOUTCHEST: EAGLE_ATTACHMENT_SCOUTCHEST
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (Desert Chip)";
    hiddenSelectionsTextures[]=
    {
        "",    
        "",
        "",
        "S-IVArmory\data\SCOUT\Scout_Vest_Chip_CO.paa"
    };
};
class EAGLE_GRIF_SCOUTCHEST: MA_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (Grif)";
    model="MA_Armor\data\Vests\MKVB\Attachments\MKVB_Attachments.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
		"Grenadier_Collar",
        "Grenadier_Chest",
        "Odst_Chest",
        // "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Rig_CO.paa",    
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Collar_CO.paa",
        "S-IVArmory\data\ODST\MKVB_Bittencourt_ODSTChest_CO.paa",
        "S-IVArmory\data\SCOUT\Scout_Vest_Grif_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GRENADIER\grenadier_rig.rvmat",    
        "S-IVArmory\data\GRENADIER\grenadier_collar.rvmat",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        "S-IVArmory\data\SCOUT\Scout_Vest.rvmat"
    };
};
class EAGLE_Marsh_SCOUTCHEST: MA_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (Marsh)";
    model="MA_Armor\data\Vests\MKVB\Attachments\MKVB_Attachments.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
		"Grenadier_Collar",
        "Grenadier_Chest",
        "Odst_Chest",
        // "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Rig_CO.paa",    
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Collar_CO.paa",
        "S-IVArmory\data\ODST\MKVB_Bittencourt_ODSTChest_CO.paa",
        "S-IVArmory\data\SCOUT\Scout_Vest_Marsh_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GRENADIER\grenadier_rig.rvmat",    
        "S-IVArmory\data\GRENADIER\grenadier_collar.rvmat",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        "S-IVArmory\data\SCOUT\Scout_Vest.rvmat"
    };
};
class EAGLE_MOON_SCOUTCHEST: MA_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (Moon)";
    model="MA_Armor\data\Vests\MKVB\Attachments\MKVB_Attachments.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
		"Grenadier_Collar",
        "Grenadier_Chest",
        "Odst_Chest",
        // "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Rig_CO.paa",    
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Collar_CO.paa",
        "S-IVArmory\data\ODST\Steel_ODST_Chestplate_CO.paa",
        "S-IVArmory\data\SCOUT\Moon_Scout_Vest.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GRENADIER\grenadier_rig.rvmat",    
        "S-IVArmory\data\GRENADIER\grenadier_collar.rvmat",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        "S-IVArmory\data\SCOUT\Scout_Vest.rvmat"
    };
};
class EAGLE_Ninuano_SCOUTCHEST: MA_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (Minuano)";
    model="MA_Armor\data\Vests\MKVB\Attachments\MKVB_Attachments.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
		"Grenadier_Collar",
        "Grenadier_Chest",
        "Odst_Chest",
        // "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Rig_CO.paa",    
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Collar_CO.paa",
        "S-IVArmory\data\ODST\Steel_ODST_Chestplate_CO.paa",
        "S-IVArmory\data\SCOUT\Minuano_Scout_Vest_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GRENADIER\grenadier_rig.rvmat",    
        "S-IVArmory\data\GRENADIER\grenadier_collar.rvmat",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        "S-IVArmory\data\SCOUT\Scout_Vest.rvmat"
    };
};
class EAGLE_Codex_SCOUTCHEST: MA_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Tactical/Patrol (Codex)";
    model="MA_Armor\data\Vests\MKVB\Attachments\MKVB_Attachments.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
		"Grenadier_Collar",
        "Grenadier_Chest",
        "Odst_Chest",
        // "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Rig_CO.paa",    
        "S-IVArmory\data\GRENADIER\Black_Grenadier_Collar_CO.paa",
        "S-IVArmory\data\ODST\Steel_ODST_Chestplate_CO.paa",
        "S-IVArmory\data\SCOUT\Codex_Scout_Vest_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GRENADIER\grenadier_rig.rvmat",    
        "S-IVArmory\data\GRENADIER\grenadier_collar.rvmat",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        "S-IVArmory\data\SCOUT\Scout_Vest.rvmat"
    };
};
    class EAGLE_ATTACHMENT_GRENADIERRIG: MA_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Up-Armor/VAUNTLOCK";
    model="MA_Armor\data\Vests\MKVB\Attachments\MKVB_Attachments.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
    //  "Grenadier_Collar",
    //  "Grenadier_Chest",
        "Odst_Chest",
        "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\GRENADIER\Grenadier_Rig_CO.paa",    
        "S-IVArmory\data\GRENADIER\Grenadier_Collar_CO.paa",
        "S-IVArmory\data\ODST\Steel_ODST_Chestplate_CO.paa",
        "S-IVArmory\data\SCOUT\Black_Scout_Vest_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GRENADIER\grenadier_rig.rvmat",    
        "S-IVArmory\data\GRENADIER\grenadier_collar.rvmat",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        "S-IVArmory\data\SCOUT\Scout_Vest.rvmat"
    };
};	
class EAGLE_ATTACHMENT_JORGERIG: MAPO_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] Up-Armor/VAUNTLOCK (NOBLE Justice)";
    model="MA_Armor_ORION\data\Vests\MKVB\Attachments\MKVB_Attachments_Spartan.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
    //  "Grenadier_Collar",
    //  "Grenadier_Chest",
        "Odst_Chest",
        "Scout_Chest",
		"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\NOBLE\Jorge_GrenadierRig_CO.paa",    
        "S-IVArmory\data\NOBLE\Jorge_GrenadierCollar_CO.paa",
        "S-IVArmory\data\ODST\Steel_ODST_Chestplate_CO.paa",
        "S-IVArmory\data\SCOUT\Black_Scout_Vest_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\GRENADIER\grenadier_rig.rvmat",    
        "S-IVArmory\data\GRENADIER\grenadier_collar.rvmat",
        "S-IVArmory\data\ODST\ODST_Vest.rvmat",    
        "S-IVArmory\data\SCOUT\Scout_Vest.rvmat"
    };
};
class SEC_EOD_CBRN_Facewear: MA_EOD_CBRN_Facewear_Attachment
{
    scope=2;
    scopeArsenal=2;
    author="Misriah Armory";
    identitytypes[]={};
    displayName="[EAGLE] Up-Armor/EOD Attachment";
    model="MA_Armor\data\Attachments\EOD_CBRN\EOD_CBRN.p3d";
    hiddenSelections[]=
    {
        "Camo1" 
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\EOD\CBRN_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "S-IVArmory\data\EOD\CBRN.rvmat"
    };
};
class SEC_EOD_CBRN_Lichen_Attachment: MA_EOD_CBRN_Facewear_Attachment
{
    scope=2;
    scopeArsenal=2;
    author="Misriah Armory";
    identitytypes[]={};
    displayName="[EAGLE] Up-Armor/EOD Attachment (Lichen)";
    model="MA_Armor\data\Attachments\EOD_CBRN\EOD_CBRN.p3d";
    hiddenSelections[]=
    {
        "Camo1" 
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\EOD\MKVB_Lichen_EODCBRN_CO.paa"
    };
};
class EAGLE_ATTACHMENT_ORDNANCERIG: MA_MKVB_Armor_Attachements
{
    scope=2;
    scopeArsenal=2;
    displayName="[EAGLE] AAP/Dakh Ordnance Pack";
    model="MA_Armor\data\Vests\MKVB\Attachments\MKVB_Attachments.p3d";
    identitytypes[]={};
    hiddenSelections[]=
    {
        "Camo1", // (Grenadier Chest)
        "Camo2", // (Grenadier Collar)
        "Camo3", // (ODST Chest)
        "Camo4", // (Scout Vest)
      "Grenadier_Collar",
      "Grenadier_Chest",
        "Odst_Chest",
        "Scout_Chest",
		//"Ordnance_Pack"
    };
    hiddenSelectionsTextures[]=
    {
        "S-IVArmory\data\NOBLE\Jorge_GrenadierRig_CO.paa",    
        "S-IVArmory\data\NOBLE\Jorge_GrenadierCollar_CO.paa",
        "S-IVArmory\data\ODST\Steel_ODST_Chestplate_CO.paa",
        "S-IVArmory\data\SCOUT\Black_Scout_Vest_CO.paa"
    };
};		
};