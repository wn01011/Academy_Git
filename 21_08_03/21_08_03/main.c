#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>//문자열과 관련된 표준함수가 포함되어있는 파일(라이브러리)
//strcpy(저장할 위치, 복사할 배열) : string copy 함수 , strcmp(비교대조군1,대조군2) : string compare같으면 0을 반환 다르면 1을 반환한다.
//배열 p208 
void study_Array()
{
	
	int k_ary[10];
	//배열의 번호는 반드시 0부터 시작하나. 마지막 번호는 배열의 크기 -1 까지이다.
	//위의 ary[5] 는 주소지가 6개 이지만 0,1,2,3,4 까지의 주소지만 쓸 수 있다. 
	//마지막 [5] 의 주소지는 배열의 마침표가 들어가는 주소이다.
	
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
	char name[128];//플레이어 이름
	int level;//플레이어 레벨
	char Rank;//플레이어 등급
	float exp;//플레이어 경험치

};// 내가 원하는 자료형을 새롭게 만드는 개념
struct stdGrade
{
	char Korean;
	char English;
	char Mathmatic;
};

enum playerStatus
{
	NORMAL, PALALIZE, POISION, BURNED, ICED, DEAD
};// 열거형 : 구조체처럼 기존에 존재하던 자료형을 묶어서 사용하는 것이 아니라 새로운것을 직점 만듬

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
//	printf("입력받을 문자열은? \n");
//
//	printf("ary_1 = %s\nary_2 = %s\n", ary_1, ary_2);
//}
//void study_Array_char()
//{
//	//숫자가 아닌 문자를 배열로 사용하는 경우 숫자가 아닌 문자를 배열로 저장해서 문장을 저장하는 방식;
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
//		printf("ary와 ary_2는 같다.\n");
//	}
//	if (strcmp(ary, ary_2) == 1)
//	{
//		printf("ary 와 ary_2는 같지 않다.\n");
//	}
//
//}
//void myStructStudy()
//{
//	struct playerData data;//정의된 구조체를 만드는 방법 변수를 선언하듯 하면 되지만 구조체임을 나타내는 struct를 붙인다.
//	data.level = 5;
//	data.exp = 98.5;
//	data.Rank = 'C';
//
//	struct playerData data2 = {"abcd", 3, 'A', 56.1f};//작성해준 변수의 순서대로 넣어줘야한다.
//	
//	printf("%s\n%d\n%c\n%.1f\n", data2.name, data2.level, data2.Rank, data2.exp);
//
//}
//void printInfo(struct playerData p)
//{
//	printf("플레이어정보를 출력합니다.\n");
//	printf("레벨 : %d\n경험치 : %.1f\n랭크 : %c\n이름 : %s\n", p.level, p.exp, p.Rank, p.name);
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
//	printf("국어 %c 영어 %c 수학 %c\n\n", pr.Korean,pr.English, pr.Mathmatic);
//}
//연습문제 학생의 성적을 저장하는 구조체를 만든다. 저장해야하는 성적은 국어 영어 수학 3가지 
//학생 3명을 ㅁ낟르어서 각학생에게 각 과목의 성적을 입력해주고 각 학생의 성적을 화면에 출력해보자





