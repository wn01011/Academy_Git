#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���ǹ� �ݺ��� (if, switch, for, while, do while)
int main()
{
	//if else ����
	/*int a;

	printf("���ڸ� �Է����ּ���\n");

	scanf(" %d", &a);

	if (a >= 5)
		printf("�Է¹��� ���� %d �� 5���� ũ�ų� �����ϴ�.\n", a);
	else
		printf("�Է¹��� ���� %d �� 5���� ������?\n", a);*/

	//������ �Է��ؼ� 60�� �̻��̸� �հ�, �̸��̸� ���հ��̶�� ���
	/*int grade;
	printf("������ �Է����ּ���\n");
	scanf("%d", &grade);
	if (grade >= 60)
	{
		printf("�հ�\n");
	}
	else
		printf("���հ�\n");*/

	//���ڸ� �Է��ؼ� 0�̻��̸� ���, �ƴϸ� ������� ����غ���
	/*int a;
	printf("���ڸ� �Է����ּ���\n");
	scanf("%d", &a);
	if (a >= 0)
	{
		printf("���\n");
	}
	else
		printf("����\n");*/


	//���� 10����
	//���ڸ� �Է��ؼ� ¦������ Ȧ������ ���(����� ���ؼ�)
	/*int a;
	printf("���ڸ� �Է����ּ���.\n");
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("¦���Դϴ�.\n");
	else
		printf("Ȧ���Դϴ�.\n");*/
	//���ڸ� �Է��ؼ� 9�� ������� ���
	/*int a;
	printf("���ڸ� �Է����ּ���\n");
	scanf("%d", &a);
	if (a == 0)
	{
		printf("%d �� 9�ǹ���� �ƴմϴ�.", a);
	}
	else if (a % 9 == 0)
	{
		printf("9�� ����Դϴ�.\n");
	}
	else
		printf("9�� ����� �ƴմϴ�.\n");*/
	//���ڸ� 2�� �Է��ؼ� �� ū ���� ���
	/*int a,b;
	printf("���ڸ� �ΰ� �Է����ּ���\n");
	scanf(" %d %d", &a, &b);
	if (a > b )
	{
		printf("%d�� %d���� Ů�ϴ�.\n", a, b);
	}
	else
		printf("%d�� %d���� Ů�ϴ�.\n", b, a);*/
	//���ڸ� 2�� �Է��ؼ� �μ��� ���� 100�� �̻��̸� �հ� �ƴϸ� ���հ� ���
	/*int a, b;
	printf("���ڸ� �ΰ� �Է����ּ���\n");
	scanf(" %d %d", &a, &b);
	if (a + b >= 100)
	{
		printf("�հ�\n");
	}
	else
		printf("���հ�\n");*/
	//���ڸ� 3�� �Է��ؼ� ����� 60�� �̻��̸� �հ� �ƴϸ� ���հ� ���
	/*int a, b, c;
	printf("���ڸ� ���� �Է����ּ���\n");
	scanf(" %d %d %d", &a, &b, &c);
	if (a + b + c >= 180)
	{
		printf("�հ�\n");
	}
	else
		printf("���հ�\n");*/
	//���ڸ� 2�� �Է��ؼ� ù��° �Է��� ���ڰ� �ι�° �Է��� ������ ������� ���
	/*int a, b;
	printf("���ڸ� �ΰ� �Է����ּ���\n");
	scanf(" %d %d", &a, &b);
	if (a % b == 0)
	{
		printf("%d�� %d�� ����Դϴ�.\n", a, b);
	}
	else
		printf("%d �� %d �� ����� �ƴմϴ�.\n", a, b);*/
	//���ڸ� �Է¹޾Ƽ� 90�� �̻��̸� A 80 B .,.. 60 �̸��̸�F ���
	/*int a;
	printf("���ڸ� �Ѱ� �Է����ּ���\n");
	scanf(" %d", &a);
	if (a >= 90)
	{
		printf("����� ������ A �Դϴ�.\n", a);
	}
	else if(a >= 80)
		printf("����� ������ B �Դϴ�.\n", a);
	else if (a >= 70)
		printf("����� ������ C �Դϴ�.\n", a);
	else if (a >= 60)
		printf("����� ������ D �Դϴ�.\n", a);
	else
		printf("����� ������ F �Դϴ�.\n", a);*/
	//���ڸ� 3�� �Է��ؼ� ���� ���� ū ���� ���
	/*int a, b, c;
	printf("���ڸ� ���� �Է����ּ���\n");
	scanf(" %d %d %d", &a, &b, &c);
	if (a > b && a > c)
	{
		printf("%d ��(��) ���� ū ����!\n", a);
	}
	else if (b > a && b > c)
	{
		printf("%d ��(��) ���� ū ����!\n", b);
	}
	else
		printf("%d ��(��) ���� ū ����!\n", c);*/
	//���ڸ� 4�� �Է��ؼ� ���� ���� ���� ���� ���
	/*int a, b, c, d;
	printf("���ڸ� �װ� �Է����ּ���\n");
	scanf(" %d %d %d %d", &a, &b, &c, &d);
	if (a < b && a < c && a < d)
	{
		printf("%d ��(��) ���� ���� ����!\n", a);
	}
	else if (b < a && b < c && b < d)
	{
		printf("%d ��(��) ���� ���� ����!\n", b);
	}
	else if(c < a && c < b && c < d)
	{
		printf("%d ��(��) ���� ���� ����!\n", c);
	}
	else
	{
		printf("%d ��(��) ���� ���� ����!\n", d);
	}*/
	//���ڸ� 5�� �Է��ؼ� ���� ���� ū �� �� ���� ���� ���� ���� ���
	/*int a, b, c, d, e;
	printf("���ڸ� �ټ��� �Է����ּ���\n");
	scanf(" %d %d %d %d %d", &a, &b, &c, &d, &e);
	if (a < b && a < c && a < d && a < e)
	{
		printf("%d ��(��) ���� ���� ����!\n", a);
	}
	else if (b < a && b < c && b < d && b < e)
	{
		printf("%d ��(��) ���� ���� ����!\n", b);
	}
	else if (c < a && c < b && c < d && c < e)
	{
		printf("%d ��(��) ���� ���� ����!\n", c);
	}
	else if (d < a && d < b && d < c && d < e)
	{
		printf("%d ��(��) ���� ���� ����!\n", d);
	}
	else
		printf("%d ��(��) ���� ���� ����!\n", e);

	if (a > b && a > c && a > d && a > e)
	{
		printf("%d ��(��) ���� ū ����!\n", a);
	}
	else if (b > a && b > c && b > d && b > e)
	{
		printf("%d ��(��) ���� ū ����!\n", b);
	}
	else if (c > a && c > b && c > d && c > e)
	{
		printf("%d ��(��) ���� ū ����!\n", c);
	}
	else if (d > a && d > b && d > c && d > e)
	{
		printf("%d ��(��) ���� ū ����!\n", d);
	}
	else
		printf("%d ��(��) ���� ū ����!\n", e);*/
	//���� 5�� �Է��ؼ� �ִ� �ּ� for��
	/*int a, b, c, d, e;

		printf("���ڸ� �ټ��� �Է����ּ���\n");
	scanf(" %d %d %d %d %d", &a, &b, &c, &d, &e);
	int Num[5] = { a, b, c, d, e };
	
	int max = Num[0], min = Num[0];
	
	for (int i = 0; i < 5; i++)
	{
		if (Num[i] > max)
			max = Num[i];
	}
	for (int i = 0; i < 5; i++)
	{
		if (Num[i] < min)
			min = Num[i];
	}
	printf("Max = %d, min = %d\n", max, min);*/
}