#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Swap(int*,int* );
	//��ȯ�� �Լ���(�Ű�����)
	// �Լ� ������(Function Pointer)
	int (*pFunc)(int, int);
	int Sum(int _lhs, int _rhs) { return _lhs + _rhs; }
	int Sub(int _lhs, int _rhs) { return _lhs - _rhs; }

int main()
{
	//������(Pointer)
	int val = 10;
	int* p_val = &val;
	printf("%p = %p\n", &val, p_val);
	int lhs = 3;
	int rhs = 5;
	// Break Point ����� ���
	Swap(&lhs, &rhs);
	printf("lhs : %d\n rhs : %d\n", lhs, rhs);
	//scanf("%d", &lhs);
	
	//����������
	int value = 10;
	int* pValue = &value;
	int** ppValue = &pValue;
	**ppValue = 40;
	printf("value : %d\n", value);

	int arr[5] = { 1,2,3,4,5 };
	//int tmpArr[5] = arr; // �̷����� ������ �Ұ����ϴ�.
	int* pArr = arr;  // �ٸ� arrù��° ���� �ּҸ� ������ ������ �����ϴ� ���� �����ϴ�.
	//int tmpArr[] = arr;
	printf("pArr[2] : %d\n", pArr[2]);
	printf("arr : %p / %p \n", arr, &arr[0]);
	printf("pArr : %p\n", pArr);
	//�޸� �ּҿ���
	//�޸� �ɼ�(Memory offset)
	printf("pArr + 1 : %d\n", pArr + 1);

	///////////////////////////////////////////////////////////////
	pFunc = Sum; // �Լ� ��ü�� �ּ��̴�.
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