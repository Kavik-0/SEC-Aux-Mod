#include "CfgPatches.hpp"

class CfgWeapons
{
	class HelmetBase;
	class HeadgearItem;

	class umgsr_eyepatch : HelmetBase
	{
		author = "Rebel / Facel, Upscaled by Reiken";
		scope = 2;
		displayName = "J.F.Rey Eyewear (Cain Gear)";
		model = "\Head_Upscale\mgsr_eyepatch.p3d";
		picture = "\Head_Upscale\data\gear_mgsr_eyepatch_x_ca";

		class ItemInfo : HeadgearItem
		{
			allowedSlots[] = {801, 901, 701, 605};
			mass = 2;
			uniformModel = "\Head_Upscale\mgsr_eyepatch.p3d";
			modelSides[] = {6};
		};
	};
};
class CfgHeads
{
    class Default_A3;
	class Spartan: Default_A3
	{
		model = "OPTRE_MJOLNIR_Units\head.p3d";
	};
	class umgsr_naked_head: Default_A3
    {
        model = "\Head_Upscale\mgsr_naked_head.p3d";
        selectionHeadWound = "injury_head";
        selectionPersonality = "personality";
    };
	class bun_female_bun_01: Default_A3
	{
		model="\Head_Upscale\female_head_bun.p3d";
		selectionHeadWound="injury_head";
		selectionPersonality="personality";
	};
};

class CfgFaces
{
    class Default
    {
        class Custom;
    };
    class Spartan : Default
    {
        class Spartan_WhiteHead_01;
        class umgsr_nakedsnake : Spartan_WhiteHead_01
        {
            author = "Rebel / Facel, Upscaled by Reiken";
            displayName = "Cain-107";
            texture = "\Head_Upscale\data\mgsr_bb.paa";
            materialWounded1 = "";
            materialWounded2 = "";
            head = "umgsr_naked_head";
            material = "\Head_Upscale\data\mgsr_bb.rvmat";
        };
        class SPRT_female_bun_01: Spartan_WhiteHead_01
		{
			author="Iceman";
			displayname="Carter-Spartan";
			head="bun_female_bun_01";
			texture="Head_Upscale\data\xxx_co.paa";
			material="Head_Upscale\data\f_white.rvmat";
			
			materialWounded1="Head_Upscale\data\female_01\f_white.rvmat";
			materialWounded2="Head_Upscale\data\female_01\f_white.rvmat";
			////////////////////////////////////////////////////////////////////////////////////////
			textureHL="Head_Upscale\data\female_01\F_HL_co.paa";
			materialHL="Head_Upscale\data\female_01\F_HL_white.rvmat";
			
			textureHL2="Head_Upscale\data\female_01\F_HL_co.paa";
			materialHL2="Head_Upscale\data\female_01\F_HL_white.rvmat";
		};
		class SPRT_LivonianHead_10: Spartan_WhiteHead_01
		{
			author = "Article 2 Studios";
			displayName = "Mark-116";
			head="Spartan";
			material = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_10.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_10_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_10_injury.rvmat";
			texture = "a3\Characters_F_Enoch\Heads\data\m_livonianHead_10_co.paa";
		};
    };
};
