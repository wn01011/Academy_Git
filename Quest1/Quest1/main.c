#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main()
{
	int input_1, input_2;
	int big, small;
	printf("\n숫자 두개를 입력하시오 : ");
	scanf(" %d %d", &input_1, &input_2);
	
	if (!(input_1>= 1 && input_1<= 9) || !(input_2 >= 1 && input_2 <= 9))
	{
		printf("\n잘못된 입력입니다.");
	}
	else
	{
		if (input_1 - input_2 > 0)
		{
			big = input_1;
			small = input_2;
		}
		else
		{
			big = input_2;
			small = input_1;
		}

		for (int i = small; i <= big; i++)
		{
			printf("\n%d 단 시작!\n", i);
			for (int j = 1; j <= i; j++)
			{
				printf("%d x %d = %d   ", i, j, i * j);
			}
		}
	}
}