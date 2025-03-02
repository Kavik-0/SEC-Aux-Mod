class CfgPatches
{
	class WBK_SciFiWeaponary
	{
		units[]=
		{
			""
		};
		weapons[]={};
		version=1;
		requiredAddons[]=
		{
			"A3_Soft_F",
			"a3_anims_f"
		};
	};
};
class CfgMovesBasic
{
	class Default;
	class StandBase;
	class HealBase: Default
	{
		disableWeapons=1;
		disableWeaponsLong=1;
		showWeaponAim=0;
		canPullTrigger=0;
		duty=0.2;
		limitGunMovement=0;
		aiming="empty";
		aimingBody="empty";
		actions="HealActionBase";
		looped=0;
	};
	class ManActions
	{
		WBK_SCIFI_AR_Reload="WBK_SCIFI_AR_Reload";
		WBK_SCIFI_AR_Reload_Context="WBK_SCIFI_AR_Reload_Context";
		WBK_SCIFI_AR_Reload_Prone="WBK_SCIFI_AR_Reload_Prone";
		SCI_FI_Sniperlike_Reload="SCI_FI_Sniperlike_Reload";
		SCI_FI_Sniperlike_Reload_Context="SCI_FI_Sniperlike_Reload_Context";
		SCI_FI_Sniperlike_Reload_Prone="SCI_FI_Sniperlike_Reload_Prone";
		SCI_FI_Shockgun_Reload="SCI_FI_Shockgun_Reload";
		SCI_FI_Shockgun_Reload_Context="SCI_FI_Shockgun_Reload_Context";
		SCI_FI_Shockgun_Reload_Prone="SCI_FI_Shockgun_Reload_Prone";
		SCI_FI_ARVER2_Reload="SCI_FI_ARVER2_Reload";
		SCI_FI_ARVER2_Reload_Context="SCI_FI_ARVER2_Reload_Context";
		SCI_FI_ARVER2_Reload_Prone="SCI_FI_ARVER2_Reload_Prone";
		SCI_FI_ARVER1_Reload="SCI_FI_ARVER1_Reload";
		SCI_FI_ARVER1_Reload_Context="SCI_FI_ARVER1_Reload_Context";
		SCI_FI_ARVER1_Reload_Prone="SCI_FI_ARVER1_Reload_Prone";
		SCI_FI_Revolver_Reload="SCI_FI_Revolver_Reload";
		SCI_FI_Revolver_Reload_Context="SCI_FI_Revolver_Reload_Context";
		SCI_FI_Revolver_Reload_Prone="SCI_FI_Revolver_Reload_Prone";
		SCI_FI_Pistol_Reload="SCI_FI_Pistol_Reload";
		SCI_FI_AUG_RELOAD="SCI_FI_AUG_RELOAD";
		SCI_FI_AUG_RELOAD_Context="SCI_FI_AUG_RELOAD_Context";
		SCI_FI_AUG_RELOAD_Prone="SCI_FI_AUG_RELOAD_Prone";
		SCI_FI_WEAPON_SNIPERBOLT_RELOAD="SCI_FI_WEAPON_SNIPERBOLT_RELOAD";
		SCI_FI_WEAPON_SNIPERBOLT_RELOAD_Context="SCI_FI_WEAPON_SNIPERBOLT_RELOAD_Context";
		SCI_FI_WEAPON_SNIPERBOLT_RELOAD_Prone="SCI_FI_WEAPON_SNIPERBOLT_RELOAD_Prone";
		SCI_FI_WEAPON_SNIPERBOLT_BOLT="SCI_FI_WEAPON_SNIPERBOLT_BOLT";
		SCI_FI_WEAPON_SNIPERBOLT_BOLT_CONTEXT="SCI_FI_WEAPON_SNIPERBOLT_BOLT_CONTEXT";
		SCI_FI_WEAPON_SNIPERBOLT_BOLT_PRONE="SCI_FI_WEAPON_SNIPERBOLT_BOLT_PRONE";
		SCI_FI_MG_Reload="SCI_FI_MG_Reload";
		SCI_FI_MG_Reload_Context="SCI_FI_MG_Reload_Context";
		SCI_FI_MG_Reload_Prone="SCI_FI_MG_Reload_Prone";
		SCI_FI_MG_SwitchFireMode="SCI_FI_MG_SwitchFireMode";
		SCI_FI_ShotGun_Reload="SCI_FI_ShotGun_Reload";
		SCI_FI_ShotGun_Reload_Context="SCI_FI_ShotGun_Reload_Context";
		SCI_FI_ShotGun_Reload_Prone="SCI_FI_ShotGun_Reload_Prone";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;
		class NoActions: ManActions
		{
			WBK_SCIFI_AR_Reload[]=
			{
				"WBK_SCIFI_AR_Reload",
				"Gesture"
			};
			SCI_FI_Sniperlike_Reload[]=
			{
				"SCI_FI_Sniperlike_Reload",
				"Gesture"
			};
			SCI_FI_Shockgun_Reload[]=
			{
				"SCI_FI_Shockgun_Reload",
				"Gesture"
			};
			SCI_FI_ARVER2_Reload[]=
			{
				"SCI_FI_ARVER2_Reload",
				"Gesture"
			};
			SCI_FI_ARVER1_Reload[]=
			{
				"SCI_FI_ARVER1_Reload",
				"Gesture"
			};
			SCI_FI_Revolver_Reload[]=
			{
				"SCI_FI_Revolver_Reload",
				"Gesture"
			};
			SCI_FI_Pistol_Reload[]=
			{
				"SCI_FI_Pistol_Reload",
				"Gesture"
			};
			SCI_FI_AUG_RELOAD[]=
			{
				"SCI_FI_AUG_RELOAD",
				"Gesture"
			};
			SCI_FI_WEAPON_SNIPERBOLT_RELOAD[]=
			{
				"SCI_FI_WEAPON_SNIPERBOLT_RELOAD",
				"Gesture"
			};
			SCI_FI_WEAPON_SNIPERBOLT_BOLT[]=
			{
				"SCI_FI_WEAPON_SNIPERBOLT_BOLT",
				"Gesture"
			};
			SCI_FI_MG_Reload[]=
			{
				"SCI_FI_MG_Reload",
				"Gesture"
			};
			SCI_FI_MG_SwitchFireMode[]=
			{
				"SCI_FI_MG_SwitchFireMode",
				"Gesture"
			};
			SCI_FI_ShotGun_Reload[]=
			{
				"SCI_FI_ShotGun_Reload",
				"Gesture"
			};
		};
		class RifleProneActions: RifleBaseStandActions
		{
			WBK_SCIFI_AR_Reload[]=
			{
				"WBK_SCIFI_AR_Reload_Prone",
				"Gesture"
			};
			SCI_FI_Sniperlike_Reload[]=
			{
				"SCI_FI_Sniperlike_Reload_Prone",
				"Gesture"
			};
			SCI_FI_Shockgun_Reload[]=
			{
				"SCI_FI_Shockgun_Reload_Prone",
				"Gesture"
			};
			SCI_FI_ARVER2_Reload[]=
			{
				"SCI_FI_ARVER2_Reload_Prone",
				"Gesture"
			};
			SCI_FI_ARVER1_Reload[]=
			{
				"SCI_FI_ARVER1_Reload_Prone",
				"Gesture"
			};
			SCI_FI_Revolver_Reload[]=
			{
				"SCI_FI_Revolver_Reload_Prone",
				"Gesture"
			};
			SCI_FI_AUG_RELOAD[]=
			{
				"SCI_FI_AUG_RELOAD_Prone",
				"Gesture"
			};
			SCI_FI_WEAPON_SNIPERBOLT_RELOAD[]=
			{
				"SCI_FI_WEAPON_SNIPERBOLT_RELOAD_Prone",
				"Gesture"
			};
			SCI_FI_WEAPON_SNIPERBOLT_BOLT[]=
			{
				"SCI_FI_WEAPON_SNIPERBOLT_BOLT_PRONE",
				"Gesture"
			};
			SCI_FI_MG_Reload[]=
			{
				"SCI_FI_MG_Reload_Prone",
				"Gesture"
			};
			SCI_FI_MG_SwitchFireMode[]=
			{
				"SCI_FI_MG_SwitchFireMode",
				"Gesture"
			};
			SCI_FI_ShotGun_Reload[]=
			{
				"SCI_FI_ShotGun_Reload_Prone",
				"Gesture"
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			WBK_SCIFI_AR_Reload[]=
			{
				"WBK_SCIFI_AR_Reload_Context",
				"Gesture"
			};
			SCI_FI_Sniperlike_Reload[]=
			{
				"SCI_FI_Sniperlike_Reload_Context",
				"Gesture"
			};
			SCI_FI_Shockgun_Reload[]=
			{
				"SCI_FI_Shockgun_Reload_Context",
				"Gesture"
			};
			SCI_FI_ARVER2_Reload[]=
			{
				"SCI_FI_ARVER2_Reload_Context",
				"Gesture"
			};
			SCI_FI_ARVER1_Reload[]=
			{
				"SCI_FI_ARVER1_Reload_Context",
				"Gesture"
			};
			SCI_FI_Revolver_Reload[]=
			{
				"SCI_FI_Revolver_Reload_Context",
				"Gesture"
			};
			SCI_FI_AUG_RELOAD[]=
			{
				"SCI_FI_AUG_RELOAD_Context",
				"Gesture"
			};
			SCI_FI_WEAPON_SNIPERBOLT_RELOAD[]=
			{
				"SCI_FI_WEAPON_SNIPERBOLT_RELOAD_Context",
				"Gesture"
			};
			SCI_FI_WEAPON_SNIPERBOLT_BOLT[]=
			{
				"SCI_FI_WEAPON_SNIPERBOLT_BOLT_CONTEXT",
				"Gesture"
			};
			SCI_FI_MG_Reload[]=
			{
				"SCI_FI_MG_Reload_Context",
				"Gesture"
			};
			SCI_FI_MG_SwitchFireMode[]=
			{
				"SCI_FI_MG_SwitchFireMode",
				"Gesture"
			};
			SCI_FI_ShotGun_Reload[]=
			{
				"SCI_FI_ShotGun_Reload_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			WBK_SCIFI_AR_Reload[]=
			{
				"WBK_SCIFI_AR_Reload_Context",
				"Gesture"
			};
			SCI_FI_Sniperlike_Reload[]=
			{
				"SCI_FI_Sniperlike_Reload_Context",
				"Gesture"
			};
			SCI_FI_Shockgun_Reload[]=
			{
				"SCI_FI_Shockgun_Reload_Context",
				"Gesture"
			};
			SCI_FI_ARVER2_Reload[]=
			{
				"SCI_FI_ARVER2_Reload_Context",
				"Gesture"
			};
			SCI_FI_ARVER1_Reload[]=
			{
				"SCI_FI_ARVER1_Reload_Context",
				"Gesture"
			};
			SCI_FI_Revolver_Reload[]=
			{
				"SCI_FI_Revolver_Reload_Context",
				"Gesture"
			};
			SCI_FI_AUG_RELOAD[]=
			{
				"SCI_FI_AUG_RELOAD_Context",
				"Gesture"
			};
			SCI_FI_WEAPON_SNIPERBOLT_RELOAD[]=
			{
				"SCI_FI_WEAPON_SNIPERBOLT_RELOAD_Context",
				"Gesture"
			};
			SCI_FI_WEAPON_SNIPERBOLT_BOLT[]=
			{
				"SCI_FI_WEAPON_SNIPERBOLT_BOLT_CONTEXT",
				"Gesture"
			};
			SCI_FI_MG_Reload[]=
			{
				"SCI_FI_MG_Reload_Context",
				"Gesture"
			};
			SCI_FI_MG_SwitchFireMode[]=
			{
				"SCI_FI_MG_SwitchFireMode",
				"Gesture"
			};
			SCI_FI_ShotGun_Reload[]=
			{
				"SCI_FI_ShotGun_Reload_Context",
				"Gesture"
			};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			WBK_SCIFI_AR_Reload[]=
			{
				"WBK_SCIFI_AR_Reload",
				"Gesture"
			};
			SCI_FI_Sniperlike_Reload[]=
			{
				"SCI_FI_Sniperlike_Reload",
				"Gesture"
			};
			SCI_FI_Shockgun_Reload[]=
			{
				"SCI_FI_Shockgun_Reload",
				"Gesture"
			};
			SCI_FI_ARVER2_Reload[]=
			{
				"SCI_FI_ARVER2_Reload",
				"Gesture"
			};
			SCI_FI_ARVER1_Reload[]=
			{
				"SCI_FI_ARVER1_Reload",
				"Gesture"
			};
			SCI_FI_Revolver_Reload[]=
			{
				"SCI_FI_Revolver_Reload",
				"Gesture"
			};
			SCI_FI_AUG_RELOAD[]=
			{
				"SCI_FI_AUG_RELOAD",
				"Gesture"
			};
			SCI_FI_WEAPON_SNIPERBOLT_RELOAD[]=
			{
				"SCI_FI_WEAPON_SNIPERBOLT_RELOAD",
				"Gesture"
			};
			SCI_FI_WEAPON_SNIPERBOLT_BOLT[]=
			{
				"SCI_FI_WEAPON_SNIPERBOLT_BOLT_CONTEXT",
				"Gesture"
			};
			SCI_FI_MG_Reload[]=
			{
				"SCI_FI_MG_Reload_Context",
				"Gesture"
			};
			SCI_FI_MG_SwitchFireMode[]=
			{
				"SCI_FI_MG_SwitchFireMode",
				"Gesture"
			};
			SCI_FI_ShotGun_Reload[]=
			{
				"SCI_FI_ShotGun_Reload_Context",
				"Gesture"
			};
		};
		class Acts_CarFixingWheel_actions;
		class ShockGun_Death_Moveset_1: Acts_CarFixingWheel_actions
		{
			Default="shockgun_death_1";
		};
		class ShockGun_Death_Moveset_2: Acts_CarFixingWheel_actions
		{
			Default="shockgun_death_2";
		};
		class ShockGun_Death_Moveset_3: Acts_CarFixingWheel_actions
		{
			Default="shockgun_death_3";
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class HubShootingRangeKneel_move1;
		class shockgun_death_1: HubShootingRangeKneel_move1
		{
			duty=0.69999999;
			actions="ShockGun_Death_Moveset_1";
			file="WBK_SciFi_Weaponary\anims\shockgun_death_1.rtm";
			stamina=-0.1;
			speed=-0.34999999;
			looped=0;
			minPlayTime=1;
			relSpeedMin=0.60000002;
			relSpeedMax=1;
			showHandGun=0;
			mask="BodyFull";
			leftHandIKBeg=0;
			leftHandIKCurve[]={0};
			leftHandIKEnd=0;
			rightHandIKBeg=0;
			rightHandIKCurve[]={0};
			rightHandIKEnd=0;
			weaponIK=1;
			enableOptics=0;
			showWeaponAim=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			leaning="empty";
			aimingBody="empty";
			aiming="empty";
			limitGunMovement=9.1000004;
			headBobMode=2;
			headBobStrength=-1;
			forceAim=1;
			head="headDefault";
			canPullTrigger=0;
			enableDirectControl=0;
			weaponLowered=0;
			variantsPlayer[]={};
			variantsAI[]={};
			ConnectTo[]=
			{
				"Unconscious",
				0.89999998
			};
			connectFrom[]={};
			interpolateFrom[]={};
			InterpolateTo[]={};
		};
		class shockgun_death_2: shockgun_death_1
		{
			actions="ShockGun_Death_Moveset_2";
			file="WBK_SciFi_Weaponary\anims\shockgun_death_2.rtm";
			speed=-0.60000002;
		};
		class shockgun_death_3: shockgun_death_1
		{
			actions="ShockGun_Death_Moveset_3";
			file="WBK_SciFi_Weaponary\anims\shockgun_death_3.rtm";
			speed=-3;
		};
	};
};
class CfgGesturesMale
{
	class ManActions
	{
	};
	class Actions;
	class Default;
	class BlendAnims
	{
		WRS_AdjustWeaponAnim[]=
		{
			"weapon",
			1,
			"head",
			1,
			"neck1",
			1,
			"neck",
			1,
			"LeftShoulder",
			1,
			"LeftArm",
			1,
			"LeftArmRoll",
			1,
			"LeftForeArm",
			1,
			"LeftForeArmRoll",
			1,
			"LeftHand",
			1,
			"LeftHandRing",
			1,
			"LeftHandPinky1",
			1,
			"LeftHandPinky2",
			1,
			"LeftHandPinky3",
			1,
			"LeftHandRing1",
			1,
			"LeftHandRing2",
			1,
			"LeftHandRing3",
			1,
			"LeftHandMiddle1",
			1,
			"LeftHandMiddle2",
			1,
			"LeftHandMiddle3",
			1,
			"LeftHandIndex1",
			1,
			"LeftHandIndex2",
			1,
			"LeftHandIndex3",
			1,
			"LeftHandThumb1",
			1,
			"LeftHandThumb2",
			1,
			"LeftHandThumb3",
			1,
			"RightShoulder",
			1,
			"RightArm",
			1,
			"RightArmRoll",
			1,
			"RightForeArm",
			1,
			"RightForeArmRoll",
			1,
			"RightHand",
			1,
			"RightHandRing",
			1,
			"RightHandPinky1",
			1,
			"RightHandPinky2",
			1,
			"RightHandPinky3",
			1,
			"RightHandRing1",
			1,
			"RightHandRing2",
			1,
			"RightHandRing3",
			1,
			"RightHandMiddle1",
			1,
			"RightHandMiddle2",
			1,
			"RightHandMiddle3",
			1,
			"RightHandIndex1",
			1,
			"RightHandIndex2",
			1,
			"RightHandIndex3",
			1,
			"RightHandThumb1",
			1,
			"RightHandThumb2",
			1,
			"RightHandThumb3",
			1,
			"Spine",
			1,
			"Spine1",
			1,
			"Spine2",
			1,
			"Spine3",
			1,
			"pelvis",
			"MaskStart"
		};
	};
	class States
	{
		class WBK_SCIFI_AR_Reload: Default
		{
			speed=-3.8;
			file="WBK_SciFi_Weaponary\anims\SCI_FI_AR_Reload.rtm";
			disableWeapons=1;
			disableWeaponsLong=1;
			interpolationRestart=2;
			enableOptics=0;
			weaponIK=1;
			looped=0;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,0.1,0,0.91600001,0,0.95099998,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
			canReload=0;
			mask="handsWeapon";
			headBobStrength=-0.1;
			headBobMode=1;
		};
		class WBK_SCIFI_AR_Reload_Prone: WBK_SCIFI_AR_Reload
		{
			file="WBK_SciFi_Weaponary\anims\SCI_FI_AR_Reload_prone.rtm";
			mask="handsWeapon_context";
			headBobStrength=0;
			headBobMode=1;
		};
		class WBK_SCIFI_AR_Reload_Context: WBK_SCIFI_AR_Reload
		{
			mask="handsWeapon_context";
		};
		class SCI_FI_Sniperlike_Reload: WBK_SCIFI_AR_Reload
		{
			speed=-3;
			file="WBK_SciFi_Weaponary\anims\SCI_FI_Sniperlike_Reload.rtm";
			leftHandIKCurve[]={0,1,0.1,0,0.87,0,0.921,1};
			headBobStrength=-0.1;
		};
		class SCI_FI_Sniperlike_Reload_Prone: SCI_FI_Sniperlike_Reload
		{
			file="\A3\anims_f_mod\data\Anim\sdr\Gst\GestureReload_smg_03Prone";
		};
		class SCI_FI_Sniperlike_Reload_Context: SCI_FI_Sniperlike_Reload
		{
			mask="handsWeapon_context";
		};
		class SCI_FI_Shockgun_Reload: WBK_SCIFI_AR_Reload
		{
			speed=-4.5;
			file="WBK_SciFi_Weaponary\anims\SCI_FI_Shockgun_Reload.rtm";
			leftHandIKCurve[]={0,1,0.039999999,0,0.87,0,0.921,1};
			headBobStrength=-0.1;
		};
		class SCI_FI_Shockgun_Reload_Prone: SCI_FI_Shockgun_Reload
		{
			file="a3\anims_f\data\anim\sdr\wop\pne\stp\rld\rfl\awopppnemstpsrldwrfldnon.rtm";
		};
		class SCI_FI_Shockgun_Reload_Context: SCI_FI_Shockgun_Reload
		{
			mask="handsWeapon_context";
		};
		class SCI_FI_ARVER2_Reload: WBK_SCIFI_AR_Reload
		{
			speed=-4.1999998;
			file="WBK_SciFi_Weaponary\anims\SCI_FI_ARVER2_Reload.rtm";
			leftHandIKCurve[]={0,1,0.039999999,0,0.87,0,0.921,1};
			headBobStrength=-0.1;
		};
		class SCI_FI_ARVER2_Reload_Prone: SCI_FI_ARVER2_Reload
		{
			file="a3\anims_f_exp\data\anim\sdr\gst\gesturereloadspar_01prone.rtm";
		};
		class SCI_FI_ARVER2_Reload_Context: SCI_FI_ARVER2_Reload
		{
			mask="handsWeapon_context";
		};
		class SCI_FI_Revolver_Reload: WBK_SCIFI_AR_Reload
		{
			speed=-3.4000001;
			file="WBK_SciFi_Weaponary\anims\SCI_FI_Revolver_Reload.rtm";
			headBobStrength=-0.1;
		};
		class SCI_FI_Revolver_Reload_Prone: SCI_FI_Revolver_Reload
		{
			file="WBK_SciFi_Weaponary\anims\SCI_FI_Revolver_Reload.rtm";
			mask="handsWeapon_pst_context";
		};
		class SCI_FI_Revolver_Reload_Context: SCI_FI_Revolver_Reload
		{
			mask="handsWeapon_context";
		};
		class SCI_FI_AUG_RELOAD: WBK_SCIFI_AR_Reload
		{
			file="WBK_SciFi_Weaponary\anims\SCI_FI_AUG_RELOAD.rtm";
		};
		class SCI_FI_AUG_RELOAD_Prone: SCI_FI_AUG_RELOAD
		{
			file="a3\anims_f\data\anim\sdr\gst\gesturereloadmk20prone.rtm";
			mask="handsWeapon_context";
		};
		class SCI_FI_AUG_RELOAD_Context: SCI_FI_AUG_RELOAD
		{
			mask="handsWeapon_context";
		};
		class SCI_FI_WEAPON_SNIPERBOLT_RELOAD: WBK_SCIFI_AR_Reload
		{
			enableOptics=0;
			canPullTrigger=0;
			headBobStrength=-0.1;
			file="WBK_SciFi_Weaponary\anims\SCI_FI_WEAPON_SNIPERBOLT_RELOAD.rtm";
			speed=-3.7;
			leftHandIKCurve[]={0,1,0.039999999,0,0.58999997,0,0.63,1};
			rightHandIKCurve[]={0.56,1,0.57999998,0,0.95999998,0,0.99000001,1};
		};
		class SCI_FI_WEAPON_SNIPERBOLT_RELOAD_Prone: SCI_FI_WEAPON_SNIPERBOLT_RELOAD
		{
			file="a3\anims_f\data\anim\sdr\gst\gesturereloaddmr02prone.rtm";
			mask="handsWeapon_context";
			leftHandIKCurve[]={0,1,0.1,0,0.97000003,0,0.991,1};
			rightHandIKCurve[]={1};
		};
		class SCI_FI_WEAPON_SNIPERBOLT_RELOAD_Context: SCI_FI_WEAPON_SNIPERBOLT_RELOAD
		{
			mask="handsWeapon_context";
		};
		class SCI_FI_WEAPON_SNIPERBOLT_BOLT: SCI_FI_WEAPON_SNIPERBOLT_RELOAD
		{
			enableOptics=0;
			file="WBK_SciFi_Weaponary\anims\SCI_FI_WEAPON_SNIPERBOLT_BOLT.rtm";
			speed=-1.5;
			leftHandIKCurve[]={1};
			rightHandIKCurve[]={0,1,0.066670001,0,0.94,0,0.99000001,1};
		};
		class SCI_FI_WEAPON_SNIPERBOLT_BOLT_CONTEXT: SCI_FI_WEAPON_SNIPERBOLT_BOLT
		{
			file="WBK_SciFi_Weaponary\anims\SCI_FI_WEAPON_SNIPERBOLT_BOLT.rtm";
			mask="handsWeapon_context";
		};
		class SCI_FI_WEAPON_SNIPERBOLT_BOLT_PRONE: SCI_FI_WEAPON_SNIPERBOLT_BOLT
		{
			file="WBK_SciFi_Weaponary\anims\SCI_FI_WEAPON_SNIPERBOLT_BOLT_PRONE.rtm";
		};
		class SCI_FI_ARVER1_Reload: WBK_SCIFI_AR_Reload
		{
			enableOptics=0;
			mask="WRS_AdjustWeaponAnim";
			speed=-3.0999999;
			file="WBK_SciFi_Weaponary\anims\SCI_FI_ARVER1_Reload.rtm";
			leftHandIKCurve[]={0,1,0.039999999,0,0.94499999,0,0.98100001,1};
			headBobStrength=-0.1;
		};
		class SCI_FI_ARVER1_Reload_Prone: SCI_FI_ARVER1_Reload
		{
			speed=-2.8499999;
			file="a3\anims_f_exp\data\anim\sdr\gst\gesturereloadspar_01prone.rtm";
			mask="handsWeapon_context";
		};
		class SCI_FI_ARVER1_Reload_Context: SCI_FI_ARVER1_Reload
		{
			mask="handsWeapon_context";
		};
		class SCI_FI_Pistol_Reload: WBK_SCIFI_AR_Reload
		{
			speed=-2;
			file="WBK_SciFi_Weaponary\anims\SCI_FI_PistolReload.rtm";
			headBobStrength=-0.2;
		};
		class SCI_FI_MG_Reload: WBK_SCIFI_AR_Reload
		{
			speed=-3.5;
			file="WBK_SciFi_Weaponary\anims\SCI_FI_MG_Reload.rtm";
			leftHandIKCurve[]={0,1,0.1,0,0.94999999,0,0.991,1};
			rightHandIKCurve[]={0,1,0.44999999,0,0.94999999,0,0.991,1};
			headBobStrength=-0.1;
		};
		class SCI_FI_MG_Reload_Prone: SCI_FI_MG_Reload
		{
			mask="handsWeapon_context";
		};
		class SCI_FI_MG_Reload_Context: SCI_FI_MG_Reload
		{
			mask="handsWeapon_context";
		};
		class SCI_FI_MG_SwitchFireMode: WBK_SCIFI_AR_Reload
		{
			speed=-1.45;
			file="WBK_SciFi_Weaponary\anims\SCI_FI_MG_SwitchFireMode.rtm";
			leftHandIKCurve[]={1};
			rightHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,0.991,1};
			headBobStrength=-0.1;
		};
		class SCI_FI_ShotGun_Reload: Default
		{
			speed=-4;
			file="WBK_SciFi_Weaponary\anims\SCI_FI_Shotgun_Reload.rtm";
			disableWeapons=1;
			disableWeaponsLong=1;
			interpolationRestart=2;
			enableOptics=0;
			weaponIK=1;
			looped=0;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0.029999999,1,0.050000001,0,0.89999998,0,0.91000003,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,0,0.91000003,0,0.93000001,1};
			rightHandIKEnd=1;
			canReload=0;
			mask="handsWeapon";
			headBobStrength=-1;
			headBobMode=1;
			canPullTrigger=0;
		};
		class SCI_FI_ShotGun_Reload_Prone: SCI_FI_ShotGun_Reload
		{
			file="a3\anims_f\data\anim\sdr\wop\pne\stp\rld\rfl\awopppnemstpsrldwrfldnon.rtm";
			mask="handsWeapon_context";
			leftHandIKBeg=1;
			leftHandIKCurve[]={0,1,0.1,0,0.91600001,0,0.95099998,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
		};
		class SCI_FI_ShotGun_Reload_Context: SCI_FI_ShotGun_Reload
		{
			mask="handsWeapon_context";
		};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class WBK_SCIFI_AR_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"WBK_SCIFI_AR_Close",
			"WBK_SCIFI_AR_Far"
		};
		volumeFactor=1;
	};
	class WBK_SCIFI_SNIPER_SoundSet: WBK_SCIFI_AR_SoundSet
	{
		soundShaders[]=
		{
			"WBK_SCIFI_SNIPER_Close",
			"WBK_SCIFI_BOOMSLANG_Far"
		};
	};
	class WBK_Pilum_Exp_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"WBK_Pilum_Exp_Detonate",
			"WBK_Pilum_Exp_Close",
			"WBK_Pilum_Exp_Far"
		};
		volumeFactor=1;
	};
	class WBK_SCIFI_SHOTGUN_SoundSet: WBK_SCIFI_AR_SoundSet
	{
		soundShaders[]=
		{
			"WBK_SCIFI_SHOTGUN_Close",
			"WBK_SCIFI_MG_Far"
		};
	};
	class WBK_SCIFI_RAPTOR_SoundSet: WBK_SCIFI_AR_SoundSet
	{
		soundShaders[]=
		{
			"WBK_SCIFI_RAPTOR_Close",
			"WBK_SCIFI_ARType2_Far"
		};
	};
	class WBK_SCIFI_REVOLVER_SoundSet: WBK_SCIFI_AR_SoundSet
	{
		soundShaders[]=
		{
			"WBK_SCIFI_Revolver_Close",
			"WBK_SCIFI_ARType2_Far"
		};
	};
	class WBK_SCIFI_AUG_SoundSet: WBK_SCIFI_AR_SoundSet
	{
		soundShaders[]=
		{
			"WBK_SCIFI_AUG_Close",
			"WBK_SCIFI_AR_Far"
		};
	};
	class WBK_SCIFI_BOOMSLANG_SoundSet: WBK_SCIFI_AR_SoundSet
	{
		soundShaders[]=
		{
			"WBK_SCIFI_BOOMSLANG_Close",
			"WBK_SCIFI_BOOMSLANG_Far"
		};
	};
	class WBK_SCIFI_MG_SoundSet: WBK_SCIFI_AR_SoundSet
	{
		soundShaders[]=
		{
			"WBK_SCIFI_MG_Closure",
			"WBK_SCIFI_MG_Close",
			"WBK_SCIFI_MG_Far"
		};
	};
	class WBK_SCIFI_MG_SILENCED_SoundSet: WBK_SCIFI_AR_SoundSet
	{
		soundShaders[]=
		{
			"WBK_SCIFI_MGSILENCED_Close",
			"WBK_SCIFI_AR_Far"
		};
	};
	class WBK_SCIFI_ARTYPE1_RIFLE_SoundSet: WBK_SCIFI_AR_SoundSet
	{
		soundShaders[]=
		{
			"WBK_SCIFI_AR_Rifle_Close",
			"WBK_SCIFI_AR_Rifle_Mid",
			"WBK_SCIFI_AR_Rifle_Far"
		};
		volumeFactor=1.1;
	};
	class WBK_SCIFI_PISTL_SoundSet: WBK_SCIFI_AR_SoundSet
	{
		soundShaders[]=
		{
			"WBK_SCIFI_PIST_Close",
			"WBK_SCIFI_PIST_Far"
		};
	};
	class WBK_SCIFI_PISTL_SIL_SoundSet: WBK_SCIFI_AR_SoundSet
	{
		soundShaders[]=
		{
			"WBK_SCIFI_PIST_SIL_Close",
			"WBK_SCIFI_AR_Far"
		};
	};
	class WBK_SCIFI_SHAWTY_SoundSet: WBK_SCIFI_AR_SoundSet
	{
		soundShaders[]=
		{
			"WBK_SCIFI_SHAWTY_Close",
			"WBK_SCIFI_SHAWTY_Far"
		};
		volumeFactor=1.2;
	};
};
class CfgSoundShaders
{
	class WBK_SCIFI_AR_Close
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\ar_close_1",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\ar_close_2",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\ar_close_3",
				1
			}
		};
		volume=1.4;
		range=100;
		rangeCurve[]=
		{
			{0,1},
			{80,1},
			{100,1},
			{3800,0}
		};
	};
	class WBK_SCIFI_AR_Far
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\ar_dist_1",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\ar_dist_2",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\ar_dist_3",
				1
			}
		};
		volume=1;
		range=500;
		rangeCurve[]=
		{
			{0,0},
			{80,0.5},
			{100,1},
			{500,0.2}
		};
	};
	class WBK_SCIFI_Revolver_Close: WBK_SCIFI_AR_Close
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\revolver_close",
				1
			}
		};
		volume=1.1;
	};
	class WBK_SCIFI_SNIPER_Close: WBK_SCIFI_AR_Close
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\sniper_close",
				1
			}
		};
		volume=1.4;
	};
	class WBK_SCIFI_SHOTGUN_Close: WBK_SCIFI_AR_Close
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\shockgun_close",
				1
			}
		};
		volume=1.4;
	};
	class WBK_SCIFI_RAPTOR_Close: WBK_SCIFI_AR_Close
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\ar_raptor_close_1",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\ar_raptor_close_2",
				1
			}
		};
		volume=1.1;
	};
	class WBK_SCIFI_AUG_Close: WBK_SCIFI_AR_Close
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\aug_close_1",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\aug_close_2",
				1
			}
		};
		volume=1.1;
	};
	class WBK_SCIFI_BOOMSLANG_Close: WBK_SCIFI_AR_Close
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\boomslang_close_1",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\boomslang_close_2",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\boomslang_close_3",
				1
			}
		};
		volume=1.1;
	};
	class WBK_SCIFI_MG_Close: WBK_SCIFI_AR_Close
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\mg_fire_1",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\mg_fire_2",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\mg_fire_3",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\mg_fire_4",
				1
			}
		};
		volume=1.1;
	};
	class WBK_SCIFI_MGSILENCED_Close: WBK_SCIFI_AR_Close
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\mg_silenced",
				1
			}
		};
		volume=1.1;
	};
	class WBK_SCIFI_PIST_Close: WBK_SCIFI_AR_Close
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\pistol_close_1",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\pistol_close_2",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\pistol_close_3",
				1
			}
		};
		volume=1;
	};
	class WBK_SCIFI_PIST_SIL_Close: WBK_SCIFI_AR_Close
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\pistol_sup",
				1
			}
		};
		volume=1;
	};
	class WBK_SCIFI_SHAWTY_Close: WBK_SCIFI_AR_Close
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\shotgun_close_1",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\shotgun_close_2",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\shotgun_close_3",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\shotgun_close_4",
				1
			}
		};
		volume=2;
	};
	class WBK_SCIFI_MG_Closure
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\mg_closure",
				1.2
			}
		};
		range=10;
		volume=1;
	};
	class WBK_Pilum_Exp_Close
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\projectile_Big_Explosion_close_1",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\projectile_Big_Explosion_close_2",
				1
			}
		};
		volume=1;
		range=100;
		rangeCurve[]=
		{
			{0,1},
			{250,0.30000001},
			{250,0},
			{1800,0}
		};
	};
	class WBK_Pilum_Exp_Detonate
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\projectile_Big_detonate",
				1
			}
		};
		volume=1.1;
		range=500;
		rangeCurve[]=
		{
			{0,1},
			{250,1},
			{500,1},
			{1800,0}
		};
	};
	class WBK_Pilum_Exp_Far
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\projectile_Big_Explosion_far",
				1
			}
		};
		volume=1.1;
		range=2800;
		rangeCurve[]=
		{
			{0,0},
			{250,0.5},
			{500,1},
			{2800,1}
		};
	};
	class WBK_SCIFI_ARType2_Far: WBK_SCIFI_AR_Far
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\artype_far_1",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\artype_far_2",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\artype_far_3",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\artype_far_4",
				1
			}
		};
		volume=1.1;
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{80,0.69999999},
			{100,1},
			{3800,0.89999998}
		};
	};
	class WBK_SCIFI_BOOMSLANG_Far: WBK_SCIFI_ARType2_Far
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\boomslang_dist_1",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\boomslang_dist_2",
				1
			}
		};
		volume=1.1;
	};
	class WBK_SCIFI_MG_Far: WBK_SCIFI_ARType2_Far
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\mg_far_1",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\mg_far_2",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\mg_far_3",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\mg_far_4",
				1
			}
		};
		volume=1.1;
	};
	class WBK_SCIFI_PIST_Far: WBK_SCIFI_ARType2_Far
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\pistol_dist",
				1
			}
		};
		volume=1.1;
	};
	class WBK_SCIFI_SHAWTY_Far: WBK_SCIFI_ARType2_Far
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\shotgun_dist_1",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\shotgun_dist_2",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\shotgun_dist_3",
				1
			}
		};
		volume=1.5;
	};
	class WBK_SCIFI_AR_Rifle_Close
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\greywolf_close_1",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\greywolf_close_2",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\greywolf_close_3",
				1
			}
		};
		volume=1.5;
		range=100;
		rangeCurve[]=
		{
			{0,1},
			{90,1},
			{100,0.5},
			{800,0}
		};
	};
	class WBK_SCIFI_AR_Rifle_Mid
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\greywolf_mid_1",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\greywolf_mid_2",
				1
			}
		};
		volume=2;
		range=500;
		rangeCurve[]=
		{
			{0,0},
			{80,0.5},
			{100,1},
			{500,0.30000001}
		};
	};
	class WBK_SCIFI_AR_Rifle_Far
	{
		samples[]=
		{
			
			{
				"\WBK_SciFi_Weaponary\sounds\greywolf_far_1",
				1
			},
			
			{
				"\WBK_SciFi_Weaponary\sounds\greywolf_far_2",
				1
			}
		};
		volume=2;
		range=3800;
		rangeCurve[]=
		{
			{0,0},
			{300,0},
			{500,1},
			{3800,1}
		};
	};
};
class cfgAmmo
{
	class B_40mm_GPR_Tracer_Red;
	class WBK_B_40mm_GPR_Tracer_Red: B_40mm_GPR_Tracer_Red
	{
		deflecting=0;
		SoundSetExplosion[]=
		{
			"WBK_Pilum_Exp_SoundSet"
		};
	};
	class B_40mm_APFSDS_Tracer_Red;
	class WBK_B_40mm_APFSDS_Tracer_Red: B_40mm_APFSDS_Tracer_Red
	{
		deflecting=0;
		SoundSetExplosion[]=
		{
			"WBK_Pilum_Exp_SoundSet"
		};
	};
	class BulletBase;
	class Shocking_rounds_isntit: BulletBase
	{
		cost=1;
		hit=20;
		simulationStep=9.9999997e-005;
		cartridge="FxCartridge_slug";
		submunitionAmmo="Shocking_rounds_isntit_Deploy";
		submunitionConeType[]=
		{
			"poissondisc",
			19
		};
		submunitionConeAngle=1;
		triggerSpeedCoef[]={0.85000002,1};
		triggerTime=0.001;
	};
	class Shocking_rounds_isntit_Deploy: BulletBase
	{
		airFriction=-0.0066999998;
		hit=6;
		indirectHit=0;
		indirectHitRange=0;
		typicalSpeed=360;
		deflecting=35;
	};
	class B_9x21_Ball;
	class Shotgin_NonLethalRound: B_9x21_Ball
	{
		hit=2;
	};
};
class cfgMagazines
{
	class 30Rnd_65x39_caseless_green_mag_Tracer;
	class WRS_Ar_Magazine: 30Rnd_65x39_caseless_green_mag_Tracer
	{
		displayName="30rnd 6.5mm DUR";
		descriptionShort="Caseless Depleted Uranium rounds<br />Caliber: 6.5x39mm<br />Used in: VTR4 - Bear Commander, VTR4A1 - CQBR Carbine";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		modelSpecial="a3\Weapons_F_Enoch\MagazineProxies\mag_65x39c_msbs_30rnd.p3d";
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_CA.paa";
		count=30;
		mass=8;
	};
	class WRS_Ar1_Magazine: WRS_Ar_Magazine
	{
		displayName="40rnd 6.5mm LDUR";
		descriptionShort="Light Depleted Uranium rounds<br />Used in: VTR1A1 - Streetsweeper";
		count=40;
		mass=9;
	};
	class 30Rnd_65x39_caseless_msbs_mag_Tracer;
	class WRS_Ar2_Magazine: 30Rnd_65x39_caseless_msbs_mag_Tracer
	{
		count=50;
		displayName="50rnd 7.62 HDUR";
		descriptionShort="Caseless Heavy Depleted Uranium rounds<br />Caliber: 7.62x51mm<br />Used in: VTMP9 - Circinius Typewriter";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		modelSpecial="a3\Weapons_F_Enoch\MagazineProxies\mag_65x39c_msbs_30rnd.p3d";
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_CA.paa";
		mass=9;
	};
	class WRS_Sniper_Magazine: 30Rnd_65x39_caseless_green_mag_Tracer
	{
		ammo="WBK_B_40mm_GPR_Tracer_Red";
		displayName="4 rounds RDX";
		descriptionShort="Semtex rounds<br />Used in: VTW20 - Anti-Materiel Railgun";
		model="\A3\weapons_F\ammo\mag_univ.p3d";                                                                                        
		modelSpecial="\a3\Weapons_F_Exp\MagazineProxies\mag_556x45_stanag_30rnd.p3d";
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Tracer_Red_CA.paa";
		mass=8;
		count=4;
	};
	class WRS_Sniper_Magazine_AP: WRS_Sniper_Magazine
	{
		ammo="WBK_B_40mm_APFSDS_Tracer_Red";
		displayName="4 rounds RDX (AP)";
		descriptionShort="Anti-armour rounds<br />Used in: VTW20 - Anti-Materiel Railgun";
	};
	class WRS_Shockgun_Magazine: 30Rnd_65x39_caseless_green_mag_Tracer
	{
		ammo="Shocking_rounds_isntit";
		displayName="Rhino coolant cartridge";
		descriptionShort="Coolant cartridge<br />Used in: VTA142KRSV - Karasawa";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		modelSpecial="\a3\Weapons_F_Exp\MagazineProxies\mag_556x45_stanag_30rnd.p3d";
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Tracer_Red_CA.paa";
		mass=8;
		count=4;
	};
	class WRS_Shotgun_Magazine: WRS_Shockgun_Magazine
	{
		displayName="6rnd Buckshot";
		descriptionShort="Buckshot rounds<br />Used in: VTGS90 - Skull Shaker";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_slugs_CA.paa";
		count=6;
	};
	class WRS_Shotgun_Magazine_Slug: WRS_Ar2_Magazine
	{
		count=6;
		displayName="6rnd Slug";
		descriptionShort="Slug rounds<br />Used in: VTGS90 -  Skull Shaker";
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_CA.paa";
		mass=8;
	};
	class WRS_Shotgun_Magazine_NonLethal: WRS_Ar2_Magazine
	{
		count=6;
		displayName="6rnd Plastic Slug";
		descriptionShort="Plastic non-lethal rounds<br />Used in: VTGS90 - Skull Shaker";
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_6Rnd_12Gauge_Pellets_ca.paa";
		mass=5;
		ammo="Shotgin_NonLethalRound";
	};
	class WRS_Shotgun_Magazine_DragonBreath: WRS_Shotgun_Magazine
	{
		displayName="6rnd Hellfire Buckshot";
		descriptionShort="Incendiary rounds (Dragons Breath)<br />Used in: VTGS90 - Skull Shaker";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_6Rnd_12Gauge_Slug_ca.paa";
		count=6;
	};
	class 5Rnd_127x108_Mag;
	class WRS_Revolver_Magazine: 5Rnd_127x108_Mag
	{
		tracersEvery=1;
		displayName="6rd LTS Cylinder";
		descriptionShort="Cylinder with 6 rounds<br />Used in: VTP851 - Broken Butterfly";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\A3\Weapons_F_EPA\Data\ui\M_6Rnd_revolver_CA.paa";
		mass=4;
		count=6;
	};
	class WRS_Boomslang_Magazine: 5Rnd_127x108_Mag
	{
		tracersEvery=1;
		displayName="5rnd 12.7 Mag HDUR";
		descriptionShort="Heavy Depleted Uranium rounds<br />Used in: VTSL8 - Stingray";
		mass=8;
		count=5;
	};
	class 9Rnd_45ACP_Mag;
	class WRS_Puma_Magazine: 9Rnd_45ACP_Mag
	{
		tracersEvery=1;
		displayName="16rnd .45 LDUR";
		descriptionShort="Light Depleted Uranium rounds<br />Used in: VTP09R - Silver Ghost";
		count=16;
	};
};
class CfgCloudlets
{
	class Default;
	class WBK_Pilum_FrontBarrelParticle: Default
	{
		interval=0.0049999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=1;
		angleVar=0.5;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.44999999;
		moveVelocity[]=
		{
			"-0.15*directionX",
			"-0.15*directionY",
			"-0.15*directionZ"
		};
		rotationVelocity=1;
		weight=0.052999999;
		volume=0.039999999;
		rubbing=0.1;
		size[]={0.25,0.5};
		color[]=
		{
			{1,0.0099999998,0,0.30000001},
			{1,0.0099999998,0,0.15000001},
			{1,0.0099999998,0,0.059999999},
			{1,0.0099999998,0,0.0099999998}
		};
		animationSpeed[]={1.2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.079999998;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		blockAIVisibility=0;
		sizeCoef=0.2;
		colorCoef[]={1,1,1,0.80000001};
		animationSpeedCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.029999999,0.029999999,0.029999999};
		rotationVelocityVar=20;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		emissiveColor[]=
		{
			{1,0.050000001,0,1}
		};
	};
};
class WBK_Pilum_FrontBarrelParticle
{
	class WBK_Pilum_FrontBarrelParticle
	{
		simulation="particles";
		type="WBK_Pilum_FrontBarrelParticle";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=3;
	};
};
class CfgSounds
{
	sounds[]={};
	class pilum_load
	{
		name="pilum_load";
		sound[]=
		{
			"\WBK_SciFi_Weaponary\sounds\pilum_load.ogg",
			1.1220185,
			1
		};
		titles[]={};
	};
};
class asdg_OpticRail1913;
class asdg_MuzzleSlot_556;
class asdg_FrontSideRail;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class srifle_LRR_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class WRS_Weapon_ShockGun: srifle_LRR_F
	{
		author="Servo - Commisar & Red & WebKnight";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
			};
			class MuzzleSlot
			{
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot
			{
			};
		};
		drySound[]=
		{
			"WBK_SciFi_Weaponary\sounds\sci_Fi_gunEmpty.ogg",
			1.6,
			1,
			20
		};
		picture="\WBK_SciFi_Weaponary\icons\rhino.paa";
		magazines[]=
		{
			"WRS_Shockgun_Magazine"
		};
		magazineWell[]={};
		selectionfireanim="muzzleFlash";
		displayName="[V.O.I.D] VTA142KRSV - Karasawa";
		baseWeapon="WRS_Weapon_ShockGun";
		reloadAction="SCI_FI_Shockgun_Reload";
		model="\WBK_SciFi_Weaponary\models\WBK_SciFi_Shotgun.p3d";
		hiddenSelections[]=
		{
			"camo",
			"neon"
		};
		hiddenSelectionsTextures[]=
		{
			"\WBK_SciFi_Weaponary\textures\rhino\WRS_Rhino_Steel_CO.paa",
			"\WBK_SciFi_Weaponary\textures\rhino\WRS_Rhino_Steel_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\WBK_SciFi_Weaponary\textures\rhino\rhino.rvmat",
			"\WBK_SciFi_Weaponary\textures\rhino\rhino_glow.rvmat"
		};
		class Library
		{
			libTextDesc="A shotgun that shoots electricity. Shockingly, isn't it?";
		};
		reloadMagazineSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\shockgun_reload.ogg",
			2.3,
			1,
			30
		};
		reloadSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\shockgun_reload.ogg",
			2.3,
			1,
			30
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"WBK_SciFi_Weaponary\anims\SCI_FI_Shockgun_Idle.rtm"
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"WBK_SCIFI_SHOTGUN_SoundSet",
					"GM6Lynx_InteriorTail_SoundSet"
				};
			};
			reloadTime=1;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			dispersion=0.0051000002;
			minRange=50;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiDispersionCoefX=0;
			aiDispersionCoefY=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			dispersion=0.00018;
			aiRateOfFire=6;
			aiRateOfFireDistance=700;
		};
		class far_optic2: Single
		{
			showToPlayer=0;
			dispersion=0.00018;
			aiRateOfFire=8;
			aiRateOfFireDistance=2000;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			dispersion=0.00018;
			aiRateOfFire=6;
			aiRateOfFireDistance=1000;
		};
	};
	class WRS_Weapon_Sniper: srifle_LRR_F
	{
		author="Servo - Commisar & Red & WebKnight";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
			};
			class MuzzleSlot
			{
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot
			{
			};
		};
		picture="\WBK_SciFi_Weaponary\icons\pilum.paa";
		drySound[]=
		{
			"WBK_SciFi_Weaponary\sounds\sci_Fi_gunEmpty.ogg",
			1.6,
			1,
			20
		};
		class GunParticles: GunParticles
		{
			class SmokeEffect
			{
				positionName="konec hlavne";
				directionName="konec hlavne";
				effectName="WBK_Pilum_FrontBarrelParticle";
			};
		};
		magazines[]=
		{
			"WRS_Sniper_Magazine",
			"WRS_Sniper_Magazine_AP"
		};
		class EventHandlers
		{
			fired="_this call CBA_fnc_weaponEvents";
		};
		class CBA_weaponEvents
		{
			handAction="";
			sound="pilum_load";
			soundLocation="RightHandMiddle1";
			delay=0.0099999998;
			onEmpty=0;
			hasOptic=1;
			soundEmpty="";
			soundLocationEmpty="";
		};
		magazineWell[]={};
		selectionfireanim="muzzleFlash";
		displayName="[V.O.I.D] VTW20 - Anti-Materiel Railgun";
		baseWeapon="WRS_Weapon_Sniper";
		reloadAction="SCI_FI_Sniperlike_Reload";
		model="\WBK_SciFi_Weaponary\models\WBK_SciFi_Sniper.p3d";
		hiddenSelections[]=
		{
			"camo",
			"neon"
		};
		recoil="recoil_gm6";
		hiddenSelectionsTextures[]=
		{
			"\WBK_SciFi_Weaponary\textures\pilum\WRS_Pillum_STEEL_CO.paa",
			"\WBK_SciFi_Weaponary\textures\pilum\WRS_Pillum_STEEL_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\WBK_SciFi_Weaponary\textures\pilum\pilum.rvmat",
			"\WBK_SciFi_Weaponary\textures\pilum\pilum_glow.rvmat"
		};
		class Library
		{
			libTextDesc="Futuristic sniper rifle, baby!";
		};
		reloadMagazineSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\sniper_reload.ogg",
			3,
			1,
			30
		};
		reloadSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\sniper_reload.ogg",
			3,
			1,
			30
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"WBK_SciFi_Weaponary\anims\SCI_FI_Sniperlike_Idle.rtm"
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"WBK_SCIFI_SNIPER_SoundSet",
					"DMR05_InteriorTail_SoundSet"
				};
			};
			reloadTime=4;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			dispersion=0;
			minRange=50;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiDispersionCoefX=0;
			aiDispersionCoefY=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			dispersion=0.00018;
			aiRateOfFire=6;
			aiRateOfFireDistance=700;
		};
		class far_optic2: Single
		{
			showToPlayer=0;
			dispersion=0.00018;
			aiRateOfFire=8;
			aiRateOfFireDistance=2000;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			dispersion=0.00018;
			aiRateOfFire=6;
			aiRateOfFireDistance=1000;
		};
	};
	class arifle_Katiba_F
	{
		class WeaponSlotsInfo;
	};
	class WRS_Weapon_AR: arifle_Katiba_F
	{
		picture="\WBK_SciFi_Weaponary\icons\greyhound.paa";
		author="Servo - Commisar & Red & WebKnight";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
			};
			class MuzzleSlot
			{
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				displayName="$STR_A3_PointerSlot0";
			};
		};
		drySound[]=
		{
			"WBK_SciFi_Weaponary\sounds\sci_Fi_gunEmpty.ogg",
			1.6,
			1,
			20
		};
		magazines[]=
		{
			"WRS_Ar_Magazine"
		};
		dispersion=0;
		magazineWell[]={};
		model="\WBK_SciFi_Weaponary\models\WBK_SciFi_AR.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\WBK_SciFi_Weaponary\textures\greyhound\WRS_Greyhound_STEEL_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\WBK_SciFi_Weaponary\textures\greyhound\greyhound.rvmat"
		};
		selectionfireanim="muzzleFlash";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"WBK_SciFi_Weaponary\anims\SCI_FI_AR_Idle.rtm"
		};
		displayName="[V.O.I.D] VTR556 - CQBR Carbine";
		baseWeapon="WRS_Weapon_AR";
		reloadAction="WBK_SCIFI_AR_Reload";
		reloadMagazineSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\ar_reload.ogg",
			2.5,
			1,
			30
		};
		reloadSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\ar_reload.ogg",
			2.5,
			1,
			30
		};
		class Library
		{
			libTextDesc="Its like an M4, but SCI-FI ok?";
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_AR_SoundSet",
					"SPAR02_silencerTail_SoundSet",
					"SPAR02_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.085000001;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0;
			minRange=50;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiDispersionCoefX=0;
			aiDispersionCoefY=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_AR_SoundSet",
					"SPAR02_silencerTail_SoundSet",
					"SPAR02_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.085000001;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			dispersion=0;
			minRange=0;
			minRangeProbab=0.1;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=70;
			maxRangeProbab=0.050000001;
			aiRateOfFire=0.0049999999;
			aiRateOfFireDistance=70;
			aiDispersionCoefY=3;
			aiDispersionCoefX=2;
		};
		class single_medium_optics1: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		class single_medium_optics2: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiBurstTerminable=1;
		};
	};
	class WRS_Weapon_AR_2: arifle_Katiba_F
	{
		picture="\WBK_SciFi_Weaponary\icons\raptor.paa";
		author="Servo - Commisar & Red & WebKnight";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
			};
			class MuzzleSlot
			{
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot
			{
			};
		};
		drySound[]=
		{
			"WBK_SciFi_Weaponary\sounds\sci_Fi_gunEmpty.ogg",
			1.6,
			1,
			20
		};
		magazines[]=
		{
			"WRS_Ar2_Magazine"
		};
		dispersion=0;
		magazineWell[]={};
		model="\WBK_SciFi_Weaponary\models\WBK_SciFi_AR_VER2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\WBK_SciFi_Weaponary\textures\raptor\WRS_Raptor_Steel_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\WBK_SciFi_Weaponary\textures\raptor\raptor.rvmat"
		};
		selectionfireanim="muzzleFlash";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"WBK_SciFi_Weaponary\anims\SCI_FI_ARVER2_Idle.rtm"
		};
		displayName="[V.O.I.D] VTMP9 - Circinius Typewriter";
		baseWeapon="WRS_Weapon_AR_2";
		reloadAction="SCI_FI_ARVER2_Reload";
		reloadMagazineSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\ar2_reload.ogg",
			2.8,
			1,
			30
		};
		reloadSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\ar2_reload.ogg",
			2.8,
			1,
			30
		};
		class Library
		{
			libTextDesc="Its like an gun, but SCI-FI ok?.";
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_RAPTOR_SoundSet",
					"SPAR02_Tail_SoundSet",
					"SPAR02_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.089000002;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0;
			minRange=50;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiDispersionCoefX=0;
			aiDispersionCoefY=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_RAPTOR_SoundSet",
					"SPAR02_Tail_SoundSet",
					"SPAR02_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.097999997;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			dispersion=0;
			minRange=0;
			minRangeProbab=0.1;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=70;
			maxRangeProbab=0.050000001;
			aiRateOfFire=0.0049999999;
			aiRateOfFireDistance=70;
			aiDispersionCoefY=3;
			aiDispersionCoefX=2;
		};
		class single_medium_optics1: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		class single_medium_optics2: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiBurstTerminable=1;
		};
	};
	class hgun_Pistol_heavy_02_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class WRS_Weapon_Revolver: hgun_Pistol_heavy_02_F
	{
		picture="\WBK_SciFi_Weaponary\icons\constrictor.paa";
		author="Servo - Commisar & Red & WebKnight";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				compatibleItems[]={};
			};
			class MuzzleSlot
			{
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot
			{
			};
		};
		magazines[]=
		{
			"WRS_Revolver_Magazine"
		};
		magazineWell[]={};
		drySound[]=
		{
			"WBK_SciFi_Weaponary\sounds\sci_Fi_gunEmpty.ogg",
			1.6,
			1,
			20
		};
		model="\WBK_SciFi_Weaponary\models\WBK_SciFi_Revolver.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\wbk_scifi_weaponary\textures\constrictor\WRS_Constrictor_Base_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\wbk_scifi_weaponary\textures\constrictor\constrictor.rvmat"
		};
		displayName="[V.O.I.D] VTP851 - Broken Butterfly";
		baseWeapon="WRS_Weapon_Revolver";
		reloadAction="SCI_FI_Revolver_Reload";
		reloadMagazineSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\revolver_reload.ogg",
			2,
			1,
			30
		};
		reloadSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\revolver_reload.ogg",
			2,
			1,
			30
		};
		class Library
		{
			libTextDesc="Sci fi revolver baby";
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_REVOLVER_SoundSet",
					"Zubr_Tail_SoundSet",
					"Zubr_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.25;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0;
			minRange=50;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiDispersionCoefX=0;
			aiDispersionCoefY=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class single_medium_optics1: Single
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		class single_medium_optics2: Single
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: Single
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class fullauto_medium: Single
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiBurstTerminable=1;
		};
	};
	class WRS_Weapon_AUG: arifle_Katiba_F
	{
		author="Servo - Commisar & Red & WebKnight";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
			};
			class MuzzleSlot
			{
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				displayName="$STR_A3_PointerSlot0";
			};
		};
		picture="\WBK_SciFi_Weaponary\icons\bulldog.paa";
		drySound[]=
		{
			"WBK_SciFi_Weaponary\sounds\sci_Fi_gunEmpty.ogg",
			1.6,
			1,
			20
		};
		magazines[]=
		{
			"WRS_Ar1_Magazine"
		};
		magazineWell[]={};
		model="\WBK_SciFi_Weaponary\models\WBK_SciFi_AUG.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\WBK_SciFi_Weaponary\textures\bulldog\WRS_Bulldog_Steel_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\WBK_SciFi_Weaponary\textures\bulldog\bulldog.rvmat"
		};
		selectionfireanim="muzzleFlash";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"WBK_SciFi_Weaponary\anims\SCI_FI_AUG_IDLE.rtm"
		};
		dispersion=0;
		displayName="[V.O.I.D] VTR1A1 - Streetsweeper";
		baseWeapon="WRS_Weapon_AUG";
		reloadAction="SCI_FI_AUG_RELOAD";
		reloadMagazineSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\aug_reload.ogg",
			2.5,
			1,
			30
		};
		reloadSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\aug_reload.ogg",
			2.5,
			1,
			30
		};
		class Library
		{
			libTextDesc="Its like an AUG, but SCI-FI ok?.";
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_AUG_SoundSet",
					"SPAR02_silencerTail_SoundSet",
					"SPAR02_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.071999997;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0;
			minRange=50;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiDispersionCoefX=0;
			aiDispersionCoefY=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_AUG_SoundSet",
					"SPAR02_silencerTail_SoundSet",
					"SPAR02_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.071999997;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			dispersion=0;
			minRange=0;
			minRangeProbab=0.1;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=70;
			maxRangeProbab=0.050000001;
			aiRateOfFire=0.0049999999;
			aiRateOfFireDistance=70;
			aiDispersionCoefY=3;
			aiDispersionCoefX=2;
		};
		class single_medium_optics1: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		class single_medium_optics2: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiBurstTerminable=1;
		};
	};
	class WRS_Weapon_Sniper_Bolt: srifle_LRR_F
	{
		picture="\WBK_SciFi_Weaponary\icons\boomslang.paa";
		author="Servo - Commisar & Red & WebKnight";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
			};
			class MuzzleSlot
			{
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot
			{
			};
		};
		drySound[]=
		{
			"WBK_SciFi_Weaponary\sounds\sci_Fi_gunEmpty.ogg",
			1.6,
			1,
			20
		};
		magazines[]=
		{
			"WRS_Boomslang_Magazine"
		};
		class EventHandlers
		{
			fired="_this spawn WBK_fnc_weaponEvents";
		};
		dispersion=0;
		magazineWell[]={};
		selectionfireanim="muzzleFlash";
		displayName="[V.O.I.D] VTSL8 - Stingray";
		baseWeapon="WRS_Weapon_Sniper_Bolt";
		reloadAction="SCI_FI_WEAPON_SNIPERBOLT_RELOAD";
		model="\WBK_SciFi_Weaponary\models\WBK_SciFi_Sniper_bolt.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\WBK_SciFi_Weaponary\textures\boomslang\WRS_Boomslang_Grey_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\WBK_SciFi_Weaponary\textures\boomslang\boomslang.rvmat"
		};
		recoil="recoil_gm6";
		class Library
		{
			libTextDesc="Futuristic sniper rifle, baby!";
		};
		reloadMagazineSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\boomslang_reload.ogg",
			2.5999999,
			1,
			30
		};
		reloadSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\boomslang_reload.ogg",
			2.5999999,
			1,
			30
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"WBK_SciFi_Weaponary\anims\SCI_FI_WEAPON_SNIPERBOLT_IDLE.rtm"
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"WBK_SCIFI_BOOMSLANG_SoundSet",
					"DMR05_tail_SoundSet",
					"DMR05_InteriorTail_SoundSet"
				};
			};
			reloadTime=2;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			dispersion=0;
			minRange=50;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiDispersionCoefX=0;
			aiDispersionCoefY=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			dispersion=0.00018;
			aiRateOfFire=6;
			aiRateOfFireDistance=700;
		};
		class far_optic2: Single
		{
			showToPlayer=0;
			dispersion=0.00018;
			aiRateOfFire=8;
			aiRateOfFireDistance=2000;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			dispersion=0.00018;
			aiRateOfFire=6;
			aiRateOfFireDistance=1000;
		};
	};
	class LMG_03_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class WRS_Weapon_LMG: LMG_03_F
	{
		picture="\WBK_SciFi_Weaponary\icons\wildebeest.paa";
		modelOptics="\A3\Weapons_f\acc\reticle_tws";
		class OpticsModes
		{
			class MyOptics
			{
				opticsID=2;
				useModelOptics="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.055500001;
				opticsZoomMax=0.13;
				opticsZoomInit=0.13;
				discreteDistance[]={100,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex=1;
				distanceZoomMin=100;
				distanceZoomMax=1000;
				nFovLimit=0.07;
				discreteFov[]={0.13,0.055500001};
				discreteInitIndex=0;
				modelOptics[]=
				{
					"\A3\Weapons_f\acc\reticle_tws"
				};
				memoryPointCamera="eye";
				visionMode[]=
				{
					"Normal"
				};
				opticsFlare="true";
				opticsDisablePeripherialVision="true";
				cameraDir="eye_look";
			};
			class IronOnTopOfMyOptics: MyOptics
			{
				opticsID=1;
				useModelOptics="false";
				opticsFlare="false";
				opticsDisablePeripherialVision="false";
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				discretefov[]={};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot
			{
			};
		};
		WBK_UseHeavyWeaponFramework="true";
		magazineWell[]={};
		selectionfireanim="muzzleFlash";
		drySound[]=
		{
			"WBK_SciFi_Weaponary\sounds\sci_Fi_gunEmpty.ogg",
			1.6,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\mg_reload.ogg",
			2.5,
			1,
			30
		};
		reloadSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\mg_reload.ogg",
			2.5,
			1,
			30
		};
		model="\WBK_SciFi_Weaponary\models\WBK_SciFi_Machinegun.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		reloadAction="SCI_FI_MG_Reload";
		hiddenSelectionsTextures[]=
		{
			"\wbk_scifi_weaponary\textures\wildebeest\Wildebeest_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\wbk_scifi_weaponary\textures\wildebeest\wildebeest.rvmat"
		};
		author="Castille & Red & WebKnight";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"WBK_SciFi_Weaponary\anims\SCI_FI_MG_Idle.rtm"
		};
		_generalMacro="WRS_LMG_03_F";
		baseWeapon="WRS_LMG_03_F";
		scope=2;
		scopeArsenal=2;
		displayName="[V.O.I.D] VTC134 - Wildebeest";
		magazines[]=
		{
			"200Rnd_556x45_Box_Tracer_F"
		};
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
			0.70794576,
			1,
			20
		};
		modes[]=
		{
			"FullAutoSlow",
			"FullAutoFast",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class FullAutoSlow: Mode_FullAuto
		{
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"WBK_SCIFI_MG_SoundSet",
					"MMG02_Tail_SoundSet",
					"MMG02_InteriorTail_SoundSet"
				};
			};
			class SilencedSound
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_MG_SILENCED_SoundSet"
				};
			};
			reloadTime=0.15000001;
			dispersion=0.00073000003;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class FullAutoFast: FullAutoSlow
		{
			reloadTime=0.055000003;
			textureType="fastAuto";
		};
		class close: FullAutoFast
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: FullAutoSlow
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
			showToPlayer=0;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
	};
	class WRS_Weapon_AR_Ver1: arifle_Katiba_F
	{
		picture="\WBK_SciFi_Weaponary\icons\greywolf.paa";
		author="Servo - Commisar & Red & WebKnight";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
			};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				displayName="$STR_A3_PointerSlot0";
			};
		};
		drySound[]=
		{
			"WBK_SciFi_Weaponary\sounds\sci_Fi_gunEmpty.ogg",
			1.6,
			1,
			20
		};
		magazines[]=
		{
			"WRS_Ar_Magazine"
		};
		dispersion=0;
		magazineWell[]={};
		model="\WBK_SciFi_Weaponary\models\WBK_SciFi_AR_VER1.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\WBK_SciFi_Weaponary\textures\greywolf\WRS_Greywolf_Steel_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\WBK_SciFi_Weaponary\textures\greywolf\greywolf.rvmat"
		};
		selectionfireanim="muzzleFlash";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"WBK_SciFi_Weaponary\anims\SCI_FI_ARVER1_Idle.rtm"
		};
		displayName="[V.O.I.D] VTR4 - Bear Commander";
		baseWeapon="WRS_Weapon_AR_Ver1";
		reloadAction="SCI_FI_ARVER1_Reload";
		reloadMagazineSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\ar1_reload.ogg",
			3,
			1,
			30
		};
		reloadSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\ar1_reload.ogg",
			3,
			1,
			30
		};
		class Library
		{
			libTextDesc="Its like an M4 without silencer, but SCI-FI ok?";
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_ARTYPE1_RIFLE_SoundSet",
					"TRG20_Tail_SoundSet",
					"TRG20_InteriorTail_SoundSet"
				};
			};
			class SilencedSound
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_AR_SoundSet",
					"SPAR02_silencerTail_SoundSet",
					"SPAR02_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.085000001;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0;
			minRange=50;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiDispersionCoefX=0;
			aiDispersionCoefY=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_ARTYPE1_RIFLE_SoundSet",
					"TRG20_Tail_SoundSet",
					"TRG20_InteriorTail_SoundSet"
				};
			};
			class SilencedSound
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_AR_SoundSet",
					"SPAR02_silencerTail_SoundSet",
					"SPAR02_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.085000001;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			dispersion=0;
			minRange=0;
			minRangeProbab=0.1;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=70;
			maxRangeProbab=0.050000001;
			aiRateOfFire=0.0049999999;
			aiRateOfFireDistance=70;
			aiDispersionCoefY=3;
			aiDispersionCoefX=2;
		};
		class single_medium_optics1: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		class single_medium_optics2: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiBurstTerminable=1;
		};
	};
	class hgun_ACPC2_F;
	class WBK_SciFi_Pistol: hgun_ACPC2_F
	{
		author="Servo - Commisar & Red & WebKnight";
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		selectionfireanim="muzzleFlash";
		magazineWell[]={};
		magazines[]=
		{
			"WRS_Puma_Magazine"
		};
		picture="\WBK_SciFi_Weaponary\icons\puma.paa";
		_generalMacro="WBK_SciFi_Pistol";
		baseWeapon="WBK_SciFi_Pistol";
		displayName="[V.O.I.D] VTP09R - Silver Ghost";
		descriptionShort="Light rapid firing pistol";
		model="\WBK_SciFi_Weaponary\models\WBK_SciFi_Pistol.p3d";
		reloadAction="SCI_FI_Pistol_Reload";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\WBK_SciFi_Weaponary\textures\puma\WRS_Puma_Base_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\WBK_SciFi_Weaponary\textures\puma\puma.rvmat"
		};
		reloadMagazineSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\pistol_reload.ogg",
			2,
			1,
			30
		};
		reloadSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\pistol_reload.ogg",
			2,
			1,
			30
		};
		drySound[]=
		{
			"WBK_SciFi_Weaponary\sounds\sci_Fi_gunEmpty.ogg",
			1.6,
			1,
			20
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_PISTL_SoundSet",
					"P07_Tail_SoundSet",
					"P07_InteriorTail_SoundSet"
				};
			};
			class SilencedSound
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_PISTL_SIL_SoundSet",
					"P07_silencerTail_SoundSet",
					"P07_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.059999999;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0;
			minRange=50;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiDispersionCoefX=0;
			aiDispersionCoefY=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_PISTL_SoundSet",
					"P07_Tail_SoundSet",
					"P07_InteriorTail_SoundSet"
				};
			};
			class SilencedSound
			{
				soundSetShot[]=
				{
					"WBK_SCIFI_PISTL_SIL_SoundSet",
					"P07_silencerTail_SoundSet",
					"P07_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.045000002;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			dispersion=0;
			minRange=0;
			minRangeProbab=0.1;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=70;
			maxRangeProbab=0.050000001;
			aiRateOfFire=0.0049999999;
			aiRateOfFireDistance=70;
			aiDispersionCoefY=3;
			aiDispersionCoefX=2;
		};
		class single_medium_optics1: Single
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		class single_medium_optics2: Single
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: Single
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class fullauto_medium: Single
		{
			showToPlayer=0;
			dispersion=0.00086999999;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiBurstTerminable=1;
		};
	};
	class WRS_Weapon_ShotGun: srifle_LRR_F
	{
		class GunParticles
		{
			class Effect1
			{
				directionName="konec hlavne";
				effectName="StarterPistolCloud1";
				positionName="usti hlavne";
			};
			class Effect2
			{
				directionName="usti hlavne";
				effectName="StarterPistolCloud2";
				positionName="konec hlavne";
			};
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
		author="Servo - Commisar & Red & WebKnight";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
			};
			class MuzzleSlot
			{
			};
			class UnderBarrelSlot
			{
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				displayName="$STR_A3_PointerSlot0";
			};
		};
		drySound[]=
		{
			"WBK_SciFi_Weaponary\sounds\sci_Fi_gunEmpty.ogg",
			1.6,
			1,
			20
		};
		picture="\WBK_SciFi_Weaponary\icons\bullshark.paa";
		magazines[]=
		{
			"WRS_Shotgun_Magazine",
			"WRS_Shotgun_Magazine_Slug",
			"WRS_Shotgun_Magazine_NonLethal",
			"WRS_Shotgun_Magazine_DragonBreath"
		};
		magazineWell[]={};
		selectionfireanim="muzzleFlash";
		displayName="[V.O.I.D] VTGS90 - Skull Shaker";
		baseWeapon="WRS_Weapon_ShotGun";
		reloadAction="SCI_FI_ShotGun_Reload";
		model="\WBK_SciFi_Weaponary\models\WBK_SciFi_Shotgun_Auto.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\WBK_SciFi_Weaponary\textures\bullshark\WRS_Bullshark_Silver_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\WBK_SciFi_Weaponary\textures\bullshark\bullshark.rvmat"
		};
		class Library
		{
			libTextDesc="A sci fi shotgun";
		};
		reloadMagazineSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\shotgun_reload.ogg",
			2.3,
			1,
			30
		};
		reloadSound[]=
		{
			"WBK_SciFi_Weaponary\sounds\shotgun_reload.ogg",
			2.3,
			1,
			30
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"WBK_SciFi_Weaponary\anims\SCI_FI_Shotgun_Idle.rtm"
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",
					0.50118721,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"WBK_SCIFI_SHAWTY_SoundSet",
					"DMR05_tail_SoundSet",
					"GM6Lynx_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.1;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			dispersion=0.0051000002;
			minRange=5;
			minRangeProbab=0.80000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiDispersionCoefX=0;
			aiDispersionCoefY=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			dispersion=0.00018;
			aiRateOfFire=6;
			aiRateOfFireDistance=700;
		};
		class far_optic2: Single
		{
			showToPlayer=0;
			dispersion=0.00018;
			aiRateOfFire=8;
			aiRateOfFireDistance=2000;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			dispersion=0.00018;
			aiRateOfFire=6;
			aiRateOfFireDistance=1000;
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class WBK_SciFi_PreInit
	{
		init="call compile preprocessFileLineNumbers '\WBK_SciFi_Weaponary\scripts\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class WBK_SciFi_PostInit
	{
		init="call compile preprocessFileLineNumbers '\WBK_SciFi_Weaponary\scripts\XEH_postInit.sqf'";
	};
};
class Extended_FiredBIS_Eventhandlers
{
	class CAManBase
	{
		SciFiWeaponary_UnitFired="_unit = _this select 0; if !(local _unit) exitWith {}; _this spawn WBK_SciFi_ShockGunParticle;";
	};
};
class Extended_Killed_Eventhandlers
{
	class CAManBase
	{
		class SciFiWeaponary_UnitKilled
		{
			killed="[_this select 0,_this select 1] spawn WBK_SciFi_CreateScriptedDeathAnim";
		};
	};
};
class Extended_HitPart_EventHandlers
{
	class CAManBase
	{
		class SciFiWeaponary_UnitHit
		{
			onRespawn="true";
			HitPart="_this call WBK_WRS_Hit_Script;";
		};
	};
};
class cfgMods
{
	author="WebKnight";
	timepacked="1729094658";
};
