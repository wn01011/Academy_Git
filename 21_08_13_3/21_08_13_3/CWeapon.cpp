#include "CWeapon.h"
#include <iostream>
CWeapon::CWeapon(float _atk, float _dura) :
	m_fAttack(_atk), m_fDurability(_dura)
{
	std::cout << "CWeapon Constructor" << std::endl;
}

CWeapon::~CWeapon()
{
	std::cout << "CWeapon Destructor" << std::endl;
}

void CWeapon::Attack()
{
	std::cout << "CWeapon Attack" << std::endl;
}
