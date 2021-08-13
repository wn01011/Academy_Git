#ifndef _CWEAPON_H_
#define _CWEAPON_H_
//virtual이 하나라도 있으면 가상 클래스이다.
//모든 가상 클래스는 소멸자가 가상 소멸자여야한다.
//아니면 부모와 자식 소멸자가 바뀌어 동적할당된 메모리가 해제가 안 될 수도있다.

//가상 클래스(Virtual Class) : 가상 함수가 포함되어 있는 클래스
//인터페이스 클래스(Interface Class) : 순수 가상 함수로만 이루어진 클래스
class CWeapon
{
private:
	float m_fAttack;
	float m_fDurability;
public:
	CWeapon(float _atk, float _dura);
	virtual ~CWeapon();

	//순수 가상 함수(Pure Virtual Function)
	virtual void Attack() =0;
	//가상함수
	//virtual void Attack();
};

#endif