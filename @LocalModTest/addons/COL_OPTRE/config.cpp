class cfgPatches
{
	class COL_OPTRE
	{
		name="Coleoptera OPTRE Compat";
		authors[]=
		{
			"Gray"
		};
		units[]=
		{
			"COL_Backpack_OPTRE_Jetpack",
			"COL_Backpack_Spartan_Jetpack"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Weapons_Backpacks"
		};
	};
};
class cfgVehicles
{
	class B_Bergen_dgtl_F;
	class OPTRE_S12_SOLA_Jetpack;
	class OPTRE_S12_SOLA_Jetpack_On;
	class OPTRE_S12_SOLA_Jetpack_Spartan;
	class OPTRE_S12_SOLA_Jetpack_On_Spartan;
	class COL_Backpack_OPTRE_Jetpack: OPTRE_S12_SOLA_Jetpack
	{
		scope=1;
		scopeArsenal=2;
		displayName="[COL] S-12 SOLA (A)";
		author="Gray";
		isColeoptera=1;
		longJumpCost=50;
		shortJumpCost=25;
		maxEnergy=100;
		takeFromConfig=0;
		UIcanShow=1;
		chargeRate=1;
		chargeAmount=2;
		colCanOpen=1;
		colOpenBag="COL_Backpack_OPTRE_Jetpack_On";
		maximumLoad=250;
	};
	class COL_Backpack_OPTRE_Jetpack_On: OPTRE_S12_SOLA_Jetpack_On
	{
		scope=1;
		scopeArsenal=1;
		displayName="[COL] S-12 SOLA (A)";
		author="Gray";
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
		isColeoptera=1;
		longJumpCost=50;
		shortJumpCost=25;
		maxEnergy=100;
		takeFromConfig=0;
		UIcanShow=1;
		chargeRate=1;
		chargeAmount=2;
		colClosedBag="COL_Backpack_OPTRE_Jetpack";
		maximumLoad=250;
	};
	class COL_Backpack_Spartan_Jetpack: OPTRE_S12_SOLA_Jetpack_Spartan
	{
		scope=1;
		scopeArsenal=2;
		displayName="[COL] S-12 SOLA (Spartan A)";
		author="Gray";
		isColeoptera=1;
		longJumpCost=50;
		shortJumpCost=25;
		maxEnergy=100;
		takeFromConfig=0;
		UIcanShow=1;
		chargeRate=1;
		chargeAmount=2;
		colOpenBag="COL_Backpack_Spartan_Jetpack_On";
		maximumLoad=250;
	};
	class COL_Backpack_Spartan_Jetpack_On: OPTRE_S12_SOLA_Jetpack_On_Spartan
	{
		scope=1;
		scopeArsenal=1;
		displayName="[COL] S-12 SOLA (Spartan A)";
		author="Gray";
		model="\OPTRE_weapons\backpacks\jetpack_on_Spartan.p3d";
		isColeoptera=1;
		longJumpCost=50;
		shortJumpCost=25;
		maxEnergy=100;
		takeFromConfig=0;
		UIcanShow=1;
		chargeRate=1;
		chargeAmount=2;
		colClosedBag="COL_Backpack_Spartan_Jetpack";
		maximumLoad=250;
	};
// Baseline //
	class SEC_COL_Backpack_OPTRE_Jetpack_Training: B_Bergen_dgtl_F
	{
		scope=2;
		scopeArsenal=2;
		displayName="[SEC] Training SOLA";
		author="Gray";
		isColeoptera=1;
		longJumpCost=0;
		shortJumpCost=0;
		maxEnergy=1000;
		takeFromConfig=1;
		UIcanShow=1;
		chargeRate=1;
		chargeAmount=10;
		maximumLoad=50;
		tf_encryptionCode="tf_west_radio_code";
    	tf_dialog="rt1523g_radio_dialog";
	    tf_subtype="digital_lr";
	    tf_range=100000;
	    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
	    tf_hasLRradio=1;
	};
	class SEC_COL_Backpack_OPTRE_Jetpack_Static: OPTRE_S12_SOLA_Jetpack
	{
		scope=2;
		scopeArsenal=2;
		displayName="[SEC] S-12 SOLA (Static)";
		author="Gray";
		isColeoptera=1;
		longJumpCost=75;
		shortJumpCost=25;
		maxEnergy=300;
		takeFromConfig=1;
		UIcanShow=1;
		chargeRate=1;
		chargeAmount=10;
		maximumLoad=50;
		tf_encryptionCode="tf_west_radio_code";
    	tf_dialog="rt1523g_radio_dialog";
	    tf_subtype="digital_lr";
	    tf_range=100000;
	    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
	    tf_hasLRradio=1;
	};
	class SEC_COL_Backpack_OPTRE_Jetpack: OPTRE_S12_SOLA_Jetpack
	{
		scope=0;
		scopeArsenal=2;
		displayName="[SEC] S-12 SOLA (A)";
		author="Gray";
		isColeoptera=1;
		longJumpCost=75;
		shortJumpCost=25;
		maxEnergy=300;
		takeFromConfig=1;
		UIcanShow=1;
		chargeRate=1;
		chargeAmount=10;
		colCanOpen=1;
		colOpenBag="SEC_COL_Backpack_OPTRE_Jetpack_On";
		maximumLoad=50;
		tf_encryptionCode="tf_west_radio_code";
    	tf_dialog="rt1523g_radio_dialog";
	    tf_subtype="digital_lr";
	    tf_range=100000;
	    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
	    tf_hasLRradio=1;
	};
	class SEC_COL_Backpack_OPTRE_Jetpack_On: OPTRE_S12_SOLA_Jetpack_On
	{
		scope=1;
		scopeArsenal=1;
		displayName="[SEC] S-12 SOLA (A)";
		author="Gray";
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
		isColeoptera=1;
		longJumpCost=75;
		shortJumpCost=25;
		maxEnergy=300;
		takeFromConfig=1;
		UIcanShow=1;
		chargeRate=1;
		chargeAmount=10;
		colClosedBag="SEC_COL_Backpack_OPTRE_Jetpack";
		maximumLoad=50;
		tf_encryptionCode="tf_west_radio_code";
    	tf_dialog="rt1523g_radio_dialog";
	    tf_subtype="digital_lr";
	    tf_range=100000;
	    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
	    tf_hasLRradio=1;

	};
	class SEC_COL_Backpack_Spartan_Jetpack: OPTRE_S12_SOLA_Jetpack_Spartan
	{
		scope=0;
		scopeArsenal=2;
		displayName="[SEC] S-12 SOLA (Spartan A)";
		author="Gray";
		isColeoptera=1;
		longJumpCost=75;
		shortJumpCost=25;
		maxEnergy=300;
		takeFromConfig=1;
		UIcanShow=1;
		chargeRate=1;
		chargeAmount=10;
		colOpenBag="SEC_COL_Backpack_Spartan_Jetpack_On";
		maximumLoad=50;
		tf_encryptionCode="tf_west_radio_code";
    	tf_dialog="rt1523g_radio_dialog";
	    tf_subtype="digital_lr";
	    tf_range=100000;
	    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
	    tf_hasLRradio=1;
	};
	class SEC_COL_Backpack_Spartan_Jetpack_On: OPTRE_S12_SOLA_Jetpack_On_Spartan
	{
		scope=1;
		scopeArsenal=1;
		displayName="[SEC] S-12 SOLA (Spartan A)";
		author="Gray";
		model="\OPTRE_weapons\backpacks\jetpack_on_Spartan.p3d";
		isColeoptera=1;
		longJumpCost=75;
		shortJumpCost=25;
		maxEnergy=300;
		takeFromConfig=1;
		UIcanShow=1;
		chargeRate=1;
		chargeAmount=10;
		colClosedBag="SEC_COL_Backpack_Spartan_Jetpack";
		maximumLoad=50;
		tf_encryptionCode="tf_west_radio_code";
    	tf_dialog="rt1523g_radio_dialog";
	    tf_subtype="digital_lr";
	    tf_range=100000;
	    tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
	    tf_hasLRradio=1;
	};
};
