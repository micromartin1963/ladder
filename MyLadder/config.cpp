class CfgPatches
{
	class Platform
	{
		units[] = {"land_MyLadder"};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class House;
	class land_MyLadder: HouseNoDestruct
	{
		scope = 1;
		model = "MyLadder\models\MyLadder.p3d";


	};




};