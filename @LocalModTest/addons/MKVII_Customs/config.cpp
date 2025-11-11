class CfgPatches
{
	class SEC_gen3_retexturemod
	{
		name="Spartan Eagle Company MKVII Customs";
		author="Tess Kobold and Reiken";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"rubicon_gen3_spartanIV",
			"OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"OPTRE_FC_Units",
			"OPTRE_Vehicles",
			"OPTRE_Vehicles_Air",
			"OPTRE_Vehicles_Tracked",
			"OPTRE_Weapons",
			"MA_Armor",
			"rubicon_gen3_helmets",
			"rubicon_gen3"
		};
		requiredVersion=0.1;
		units[]=
		{
		};
		weapons[]=
		{

		};
	};
};
class CfgWeapons
{
	class UniformSlotInfo;
	class VestItem;
	class ItemInfo;
	class HeadgearItem;
	class V_PlateCarrier1_rgr;
	class UniformItem;
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
	class SEC_MKVB_RECON_Helmet;
	class Rubicon_Gen3_MKVIICavhelmet_CGrey;
	class Rubicon_Gen3_MKVIIhelmet_CGrey;
	class Rubicon_Gen3_MKVIICeloxhelmet_CGrey;
	class Rubicon_Gen3_MKVIITrailhelmet_CGrey;
	class Rubicon_Gen3_MKVBCQBhelmet_CGrey;
	class Rubicon_Gen3_MKVBScouthelmet_CGrey;
	class Rubicon_Gen3_MkVIIBaseShoulder;
	class Rubicon_Gen3_MkVIIShoulderAgathius_Cblue;
	class Rubicon_Gen3_MkVIIShoulderVitus_Cblue;
	class Rubicon_Gen3_MKVIICeloxhelmet_CBlue;
	
	class SEC_Gen3_MKVIINoShoulder: Rubicon_Gen3_MkVIIBaseShoulder
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] Mark VII Gen 3 Energy Shielding";
		picture="S-IVArmory\data\ICONS\MKVIICoreIcon_SA.paa";
		model="";
		descriptionShort="The latest generation of powered assault armor.";
		MJOLNIR_isArmor=1;
		MJOLNIR_shieldStrength=75;
		MJOLNIR_shieldChargeValue=1.1;
		MJOLNIR_shieldChargeDelay=0.1;
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			containerClass="Supply250";
			mass=20;
			passThrough=0.1;
			modelSides[]={6};
			uniformModel="";
			hiddenSelections[]={};
			hiddenSelectionsTextures[]={};
		};
	};
	class SEC_Gen3_MKVIIAgathius_Grey: SEC_Gen3_MKVIINoShoulder
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] Mark VII Agathius Shoulderplates";
		picture="\rubicon_gen3_attachments\data\ui\icon_V_agath_cgrey.paa";
		model="rubicon_gen3_attachments\gen3Agathius.p3d";
		descriptionShort="Supplemental deltoid/shoulder armor.";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\gen3_agathius_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MKVII_Customs\data\MKVII\gen3_agathius.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="rubicon_gen3_attachments\gen3Agathius.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\gen3_agathius_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MKVII_Customs\data\MKVII\gen3_agathius.rvmat"
		};
		};
	};
	class SEC_Gen3_MKVIIAgathius_SKELETON: SEC_Gen3_MKVIINoShoulder
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE/SPRT] Mark VII Agathius Shoulderplates";
		picture="\rubicon_gen3_attachments\data\ui\icon_V_agath_cgrey.paa";
		model="rubicon_gen3_attachments\gen3Agathius.p3d";
		descriptionShort="Supplemental deltoid/shoulder armor.";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\gen3_agathius_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MKVII_Customs\data\MKVII\gen3_agathius.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="rubicon_gen3_spartanii\gen3S2Agathius.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"MKVII_Customs\data\MKVII\gen3_agathius_CO.paa"
			};
			hiddenSelectionsMaterials[]=
			{
			"MKVII_Customs\data\MKVII\gen3_agathius.rvmat"
			};
		};
	};
	class SEC_Gen3_MKVIIAgathius_Colt: SEC_Gen3_MKVIIAgathius_SKELETON
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] Mark VII Agathius Shoulderplates (Colt)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\MKVII_Colt_Agathius_CO.paa"
		};
	};
	class SEC_Gen3_MKVIIAgathius_Hammer: SEC_Gen3_MKVIIAgathius_SKELETON
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] Mark VII Agathius Shoulderplates (Hammer)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\MKVII_Hammer_Agathius_CO.paa"
		};
	};
	class SEC_Gen3_MKVIIAgathius_Blitz: SEC_Gen3_MKVIIAgathius_SKELETON
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] Mark VII Agathius Shoulderplates (Blitz)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\MKVII_Blitz_Agathius_CO.paa"
		};
	};
	class SEC_Gen3_MKVIIAgathius_Havoc: SEC_Gen3_MKVIIAgathius_SKELETON
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] Mark VII Agathius Shoulderplates (Havoc)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\MKVII_Havoc_Agathius_CO.paa"
		};
	};
	class SEC_Gen3_MKVIIAgathius_Red: SEC_Gen3_MKVIIAgathius_Grey
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] Mark VII Agathius Shoulderplates (Red)";
		picture="\rubicon_gen3_attachments\data\ui\icon_V_agath_cbrick.paa";
		model="rubicon_gen3_attachments\gen3Agathius.p3d";
		descriptionShort="Supplemental deltoid/shoulder armor.";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\rubicon_gen3_attachments\data\gen3_agathius_cbrick_co.paa"
		};
	};
	class TWAL_Gen3_MKVII_Agathius: SEC_Gen3_MKVIIAgathius_Grey
	{
		scope=2;
		scopeArsenal=2;
		displayName="[T-WAL] Mark VII Nanite Shoulderplates";
		descriptionShort="Melting to gray goo at the slightest touch, this replication of Mark 7 is constructed out of Forerunner nanites";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\MKVII_Customs\data\TWAL\gen3_agathius_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\MKVII_Customs\data\TWAL\gen3_agathius.rvmat"
		};
	};
	class TWAL_Gen3_MKVIIAgathius_Librarian: TWAL_Gen3_MKVII_Agathius
	{
		scope=2;
		scopeArsenal=2;
		displayName="[T-WAL] Mark VII Nanite Shoulderplates (Composer of Strands)";
		descriptionShort="Melting to gray goo at the slightest touch, this replication of Mark 7 is marked with a sigil your helmet translates to 'Composer of Strands'";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\MKVII_Customs\data\TWAL\gen3_agathiuslibrarian_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\MKVII_Customs\data\TWAL\gen3_agathiuslibrarian.rvmat"
		};
	};
	class TWAL_Gen3_MKVIIAgathius_Didact: TWAL_Gen3_MKVII_Agathius
	{
		scope=2;
		scopeArsenal=2;
		displayName="[T-WAL] Mark VII Nanite Shoulderplates (Eater of Worlds)";
		descriptionShort="Melting to gray goo at the slightest touch, this replication of Mark 7 is marked with a sigil your helmet translates to 'Eater of Worlds'";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\MKVII_Customs\data\TWAL\gen3_agathiusdidact_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\MKVII_Customs\data\TWAL\gen3_agathiusdidact.rvmat"
		};
	};
	class TWAL_Gen3_MKVIIAgathius_Gravemind: TWAL_Gen3_MKVII_Agathius
	{
		scope=2;
		scopeArsenal=2;
		displayName="[T-WAL] Mark VII Nanite Shoulderplates (End of the Cycle)";
		descriptionShort="|| WARNING || INFOHAZARD DETECTED || VISUAL FEED INTERRUPTED ||";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\MKVII_Customs\data\TWAL\gen3_agathiusgravemind_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\MKVII_Customs\data\TWAL\gen3_agathiusgravemind.rvmat"
		};
	};
	class SEC_Gen3_MKVIIAgathius_ANVIL: SEC_Gen3_MKVIIAgathius_Grey
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] Mark VII Agathius Shoulderplates (ANVIL)";
		picture="\rubicon_gen3_attachments\data\ui\icon_V_agath_cbrick.paa";
		model="rubicon_gen3_attachments\gen3Agathius.p3d";
		descriptionShort="Supplemental deltoid/shoulder armor.";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\Anvil_gen3_agathius_CO.paa"
		};
	};
	class SEC_Gen3_MKVIIAgathius_Blue: SEC_Gen3_MKVIIAgathius_Grey
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] Mark VII Agathius Shoulderplates (Blue)";
		picture="\rubicon_gen3_attachments\data\ui\icon_V_agath_cblue.paa";
		model="rubicon_gen3_attachments\gen3Agathius.p3d";
		descriptionShort="Supplemental deltoid/shoulder armor.";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\rubicon_gen3_attachments\data\gen3_agathius_cblue_co.paa"
		};
	};
	class SEC_Gen3_MKVIIAgathius_Green: SEC_Gen3_MKVIIAgathius_Grey
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] Mark VII Agathius Shoulderplates (Green)";
		picture="\rubicon_gen3_attachments\data\ui\icon_V_agath_cforest.paa";
		model="rubicon_gen3_attachments\gen3Agathius.p3d";
		descriptionShort="Supplemental deltoid/shoulder armor.";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\rubicon_gen3_attachments\data\gen3_agathius_cforest_co.paa"
		};
	};
	class SEC_Gen3_MkVIIVitus: SEC_Gen3_MKVIINoShoulder
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] Mark VII Vitus Shoulderplates";
		picture="\rubicon_gen3_attachments\data\ui\icon_V_vitus_cgrey.paa";
		model="rubicon_gen3_attachments\gen3Vitus.p3d";
		descriptionShort="Supplemental deltoid/shoulder armor.";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\gen3_vitus_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MKVII_Customs\data\MKVII\gen3_vitus.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="rubicon_gen3_attachments\gen3Vitus.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"MKVII_Customs\data\MKVII\MKVII_Recruit_Vitus_CO.paa"
			};
			hiddenSelectionsMaterials[]=
			{
			"MKVII_Customs\data\MKVII\gen3_vitus.rvmat"
			};
		};
	};
	class SEC_Gen3_MkVIIVitus_Recruit: SEC_Gen3_MkVIIVitus
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] Mark VII Vitus Shoulderplates (Recruit)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\MKVII_Recruit_Vitus_CO.paa"
		};
	};
	class SEC_Gen3_MkVIIVitus_Grey: SEC_Gen3_MkVIIVitus
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] Mark VII Vitus Shoulderplates (Grey)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rubicon_gen3_attachments\data\gen3_vitus_cgrey_co.paa"
		};
	};
	class SEC_Gen3_MkVIIVitus_Red: SEC_Gen3_MkVIIVitus
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] Mark VII Vitus Shoulderplates (Red)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rubicon_gen3_attachments\data\gen3_vitus_cbrick_co.paa"
		};
	};
	class SEC_Gen3_MkVIIVitus_Blue: SEC_Gen3_MkVIIVitus
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] Mark VII Vitus Shoulderplates (Blue)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rubicon_gen3_attachments\data\gen3_vitus_cblue_co.paa"
		};
	};
	class SEC_Gen3_MkVIIVitus_Green: SEC_Gen3_MkVIIVitus
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] Mark VII Vitus Shoulderplates (Green)";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rubicon_gen3_attachments\data\gen3_vitus_cforest_co.paa"
		};
	};
	class SEC_Gen3_MKVIIhelmet_Recruit: Rubicon_Gen3_MKVIIhelmet_CGrey
	{
		scope=2;
		displayName="[EAGLE] Mark VII Helmet";
		MJOLNIR_helmetOutline="\S-IVArmory\data\MKVII\KeystoneHelmetOutline.paa";
		MJOLNIR_isHelmet=1;
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\gen3_mk7helmet_CO.paa",
			"MKVII_Customs\data\MKVII\gen3_mk7visor_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MKVII_Customs\data\MKVII\gen3_mk7helmet.rvmat",
			"MKVII_Customs\data\MKVII\gen3_mk7visor.rvmat"
		};
	};
	class SEC_Gen3_MKVIICeloxHelmet: Rubicon_Gen3_MKVIICeloxhelmet_CBlue
	{
		scope=2;
		displayName="[EAGLE] CELOX-Class Helmet";
		picture="\rubicon_gen3_helmets\data\ui\icon_U_celoxhelm_cgrey.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\CELOX\gen3_celoxhelmet_CO.paa",
			"MKVII_Customs\data\CELOX\gen3_celoxvisor_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MKVII_Customs\data\CELOX\gen3_celoxhelmet.rvmat",
			"MKVII_Customs\data\CELOX\gen3_celoxvisor.rvmat"
		};
	};
	class SEC_Gen3_MKVIICeloxhelmet_Keegan: SEC_Gen3_MKVIICeloxHelmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[EAGLE] CELOX-Class Helmet (Keegan)";
		picture="\rubicon_gen3_helmets\data\ui\icon_U_celoxhelm_cgrey.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\CELOX\gen3_celoxhelmet_Keegan_CO.paa",
			"MKVII_Customs\data\CELOX\gen3_celoxvisor_Keegan_CO.paa"
		};
	};
	class SEC_Gen3_MKVIIHelmet_Blue: SEC_Gen3_MKVIIhelmet_Recruit
	{
		scope=2;
		displayName="[EAGLE] Mark VII Helmet (Blue)";
		picture="\rubicon_gen3_helmets\data\ui\icon_U_mk7helm_cblue.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"rubicon_gen3_helmets\data\gen3_mk7helmet_cblue_co.paa",
			"MKVII_Customs\data\MKVII\sec_mk7visor_co.paa"
		};
	};
	class TWAL_Gen3_MKVIIHelmet_Zealot: SEC_Gen3_MKVIIhelmet_Recruit
	{
		scope=2;
		scopeArsenal=2;
		displayName="[T-WAL] Mark VII Nanite Helmet";
		descriptionShort="Melting to gray goo at the slightest touch, this helmet is constructed out of Forerunner nanites, and unusable.";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\TWAL\gen3_mk7helmet_co.paa",
			"MKVII_Customs\data\TWAL\gen3_mk7visor_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MKVII_Customs\data\TWAL\gen3_mk7helmet.rvmat",
			"MKVII_Customs\data\MKVII\gen3_mk7visor.rvmat"
		};
	};
	class SEC_Gen3_MKVIIHelmet_ANVIL: SEC_Gen3_MKVIIhelmet_Recruit
	{
		scope=2;
		displayName="[EAGLE] Mark VII Helmet (ANVIL)";
		picture="\rubicon_gen3_helmets\data\ui\icon_U_mk7helm_cblue.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\Anvil_gen3_mk7helmet_CO.paa",
			"MKVII_Customs\data\MKVII\Anvil_gen3_mk7visor_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MKVII_Customs\data\MKVII\gen3_mk7helmet.rvmat",
			"MKVII_Customs\data\MKVII\gen3_anvilvisor.rvmat"
		};
	};
	class SEC_Gen3_MKVIIHelmet_CBrick: SEC_Gen3_MKVIIhelmet_Recruit
	{
		scope=2;
		displayName="[EAGLE] Mark VII Helmet (Red)";
		picture="\rubicon_gen3_helmets\data\ui\icon_U_mk7helm_cbrick.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"rubicon_gen3_helmets\data\gen3_mk7helmet_cbrick_co.paa",
			"MKVII_Customs\data\MKVII\sec_mk7visor_co.paa"
		};
	};
	class SEC_Gen3_MKVIIHelmet_CForest: SEC_Gen3_MKVIIhelmet_Recruit
	{
		scope=2;
		displayName="[EAGLE] Mark VII Helmet (Green)";
		picture="\rubicon_gen3_helmets\data\ui\icon_U_mk7helm_cforest.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"rubicon_gen3_helmets\data\gen3_mk7helmet_cforest_co.paa",
			"MKVII_Customs\data\MKVII\sec_mk7visor_co.paa"
		};
	};
	class SEC_Gen3_MKVIIHelmet_SKELETON: SEC_Gen3_MKVIIhelmet_Recruit
	{
		scope=2;
		displayName="[EAGLE/SPRT] Mark VII Helmet";
		picture="\rubicon_gen3_helmets\data\ui\icon_U_mk7helm_cgrey.paa";
		model="\rubicon_gen3_spartanii\gen3S2mk7helmet.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\gen3_mk7helmet_CO.paa",
			"MKVII_Customs\data\MKVII\gen3_mk7visor_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MKVII_Customs\data\MKVII\gen3_mk7helmet.rvmat",
			"MKVII_Customs\data\MKVII\gen3_mk7visor.rvmat"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\rubicon_gen3_spartanii\gen3S2mk7helmet.p3d";
			allowedSlots[]=
			{
				"BACKPACK_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=25;
					passThrough=0.5;
				};
			};
		};
	};
	class SEC_Gen3_MKVIIHelmet_Colt: SEC_Gen3_MKVIIHelmet_SKELETON
	{
		scope=2;
		displayName="[EAGLE] Mark VII Helmet (Colt)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\MKVII_KeystoneHelmet_Colt_CO.paa",
			"MKVII_Customs\data\MKVII\MKVII_KeystoneVisor_ARC_CO.paa"
		};
	};
	class SEC_Gen3_MKVIIHelmet_Hammer: SEC_Gen3_MKVIIHelmet_SKELETON
	{
		scope=2;
		displayName="[EAGLE] Mark VII Helmet (Hammer)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\MKVII_Hammer_KeystoneHelm_CO.paa",
			"MKVII_Customs\data\MKVII\MKVII_KeystoneVisor_ARC_CO.paa"
		};
	};
	class SEC_Gen3_MKVIIHelmet_Blitz: SEC_Gen3_MKVIIHelmet_SKELETON
	{
		scope=2;
		displayName="[EAGLE] Mark VII Helmet (Blitz)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\MKVII_KeystoneHelmet_Blitz_CO.paa",
			"MKVII_Customs\data\MKVII\MKVII_KeystoneVisor_ARC_CO.paa"
		};
	};
	class SEC_Gen3_MKVIIHelmet_Havoc: SEC_Gen3_MKVIIHelmet_SKELETON
	{
		scope=2;
		displayName="[EAGLE] Mark VII Helmet (Havoc)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\MKVII_KeystoneHelmet_Havoc_CO.paa",
			"MKVII_Customs\data\MKVII\MKVII_KeystoneVisor_ARC_CO.paa"
		};
	};
	class SEC_Gen3_CavHelmet_Recruit: Rubicon_Gen3_MKVIICAVhelmet_CGrey
	{
		scope=2;
		author = "Reiken";
		displayName="[EAGLE] CAVALLINO-Class Helmet (Recruit)";
		MJOLNIR_helmetOutline="\S-IVArmory\data\CAVALLINO\CavallinoHelmetOutline.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\CAVALLINO\MKVII_Recruit_CavHelmet_CO.paa",
			"MKVII_Customs\data\CAVALLINO\MKVII_RecruitCavVisor_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MKVII_Customs\data\CAVALLINO\gen3_cavhelmet.rvmat",
			"MKVII_Customs\data\CAVALLINO\gen3_cavvisor.rvmat"
		};
	};
	class SEC_Gen3_CavHelmet_Green: SEC_Gen3_CavHelmet_Recruit
	{
		scope=2;
		displayName="[EAGLE] CAVALLINO-Class Helmet";
		picture="\rubicon_gen3_helmets\data\ui\icon_U_cavahelm_cblue.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\CAVALLINO\gen3_cavhelmet_CO.paa",
			"MKVII_Customs\data\CAVALLINO\gen3_cavvisor_CO.paa"
		};
	};
	class SEC_Gen3_CavHelmet_Blue: SEC_Gen3_CavHelmet_Recruit
	{
		scope=2;
		displayName="[EAGLE] CAVALLINO-Class Helmet (Blue)";
		picture="\rubicon_gen3_helmets\data\ui\icon_U_cavahelm_cblue.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"rubicon_gen3_helmets\data\gen3_cavhelmet_cblue_co.paa",
			"rubicon_gen3_helmets\data\gen3_cavvisor_co.paa"
		};
	};

	class SEC_Gen3_CavHelmet_Brick: SEC_Gen3_CavHelmet_Recruit
	{
		scope=2;
		displayName="[EAGLE] CAVALLINO-Class Helmet (Red)";
		picture="\rubicon_gen3_helmets\data\ui\icon_U_cavahelm_cbrick.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"rubicon_gen3_helmets\data\gen3_cavhelmet_cbrick_co.paa",
			"rubicon_gen3_helmets\data\gen3_cavvisor_co.paa"
		};
	};
	class SEC_Gen3_CavHelmet_Forest: SEC_Gen3_CavHelmet_Recruit
	{
		scope=2;
		displayName="[EAGLE] CAVALLINO-Class Helmet (Green)";
		picture="\rubicon_gen3_helmets\data\ui\icon_U_cavahelm_cforest.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"rubicon_gen3_helmets\data\gen3_cavhelmet_cforest_co.paa",
			"rubicon_gen3_helmets\data\gen3_cavvisor_co.paa"
		};
	};
	class Rubicon_Gen3_MKVIICore;
    // Class for inventory item of uniform
	class SEC_Gen3_MKVIICoreGrey : Rubicon_Gen3_MKVIICore
	{
		scope = 2;
		displayName = "[EAGLE] MJOLNIR Gen3 MKVII Armor Core";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo : UniformItem
		{
			uniformModel = "\rubicon_gen3_spartaniv\gen3MarkVIIcore.p3d";
			uniformClass = B_SEC_SpartanIV_Base; // Needs to be matching Character in cfgVehicles
			containerClass = Supply40;
			mass = 40;
		};
    };
	class SEC_Gen3_MKVIICoreRed : SEC_Gen3_MKVIICoreGrey
	{
		scope = 2;
		displayName = "[EAGLE] MJOLNIR Gen3 MKVII Armor Core (Red)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo : UniformItem
		{
			uniformModel = "\rubicon_gen3_spartaniv\gen3MarkVIIcore.p3d";
			uniformClass = B_SEC_SpartanIV_Red; // Needs to be matching Character in cfgVehicles
			containerClass = Supply40;
			mass = 40;
		};
    };
	class TWAL_Gen3_MKVIICoreZealot : SEC_Gen3_MKVIICoreGrey
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[T-WAL] Nanite Mark VII Armor Core";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		descriptionShort="Melting to gray goo at the slightest touch, this armor is marked in scratched in white marks, and Forerunner sigils.";
		class ItemInfo : UniformItem
		{
			uniformModel = "\rubicon_gen3_spartaniv\gen3MarkVIIcore.p3d";
			uniformClass = B_SEC_SpartanIV_TWAL; // Needs to be matching Character in cfgVehicles
			containerClass = Supply40;
			mass = 40;
		};
    };
	class SEC_Gen3_MKVIICoreANVIL : SEC_Gen3_MKVIICoreGrey
	{
		scope = 2;
		displayName = "[EAGLE] MJOLNIR Gen3 MKVII Armor Core (ANVIL)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo : UniformItem
		{
			uniformModel = "\rubicon_gen3_spartaniv\gen3MarkVIIcore.p3d";
			uniformClass = B_SEC_SpartanIV_ANVIL; // Needs to be matching Character in cfgVehicles
			containerClass = Supply40;
			mass = 40;
		};
    };
	class SEC_Gen3_MKVIICoreBlue : SEC_Gen3_MKVIICoreGrey
	{
		scope = 2;
		displayName = "[EAGLE] MJOLNIR Gen3 MKVII Armor Core (Blue)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo : UniformItem
		{
			uniformModel = "\rubicon_gen3_spartaniv\gen3MarkVIIcore.p3d";
			uniformClass = B_SEC_SpartanIV_Blue; // Needs to be matching Character in cfgVehicles
			containerClass = Supply40;
			mass = 40;
		};
    };
	class SEC_Gen3_MKVIICoreGreen : SEC_Gen3_MKVIICoreGrey
	{
		scope = 2;
		displayName = "[EAGLE] MJOLNIR Gen3 MKVII Armor Core (Green)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo : UniformItem
		{
			uniformModel = "\rubicon_gen3_spartaniv\gen3MarkVIIcore.p3d";
			uniformClass = B_SEC_SpartanIV_Green; // Needs to be matching Character in cfgVehicles
			containerClass = Supply40;
			mass = 40;
		};
    };
	class SEC_Gen3_MKVIICoreRecruit : SEC_Gen3_MKVIICoreGrey
	{
		scope = 2;
		displayName = "[EAGLE] MJOLNIR Gen3 MKVII Armor Core (Recruit)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo : UniformItem
		{
			uniformModel = "\rubicon_gen3_spartaniv\gen3MarkVIIcore.p3d";
			uniformClass = B_SEC_SpartanIV_Recruit; // Needs to be matching Character in cfgVehicles
			containerClass = Supply40;
			mass = 40;
		};
    };
	class SEC_Gen3_MKVIICoreShark : SEC_Gen3_MKVIICoreGrey
	{
		scope = 2;
		displayName = "[EAGLE] MJOLNIR Gen3 MKVII Armor Core (Shark)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo : UniformItem
		{
			uniformModel = "\rubicon_gen3_spartaniv\gen3MarkVIIcore.p3d";
			uniformClass = B_SEC_SpartanIV_Shark; // Needs to be matching Character in cfgVehicles
			containerClass = Supply40;
			mass = 40;
		};
    };
	class Rubicon_SpartanII_CadetBlue;
	class SEC_Gen3_MKVIICoreSKELETON : Rubicon_SpartanII_CadetBlue
	{
		scope = 2;
		displayName = "[EAGLE/SPRT] MJOLNIR Gen3 MKVII Armor Core";
		model="\rubicon_gen3_spartaniv\gen3MarkVIIcoreGround.p3d";
		class ItemInfo : UniformItem
		{
			uniformModel="\rubicon_gen3_spartanii\gen3MarkVIIS2core.p3d";
			uniformClass = B_SEC_SpartanIV_Skel; // Needs to be matching Character in cfgVehicles
			containerClass = Supply40;
			mass = 40;
		};
    };
	class SEC_Gen3_MKVIICoreMuffin : SEC_Gen3_MKVIICoreSKELETON
	{
		scope = 2;
		displayName = "[EAGLE] MJOLNIR Gen3 MKVII Armor Core (Muffin)";
		model="\rubicon_gen3_spartaniv\gen3MarkVIIcoreGround.p3d";
		class ItemInfo : UniformItem
		{
			uniformModel="\rubicon_gen3_spartanii\gen3MarkVIIS2core.p3d";
			uniformClass = B_SEC_SpartanIV_Muffin; // Needs to be matching Character in cfgVehicles
			containerClass = Supply40;
			mass = 40;
		};
    };
	class SEC_Gen3_MKVIICoreColt : SEC_Gen3_MKVIICoreSKELETON
	{
		scope = 2;
		displayName = "[EAGLE] MJOLNIR Gen3 MKVII Armor Core (Colt)";
		model="\rubicon_gen3_spartaniv\gen3MarkVIIcoreGround.p3d";
		class ItemInfo : UniformItem
		{
			uniformModel="\rubicon_gen3_spartanii\gen3MarkVIIS2core.p3d";
			uniformClass = B_SEC_SpartanIV_Colt; // Needs to be matching Character in cfgVehicles
			containerClass = Supply40;
			mass = 40;
		};
    };
	class SEC_Gen3_MKVIICoreHammer : SEC_Gen3_MKVIICoreSKELETON
	{
		scope = 2;
		displayName = "[EAGLE] MJOLNIR Gen3 MKVII Armor Core (Hammer)";
		model="\rubicon_gen3_spartaniv\gen3MarkVIIcoreGround.p3d";
		class ItemInfo : UniformItem
		{
			uniformModel="\rubicon_gen3_spartanii\gen3MarkVIIS2core.p3d";
			uniformClass = B_SEC_SpartanIV_Hammer; // Needs to be matching Character in cfgVehicles
			containerClass = Supply40;
			mass = 40;
		};
    };
	class SEC_Gen3_MKVIICoreBlitz : SEC_Gen3_MKVIICoreSKELETON
	{
		scope = 2;
		displayName = "[EAGLE] MJOLNIR Gen3 MKVII Armor Core (Blitz)";
		model="\rubicon_gen3_spartaniv\gen3MarkVIIcoreGround.p3d";
		class ItemInfo : UniformItem
		{
			uniformModel="\rubicon_gen3_spartanii\gen3MarkVIIS2core.p3d";
			uniformClass = B_SEC_SpartanIV_Blitz; // Needs to be matching Character in cfgVehicles
			containerClass = Supply40;
			mass = 40;
		};
    };
	class SEC_Gen3_MKVIICoreHavoc : SEC_Gen3_MKVIICoreSKELETON
	{
		scope = 2;
		displayName = "[EAGLE] MJOLNIR Gen3 MKVII Armor Core (Havoc)";
		uniformModel="\rubicon_gen3_spartanii\gen3MarkVIIS2core.p3d";
		model="\rubicon_gen3_spartaniv\gen3MarkVIIcoreGround.p3d";
		class ItemInfo : UniformItem
		{
			uniformmodel="\rubicon_gen3_spartanii\gen3MarkVIIS2core.p3d";
			uniformClass = B_SEC_SpartanIV_Havoc; // Needs to be matching Character in cfgVehicles
			containerClass = Supply40;
			mass = 40;
		};
    };
};

	

class CfgVehicles		// Character classes are defined under cfgVehicles.
{
	class Man;
	class CAManBase: Man
	{
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class B_Rubicon_SpartanIV_Base;
	// Class for Character/Uniform Model
	class B_Rubicon_SpartanII_Base;
    class B_SEC_SpartanIV_Base : B_Rubicon_SpartanIV_Base
	{
		author = "Reiken";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model = "\rubicon_gen3_spartaniv\gen3MarkVIIcore.p3d";
		picture="S-IVArmory\data\ICONS\MKVIICoreIcon_SA.paa";
		uniformClass = "SEC_Gen3_MKVIICoreGrey"; // Needs to be matching item in cfgWeapons
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		}; 
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\gen3_techsuit_CO.paa",
			"MKVII_Customs\data\MKVII\gen3_mk7core_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MKVII_Customs\data\MKVII\gen3_techsuit.rvmat",
			"MKVII_Customs\data\MKVII\gen3_mk7core.rvmat"
		};
		class HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=8;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=16;
				material=-1;
				name="pelvis";
				passThrough=0.33000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=16;
				material=-1;
				name="spine1";
				passThrough=0.33000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=16;
				material=-1;
				name="spine2";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=16;
				material=-1;
				name="spine3";
				passThrough=0.33000001;
				radius=0.18000001;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=16;
				material=-1;
				name="arms";
				passThrough=0.69999999;
				radius=0.1;
				explosionShielding=0.1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=16;
				material=-1;
				name="hands";
				passThrough=0.69999999;
				radius=0.1;
				explosionShielding=0.1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=16;
				material=-1;
				name="legs";
				passThrough=0.69999999;
				radius=0.14;
				explosionShielding=0.1;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45";
			};
		};
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
	};
	class B_SEC_SpartanIV_Red : B_SEC_SpartanIV_Base
	{
		author = "Reiken";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model = "\rubicon_gen3_spartaniv\gen3MarkVIIcore.p3d";
		picture="S-IVArmory\data\ICONS\MKVIICoreIcon_SA.paa";
		uniformClass = "SEC_Gen3_MKVIICoreRed"; // Needs to be matching item in cfgWeapons
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\rubicon_gen3_spartaniv\data\gen3_techsuit_co.paa",
			"\rubicon_gen3_spartaniv\data\gen3_mk7core_cbrick_co.paa"
		};
	};
	class B_SEC_SpartanIV_TWAL : B_SEC_SpartanIV_Base
	{
		author = "Reiken";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model = "\rubicon_gen3_spartaniv\gen3MarkVIIcore.p3d";
		picture="S-IVArmory\data\ICONS\MKVIICoreIcon_SA.paa";
		uniformClass = "TWAL_Gen3_MKVIICoreZealot"; // Needs to be matching item in cfgWeapons
		descriptionShort="Melting to gray goo at the slightest touch, this armor is marked in scratched in white marks, and Forerunner sigils.";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\TWAL\gen3_techsuit_CO.paa",
			"MKVII_Customs\data\TWAL\gen3_mk7core_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MKVII_Customs\data\TWAL\gen3_techsuit.rvmat",
			"MKVII_Customs\data\TWAL\gen3_mk7core.rvmat"
		};
	};
	class B_SEC_SpartanIV_ANVIL : B_SEC_SpartanIV_Base
	{
		author = "Reiken";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model = "\rubicon_gen3_spartaniv\gen3MarkVIIcore.p3d";
		picture="S-IVArmory\data\ICONS\MKVIICoreIcon_SA.paa";
		uniformClass = "SEC_Gen3_MKVIICoreANVIL"; // Needs to be matching item in cfgWeapons
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\gen3_techsuit_CO.paa",
			"MKVII_Customs\data\MKVII\Anvil_gen3_mk7core_CO.paa"
		};
	};
	class B_SEC_SpartanIV_Blue : B_SEC_SpartanIV_Base
	{
		author = "Reiken";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model = "\rubicon_gen3_spartaniv\gen3MarkVIIcore.p3d";
		picture="S-IVArmory\data\ICONS\MKVIICoreIcon_SA.paa";
		uniformClass = "SEC_Gen3_MKVIICoreBlue"; // Needs to be matching item in cfgWeapons
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\rubicon_gen3_spartaniv\data\gen3_techsuit_co.paa",
			"\rubicon_gen3_spartaniv\data\gen3_mk7core_cblue_co.paa"
		};
	};
	class B_SEC_SpartanIV_Green : B_SEC_SpartanIV_Base
	{
		author = "Reiken";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model = "\rubicon_gen3_spartaniv\gen3MarkVIIcore.p3d";
		picture="S-IVArmory\data\ICONS\MKVIICoreIcon_SA.paa";
		uniformClass = "SEC_Gen3_MKVIICoreGreen"; // Needs to be matching item in cfgWeapons
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\rubicon_gen3_spartaniv\data\gen3_techsuit_co.paa",
			"\rubicon_gen3_spartaniv\data\gen3_mk7core_cforest_co.paa"
		};
	};
	class B_SEC_SpartanIV_Recruit : B_SEC_SpartanIV_Base
	{
		author = "Raine";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model = "\rubicon_gen3_spartaniv\gen3MarkVIIcore.p3d";
		picture="S-IVArmory\data\ICONS\MKVIICoreIcon_SA.paa";
		uniformClass = "SEC_Gen3_MKVIICoreRecruit"; // Needs to be matching item in cfgWeapons
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\rubicon_gen3_spartaniv\data\gen3_techsuit_co.paa",
			"MKVII_Customs\data\MKVII\MKVII_Recruit_CO.paa"
		};
	};
	class B_SEC_SpartanIV_Shark : B_SEC_SpartanIV_Base
	{
		author = "Gambit";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model = "\rubicon_gen3_spartaniv\gen3MarkVIIcore.p3d";
		picture="S-IVArmory\data\ICONS\MKVIICoreIcon_SA.paa";
		uniformClass = "SEC_Gen3_MKVIICoreShark"; // Needs to be matching item in cfgWeapons
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\rubicon_gen3_spartaniv\data\gen3_techsuit_co.paa",
			"MKVII_Customs\data\MKVII\Shark_gen3_mk7core_CO.paa"
		};
	};
	class B_SEC_SpartanIV_Skel : B_Rubicon_SpartanII_Base
	{
		author = "Reiken";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model="\rubicon_gen3_spartanii\gen3MarkVIIS2core.p3d";
		picture="S-IVArmory\data\ICONS\MKVIICoreIcon_SA.paa";
		uniformClass = "SEC_Gen3_MKVIICoreSKELETON"; // Needs to be matching item in cfgWeapons
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MKVII_Customs\data\MKVII\gen3_techsuit_CO.paa",
			"MKVII_Customs\data\MKVII\gen3_mk7core_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MKVII_Customs\data\MKVII\gen3_techsuit.rvmat",
			"MKVII_Customs\data\MKVII\gen3_mk7core.rvmat"
		};
	};
	class B_SEC_SpartanIV_Muffin : B_Rubicon_SpartanII_Base
	{
		author = "Reiken";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model="\rubicon_gen3_spartanii\gen3MarkVIIS2core.p3d";
		picture="S-IVArmory\data\ICONS\MKVIICoreIcon_SA.paa";
		uniformClass = "SEC_Gen3_MKVIICoreMuffin"; // Needs to be matching item in cfgWeapons
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\rubicon_gen3_spartaniv\data\gen3_techsuit_co.paa",
			"MKVII_Customs\data\MKVII\gen3_mk7core_Muffin_CO.paa"
		};
	};
	class B_SEC_SpartanIV_Colt : B_Rubicon_SpartanII_Base
	{
		author = "Raine";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model="\rubicon_gen3_spartanii\gen3MarkVIIS2core.p3d";
		picture="S-IVArmory\data\ICONS\MKVIICoreIcon_SA.paa";
		uniformClass = "SEC_Gen3_MKVIICoreColt"; // Needs to be matching item in cfgWeapons
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\rubicon_gen3_spartaniv\data\gen3_techsuit_co.paa",
			"MKVII_Customs\data\MKVII\MKVII_Colt_CO.paa"
		};
	};
	class B_SEC_SpartanIV_Hammer : B_SEC_SpartanIV_Colt
	{
		author = "Raine";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model="\rubicon_gen3_spartanii\gen3MarkVIIS2core.p3d";
		picture="S-IVArmory\data\ICONS\MKVIICoreIcon_SA.paa";
		uniformClass = "SEC_Gen3_MKVIICoreHammer"; // Needs to be matching item in cfgWeapons
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\rubicon_gen3_spartaniv\data\gen3_techsuit_co.paa",
			"MKVII_Customs\data\MKVII\MKVII_Hammer_CO.paa"
		};
	};
	class B_SEC_SpartanIV_Blitz: B_SEC_SpartanIV_Colt
	{
		author = "Raine";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model="\rubicon_gen3_spartanii\gen3MarkVIIS2core.p3d";
		picture="S-IVArmory\data\ICONS\MKVIICoreIcon_SA.paa";
		uniformClass = "SEC_Gen3_MKVIICoreBlitz"; // Needs to be matching item in cfgWeapons
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\rubicon_gen3_spartaniv\data\gen3_techsuit_co.paa",
			"MKVII_Customs\data\MKVII\MKVII_Blitz_CO.paa"
		};
	};
	class B_SEC_SpartanIV_Havoc : B_SEC_SpartanIV_Colt
	{
		author = "Raine";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model="\rubicon_gen3_spartanii\gen3MarkVIIS2core.p3d";
		picture="S-IVArmory\data\ICONS\MKVIICoreIcon_SA.paa";
		uniformClass = "SEC_Gen3_MKVIICoreHavoc"; // Needs to be matching item in cfgWeapons
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\rubicon_gen3_spartaniv\data\gen3_techsuit_co.paa",
			"MKVII_Customs\data\MKVII\MKVII_Havoc_CO.paa"
		};
	};
};