#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void height();
void age();
void adultAge();
void myProfile();

void main() // �Լ� 
{ // �Լ� ���� ���� �Է��ϸ� 10�� ���� ��������Լ�, �ڽ��� Ű�� cm�� �Է��ϸ� m�� ���, ���� �Է��ϸ� ��� �ڿ� ����(19��)	
	age();
	height();
	adultAge();
	myProfile();
}

void age()
{
	int age;
	printf("\nmy age : ");
	scanf(" %d", &age);
	printf("\nmy 10 years future age : %d", age + 10);
}

void height()
{
	float height;
	printf("\nmy height(cm) : ");
	scanf(" %f", &height);
	printf("\n%.3f(m)", height/100.0);
}

void adultAge()
{
	int adultAge;
	printf("\nmy age : ");
	scanf(" %d", &adultAge);
	if (adultAge <= 19)
		printf("you maybe an adult in %d years", 19 - adultAge);
	else
		printf("you are already an adult");
}

void myProfile()
{
	int age;
	float weight;
	float hegiht;
	printf("\n���̿� Ű ������ ������ �Է����ּ��� : ");
	scanf(" %d %f %f", &age, &hegiht, &weight);
	printf("\n������(kg) : %.1f Ű(cm) : %.1f ���� : %d", weight, hegiht, age);
}




	//�Ȱ��� �ڵ带 �߰��߰��� �ݺ��ۼ��ؾ��ϴ� ���
	//�̸� �Լ��� ����� ������ ���ٷ� ��ü�ϱ� ����
	//��ȯ��(�ڷ���) �Լ���(�Ű�����){�����ڵ�}
	//F12: �Լ��̸��� Ŀ���� ��ġ��Ű�� �ش�Ű�� ������ �Լ��� ���̵� ��ġ�� Ŀ���� �̵��Ѵ�.
	//�Լ��� �Ű������� �������� �� �� �ִ�. 
	//�ش� �Լ��� ȣ���� ��ġ�� �Լ��� �������� ����(��ȯ) �ϰٴٴ� �ǹ�
	//���޵Ǵ� ������� ��ȯ�ڶ�� �Ѵ�. (c �� ���ؼ��� int ���� ���ؼ� �������� ��ȯ����0���� �����Ѵ�.)