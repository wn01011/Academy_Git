#include <iostream>
#include "CString.h"
int main()
{
	//����� ����
	CString str("World");
	//str.StrLen(); ���ڿ� ���� Ŭ���� �ȿ��� ���̸� strlen�̶�� ��Ī�ϸ� ������ ���� �ǹ̰� �ȴ�.
	std::cout << str.Length() << std::endl;
	str.Copy("World");
	std::cout << (str.Compare("World") ? "True" : "False") << std::endl;
	str.Print();
	

	CString str2 = str;
	//str2.Print();
	//str2.Print();
	/*CString str3("str3");
	str3 = str;
	str3.Print();*/
	
	
	
	
	return 0;
}