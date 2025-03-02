class Cfgpatches
{
	class SEC_Medical
	{
		author="Sp-4 and the 6th STB";
		units[]=
		{
			"SEC_BiofoamItem",
			"SEC_MedigelItem"
		};
		weapons[]=
		{
			"SEC_Biofoam",
			"SEC_Medigel",
			"SEC_PlasmaIV",
			"SEC_BloodIV"
		};
		requiredaddons[]=
		{
			"ace_medical",
			"OPTRE_Weapons",
			"kat_main"
		};
	};
};
class CfgWeapons
{
	class OPTRE_Biofoam;
	class CBA_MiscItem_ItemInfo;
	class ItemInfo;
	class OPTRE_Medigel;
	class SEC_Biofoam: OPTRE_Biofoam
	{
		scope=2;
		scopeArsenal=2;
		displayName="[SEC] Biofoam";
		class ItemInfo: ItemInfo
		{
			mass=1.5;
		};
	};
	class SEC_Medigel: OPTRE_Medigel
	{
		scope=2;
		scopeArsenal=2;
		displayName="[SEC] Medigel";
		class ItemInfo: ItemInfo
		{
			mass=1;
		};
	};
	class ACE_plasmaIV;
	class SEC_PlasmaIV: ACE_plasmaIV
	{
		scope=2;
		displayName="[SEC] Plasma IV 2.5L";
		descriptionShort="2.5L of Plasma";
		descriptionUse="Give Plasma (2.5L)";
		class ItemInfo: ItemInfo
		{
			mass=12;
		};
	};
	class ACE_bloodIV;
	class SEC_BloodIV: ACE_bloodIV
	{
		scope=2;
		displayName="[SEC] Blood IV 2.5L";
		descriptionShort="2.5L of Blood";
		descriptionUse="Give Blood (2.5L)";
		class ItemInfo: ItemInfo
		{
			mass=12;
		};
	};
};
class CfgVehicles
{
	class OPTRE_BiofoamItem;
	class OPTRE_MediGelItem;
	class SEC_BiofoamItem: OPTRE_BiofoamItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="SEC Biofoam";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_SEC_Biofoam
			{
				name="SEC_Biofoam";
				count=1;
			};
		};
		mass=1.5;
	};
	class SEC_MedigelItem: OPTRE_MediGelItem
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="SEC Biofoam";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_SEC_Medigel
			{
				name="SEC_Medigel";
				count=1;
			};
		};
		mass=1;
	};
};
class ACE_Medical_Treatment
{
	class PlasmaIV;
	class BloodIV;
	class OPTRE_Biofoam;
	class OPTRE_Medigel;
	class IV
	{
		class SEC_PlasmaIV: PlasmaIV
		{
			volume=2500;
		};
		class SEC_BloodIV: BloodIV
		{
			volume=2500;
		};
	};
	class bandaging
	{
		class OPTRE_Biofoam;
		class OPTRE_Medigel;
		class SEC_Biofoam: OPTRE_Biofoam
		{
			class plasma
			{
				effectiveness=0;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=0;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=0;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=0;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=240;
				reopeningMaxDelay=480;
			};
			class AbrasionMinor: Abrasion
			{
				effectiveness=3;
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=2;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=1;
			};
			class Avulsions: Abrasion
			{
				effectiveness=8;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=420;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness=8;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness=6;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness=4;
			};
			class Contusion: Abrasion
			{
				effectiveness=0;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
			};
			class Crush: Abrasion
			{
				effectiveness=8;
				reopeningChance=1;
				reopeningMinDelay=700;
				reopeningMaxDelay=1000;
			};
			class CrushMinor: Crush
			{
				effectiveness=8;
			};
			class CrushMedium: Crush
			{
				effectiveness=6;
			};
			class CrushLarge: Crush
			{
				effectiveness=4;
			};
			class Cut: Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=480;
			};
			class CutMinor: Cut
			{
				effectiveness=3;
			};
			class CutMedium: Cut
			{
				effectiveness=2;
			};
			class CutLarge: Cut
			{
				effectiveness=1;
			};
			class Laceration: Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=720;
			};
			class LacerationMinor: Laceration
			{
				effectiveness=3;
			};
			class LacerationMedium: Laceration
			{
				effectiveness=2;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=1;
			};
			class velocityWound: Abrasion
			{
				effectiveness=8;
				reopeningChance=1;
				reopeningMinDelay=900;
				reopeningMaxDelay=1200;
			};
			class velocityWoundMinor: velocityWound
			{
				effectiveness=8;
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=6;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=4;
			};
			class punctureWound: Abrasion
			{
				effectiveness=8;
				reopeningChance=1;
				reopeningMinDelay=900;
				reopeningMaxDelay=3000;
			};
			class punctureWoundMinor: punctureWound
			{
				effectiveness=8;
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=6;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=4;
			};
		};
		class SEC_Medigel: OPTRE_Medigel
		{
			class plasma
			{
				effectiveness=5;
				reopeningChance=0;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMinor: plasma
			{
				effectiveness=4;
				reopeningChance=0;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaMedium: plasma
			{
				effectiveness=3;
				reopeningChance=0;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class plasmaLarge: plasma
			{
				effectiveness=2;
				reopeningChance=0;
				reopeningMinDelay=600;
				reopeningMaxDelay=900;
			};
			class Abrasion
			{
				effectiveness=8;
				reopeningChance=1;
				reopeningMinDelay=240;
				reopeningMaxDelay=480;
			};
			class AbrasionMinor: Abrasion
			{
				effectiveness=8;
			};
			class AbrasionMedium: Abrasion
			{
				effectiveness=6;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness=4;
			};
			class Avulsions: Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=420;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness=3;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness=2;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness=1;
			};
			class Contusion: Abrasion
			{
				effectiveness=0;
				reopeningChance=1;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class ContusionMinor: Contusion
			{
			};
			class ContusionMedium: Contusion
			{
			};
			class ContusionLarge: Contusion
			{
			};
			class Crush: Abrasion
			{
				effectiveness=0;
				reopeningChance=1;
				reopeningMinDelay=700;
				reopeningMaxDelay=1000;
			};
			class CrushMinor: Crush
			{
				effectiveness=0;
			};
			class CrushMedium: Crush
			{
				effectiveness=0;
			};
			class CrushLarge: Crush
			{
				effectiveness=0;
			};
			class Cut: Abrasion
			{
				effectiveness=8;
				reopeningChance=1;
				reopeningMinDelay=300;
				reopeningMaxDelay=480;
			};
			class CutMinor: Cut
			{
				effectiveness=8;
			};
			class CutMedium: Cut
			{
				effectiveness=6;
			};
			class CutLarge: Cut
			{
				effectiveness=4;
			};
			class Laceration: Abrasion
			{
				effectiveness=8;
				reopeningChance=1;
				reopeningMinDelay=600;
				reopeningMaxDelay=720;
			};
			class LacerationMinor: Laceration
			{
				effectiveness=8;
			};
			class LacerationMedium: Laceration
			{
				effectiveness=6;
			};
			class LacerationLarge: Laceration
			{
				effectiveness=4;
			};
			class velocityWound: Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=900;
				reopeningMaxDelay=1200;
			};
			class velocityWoundMinor: velocityWound
			{
				effectiveness=3;
			};
			class velocityWoundMedium: velocityWound
			{
				effectiveness=2;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness=1;
			};
			class punctureWound: Abrasion
			{
				effectiveness=4;
				reopeningChance=1;
				reopeningMinDelay=900;
				reopeningMaxDelay=3000;
			};
			class punctureWoundMinor: punctureWound
			{
				effectiveness=3;
			};
			class punctureWoundMedium: punctureWound
			{
				effectiveness=2;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness=1;
			};
		};
	};
};
class ACE_Medical_Treatment_Actions
{
	class PlasmaIV;
	class BloodIV;
	class basicbandage;
	class OPTRE_Medigel;
	class OPTRE_Biofoam;
	class SEC_PlasmaIV: PlasmaIV
	{
		displayName="Give Plasma IV (2500ml)";
		displayNameProgress="Transfusing Plasma...";
		treatmentTime=8;
		items[]=
		{
			"SEC_PlasmaIV"
		};
	};
	class SEC_BloodIV: BloodIV
	{
		displayName="Give Blood IV (2500ml)";
		displayNameProgress="Transfusing Blood...";
		treatmentTime=7;
		items[]=
		{
			"SEC_BloodIV"
		};
	};
	class SEC_Medigel: OPTRE_Medigel
	{
		displayName="Spread Medigel";
		displayNameProgress="Spreading Medigel...";
		treatmentTime=3;
		items[]=
		{
			"SEC_Medigel"
		};
	};
	class SEC_Biofoam: OPTRE_Biofoam
	{
		displayName="Inject Biofoam";
		displayNameProgress="Injecting Biofoam...";
		treatmentTime=6;
		items[]=
		{
			"SEC_Biofoam"
		};
	};
};
