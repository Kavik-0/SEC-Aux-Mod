class CfgPatches
{
	class IMS_AdditionalWeapons
	{
		units[]={};
		weapons[]=
		{
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"WBK_MeleeMechanics"
		};
	};
};

///////Define custom sounds for your melee weapons
class CfgSounds
{
    sounds[] = {};
    class HardlightKatana_Hit_1 //// Classname that will be used in weapon config
    {
    name = "HardlightKatana_Hit_1"; ///// Name
    sound[] = {"\WebKnight_StarWars_Sounds\sounds\new\crowbar_impact_flesh1.wav", db+10, 1}; /// Path, volume, sound acceleration
    titles[]={};
	};
	class HardlightKatana_Hit_2
    {
    name = "HardlightKatana_Hit_2";
    sound[] = {"\WebKnight_StarWars_Sounds\sounds\new\crowbar_impact_flesh2.wav", db+10, 1};
    titles[]={};
	};
	
	class HardlightKatana_Swing_1
    {
    name = "HardlightKatana_Swing_1";
    sound[] = {"\WebKnight_StarWars_Sounds\sounds\new\crowbar_swing_miss1.wav", db+10, 1};
    titles[]={};
	};
	class HardlightKatana_Swing_2
    {
    name = "HardlightKatana_Swing_2";
    sound[] = {"\WebKnight_StarWars_Sounds\sounds\new\crowbar_swing_miss2.wav", db+10, 1};
    titles[]={};
	};
};

class CfgWeapons
{
	class WBK_pipeStyledSword; //// Default melee weapon class that you are inhereting from
	class IMS_HardlightKatanaWeapon: WBK_pipeStyledSword
	{
		displayName="[WSD]Hardlight Katana"; //// Name of the weapon
		model="MeleeWeapons\hardlightkatana.p3d"; //// Path to your model
		IMS_Melee_Param_Damage = 0.2; //// Your melee weapon damage (Notice that this param is multiplied by engine in a way that 0.2 will become 40. So this weapon deals 40 hp damage. 0.25 will deal 50 damage.
		
		IMS_Melee_Param_Sounds = ["HardlightKatana_Swing_1","HardlightKatana_Swing_2"]; // sounds that weapon will play on swings. The sounds must be defined through cfgSounds.
		IMS_Melee_Param_SoundsOnHit = ["HardlightKatana_Hit_1","HardlightKatana_Hit_2"];
		IMS_Melee_Param_SoundsOnBlock = ["sword_to_sword_1","sword_to_sword_2","sword_to_sword_3","sword_to_sword_4"];
		
		
		IMS_Melee_Param_SoundOnDraw = "generic_in";
		IMS_Melee_Param_SoundOnHide = "generic_out"; 
		//// Those params define what kind of sounds weapon will use upon drawing or hiding a weapon.
		
		 IMS_Melee_Param_SoundLoop = ["chainsword_loop",2.9];
		 //// That param defines what sound will be set on loop while you hold your melee weapon. 
		 //// 1 param of the array is a sound, second one is a time how long system needs to wait till play that sound again.
		
		
		IMS_WeaponType = "LightSaber"; //// that's what define which moveset your weapon will use.
		//// Available weapon types: 
		//// "OneHanded","TwoHanded","Poleax","Heavy","Rapier","BrassKnuckless"
		//// "MaceType","LightSaber_TwoBlades","LightSaber","Knife","Energy_Sword","Katana","GreatSwordAlike"
		//// "SpaceMarine_OneHanded","SpaceMarine_TwoHanded","SpaceMarine_Fists","SpaceMarine_Heavy"
		
		
		
		////This param initialy was created only for Lightsabers, but now work with any IMS weapon! You can make your weapon glow in a dark, if you want to.
		IMS_LightsaberColor = [1, 0.65, 0.0];
        /*
		Existing colors that you can use:
		[0.9, 0, 0.6] - purple
		[0.9, 0.5, 0] - yellow
		[0, 0.9, 0.15] - green
		[0, 0.15, 0.9] - blue
		[1, 0, 0] - red
		[1, 1, 1] - white
		*/
		
		IMS_ExecutionType = "Knife"; //// Execution type of a weapon. Notice that this param can be overriten by weapon type. Aka you want to use blunt execution, but your weapon type is a greatsword. In that case greatsword execution will be played.
		///// Available Execution Types
		//// None, Axe, Knife, ReversedKnife, Blunt
		IMS_CanWeaponBeStuck = "NO";
		///////Defines if weapon can be *stuck* inside of your enemy therfore stun player a little bit if he is too close to enemy.
		IMS_SecondMeleeObjectSpawnArray = [["WBK_BrassKnuckles_LEFTHAND","LeftHand",[0,0.014,0.02],[0,0,-50]]];
		////This param spawn additional objects on your character when you take out melee. Good for weapons that require second object like brass knuckles.
		////1) Classname of CfgVehicles object
		////2) Part of the body
		////3) Position (X,Y,Z) relative to the part of the body.
		////4) Rotation (X,Y,Z)
	};
	class IMS_DragonslayerWeapon: WBK_pipeStyledSword
	{
		displayName="[WSD]The Dragonslayer"; //// Name of the weapon
		model="MeleeWeapons\dragonslayer.p3d"; //// Path to your model
		IMS_Melee_Param_Damage = 0.7; //// Your melee weapon damage (Notice that this param is multiplied by engine in a way that 0.2 will become 40. So this weapon deals 40 hp damage. 0.25 will deal 50 damage.
		
		IMS_Melee_Param_Sounds = ["HardlightKatana_Swing_1","HardlightKatana_Swing_2"]; // sounds that weapon will play on swings. The sounds must be defined through cfgSounds.
		IMS_Melee_Param_SoundsOnHit = ["HardlightKatana_Hit_1","HardlightKatana_Hit_2"];
		IMS_Melee_Param_SoundsOnBlock = ["sword_to_sword_1","sword_to_sword_2","sword_to_sword_3","sword_to_sword_4"];
		
		
		IMS_Melee_Param_SoundOnDraw = "generic_in";
		IMS_Melee_Param_SoundOnHide = "generic_out"; 
		//// Those params define what kind of sounds weapon will use upon drawing or hiding a weapon.
		
		 IMS_Melee_Param_SoundLoop = ["chainsword_loop",2.9];
		 //// That param defines what sound will be set on loop while you hold your melee weapon. 
		 //// 1 param of the array is a sound, second one is a time how long system needs to wait till play that sound again.
		
		
		IMS_WeaponType = "GreatSwordAlike"; //// that's what define which moveset your weapon will use.
		//// Available weapon types: 
		//// "OneHanded","TwoHanded","Poleax","Heavy","Rapier","BrassKnuckless"
		//// "MaceType","LightSaber_TwoBlades","LightSaber","Knife","Energy_Sword","Katana","GreatSwordAlike"
		//// "SpaceMarine_OneHanded","SpaceMarine_TwoHanded","SpaceMarine_Fists","SpaceMarine_Heavy"
		
		
		
		////This param initialy was created only for Lightsabers, but now work with any IMS weapon! You can make your weapon glow in a dark, if you want to.
		IMS_LightsaberColor = [0, 0, 0];
        /*
		Existing colors that you can use:
		[0.9, 0, 0.6] - purple
		[0.9, 0.5, 0] - yellow
		[0, 0.9, 0.15] - green
		[0, 0.15, 0.9] - blue
		[1, 0, 0] - red
		[1, 1, 1] - white
		*/
		
		IMS_ExecutionType = "Blunt"; //// Execution type of a weapon. Notice that this param can be overriten by weapon type. Aka you want to use blunt execution, but your weapon type is a greatsword. In that case greatsword execution will be played.
		///// Available Execution Types
		//// None, Axe, Knife, ReversedKnife, Blunt
		IMS_CanWeaponBeStuck = "NO";
		///////Defines if weapon can be *stuck* inside of your enemy therfore stun player a little bit if he is too close to enemy.
		IMS_SecondMeleeObjectSpawnArray = [["WBK_BrassKnuckles_LEFTHAND","LeftHand",[0,0.014,0.02],[0,0,-50]]];
		////This param spawn additional objects on your character when you take out melee. Good for weapons that require second object like brass knuckles.
		////1) Classname of CfgVehicles object
		////2) Part of the body
		////3) Position (X,Y,Z) relative to the part of the body.
		////4) Rotation (X,Y,Z)
	};
};
