// cpp: Ŭ���� ����(��� �Լ� ����)
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