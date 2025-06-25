class FSN_B61_Nuclear_M : PylonMissile_1Rnd_Mk82_F
{
	scope = 1;
	author="Freestyle_Build";
	descriptionShort = "B61-12 \n With selectable yield of 0.3/1.5/10/50 kT TNT equivalent";
	displayName="B61-12 Nuclear Bomb";
	displayNameShort="Nuclear";
	ammo="FSN_B61_Nuclear";
	initSpeed=0;
	count=1;
	pylonWeapon="FSN_B61_Nuclear_W";
	mass=500;
	hardpoints[]=
	{
	};
};
class FSN_B83_Nuclear_M : FSN_B61_Nuclear_M
{
	descriptionShort = "B83 \n With selectable yield of 50/150/350/1200 kT TNT equivalent";
	displayName="B83 Nuclear Bomb";
	displayNameShort="Nuclear";
	ammo="FSN_B83_Nuclear";
	pylonWeapon="FSN_B83_Nuclear_W";
	mass=1100;
};
class DMNS_Shiva_Nuclear_M : FSN_B61_Nuclear_M
{
	descriptionShort = "'SHIVA' \n With selectable yield of 50/150/350/1200 kT TNT equivalent";
	displayName="'SHIVA' TACTICAL NUCLEAR BOMB";
	displayNameShort="Nuclear";
	ammo="DMNS_Shiva_Nuclear";
	pylonWeapon="DMNS_Shiva_Nuclear_W";
	mass=1100;
};
class FSN_Nuclear_Missile_M : VehicleMagazine
{
	scope = 1;
	nameSound="missiles";
	initSpeed=0;
	model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_02_F.p3d";
	descriptionShort = "NX-01 \n With selectable yield of 1/5/10/25 kT TNT equivalent";
	displayName="NX-01 Nuclear Missile";
	displayNameShort="Nuclear";
	ammo="FSN_Nuclear_Missile";
	count=1;
	pylonWeapon="FSN_Nuclear_Missile_W";
	mass=250;
	hardpoints[]=
	{
	};
};
class FSN_Nuclear_Cruise_Missile_M : VehicleMagazine
{
	scope = 1;
	nameSound="missiles";
	initSpeed=0;
	model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_02_F.p3d";
	descriptionShort = "NX-02 ALCM \n Air Launched Cruise Missile with a yield of 100 kT TNT equivalent";
	displayName="NX-02 ALCM";
	displayNameShort="Nuclear";
	ammo="FSN_Nuclear_Cruise_Missile";
	count=1;
	pylonWeapon="FSN_Nuclear_Cruise_Missile_W";
	mass=500;
	hardpoints[]=
	{
	};
};
class DMNS_Shiva_Nuclear_Cruise_Missile_M: FSN_Nuclear_Cruise_Missile_M
{
	author="DemonicOnPc";
	scope=1;
	displayName="Shiva Missile Cruise x1";
	displayNameShort="Shiva Missile Cruise x1";
	descriptionShort="Nuclear";
	ammo="DMNS_Shiva_Nuclear_Cruise_Missile";
	initSpeed=3;
	maxLeadSpeed=1.38889;
	count=1;
	nameSound="missiles";
};
class FSN_Diamondback_Missile_M : magazine_Missile_AMRAAM_D_x1
{
	model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_x1_F";
	scope=1;
	displayName="Diamondback Nuclear Sidewinder";
	displayNameShort="Diamondback";
	descriptionShort="Diamondback Nuclear Missile \n Nuclear armed air-to-air missile, with 0.75 kT war head";
	count=1;
	ammo="FSN_Diamondback_Missile";
	mass = 390;
	pylonWeapon="FSN_Diamondback_Missile_W";
	hardpoints[]=
	{
	};
};