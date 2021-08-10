#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h> // Memory Allocate ����� // Memory : Data(��������), Stack(��������), Heap(�������� => �����Ҵ����� ���ٰ���)
#define NULL 0
//Macro Function
#define SAFE_FREE(p)\
do {\
	if (p)\
	{\
		free(p);\
		p = NULL;\
	}\
} while(0)
int main()
{
	// �޸� �����Ҵ�(Dynamic Memory Allocate)
	int val = 10; //�����Ҵ�(Static Memory Allocate)
	//������ ������ ������ : ������ �츮�� ���Ҷ� ������ ����� ������ �� �ִ�.
	int* pVal = NULL;
	// ctrl + shift + spacebar;, size_t = unsinged int;
	// malloc�� ���� ���� ������ �������;
	// (�� �ڷ������� ���� �޸� �����̾�)malloc(�� ������ŭ�� �޸𸮸� ����);
	pVal = (int*)malloc(sizeof(int)); 
	*pVal = 100;
	
	printf("*pVal : %d\n", *pVal); printf("*pVal : %d\n", *pVal);
	//�����Ҵ� ���� ���ϸ� �޸� ����(Memory Leak)
	/*if (pVal != NULL)
	{
		free(pVal);
		pVal = NULL;
	}*/
	SAFE_FREE(pVal);

	// Stack Overflow
	// int arr[100000];
	int arr[5] = { 0 };
	int arrLen = 5;
	int* pArr = (int*)malloc(arrLen * sizeof(int)); //�������� ���ǹǷ� ������ ���� ��;
	
	for (int i = 0; i < arrLen; ++i)
		*(pArr + i) = 0;
	
	pArr[0] = 10;
	*(pArr + 1) = 100;
	for (int i = 0; i < arrLen; ++i)
	{
		printf("*(pArr + %d) : %d\n", i, *(pArr + i));
	}
	
//	*(pArr + 100) = 10000;

	SAFE_FREE(pArr);

	//double-dimention dynamic allocate
	int** ppArr = (int**)malloc(sizeof(int*) * 2);
	*(ppArr + 0) = (int*)malloc(sizeof(int) * 3);
	ppArr[1] = (int*)malloc(sizeof(int) * 3); //*(ppArr + 4);

	for (int row = 0; row < 2; ++row)
	{
		for (int col = 0; col < 3; ++col)
		{
			//ppArr[row][col]
			*(*(ppArr + row) + col) = ((row + 1) * 10) + (col + 1);
		}
	}
	for (int row = 0; row < 2; ++row)
	{
		for (int col = 0; col < 3; ++col)
		{
			printf("ppArr[%d][%d] : [%d]\n", row, col, ppArr[row][col]);
		}
	}
	//������ ������ �����̴�.
	for (int row = 0; row < 2; ++row)
		SAFE_FREE(ppArr[row]);
	SAFE_FREE(ppArr);
	/// //////////////////////////////////////////////////////
	int arr2D[2][3];
	arr2D[0][5] = 10;

	int** pArray2D = (int**)malloc(sizeof(int*) * 2);
	int* pArray = (int*)malloc(sizeof(int) * 6);
	*(pArray2D + 0) = pArray + 0;
	*(pArray2D + 1) = pArray + 3;
	pArray2D[0][5] = 100;
	printf(" pArray2D[0][3] : %d\n", pArray[5]);
	
	SAFE_FREE(pArray2D);
	SAFE_FREE(pArray);
	
	return 0;
}