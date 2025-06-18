class CfgPatches
{
    class SEC_Sevine_Patch // This is Kavik's attempt to stop the Sevine AIO uniforms from crashing the server upon mission start.
    {
        name="Sevine AIO Uniform Fix/Patch";
        authors[]=
        {
            "Centaurus",
            "Kavik"
        };
        requiredVersion=0.1;
        units[] =
        {
            "BXR_CU10_Uniform_Soldier",
            "BXR_CU10_Uniform_Soldier_NC",
            "CA_P_CU10_Uniform_Soldier",
            "CA_P_CU10_Uniform_Soldier_NC",
            "CA_F_CU10_Uniform_Soldier",
            "CA_F_CU10_Uniform_Soldier_NC",
            "CA_M_CU10_Uniform_Soldier",
            "CA_M_CU10_Uniform_Soldier_NC",
            "Frieden_CU10_Uniform_Soldier",
            "Frieden_CU10_Uniform_Soldier_NC",
            "Koslovic_CU10_Uniform_Soldier",
            "Koslovic_CU10_Uniform_Soldier_NC",
            "SA_CU10_Uniform_Soldier",
            "SA_CU10G_Uniform_Soldier",
            "SA_CU10T_Uniform_Soldier",
            "SA_CU10_NC_Uniform_Soldier",
            "SA_CU10G_NC_Uniform_Soldier",
            "SA_CU10T_NC_Uniform_Soldier",
            "URF_CU10_Uniform_Soldier",
            "URF_CU10_Uniform_Soldier_NC"

        };
        weapons[] =
        {
            "BXR_CU10_UNI",
            "BXR_CU10_UNI_NC",
            "CA_P_CU10_UNI",
            "CA_P_CU10_UNI_NC",
            "CA_F_CU10_UNI",
            "CA_F_CU10_UNI_NC",
            "CA_M_CU10_UNI",
            "CA_M_CU10_UNI_NC",
            "Frieden_CU10_UNI",
            "Frieden_CU10_UNI_NC",
            "Koslovic_CU10_UNI",
            "Koslovic_CU10_UNI_NC",
            "SA_CU10_UNI",
            "SA_CU10G_UNI",
            "SA_CU10T_UNI",
            "SA_CU10_UNI_NC",
            "SA_CU10G_UNI_NC",
            "SA_CU10T_UNI_NC",
            "URF_CU10_UNI",
            "URF_CU10_UNI_NC"
        };
        requiredAddons[]=
        {
            "BXR_Uniform",
            "CA_Uniform",
            "Frieden_Uniform",
            "Koslovic_Uniform",
            "Sevine_Arms",
            "URF_Uniform",
            "TKE_Rogue_Uniform",
            "A3_Characters_F",
            "A3_Data_F_Mark"
        };
    };
};
class CfgVehicles 
{
    class TKE_Rogue_Uniform_base;  // Ensure this is correctly referenced
    class TKE_Rogue_UniformNC_base;
    class URF_CU10_Uniform_Soldier: TKE_Rogue_Uniform_base {
    scope = 1;
    side= 0;
    uniformClass = "URF_CU10_UNI";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\URF_Uniform\Textures\URF_UNI_PANTS.paa", "\URF_Uniform\Textures\URF_UNI_TOP.paa"};
    };
	class URF_CU10_Uniform_Soldier_NC: TKE_Rogue_UniformNC_base {
    scope = 1;
    side= 0;
    uniformClass = "URF_CU10_UNI_NC";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\URF_Uniform\Textures\URF_UNI_PANTS.paa", "\URF_Uniform\Textures\URF_UNI_TOP.paa"};
    };
    class BXR_CU10_Uniform_Soldier: TKE_Rogue_Uniform_base {
    scope = 1;
    side= 0;
    uniformClass = "BXR_CU10_UNI";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\BXR_Uniform\Textures\BXR_UNI_PANTS.paa", "\BXR_Uniform\Textures\BXR_UNI_TOP.paa"};
    };
    class BXR_CU10_Uniform_Soldier_NC: TKE_Rogue_UniformNC_base {
    scope = 1;
    side= 0;
    uniformClass = "BXR_CU10_UNI_NC";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\BXR_Uniform\Textures\BXR_UNI_PANTS.paa", "\BXR_Uniform\Textures\BXR_UNI_TOP.paa"};
    };
    class CA_P_CU10_Uniform_Soldier: TKE_Rogue_Uniform_base {
    scope = 1;
    side= 0;
    uniformClass = "CA_P_CU10_UNI";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\CA_Uniform\Textures\CA_P_UNI_PANTS.paa", "\CA_Uniform\Textures\CA_UNI_TOP.paa"};
    };
    class CA_P_CU10_Uniform_Soldier_NC: TKE_Rogue_UniformNC_base {
    scope = 1;
    side= 0;
    uniformClass = "CA_P_CU10_UNI_NC";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\CA_Uniform\Textures\CA_P_UNI_PANTS.paa", "\CA_Uniform\Textures\CA_UNI_TOP.paa"};
    };
    class CA_F_CU10_Uniform_Soldier: TKE_Rogue_Uniform_base {
    scope = 1;
    side= 0;
    uniformClass = "CA_F_CU10_UNI";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\CA_Uniform\Textures\CA_F_UNI_PANTS.paa", "\CA_Uniform\Textures\CA_UNI_TOP.paa"};
    };
    class CA_F_CU10_Uniform_Soldier_NC: TKE_Rogue_UniformNC_base {
    scope = 1;
    side= 0;
    uniformClass = "CA_F_CU10_UNI_NC";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\CA_Uniform\Textures\CA_F_UNI_PANTS.paa", "\CA_Uniform\Textures\CA_UNI_TOP.paa"};
    };
    class CA_M_CU10_Uniform_Soldier: TKE_Rogue_Uniform_base {
    scope = 1;
    side= 0;
    uniformClass = "CA_M_CU10_UNI";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\CA_Uniform\Textures\CA_M_UNI_PANTS.paa", "\CA_Uniform\Textures\CA_UNI_TOP.paa"};
    };
    class CA_M_CU10_Uniform_Soldier_NC: TKE_Rogue_UniformNC_base {
    scope = 1;
    side= 0;
    uniformClass = "CA_M_CU10_UNI_NC";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\CA_Uniform\Textures\CA_M_UNI_PANTS.paa", "\CA_Uniform\Textures\CA_UNI_TOP.paa"};
    };
    class Frieden_CU10_Uniform_Soldier: TKE_Rogue_Uniform_base {
    scope = 1;
    side= 0;
    uniformClass = "Frieden_CU10_UNI";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\Frieden_Uniform\Textures\Frieden_UNI_PANTS.paa", "\Frieden_Uniform\Textures\Frieden_UNI_TOP.paa"};
    };
    class Frieden_CU10_Uniform_Soldier_NC: TKE_Rogue_UniformNC_base {
    scope = 1;
    side= 0;
    uniformClass = "Frieden_CU10_UNI_NC";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\Frieden_Uniform\Textures\Frieden_UNI_PANTS.paa", "\Frieden_Uniform\Textures\Frieden_UNI_TOP.paa"};
    };
    class Koslovic_CU10_Uniform_Soldier: TKE_Rogue_Uniform_base {
    scope = 1;
    side= 0;
    uniformClass = "Koslovic_CU10_UNI";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\Koslovic_Uniform\Textures\Koslovic_UNI_PANTS.paa", "\Koslovic_Uniform\Textures\Koslovic_UNI_TOP.paa"};
    };
    class Koslovic_CU10_Uniform_Soldier_NC: TKE_Rogue_UniformNC_base {
    scope = 1;
    side= 0;
    uniformClass = "Koslovic_CU10_UNI_NC";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\Koslovic_Uniform\Textures\Koslovic_UNI_PANTS.paa", "\Koslovic_Uniform\Textures\Koslovic_UNI_TOP.paa"};
    };
    class SA_CU10_Uniform_Soldier: TKE_Rogue_Uniform_base {
    scope = 1;
    side= 0;
    uniformClass = "SA_CU10_UNI";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\SA_Uniform\Textures\SA_CU10_BOTTOM.paa", "\SA_Uniform\Textures\SA_CU10_TOP.paa"};
    };
    class SA_CU10G_Uniform_Soldier: TKE_Rogue_Uniform_base {
    scope = 1;
    side= 0;
    uniformClass = "SA_CU10G_UNI";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\SA_Uniform\Textures\SA_GREEN_PANTS.paa", "\SA_Uniform\Textures\SA_GREEN_TOP.paa"};
    };
    class SA_CU10T_Uniform_Soldier: TKE_Rogue_Uniform_base {
    scope = 1;
    side= 0;
    uniformClass = "SA_CU10T_UNI";  // Custom uniform class
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\SA_Uniform\Textures\SA_TAN_PANTS.paa", "\SA_Uniform\Textures\SA_TAN_TOP.paa"};
    };
    class SA_CU10_NC_Uniform_Soldier: TKE_Rogue_UniformNC_base {
    scope = 1;
    side= 0;
    uniformClass = "SA_CU10_UNI_NC";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\SA_Uniform\Textures\SA_CU10_BOTTOM.paa", "\SA_Uniform\Textures\SA_CU10_TOP.paa"};
    };
    class SA_CU10G_NC_Uniform_Soldier: TKE_Rogue_UniformNC_base {
    scope = 1;
    side= 0;
    uniformClass = "SA_CU10G_UNI_NC";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\SA_Uniform\Textures\SA_GREEN_PANTS.paa", "\SA_Uniform\Textures\SA_GREEN_TOP.paa"};
    };
    class SA_CU10T_NC_Uniform_Soldier: TKE_Rogue_UniformNC_base {
    scope = 1;
    side= 0;
    uniformClass = "SA_CU10T_UNI_NC";  // Custom uniform class
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {"\SA_Uniform\Textures\SA_TAN_PANTS.paa", "\SA_Uniform\Textures\SA_TAN_TOP.paa"};
    };
};
class CfgWeapons
{
    class TKE_Rogue_Uniform_U_OP;
    class TKE_Rogue_UniformNC_base;
    class UniformItem;
    class URF_CU10_UNI: TKE_Rogue_Uniform_U_OP
    {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[URF] CU10 Uniform";
    picture = "\URF_Uniform\Textures\LOGO.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem
        {
        uniformModel = "-";
        uniformClass = "URF_CU10_Uniform_Soldier";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\URF_Uniform\Textures\URF_UNI_PANTS.paa", "\URF_Uniform\Textures\URF_UNI_TOP.paa"};
    };
    };
    class URF_CU10_UNI_NC: TKE_Rogue_UniformNC_base
    {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[URF] CU10 Uniform (NC)";
    picture = "\URF_Uniform\Textures\LOGO.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem
        {
        uniformModel = "-";
        uniformClass = "URF_CU10_Uniform_Soldier_NC";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\URF_Uniform\Textures\URF_UNI_PANTS.paa", "\URF_Uniform\Textures\URF_UNI_TOP.paa"};
    };
    };
    class BXR_CU10_UNI: TKE_Rogue_Uniform_U_OP {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[BXR] CU10 Uniform";
    picture = "\BXR_Uniform\Textures\LOGO.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "BXR_CU10_Uniform_Soldier";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\BXR_Uniform\Textures\BXR_UNI_PANTS.paa", "\BXR_Uniform\Textures\BXR_UNI_TOP.paa"};
    };
    };
    class BXR_CU10_UNI_NC: TKE_Rogue_UniformNC_base {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[BXR] CU10 Uniform (NC)";
    picture = "\BXR_Uniform\Textures\LOGO.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "BXR_CU10_Uniform_Soldier_NC";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\BXR_Uniform\Textures\BXR_UNI_PANTS.paa", "\BXR_Uniform\Textures\BXR_UNI_TOP.paa"};
    };
	};
    class CA_P_CU10_UNI: TKE_Rogue_Uniform_U_OP {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[CA] CU10 Police Uniform";
    picture = "\CA_Uniform\Textures\LOGO.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "CA_P_CU10_Uniform_Soldier";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\CA_Uniform\Textures\CA_P_UNI_PANTS.paa", "\CA_Uniform\Textures\CA_UNI_TOP.paa"};
    };
    };
    class CA_P_CU10_UNI_NC: TKE_Rogue_UniformNC_base {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[CA] CU10 Police Uniform (NC)";
    picture = "\CA_Uniform\Textures\LOGO.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "CA_P_CU10_Uniform_Soldier_NC";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\CA_Uniform\Textures\CA_P_UNI_PANTS.paa", "\CA_Uniform\Textures\CA_UNI_TOP.paa"};
    };
    };
    class CA_F_CU10_UNI: TKE_Rogue_Uniform_U_OP {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[CA] CU10 Fire Uniform";
    picture = "\CA_Uniform\Textures\LOGO.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "CA_F_CU10_Uniform_Soldier";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\CA_Uniform\Textures\CA_F_UNI_PANTS.paa", "\CA_Uniform\Textures\CA_UNI_TOP.paa"};
    };
    };
    class CA_F_CU10_UNI_NC: TKE_Rogue_UniformNC_base {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[CA] CU10 Fire Uniform (NC)";
    picture = "\CA_Uniform\Textures\LOGO.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "CA_F_CU10_Uniform_Soldier_NC";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\CA_Uniform\Textures\CA_F_UNI_PANTS.paa", "\CA_Uniform\Textures\CA_UNI_TOP.paa"};
    };
    };
    class CA_M_CU10_UNI: TKE_Rogue_Uniform_U_OP {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[CA] CU10 Medic Uniform";
    picture = "\CA_Uniform\Textures\LOGO.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "CA_M_CU10_Uniform_Soldier";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\CA_Uniform\Textures\CA_M_UNI_PANTS.paa", "\CA_Uniform\Textures\CA_UNI_TOP.paa"};
    };
    };
    class CA_M_CU10_UNI_NC: TKE_Rogue_UniformNC_base {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[CA] CU10 Medic Uniform (NC)";
    picture = "\CA_Uniform\Textures\LOGO.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "CA_M_CU10_Uniform_Soldier_NC";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\CA_Uniform\Textures\CA_M_UNI_PANTS.paa", "\CA_Uniform\Textures\CA_UNI_TOP.paa"};
    };
    };
    class Frieden_CU10_UNI: TKE_Rogue_Uniform_U_OP {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[Frieden] CU10 Uniform";
    picture = "\Frieden_Uniform\Textures\LOGO.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "Frieden_CU10_Uniform_Soldier";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\Frieden_Uniform\Textures\Frieden_UNI_PANTS.paa", "\Frieden_Uniform\Textures\Frieden_UNI_TOP.paa"};
    };
    };
    class Frieden_CU10_UNI_NC: TKE_Rogue_UniformNC_base {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[Frieden] CU10 Uniform (NC)";
    picture = "\Frieden_Uniform\Textures\LOGO.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "Frieden_CU10_Uniform_Soldier_NC";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\Frieden_Uniform\Textures\Frieden_UNI_PANTS.paa", "\Frieden_Uniform\Textures\Frieden_UNI_TOP.paa"};
    };
    };
    class Koslovic_CU10_UNI: TKE_Rogue_Uniform_U_OP {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[Koslovic] CU10 Uniform";
    picture = "\Koslovic_Uniform\Textures\LOGO.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "Koslovic_CU10_Uniform_Soldier";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\Koslovic_Uniform\Textures\Koslovic_UNI_PANTS.paa", "\Koslovic_Uniform\Textures\Koslovic_UNI_TOP.paa"};
    };
    };
    class Koslovic_CU10_UNI_NC: TKE_Rogue_UniformNC_base {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[Koslovic] CU10 Uniform (NC)";
    picture = "\Koslovic_Uniform\Textures\LOGO.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "Koslovic_CU10_Uniform_Soldier_NC";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\Koslovic_Uniform\Textures\Koslovic_UNI_PANTS.paa", "\Koslovic_Uniform\Textures\Koslovic_UNI_TOP.paa"};
    };
    };
    class SA_CU10_UNI: TKE_Rogue_Uniform_U_OP {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[SA] CU10 Uniform";
    picture = "\SA_Helmets\Textures\SA_IconU";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SA_CU10_Uniform_Soldier";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\SA_Uniform\Textures\SA_CU10_BOTTOM.paa", "\SA_Uniform\Textures\SA_CU10_TOP.paa"};
    };
    };
    class SA_CU10G_UNI: TKE_Rogue_Uniform_U_OP {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[SA] CU10G Uniform";
    picture = "\SA_Helmets\Textures\SA_IconG";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SA_CU10G_Uniform_Soldier";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\SA_Uniform\Textures\SA_GREEN_PANTS.paa", "\SA_Uniform\Textures\SA_GREEN_TOP.paa"};
    };
    };
    class SA_CU10T_UNI: TKE_Rogue_Uniform_U_OP {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[SA] CU10T Uniform";
    picture = "\SA_Helmets\Textures\SA_IconT";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SA_CU10T_Uniform_Soldier";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\SA_Uniform\Textures\SA_TAN_PANTS.paa", "\SA_Uniform\Textures\SA_TAN_TOP.paa"};
    };
    };
    class SA_CU10_UNI_NC: TKE_Rogue_UniformNC_base {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[SA] CU10 Uniform (NC)";
    picture = "\SA_Helmets\Textures\SA_IconU";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SA_CU10_NC_Uniform_Soldier";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\SA_Uniform\Textures\SA_CU10_BOTTOM.paa", "\SA_Uniform\Textures\SA_CU10_TOP.paa"};
    };
    };
    class SA_CU10G_UNI_NC: TKE_Rogue_UniformNC_base {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[SA] CU10G Uniform (NC)";
    picture = "\SA_Helmets\Textures\SA_IconG";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SA_CU10G_NC_Uniform_Soldier";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\SA_Uniform\Textures\SA_GREEN_PANTS.paa", "\SA_Uniform\Textures\SA_GREEN_TOP.paa"};
    };
    };
    class SA_CU10T_UNI_NC: TKE_Rogue_UniformNC_base {
    author = "Cyntaurus";
    scope = 2;
    displayName = "[SA] CU10T Uniform (NC)";
    picture = "\SA_Helmets\Textures\SA_IconT";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "SA_CU10T_NC_Uniform_Soldier";
        containerClass = "Supply90";
        mass = 80;
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\SA_Uniform\Textures\SA_TAN_PANTS.paa", "\SA_Uniform\Textures\SA_TAN_TOP.paa"};
    };
    };
};