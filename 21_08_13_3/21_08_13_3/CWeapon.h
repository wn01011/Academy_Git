#ifndef _CWEAPON_H_
#define _CWEAPON_H_
//virtual�� �ϳ��� ������ ���� Ŭ�����̴�.
//��� ���� Ŭ������ �Ҹ��ڰ� ���� �Ҹ��ڿ����Ѵ�.
//�ƴϸ� �θ�� �ڽ� �Ҹ��ڰ� �ٲ�� �����Ҵ�� �޸𸮰� ������ �� �� �����ִ�.

//���� Ŭ����(Virtual Class) : ���� �Լ��� ���ԵǾ� �ִ� Ŭ����
//�������̽� Ŭ����(Interface Class) : ���� ���� �Լ��θ� �̷���� Ŭ����
class CWeapon
{
private:
	float m_fAttack;
	float m_fDurability;
public:
	CWeapon(float _atk, float _dura);
	virtual ~CWeapon();

	//���� ���� �Լ�(Pure Virtual Function)
	virtual void Attack() =0;
	//�����Լ�
	//virtual void Attack();
};

#endif