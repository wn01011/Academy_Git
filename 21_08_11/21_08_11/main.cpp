#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "CChar.h"

struct Schar
{
	//struct는 class와 다르게 public이 default이다.
	// : 접근지시자를 안붙여도 public인 경우 접근 가능하지만 private은 붙여줘야된다.
	// class에선 접근지시자를 무조건 붙여줘야된다.
	// class는 외부에서 변수에 접근을 하게 하면 안좋은 class일 가능성이 높다.
	// 따라서 class 의 default 는 private이다.
private:
	int hp;
	int mp;

	void Damage(int _dmg) { hp -= _dmg; }
};

int main()
{
	// 클래스 (Class)
	// C with Class
	// 객체(Object) : 클래스의 변수는 객체라고 부른다.
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