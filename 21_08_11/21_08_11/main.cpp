#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "CChar.h"

struct Schar
{
	//struct�� class�� �ٸ��� public�� default�̴�.
	// : ���������ڸ� �Ⱥٿ��� public�� ��� ���� ���������� private�� �ٿ���ߵȴ�.
	// class���� ���������ڸ� ������ �ٿ���ߵȴ�.
	// class�� �ܺο��� ������ ������ �ϰ� �ϸ� ������ class�� ���ɼ��� ����.
	// ���� class �� default �� private�̴�.
private:
	int hp;
	int mp;

	void Damage(int _dmg) { hp -= _dmg; }
};

int main()
{
	// Ŭ���� (Class)
	// C with Class
	// ��ü(Object) : Ŭ������ ������ ��ü��� �θ���.
	// instance
	CChar cChar;
	/*cChar.hp = 10;
	cChar.mp = 20;
	cChar.exp = 50;*/
	/*std::cout << "cChar.mp : " << (int)cChar.mp << std::endl;*/
	cChar.Damamge(1000);
	cChar.PrintMp();
	std::cout << "CChar Size : " << sizeof(CChar) << " byte" << std::endl;

	return 0;
}