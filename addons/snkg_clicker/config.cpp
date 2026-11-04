class CfgPatches {
	class snkg_clicker {
		name = "WW2 Clicker Mod";
		author = "Snowkinger";
		version = 0.1;
		requiredAddons[] = {"ace_interact_menu"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgWeapons {
	class ACE_ItemCore;	
	class CBA_MiscItem_ItemInfo;	
	
	class snkg_acme_no470_clicker : ACE_ItemCore {
		author = "Snowkinger";
		displayName = "ACME No. 470 Clicker";
		picture = "\snkg_clicker\clicker.paa";
		scope = 2;
		
		class ItemInfo : CBA_MiscItem_ItemInfo {
			mass = 0.3;
		};
	};
};

class CfgSounds {
	class click {
		name = "click";
		sound[] = {"\snkg_clicker\Click.ogg", 3.16228, 1};
		titles[] = {0, ""};
	};
};

class CfgVehicles {
	class Man;	
	
	class CAManBase : Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class Clicker {
					displayName = "Click";
					icon = "\snkg_clicker\clicker.paa";
					condition = "[_player, 'snkg_acme_no470_clicker'] call BIS_fnc_hasItem";
					statement = "[player, 'click'] remoteExec ['say3D']";
				};
			};
		};
	};
};