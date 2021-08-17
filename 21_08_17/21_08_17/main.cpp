#include <iostream>
#include <vector>
#include "CArrayList.h"
using namespace std;

//���ø� �Լ�(Template Function)
template<class T>
T Sum(T _lhs, T _rhs) {
	return _lhs + _rhs;
}
//���ø� Ư��ȭ(Template Specialization)
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
	// ���ø�(Template)
	// �����ڷ����� ���ÿ� ����ϰ� �� �� �ִ� ���
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