class CfgPatches
{
    class SECCore
    {
        author = "Sp-4 R&D";                    // Your name, aux team, etc.
        name = "SPARTAN Eagle Company Core";
        requiredAddons[] = {
            "OPTRE_Core",
			"OPTRE_UNSC_Units",
			"OPTRE_UNSC_Units_Army",
			"OPTRE_FC_Units",
			"OPTRE_Vehicles",
			"OPTRE_Vehicles_Air",
			"OPTRE_Vehicles_Tracked",
			"OPTRE_Weapons",
			"MA_Armor",
			"rubicon_gen3"
        };
        weapons[] = {};
        units[] = {};
    };
};

// This creates a custom "Faction", which you can use to make your own 'Folder' in the Eden and Zeus interfaces
class CfgFactionsClasses
{
    class EagleCompanyFaction
    {
		icon="";
		displayName = "[SEC] Eagle Company";
		side=1;
		priority=2;
	};
};