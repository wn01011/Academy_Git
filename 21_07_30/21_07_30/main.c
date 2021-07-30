#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int Practice_Num;
	
	printf("몇번 째 연습문제를 보고 싶은지 숫자를 입력하세요\n");
	printf("M A N U A L\n1~5 : trash\n6 : 자신의 이름을 10번 반복해서 출력\n7 : 자신의 이름을 반복할 횟수를 입력받아서 입력받은숫자만큼 출력\n");
	printf("8 : 1에서 100까지의 숫자 중에서 짝수만 출력, 5의 배수만 출력, 홀수만 출력 순서 반대로\n9 : 10x10 숫자 행렬 출력\n");
	printf("10 : (for문으로) -50~50까지 숫자중에서 홀수만 반대로 출력하자\n11 : 숫자를 0과 1중 하나를 입력받아서 0을 입력하면 짝수 1을 입력하면 홀수를 0~100까지 범위에서 출력하자\n");
	printf("12 : 숫자 하나를 입력받아서 100~200까지의 숫자 중에서 해당 숫자의 배수만 출력하자\n13 : 숫자 1개를 입력받아서 1~100까지 숫자 중에서 10의 자리 숫자가 입력한 숫자인 수들을 출력하자\n");
	printf("14 : 10x10 matrix\n");
	scanf(" %d", &Practice_Num);

	switch (Practice_Num)
	{
	case 1: ///수업전 연습 
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i == j || i == 8 - j)
				{
					printf("*");
				}
				else
					printf(" ");
			}
			printf("\n");
		}
		break;
	}
		break;
	case 2:
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i + 5 == j || 5 - i == j)
				{
					printf("*");
				}
				else
					printf(" ");
			}
			printf("\n");
		}
	}
		break;
	case 3:
	{
		/*int i = 0;
		while (i < 10)
		{
			printf("ㅇㅅㅇ\n");
			i++;
		}*/
	}
		break;
	case 4:
	{
		int i = 0;
		do
		{
			printf("ㅇㅅㅇ\n");
			i++;
		} while (i < 10);
	}
		break;
	case 5: 
	{
		int i = 0;
		while (i < 5)
		{
			printf("5는 %d보다 큽니다.\n", i);
			i++;
		}
	}
		break;
	case 6://자신의 이름을 10번 반복해서 출력
	{
		int i = 0;
		while (i <10)
		{
			printf("내이름은 김정규\n");
			i++;
		}
	}
		break;
	case 7://자신의 이름을 반복할 횟수를 입력받아서 입력받은숫자만큼 출력
	{
		int loop_num;
		int i = 0;

		char name[7];

		printf("\n이름 : ");
		scanf(" %s", &name);

		printf("\n반복할 횟수 : ");
		scanf(" %d", &loop_num);
		
		while (i < loop_num)
		{
			printf("\n내이름은 %s", name);
			i++;
		}
	}
		break;
	case 8:// 1에서 100까지의 숫자 중에서 짝수만 출력, 5의 배수만 출력, 홀수만 출력 순서 반대로
	{
		int i = 0;
		
		printf("\n\n짝수만 출력\n\n");
		while (i < 100)
		{
			i += 2;
			printf("숫자는 %d 이야\n", i);
		}
		
		printf("\n5의 배수만 출력\n\n");
		i = 0;
		while (i < 100)
		{
			i += 5;
			printf("숫자는 %d 이야\n", i);
		}
		
		printf("\n홀수만 순서 거꾸로 출력\n\n");
		i = 99;
		while (i > 0)
		{
			printf("숫자는 %d 이야\n", i);
			i -= 2;
		}
		i = 100;
		
		printf("\n1의 자리 숫자가 7만 거꾸로 출력\n\n");
		while (i > 0)
		{
			if(i % 10 == 7)
			printf("숫자는 %d 이야\n", i);
			i--;
		}

	}
		break;
	case 9: // 10x10 숫자 행렬 출력
	{
		int i = 0;

		printf("\n10x10배열 출력\n\n");
		while (i < 100)
		{
			i++;
			printf("%d ", i);

			if ((i % 10) == 0)
			{
				printf("\n");
			}
		}

		printf("\n10x10배열 출력2\n\n");
		i = 0;
		int j = 0;

		while (i < 10)
		{
			i++;
			while (j < (10 * i))
			{
				j++;
				printf("%d ", j);
			}
			printf("\n");

		}
	}
		break;
	case 10://(for문으로) -50~50까지 숫자중에서 홀수만 반대로 출력하자
	{
		for (int i = 50; i > -50; i -= 2)
		{
			
			printf(" %d", i - 1);
		}
	}
		break;
	case 11://숫자를 0과 1중 하나를 입력받아서 0을 입력하면 짝수 1을 입력하면 홀수를 0~100까지 범위에서 출력하자
	{
		printf("\n짝수출력은 0, 홀수 출력은1 을 입력하세요 : ");
		int i;
		scanf(" %d", &i);
		if (i != 0 && i != 1)
		{
			printf("잘못된 숫자입니다.\n");
		}
		for (int j = 1; j <= 50; j++)
		{
			printf("%d ", 2 * j - i);
		}
	}
		break;
	case 12://숫자 하나를 입력받아서 100~200까지의 숫자 중에서 해당 숫자의 배수만 출력하자
	{
		int i;

		printf("\n100부터 200까지 숫자 중 몇 배수를 가진 숫자를 출력할지 숫자를 입력하세요 : ");
		scanf(" %d", &i);
		for (int j = 100; j <= 200; j++)
		{
			if( j % i == 0)
			printf("%d ", j);
		}

	}
		break;
	case 13://숫자 1개를 입력받아서 1~100까지 숫자 중에서 10의 자리 숫자가 입력한 숫자인 수들을 출력하자
	{
		int i;
		printf("\n원하는 10의 자리 숫자는? :");
		scanf(" %d", &i);
		for (int j = 0; j < 100; j++)
		{
			if (j / (i * 10) == 1)
			{
				printf("%d ", j);
			}
		}
	}
		break;
	case 14:// 10x10 matrix
	{
		for (int i = 0; i < 10; i++)
		{
			int j;
			for (j = i * 10 ; j < (i + 1) * 10; j++)
			{
				printf("%d ", j + 1);
			}
			printf("\n");
		}
	}
		break;
	case 15:
	{
		int i = 0;
		do {
			printf("무조건 한번은 실행합니다.\n");
		} while (i > 0);
	}
		break;
	default:
		printf("잘못된 연습문제 번호입니다.\n");
		break;
	}

}







