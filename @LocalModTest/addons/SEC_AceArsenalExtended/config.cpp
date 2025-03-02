class CfgPatches
{
	class SEC_AceArsenalExtended
	{
		author = "Sp-4 R&D Team, 34th PRC Modding Team, J.Koko";
		units[] = {};
		requiredAddons[] = {
			"141st_UNSC_Gear", // MKIV,MKV,MKVB,MKVI Armors
			"SEC_gen3_retexturemod", // MKVII Armors
            "SEC_Overwrite", // Weapons
			"aceax_gearinfo", // Ace Arsenal Extended
			"OPTRE_UNSC_Units", // [DEV] Operation Trebuchet
		};
		skipWhenMissingDependencies = 1;
	};
};
class XtdGearModels
{
	#include "data\aax_models\config.hpp"
};
class XtdGearInfos
{
	#include "data\aax_infos\config.hpp"
};