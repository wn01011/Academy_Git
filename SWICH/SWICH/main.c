#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int Num = 0;
	printf("������� ����������ȣ��?\n");
	scanf(" %d", &Num);
	//�������� ������ �Է��ؼ� ���� ���
	//������ 100���̸� A+ 90 �� ��� A
	/*int grade;
	scanf(" %d", &grade);
	if (grade > 100 || grade < 0)
	{
		printf("������ ����� �Է��Ͻÿ�");
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
	//���ڸ� �Է¹޾� ������ ����� �ٲ㼭 ����϶� ����� 0�̸� �״�� ����϶�
	case 1:
	{
		int input;
		printf("���ڸ� �Է��Ͻÿ�");
		scanf(" %d", &input);

		if (input >= 0)
			printf("�Է��� ������ ������ %d\n", input);
		else
			printf("�Է��� ������ ������ %d\n", -1 * input);
		
	}
		break;
	//���ڸ� 2�� �Է¹޾Ƽ� ū������ ���� ���� �� ���� ����϶�
	case 2:
	{
		int input_1, input_2;
		printf("���ڸ� �ΰ� �Է��Ͻÿ�\n");
		scanf(" %d %d", &input_1, &input_2);
		if (input_1 >= input_2)
		{
			printf("%d - %d = %d\n", input_1, input_2, input_1 - input_2);
		}

	}
		break;
	//������ 2�� �Է¹޾Ƽ� ���� �Էµ� ���ڸ� ���߿� �Էµ� ���ڷ� ������ ��� �������� ����϶�
	case 3:
	{
		int input_1, input_2;
		printf("���ڸ� �ΰ� �Է��Ͻÿ�\n");
		scanf(" %d %d", &input_1, &input_2);
		printf("%d / %d �� ���� %d �̰� �������� %d �̴�.\n", input_1, input_2, input_1 / input_2, input_1 % input_2);
	}
		break;
	//��ȣ�� �ϳ� �Է��ϸ� ������ ��û ���θ� ����϶� 77: ��÷, 10�� �ڸ��� 7:2�� 1�ڸ� 3�� ������ ��
	case 4:
	{
		int input_1;

		printf("���ڸ� �Ѱ� �Է��Ͻÿ�\n");
		scanf(" %d", &input_1);
		if (input_1 < 10 || input_1>99)
		{
			printf("�߸��� �Է��Դϴ�.");
		}
		else if (input_1 / 10 == 7)
		{
			switch (input_1)
			{
			case 77:
				printf("1�� ��÷");
				break;
			default:
				printf("2�� ��÷");
				break;
			}
		}
		else if (input_1 % 10 == 7)
			printf("3�� ��÷");
		else
			printf("��");
	}
		break;
	default:
		break;
	}
}