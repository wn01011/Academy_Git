#include "CPlayer.h"
#include "CWeapon.h"
#include <iostream>

CPlayer::CPlayer() : m_pWeapon(nullptr)
{
	std::cout << "CPlayer Constructor" << std::endl;
}

CPlayer::~CPlayer()
{
	std::cout << "CPlayer Destructor" << std::endl;

	if (m_pWeapon)
	{
		delete m_pWeapon;
		m_pWeapon = nullptr;
	}
}

void CPlayer::EquipWeapon(CWeapon* _weapon)
{
	if (m_pWeapon)
	{
		delete m_pWeapon;
		m_pWeapon = nullptr;
	}

	m_pWeapon = _weapon;
}

void CPlayer::Attack()
{
	if (m_pWeapon)
		m_pWeapon->Attack();
	else std::cout << "Weapon is not in your hand" << std::endl;
}