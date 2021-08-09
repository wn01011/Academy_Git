#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int GetArrayLength(int _arr[]);

int main()
{
	// �迭(Array) -> �����迭(Static Array)
	int arr[5];
	//�迭 ��� (Array Elements)
	//�迭 ����(Index)
	arr[0] = 10;
	
	for (int i = 0; i < 5; ++i)
	{
		printf("arr[%d] : %d (%p)\n", i, arr[i], &arr[i]);
	}
	// �����迭�϶��� ũ�Ⱑ ���´�.
	printf("arr Size : %d byte\n", sizeof(arr));
	printf("arr Length : %d\n", sizeof(arr) / sizeof(arr[0])); // sizeof(int)

	//arr[100] = 10; // 100��° �޸𸮿� �����ؼ� ��������� �߸��ϸ� ���´�.
	//printf("arr[100] : %d\n", arr[100]);

	//������ �迭(Multi-Dimentsion Array)
	//1���� �迭
	//2���� �迭
	// 2 x 3 (2 by 3) (2�� 3��)
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
	//������ ������ �迭�� ũ�⸦ ���� �� ����. ������ const�� ���̸� �ֽŹ������� �ȴ�.
	const int len = 5;
	int valArr[len]; 

	return 0;
}

int GetArrayLength(int _arr[])
{
	// _arr�� �����Ͱ� �ż� sizeof(_arr)�� �������� ũ���� 4�� ������ �ȴ�.
	return sizeof(_arr) / sizeof(_arr[0]); 
}
