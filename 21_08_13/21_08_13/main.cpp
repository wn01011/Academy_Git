#include <iostream>
#include "CString.h"
int main()
{
	//상수성 유지
	CString str("World");
	//str.StrLen(); 문자열 관련 클래스 안에서 길이를 strlen이라고 지칭하면 역전앞 같은 의미가 된다.
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