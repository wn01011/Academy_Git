#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculater();char grade(); void ret_exercise();
int _plus();int _minus();int _multi();int _divide();int _percent();void _calculater();
void _drawingStar(); void _grade();
void _temp(); void _exchange();
int factorial();

void main() // �Լ� 
{   
	//ret_exercise();
	//_calculater();
	//_drawingStar();
	//_grade();
	//_temp();
	//_exchange();����
	printf("%d \n", factorial(4));
}
int calculater(int a, int b, char d)
{	
	int c;
	printf("\n���ڵΰ��� ��������ڸ� ���ʴ�� �Է��ϼ��� : ");

	scanf(" %d %d %c", &a, &b, &d);

	if (d == '+')
		c = _plus(a, b);
	else if (d == '-')
		c = _minus(a, b);
	else if (d == '*')
		c = _multi(a, b);
	else if (b == 0)
		printf("������ ���� 0�� �� �� �����ϴ�.");
	else if (d == '%')
		c = _percent(a, b);
	else if (d == '/')
		c = _divide(a, b);
	else
		printf("�߸��� ��� �������Դϴ�.");


	printf("%d %c %d = %d", a, d, b, c);
	return c;
}
char grade()
{
	int mygrade = 0;
	char Grade;
	printf("\n������ �Է��ϼ��� : ");
	scanf(" %d", &mygrade);
	if (mygrade > 100 || mygrade < 0)
	{
		printf("���ڰ� �ʹ� �۰ų� Ů�ϴ�.");
		return 'N';
	}
	else
	{
	if (mygrade >= 90)
		Grade = 'A';
	else if (mygrade >= 80)
		Grade = 'B';
	else if (mygrade >= 70)
		Grade = 'C';
	else if (mygrade >= 60)
		Grade = 'D';
	else
		Grade = 'F';
	
	return(Grade);
	}
}
void ret_exercise()
{
	int a = 0, b = 0;
	char c = 'A';

	calculater(a, b, c);
	printf("\nyour grade is %c\n", grade());
}
//1 ���⸦ ������ �� ���ϱ� ���� ���ϱ� ������� ���� �� ����� �ٽ� ������ �Լ��� �и��ؼ� ���� �Լ� �ȿ��� �� ��Ģ���꿡 �ش��ϴ� �Լ��� �ҷ��� ����� �� �ֵ��� ����� ����
int _plus(int a, int b)
{
	int c = a + b;
	return c;
}
int _minus(int a, int b)
{
	int c = a - b;
	return c;
}
int _multi(int a, int b)
{
	int c = a * b;
	return c;
}
int _divide(int a, int b)
{
	int c = a / b;
	return c;
}
int _percent(int a, int b)
{
	int c = a % b;
	return c;
}
void _calculater()
{
	int a = 0, b = 0;
	int d;
	char c=' ';
	printf("\n����� ���� �ΰ��� ��������ڸ� ���ʴ�� �Է��ϼ���\n");
	scanf(" %d %d %c",&a, &b, &c);
	switch (c)
	{
	case '+':
	{
		d = _plus(a, b);
		printf("������� = %d\n", d);
	}
		break;
	case '-':
	{
		d = _minus(a, b);
		printf("������� = %d\n", d);
	}
		break;
	case '*':
	{
		d = _multi(a, b);
		printf("������� = %d\n", d);
	}
		break;
	case '/':
	{
		if (b == 0)
			printf("0���δ� ���� �� �����ϴ�.");
		else
		{
		d = _divide(a, b);
		printf("������� = %d\n", d);
		}
	}
		break;
	case '%':
	{
		if (b == 0)
			printf("0���δ� ���� �� �����ϴ�.");
		else
		{
			d = _percent(a, b);
			printf("������� = %d\n", d);
		}
	}
		break;
	default:
		printf("�߸��� �������Դϴ�.");
		break;
	}
}
//2 ���׸��� 1�� ������ �Լ��� ������
void _drawingStar()
{
	int a = 0;
	printf("������ ���� �׸� ������ �Է��ϼ���");
	scanf(" %d", &a);

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if(i>=j)
				printf("*");
			else
			{
				printf(" ");
			}
		}
		
		printf("\n");
	}
}
//3 �Լ��� ������ 3�� �Է��ؼ� ������ ������� ������ ����Ѵ� �Լ��� ������
void _grade()
{
	int a = 0, b = 0, c = 0;
	printf("3���� ������ �Է��ϼ���\n");
	scanf(" %d %d %d", &a, &b, &c);
	if ((a > 100 || a < 0) || (b > 100 || b < 0) || (c > 100 || c < 0))
		printf("�߸��� �����Դϴ�.\n");
	else
	{
		printf("������ ����� %d �Դϴ�.", (a + b + c) / 3);
	}
}
//�����µ� �Է��ϸ� ȭ���µ��� �ٲٴ� �Լ��� ������
void _temp()
{
	float temp = 0;
	printf("�µ��� �Է��ϼ���(C) \n");
	scanf(" %f", &temp);

	printf("ȭ���µ��� %.1f(F) �Դϴ�.", temp*1.8 +32);
	
}
//��ȭ�� �Է��ϸ� �޷�ȭ�� ȯ���ؼ� ����ϴ� �Լ��� ������
void _exchange()
{
	float money=0;
	float exchange = 1 / 1151.3;
	printf("��ȭ�� �޷��� �ٲ㺸�� ������ �ִ� �ѱ�����? \n");
	scanf(" %f", &money);
	printf("%.0f �� �޷��� �ٲٸ� %.2f �޶�", money, money * exchange);
}
// �Լ� ���� ���� �Է��ϸ� 10�� ���� ��������Լ�, �ڽ��� Ű�� cm�� �Է��ϸ� m�� ���, ���� �Է��ϸ� ��� �ڿ� ����(19��)	
// ��ȯ�ڿ������� ���� 2���� �Է��ϸ� �� �� �� ���� ��ȯ�ϴ� �Լ��� ������� ���ѵ� ���� �Լ��� ȣ���Ѱ����� ����ض�.

//�Ű����� 3���� �Է¹޾Ƽ� ������ ���� ��ȯ�ϴ� �Լ��� ����� ���
//������ �Է��ϸ� �ش������� ������ ��ȯ�ϴ� �Լ��� ���
//�Ű������� ���� 2���� ��������� 1���� �Է¹޾Ƽ� �Էµ� ���� 2���� �Էµ� ��� �����ڷ� ����Ͽ� �� ����� ��ȯ�ϴ� �Լ��� ����� ���

//�Ȱ��� �ڵ带 �߰��߰��� �ݺ��ۼ��ؾ��ϴ� ���
//�̸� �Լ��� ����� ������ ���ٷ� ��ü�ϱ� ����
//��ȯ��(�ڷ���) �Լ���(�Ű�����){�����ڵ�}
//F12: �Լ��̸��� Ŀ���� ��ġ��Ű�� �ش�Ű�� ������ �Լ��� ���̵� ��ġ�� Ŀ���� �̵��Ѵ�.
//�Լ��� �Ű������� �������� �� �� �ִ�. 
//�ش� �Լ��� ȣ���� ��ġ�� �Լ��� �������� ����(��ȯ) �ϰٴٴ� �ǹ�
//���޵Ǵ� ������� ��ȯ�ڶ�� �Ѵ�. (c �� ���ؼ��� int ���� ���ؼ� ��������)

//����Լ�
int factorial(int i)
{
	if (i == 1)
		return 1;
	else
	{
		return (i * factorial(i - 1));
	}
}
//�Լ��� ���� => �Լ��� ���� => �Լ��� ȣ��