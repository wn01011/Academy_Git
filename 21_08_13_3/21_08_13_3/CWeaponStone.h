#ifndef _CWEAPONSTONE_H_
#define _CWEAPONSTONE_H_
#include "CWeapon.h"
class CWeaponStone : public CWeapon
{
private:
public:
	CWeaponStone(float _atk, float _dura);
	~CWeaponStone();

	void Attack();
};


#endif