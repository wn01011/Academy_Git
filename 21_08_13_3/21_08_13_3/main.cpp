#include<iostream>
#include "CPlayer.h"
#include "CWeaponStone.h"
int main()
{
	CPlayer* pPlayer = new CPlayer();
	pPlayer->Attack();
	pPlayer->EquipWeapon(new CWeaponStone(1.0f, 1.0f));
	pPlayer->Attack(); //�����̸� ������� pPlayer�� CPlayer�ڷ����̱⶧���� Player�� Attack�� ����
	//Weapon.h(�θ�)�� attack�� virtual�� �ٿ������ν� stoneattack�� ȣ��ȴ�.

	
	if (pPlayer)
	{
		delete pPlayer;
		pPlayer = nullptr;
	}

	return 0;
}