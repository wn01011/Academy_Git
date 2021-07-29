#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//조건문 반복문 (if, switch, for, while, do while)
int main()
{
	//if else 예제
	/*int a;

	printf("숫자를 입력해주세요\n");

	scanf(" %d", &a);

	if (a >= 5)
		printf("입력받은 숫자 %d 는 5보다 크거나 같습니다.\n", a);
	else
		printf("입력받은 숫자 %d 는 5보다 작은가?\n", a);*/

	//점수를 입력해서 60점 이상이면 합격, 미만이면 불합격이라고 출력
	/*int grade;
	printf("성적을 입력해주세요\n");
	scanf("%d", &grade);
	if (grade >= 60)
	{
		printf("합격\n");
	}
	else
		printf("불합격\n");*/

	//숫자를 입력해서 0이상이면 양수, 아니면 음수라고 출력해보자
	/*int a;
	printf("숫자를 입력해주세요\n");
	scanf("%d", &a);
	if (a >= 0)
	{
		printf("양수\n");
	}
	else
		printf("음수\n");*/


	//예제 10문제
	//숫자를 입력해서 짝수인지 홀수인지 출력(양수에 한해서)
	/*int a;
	printf("숫자를 입력해주세요.\n");
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("짝수입니다.\n");
	else
		printf("홀수입니다.\n");*/
	//숫자를 입력해서 9의 배수인지 출력
	/*int a;
	printf("숫자를 입력해주세요\n");
	scanf("%d", &a);
	if (a == 0)
	{
		printf("%d 는 9의배수가 아닙니다.", a);
	}
	else if (a % 9 == 0)
	{
		printf("9의 배수입니다.\n");
	}
	else
		printf("9의 배수가 아닙니다.\n");*/
	//숫자를 2개 입력해서 더 큰 수를 출력
	/*int a,b;
	printf("숫자를 두개 입력해주세요\n");
	scanf(" %d %d", &a, &b);
	if (a > b )
	{
		printf("%d가 %d보다 큽니다.\n", a, b);
	}
	else
		printf("%d가 %d보다 큽니다.\n", b, a);*/
	//숫자를 2개 입력해서 두수의 합이 100점 이상이면 합격 아니면 불합격 출력
	/*int a, b;
	printf("숫자를 두개 입력해주세요\n");
	scanf(" %d %d", &a, &b);
	if (a + b >= 100)
	{
		printf("합격\n");
	}
	else
		printf("불합격\n");*/
	//숫자를 3개 입력해서 평균이 60점 이상이면 합격 아니면 불합격 출력
	/*int a, b, c;
	printf("숫자를 세개 입력해주세요\n");
	scanf(" %d %d %d", &a, &b, &c);
	if (a + b + c >= 180)
	{
		printf("합격\n");
	}
	else
		printf("불합격\n");*/
	//숫자를 2개 입력해서 첫번째 입력한 숫자가 두번째 입력한 숫자의 배수인지 출력
	/*int a, b;
	printf("숫자를 두개 입력해주세요\n");
	scanf(" %d %d", &a, &b);
	if (a % b == 0)
	{
		printf("%d는 %d의 배수입니다.\n", a, b);
	}
	else
		printf("%d 는 %d 의 배수가 아닙니다.\n", a, b);*/
	//숫자를 입력받아서 90점 이상이면 A 80 B .,.. 60 미만이면F 출력
	/*int a;
	printf("숫자를 한개 입력해주세요\n");
	scanf(" %d", &a);
	if (a >= 90)
	{
		printf("당신의 학점은 A 입니다.\n", a);
	}
	else if(a >= 80)
		printf("당신의 학점은 B 입니다.\n", a);
	else if (a >= 70)
		printf("당신의 학점은 C 입니다.\n", a);
	else if (a >= 60)
		printf("당신의 학점은 D 입니다.\n", a);
	else
		printf("당신의 학점은 F 입니다.\n", a);*/
	//숫자를 3개 입력해서 그중 가장 큰 수를 출력
	/*int a, b, c;
	printf("숫자를 세개 입력해주세요\n");
	scanf(" %d %d %d", &a, &b, &c);
	if (a > b && a > c)
	{
		printf("%d 이(가) 가장 큰 수야!\n", a);
	}
	else if (b > a && b > c)
	{
		printf("%d 이(가) 가장 큰 수야!\n", b);
	}
	else
		printf("%d 이(가) 가장 큰 수야!\n", c);*/
	//숫자를 4개 입력해서 그중 가장 작은 수를 출력
	/*int a, b, c, d;
	printf("숫자를 네개 입력해주세요\n");
	scanf(" %d %d %d %d", &a, &b, &c, &d);
	if (a < b && a < c && a < d)
	{
		printf("%d 이(가) 가장 작은 수야!\n", a);
	}
	else if (b < a && b < c && b < d)
	{
		printf("%d 이(가) 가장 작은 수야!\n", b);
	}
	else if(c < a && c < b && c < d)
	{
		printf("%d 이(가) 가장 작은 수야!\n", c);
	}
	else
	{
		printf("%d 이(가) 가장 작은 수야!\n", d);
	}*/
	//숫자를 5개 입력해서 그중 가장 큰 수 와 가장 작은 수를 각각 출력
	/*int a, b, c, d, e;
	printf("숫자를 다섯개 입력해주세요\n");
	scanf(" %d %d %d %d %d", &a, &b, &c, &d, &e);
	if (a < b && a < c && a < d && a < e)
	{
		printf("%d 이(가) 가장 작은 수야!\n", a);
	}
	else if (b < a && b < c && b < d && b < e)
	{
		printf("%d 이(가) 가장 작은 수야!\n", b);
	}
	else if (c < a && c < b && c < d && c < e)
	{
		printf("%d 이(가) 가장 작은 수야!\n", c);
	}
	else if (d < a && d < b && d < c && d < e)
	{
		printf("%d 이(가) 가장 작은 수야!\n", d);
	}
	else
		printf("%d 이(가) 가장 작은 수야!\n", e);

	if (a > b && a > c && a > d && a > e)
	{
		printf("%d 이(가) 가장 큰 수야!\n", a);
	}
	else if (b > a && b > c && b > d && b > e)
	{
		printf("%d 이(가) 가장 큰 수야!\n", b);
	}
	else if (c > a && c > b && c > d && c > e)
	{
		printf("%d 이(가) 가장 큰 수야!\n", c);
	}
	else if (d > a && d > b && d > c && d > e)
	{
		printf("%d 이(가) 가장 큰 수야!\n", d);
	}
	else
		printf("%d 이(가) 가장 큰 수야!\n", e);*/
	//숫자 5개 입력해서 최대 최소 for문
	/*int a, b, c, d, e;

		printf("숫자를 다섯개 입력해주세요\n");
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