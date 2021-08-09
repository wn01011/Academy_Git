#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int GetArrayLength(int _arr[]);

int main()
{
	// 배열(Array) -> 정적배열(Static Array)
	int arr[5];
	//배열 요소 (Array Elements)
	//배열 색인(Index)
	arr[0] = 10;
	
	for (int i = 0; i < 5; ++i)
	{
		printf("arr[%d] : %d (%p)\n", i, arr[i], &arr[i]);
	}
	// 정적배열일때만 크기가 나온다.
	printf("arr Size : %d byte\n", sizeof(arr));
	printf("arr Length : %d\n", sizeof(arr) / sizeof(arr[0])); // sizeof(int)

	//arr[100] = 10; // 100번째 메모리에 접근해서 출력하지만 잘못하면 뻣는다.
	//printf("arr[100] : %d\n", arr[100]);

	//다차원 배열(Multi-Dimentsion Array)
	//1차원 배열
	//2차원 배열
	// 2 x 3 (2 by 3) (2행 3열)
	//row(column) row
	int arr2D[2][3] = { {11, 12, 13},{21,22,23} };
	
	for (int row = 0; row < 2; ++row)
	{
		for (int col = 0; col < 3; ++col)
		{
			printf("arr2D[%d][%d] : %d (%p)\n", row, col, arr2D[row][col], &arr2D[row][col]);
		}
	}
////////////////////////////////////////////////////////////////////
	//원래는 변수로 배열의 크기를 만들 수 없다. 하지만 const를 붙이면 최신버전으론 된다.
	const int len = 5;
	int valArr[len]; 

	return 0;
}

int GetArrayLength(int _arr[])
{
	// _arr는 포인터가 돼서 sizeof(_arr)는 포인터의 크기인 4로 무조건 된다.
	return sizeof(_arr) / sizeof(_arr[0]); 
}
