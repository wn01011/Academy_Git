#ifndef _CPLAYER_
#define _CPLAYER_

//#include "CWeapon.h"
//class forward-declaration
class CWeapon;

class CPlayer
{
private:
	//CWeapon m_weapon; // CWeapon이 실제로 include된게 아니기때문에 들고올수없다
	CWeapon* m_pWeapon; // 하지만 포인터는 4바이트로 항상같기때문에 전방 선언으로 인해 할당 가능하다.
public:
	CPlayer();
	~CPlayer();


	//추상화 (Abstract, Abstraction)
	//다형성(Polymorphism) : 추상화로 정해지면 여러가지 type을 쓸 수있다. 이를 다형성이라고 한다.
	void EquipWeapon(CWeapon* _weapon);
	void Attack();
};


#endif