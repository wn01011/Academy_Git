#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int Practice_Num;
	
	printf("��� ° ���������� ���� ������ ���ڸ� �Է��ϼ���\n");
	printf("M A N U A L\n1~5 : trash\n6 : �ڽ��� �̸��� 10�� �ݺ��ؼ� ���\n7 : �ڽ��� �̸��� �ݺ��� Ƚ���� �Է¹޾Ƽ� �Է¹������ڸ�ŭ ���\n");
	printf("8 : 1���� 100������ ���� �߿��� ¦���� ���, 5�� ����� ���, Ȧ���� ��� ���� �ݴ��\n9 : 10x10 ���� ��� ���\n");
	printf("10 : (for������) -50~50���� �����߿��� Ȧ���� �ݴ�� �������\n11 : ���ڸ� 0�� 1�� �ϳ��� �Է¹޾Ƽ� 0�� �Է��ϸ� ¦�� 1�� �Է��ϸ� Ȧ���� 0~100���� �������� �������\n");
	printf("12 : ���� �ϳ��� �Է¹޾Ƽ� 100~200������ ���� �߿��� �ش� ������ ����� �������\n13 : ���� 1���� �Է¹޾Ƽ� 1~100���� ���� �߿��� 10�� �ڸ� ���ڰ� �Է��� ������ ������ �������\n");
	printf("14 : 10x10 matrix\n");
	scanf(" %d", &Practice_Num);

	switch (Practice_Num)
	{
	case 1: ///������ ���� 
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
			printf("������\n");
			i++;
		}*/
	}
		break;
	case 4:
	{
		int i = 0;
		do
		{
			printf("������\n");
			i++;
		} while (i < 10);
	}
		break;
	case 5: 
	{
		int i = 0;
		while (i < 5)
		{
			printf("5�� %d���� Ů�ϴ�.\n", i);
			i++;
		}
	}
		break;
	case 6://�ڽ��� �̸��� 10�� �ݺ��ؼ� ���
	{
		int i = 0;
		while (i <10)
		{
			printf("���̸��� ������\n");
			i++;
		}
	}
		break;
	case 7://�ڽ��� �̸��� �ݺ��� Ƚ���� �Է¹޾Ƽ� �Է¹������ڸ�ŭ ���
	{
		int loop_num;
		int i = 0;

		char name[7];

		printf("\n�̸� : ");
		scanf(" %s", &name);

		printf("\n�ݺ��� Ƚ�� : ");
		scanf(" %d", &loop_num);
		
		while (i < loop_num)
		{
			printf("\n���̸��� %s", name);
			i++;
		}
	}
		break;
	case 8:// 1���� 100������ ���� �߿��� ¦���� ���, 5�� ����� ���, Ȧ���� ��� ���� �ݴ��
	{
		int i = 0;
		
		printf("\n\n¦���� ���\n\n");
		while (i < 100)
		{
			i += 2;
			printf("���ڴ� %d �̾�\n", i);
		}
		
		printf("\n5�� ����� ���\n\n");
		i = 0;
		while (i < 100)
		{
			i += 5;
			printf("���ڴ� %d �̾�\n", i);
		}
		
		printf("\nȦ���� ���� �Ųٷ� ���\n\n");
		i = 99;
		while (i > 0)
		{
			printf("���ڴ� %d �̾�\n", i);
			i -= 2;
		}
		i = 100;
		
		printf("\n1�� �ڸ� ���ڰ� 7�� �Ųٷ� ���\n\n");
		while (i > 0)
		{
			if(i % 10 == 7)
			printf("���ڴ� %d �̾�\n", i);
			i--;
		}

	}
		break;
	case 9: // 10x10 ���� ��� ���
	{
		int i = 0;

		printf("\n10x10�迭 ���\n\n");
		while (i < 100)
		{
			i++;
			printf("%d ", i);

			if ((i % 10) == 0)
			{
				printf("\n");
			}
		}

		printf("\n10x10�迭 ���2\n\n");
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
	case 10://(for������) -50~50���� �����߿��� Ȧ���� �ݴ�� �������
	{
		for (int i = 50; i > -50; i -= 2)
		{
			
			printf(" %d", i - 1);
		}
	}
		break;
	case 11://���ڸ� 0�� 1�� �ϳ��� �Է¹޾Ƽ� 0�� �Է��ϸ� ¦�� 1�� �Է��ϸ� Ȧ���� 0~100���� �������� �������
	{
		printf("\n¦������� 0, Ȧ�� �����1 �� �Է��ϼ��� : ");
		int i;
		scanf(" %d", &i);
		if (i != 0 && i != 1)
		{
			printf("�߸��� �����Դϴ�.\n");
		}
		for (int j = 1; j <= 50; j++)
		{
			printf("%d ", 2 * j - i);
		}
	}
		break;
	case 12://���� �ϳ��� �Է¹޾Ƽ� 100~200������ ���� �߿��� �ش� ������ ����� �������
	{
		int i;

		printf("\n100���� 200���� ���� �� �� ����� ���� ���ڸ� ������� ���ڸ� �Է��ϼ��� : ");
		scanf(" %d", &i);
		for (int j = 100; j <= 200; j++)
		{
			if( j % i == 0)
			printf("%d ", j);
		}

	}
		break;
	case 13://���� 1���� �Է¹޾Ƽ� 1~100���� ���� �߿��� 10�� �ڸ� ���ڰ� �Է��� ������ ������ �������
	{
		int i;
		printf("\n���ϴ� 10�� �ڸ� ���ڴ�? :");
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
			printf("������ �ѹ��� �����մϴ�.\n");
		} while (i > 0);
	}
		break;
	default:
		printf("�߸��� �������� ��ȣ�Դϴ�.\n");
		break;
	}

}







