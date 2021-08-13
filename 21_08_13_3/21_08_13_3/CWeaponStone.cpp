#include "CWeaponStone.h"
#include <iostream>


CWeaponStone::CWeaponStone(float _atk, float _dura) :
	CWeapon(_atk, _dura)
{
	std::cout << "CWeaponStone Constructor" << std::endl;
}

CWeaponStone::~CWeaponStone()
{
	std::cout << "CWeaponstone Destructor" << std::endl;
}

void CWeaponStone::Attack()
{
	std::cout << "CWeaponStone Attack" << std::endl;
}