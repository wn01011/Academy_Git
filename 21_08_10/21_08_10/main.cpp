#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h> // Memory Allocate 엠얼록 // Memory : Data(전역변수), Stack(지역변수), Heap(자유영역 => 동적할당으로 접근가능)
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
	// 메모리 동적할당(Dynamic Memory Allocate)
	int val = 10; //정적할당(Static Memory Allocate)
	//정적과 동적의 차이점 : 동적은 우리가 원할때 변수를 만들고 해제할 수 있다.
	int* pVal = NULL;
	// ctrl + shift + spacebar;, size_t = unsinged int;
	// malloc을 쓰고 나면 해제를 해줘야함;
	// (이 자료형으로 읽을 메모리 공간이야)malloc(이 정도만큼의 메모리를 원해);
	pVal = (int*)malloc(sizeof(int)); 
	*pVal = 100;
	
	printf("*pVal : %d\n", *pVal); printf("*pVal : %d\n", *pVal);
	//동적할당 해제 안하면 메모리 누수(Memory Leak)
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
	int* pArr = (int*)malloc(arrLen * sizeof(int)); //동적으로 계산되므로 변수가 들어가도 됨;
	
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
	//해제는 생성의 역순이다.
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