#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>//���ڿ��� ���õ� ǥ���Լ��� ���ԵǾ��ִ� ����(���̺귯��)
//strcpy(������ ��ġ, ������ �迭) : string copy �Լ� , strcmp(�񱳴�����1,������2) : string compare������ 0�� ��ȯ �ٸ��� 1�� ��ȯ�Ѵ�.
//�迭 p208 
void study_Array()
{
	
	int k_ary[10];
	//�迭�� ��ȣ�� �ݵ�� 0���� �����ϳ�. ������ ��ȣ�� �迭�� ũ�� -1 �����̴�.
	//���� ary[5] �� �ּ����� 6�� ������ 0,1,2,3,4 ������ �ּ����� �� �� �ִ�. 
	//������ [5] �� �ּ����� �迭�� ��ħǥ�� ���� �ּ��̴�.
	
	for (int i = 0; i < 10; i++)
	{
		printf("ary[%d] = ",i);
		scanf(" %d", &k_ary[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("\nary[%d] = %d\n", i, k_ary[i]);
	}
}
void Study_Array()
{
	int ary[10];
	for (int i = 0; i < 10; i++)
	{
		printf("\nary[%d] = ",i);
		scanf(" %d", &ary[i]);
	}
	for (int i = 9; i >= 0; i--)
	{
		printf("\nary[%d] = %d\n", i, ary[i]);
	}
}
void study_Array_char();
void chr_Array_question();
void chr_Array_question2();
void chr_Array_string_h();
void myStructStudy();
void printInfo();
void StudentGrade();
void printGrade();
void enumFunc();


void main()
{
	enumFunc();
}

struct playerData
{
	char name[128];//�÷��̾� �̸�
	int level;//�÷��̾� ����
	char Rank;//�÷��̾� ���
	float exp;//�÷��̾� ����ġ

};// ���� ���ϴ� �ڷ����� ���Ӱ� ����� ����
struct stdGrade
{
	char Korean;
	char English;
	char Mathmatic;
};

enum playerStatus
{
	NORMAL, PALALIZE, POISION, BURNED, ICED, DEAD
};// ������ : ����üó�� ������ �����ϴ� �ڷ����� ��� ����ϴ� ���� �ƴ϶� ���ο���� ���� ����

void enumFunc()
{
	enum playerStatus ps;
	switch (ps)
	{
	case NORMAL:
		break;
	case PALALIZE:
		break;
	case POISION:
		break;
	case BURNED:
		break;
	case ICED:
		break;
	case DEAD:
		break;
	default:
		break;
	}
}


//void chr_Array_question2()
//{
//	char ary[] = "Hello World";
//	char ary_2[12];
//	
//	for (int i = 10; i >= 0; i--)
//	{
//		printf("%c", ary[i]);
//	}
//
//	for (int i = 0; i < 11; i++)
//	{
//		ary_2[i] = ary[i];
//	}
//	ary_2[11] = '\0';
//	printf("\n\n%s\n", ary_2);
//
//	for (int i = 10; i >= 0; i--)
//	{
//		ary_2[i] = ary[10 - i];
//	}
//	printf("\n%s\n", ary_2);
//	
//	
//	char ary_3[12];
//	for (int i = 0; i <= 10; i++)
//	{
//		ary_3[i] = ary_2[10 - i];
//	}
//	ary_3[11] = '\0';
//	printf("\n%s\n", ary_3);
//
//}
//void chr_Array_question()
//{
//	char ary_1[] = "Hello World";
//	char ary_2[256];
//	printf("�Է¹��� ���ڿ���? \n");
//
//	printf("ary_1 = %s\nary_2 = %s\n", ary_1, ary_2);
//}
//void study_Array_char()
//{
//	//���ڰ� �ƴ� ���ڸ� �迭�� ����ϴ� ��� ���ڰ� �ƴ� ���ڸ� �迭�� �����ؼ� ������ �����ϴ� ���;
//	char ch_ary[10] = { 'a','b','c','d' };
//	char ch_ary2[10] = "abcde";
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("ch_ary2[%d] =  %c\n", i, ch_ary2[i]);
//	}
//}
//void chr_Array_string_h()
//{
//	char ary[128] = "string is string";
//	char ary_2[128];
//	printf("%s\n", ary_2);
//	strcpy(ary_2, ary);
//	printf("%s\n", ary_2);
//	if (strcmp(ary, ary_2) == 0)
//	{
//		printf("ary�� ary_2�� ����.\n");
//	}
//	if (strcmp(ary, ary_2) == 1)
//	{
//		printf("ary �� ary_2�� ���� �ʴ�.\n");
//	}
//
//}
//void myStructStudy()
//{
//	struct playerData data;//���ǵ� ����ü�� ����� ��� ������ �����ϵ� �ϸ� ������ ����ü���� ��Ÿ���� struct�� ���δ�.
//	data.level = 5;
//	data.exp = 98.5;
//	data.Rank = 'C';
//
//	struct playerData data2 = {"abcd", 3, 'A', 56.1f};//�ۼ����� ������ ������� �־�����Ѵ�.
//	
//	printf("%s\n%d\n%c\n%.1f\n", data2.name, data2.level, data2.Rank, data2.exp);
//
//}
//void printInfo(struct playerData p)
//{
//	printf("�÷��̾������� ����մϴ�.\n");
//	printf("���� : %d\n����ġ : %.1f\n��ũ : %c\n�̸� : %s\n", p.level, p.exp, p.Rank, p.name);
//}
//void StudentGrade()
//{
//	struct stdGrade std_1 = { 'A','B','C' };
//	struct stdGrade std_2 = { 'C','B','A' };
//	struct stdGrade std_3 = { 'A','A','S' };
//	printGrade(std_1);
//	printGrade(std_2);
//	printGrade(std_3);
//
//}
//void printGrade(struct stdGrade pr)
//{
//	printf("���� %c ���� %c ���� %c\n\n", pr.Korean,pr.English, pr.Mathmatic);
//}
//�������� �л��� ������ �����ϴ� ����ü�� �����. �����ؾ��ϴ� ������ ���� ���� ���� 3���� 
//�л� 3���� ������� ���л����� �� ������ ������ �Է����ְ� �� �л��� ������ ȭ�鿡 ����غ���





