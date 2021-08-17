#include <iostream>
#include <vector>
#include "CArrayList.h"
using namespace std;

//템플릿 함수(Template Function)
template<class T>
T Sum(T _lhs, T _rhs) {
	return _lhs + _rhs;
}
//템플릿 특수화(Template Specialization)
template <>
char* Sum<char*>(char* _lhs , char* _rhs)
{
	cout << "Sum<char*>" << endl;
	
	return nullptr;
}

int Sum(int _lhs, int _rhs) {
	return _lhs + _rhs;
}
//float Sum(float _lhs, float _rhs) {
//	return _lhs + _rhs;
//}

int main()
{
	// 템플릿(Template)
	// 여러자료형을 동시에 사용하게 할 수 있는 기능
	/*char h[] = "Hellow, ";
	char w[] = "World!";
	cout << Sum(h,w) << endl;*/

	vector<int> vec;
	CArrayList<int>* arrList = new CArrayList<int>(5);
	for (int i = 1; i < 7; ++i)
		arrList->Push(i);
	arrList->Print();
	if (arrList)
	{
		delete arrList;
		arrList = nullptr;
	}

	

	return 0;
}