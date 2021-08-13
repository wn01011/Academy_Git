#include<iostream>
#include "CPlayer.h"
#include "CWeaponStone.h"
int main()
{
	CPlayer* pPlayer = new CPlayer();
	pPlayer->Attack();
	pPlayer->EquipWeapon(new CWeaponStone(1.0f, 1.0f));
	pPlayer->Attack(); //돌맹이를 들었더라도 pPlayer가 CPlayer자료형이기때문에 Player의 Attack을 실행
	//Weapon.h(부모)의 attack에 virtual을 붙여줌으로써 stoneattack이 호출된다.

	
	if (pPlayer)
	{
		delete pPlayer;
		pPlayer = nullptr;
	}

	return 0;
}