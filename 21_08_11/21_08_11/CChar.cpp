// cpp: 클래스 정의(멤버 함수 정의)
#include <iostream>
#include "CChar.h"

void CChar::Damamge(int _dmg)
{
	hp -= _dmg;
}
void CChar::PrintMp()
{
	std::cout << "CChar mp : " << mp << std::endl;
}