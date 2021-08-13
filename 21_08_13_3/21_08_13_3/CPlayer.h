#ifndef _CPLAYER_
#define _CPLAYER_

//#include "CWeapon.h"
//class forward-declaration
class CWeapon;

class CPlayer
{
private:
	//CWeapon m_weapon; // CWeapon�� ������ include�Ȱ� �ƴϱ⶧���� ���ü�����
	CWeapon* m_pWeapon; // ������ �����ʹ� 4����Ʈ�� �׻󰰱⶧���� ���� �������� ���� �Ҵ� �����ϴ�.
public:
	CPlayer();
	~CPlayer();


	//�߻�ȭ (Abstract, Abstraction)
	//������(Polymorphism) : �߻�ȭ�� �������� �������� type�� �� ���ִ�. �̸� �������̶�� �Ѵ�.
	void EquipWeapon(CWeapon* _weapon);
	void Attack();
};


#endif