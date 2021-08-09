#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Swap(int*,int* );
	//반환형 함수명(매개변수)
	// 함수 포인터(Function Pointer)
	int (*pFunc)(int, int);
	int Sum(int _lhs, int _rhs) { return _lhs + _rhs; }
	int Sub(int _lhs, int _rhs) { return _lhs - _rhs; }

int main()
{
	//포인터(Pointer)
	int val = 10;
	int* p_val = &val;
	printf("%p = %p\n", &val, p_val);
	int lhs = 3;
	int rhs = 5;
	// Break Point 디버깅 방법
	Swap(&lhs, &rhs);
	printf("lhs : %d\n rhs : %d\n", lhs, rhs);
	//scanf("%d", &lhs);
	
	//다중포인터
	int value = 10;
	int* pValue = &value;
	int** ppValue = &pValue;
	**ppValue = 40;
	printf("value : %d\n", value);

	int arr[5] = { 1,2,3,4,5 };
	//int tmpArr[5] = arr; // 이런식의 대입은 불가능하다.
	int* pArr = arr;  // 다만 arr첫번째 항의 주소를 포인터 변수로 저장하는 것은 가능하다.
	//int tmpArr[] = arr;
	printf("pArr[2] : %d\n", pArr[2]);
	printf("arr : %p / %p \n", arr, &arr[0]);
	printf("pArr : %p\n", pArr);
	//메모리 주소연산
	//메모리 옵셋(Memory offset)
	printf("pArr + 1 : %d\n", pArr + 1);

	///////////////////////////////////////////////////////////////
	pFunc = Sum; // 함수 자체가 주소이다.
	printf("Sum : %d\n", pFunc(lhs, rhs));
	pFunc = Sub;
	printf("Sub : %d\n", pFunc(lhs, rhs));


	return 0;
}
void Swap(int *_pLhs, int *_pRhs)
{
	int tmp = *_pLhs;
	*_pLhs = *_pRhs;
	*_pRhs = tmp;
}