#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void exercise_1();void exercise_2();void exercise_3();void exercise_4();void exercise_5();void exercise_6();void exercise_7();void exercise_8();

void main()
{
	//int형 배열 ary[5]를 만들고 ary를 이용해서 ary[3]을 출력해라
	//1번에서 만든 ary에서 ary[4]를 이용해서 ary[1]을 출력해라
	//매개변수로 int 형 포인터(==배열)를 받는 함수를 만들고 입력받은 포인터를 이용하여 배열에 저장된 데이터를 출력하는 함수를 만들어라
	//포인터의 형태로 배열을 입력받아 배열에 저장된 정수의 합을 출력하느 ㄴ함수.
	//포인터의 형태로 배열을 입력받아 배열을 반대로 뒤집어주는 함수를 만들어라
	//포인터의 형태로 문자열을 입력받아 문자열을 반대로 뒤집어주는 함수
	//숫자2개와 계산결과를 저장할 변수 1개를 매개변수로 받아 두 수의 합을 매개변수에 저장하는 함수
	//포인터의 형태로 배열 2개를 입력받아 두 배열을 서로 바꿔주는 함수
	
	int ary[5] = { 1,2,3,4,5 };
	int size = sizeof(ary) / 4;
	int a[] = { 1,2,3 }, b[] = { 2,3,4 };
	int* sum = &a;

	char* str = "abcd";
	printf("string = %s\n", str);
	int size_str = sizeof("abcd")-1;
	printf("size_str = %d\n", size_str);
	
	/*exercise_4(ary,size);*/
	/*exercise_5(ary, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", ary[i]);
	}*/
	
	exercise_6(str, 4);
	printf("re_string = %s\n", str);
	/*exercise_7(1, 2, sum);
	printf("%d\n", *sum);*/

	/*exercise_8(&a,&b);
	
	for (int i = 0; i < 3; i++)
	{
		printf("a[%d] = %d b[%d] = %d\n", i, a[i], i , b[i]);
	}*/

}

void exercise_1()
{
	int ary[5] = { 1,2,3,4,5 };
	int* a = 3 + ary;
	printf("ary[3] = %d\n", *a);

}
void exercise_2()
{
	int ary[5] = { 1,2,3,4,5 };
	int* a = &ary[4] - 3;
	printf("ary[1] = %d\n", *a);
}
void exercise_3(int* pa)
{
	for(int i = 0; i < sizeof(pa); i++)
	printf("ary[%d] = %d\n",i, *(pa + i));
}
void exercise_4(int* ary,int size)
{
	int sum =0;
	for (int i = 0; i < size; i++)
	{
		printf("ary[%d] = %d\n", i, ary[i]);
		sum += ary[i];
	}
	printf("Sum = %d\n", sum);
}
void exercise_5(int* ary, int size)
{
	int temp;
		
	for (int i = 0; i < size/2; i++)
	{
		temp = *(ary + i);
		*(ary + i) = *(ary + size - i - 1);
		*(ary + size - i - 1) = temp;
	}

}
void exercise_6(char* string, int size)
{
	
	/*int length = -1;
	for (int i = 0; i < size; i++)
	{
		if (*(string + i) != '\0')
			length++;
	}*/

	for (int i = 0; i < size/2; i++)
	{
		char temp = *(string + i);
		*(string + i) = *(string + size - i -1);
		*(string + size - i - 1) = temp;
	}
}
void exercise_7(int a, int b, int* c)
{	
	*c = a + b;
}
void exercise_8(int* a, int* b)
{
	int temp;
	for (int i = 0; i < 3; i++)
	{
		temp = *(a + i);
		*(a + i) = *(b + i);
		*(b + i) = temp;
	}
}