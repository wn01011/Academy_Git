#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int Num = 0;
	printf("보고싶은 연습문제번호는?\n");
	scanf(" %d", &Num);
	//연습문제 점수를 입력해서 학점 출력
	//학점은 100점이면 A+ 90 점 대면 A
	/*int grade;
	scanf(" %d", &grade);
	if (grade > 100 || grade < 0)
	{
		printf("점수를 제대로 입력하시오");
	}
	else
	{
		switch (grade / 10)
		{
		case 10:
			printf("A+\n");
			break;
		case 9:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;


		default:
			printf("F\n");
			break;
		}
	}*/

	switch (Num)
	{
	//숫자를 입력받아 음수면 양수로 바꿔서 출력하라 양수나 0이면 그대로 출력하라
	case 1:
	{
		int input;
		printf("숫자를 입력하시오");
		scanf(" %d", &input);

		if (input >= 0)
			printf("입력한 숫자의 절댓값은 %d\n", input);
		else
			printf("입력한 숫자의 절댓값은 %d\n", -1 * input);
		
	}
		break;
	//숫자를 2개 입력받아서 큰수에서 작은 수를 뺀 값을 출력하라
	case 2:
	{
		int input_1, input_2;
		printf("숫자를 두개 입력하시오\n");
		scanf(" %d %d", &input_1, &input_2);
		if (input_1 >= input_2)
		{
			printf("%d - %d = %d\n", input_1, input_2, input_1 - input_2);
		}

	}
		break;
	//정수를 2개 입력받아서 먼저 입력된 숫자를 나중에 입력된 숫자로 나눠서 몫과 나머지를 출력하라
	case 3:
	{
		int input_1, input_2;
		printf("숫자를 두개 입력하시오\n");
		scanf(" %d %d", &input_1, &input_2);
		printf("%d / %d 의 몫은 %d 이고 나머지는 %d 이다.\n", input_1, input_2, input_1 / input_2, input_1 % input_2);
	}
		break;
	//번호를 하나 입력하면 복권의 담청 여부를 출력하라 77: 당첨, 10의 자리가 7:2등 1자리 3등 나머지 꽝
	case 4:
	{
		int input_1;

		printf("숫자를 한개 입력하시오\n");
		scanf(" %d", &input_1);
		if (input_1 < 10 || input_1>99)
		{
			printf("잘못된 입력입니다.");
		}
		else if (input_1 / 10 == 7)
		{
			switch (input_1)
			{
			case 77:
				printf("1등 당첨");
				break;
			default:
				printf("2등 당첨");
				break;
			}
		}
		else if (input_1 % 10 == 7)
			printf("3등 당첨");
		else
			printf("꽝");
	}
		break;
	default:
		break;
	}
}