//Header: Ŭ���� ����

//#pragma once
//���Ǻ� ������
// if not def a : a ��°� ���� �Ǿ����� ������ endif������ ���� ������ ����
// ���� �ѹ��� ������ �Ϸ� ������ ������ ������
#ifndef _CCHAR_H_
#define _CCHAR_H_

// ��ü���� ���α׷���(Object-Oriented Programming)
class CChar
{

	// �������(Member Variables)
	// class�� structure�� ���� padding�� �ȴ�.
	// ĸ��ȭ(Encapsulation)

protected:
	//�ܺο��� ������ hp�� mp exp�� �ٲ��� ���ϵ��� private���� �ΰ�
	//public���� Damageó���� �ܺο��� �� �� �ֵ��� �Ѵ�.
private:
	int hp;
	int mp = 10;
	int exp;
	//class���� �Լ��� ����.
	//���鵵 ������ �ְ� �� ����� �۵��ϴ� ���(�Լ�)�� ����.
public:
	void Damamge(int _dmg);
	void PrintMp();
};

#endif