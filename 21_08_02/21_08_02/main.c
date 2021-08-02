#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculater();char grade(); void ret_exercise();
int _plus();int _minus();int _multi();int _divide();int _percent();void _calculater();
void _drawingStar(); void _grade();
void _temp(); void _exchange();
int factorial();

void main() // 함수 
{   
	//ret_exercise();
	//_calculater();
	//_drawingStar();
	//_grade();
	//_temp();
	//_exchange();ㅎㅊ
	printf("%d \n", factorial(4));
}
int calculater(int a, int b, char d)
{	
	int c;
	printf("\n숫자두개와 산술연산자를 차례대로 입력하세요 : ");

	scanf(" %d %d %c", &a, &b, &d);

	if (d == '+')
		c = _plus(a, b);
	else if (d == '-')
		c = _minus(a, b);
	else if (d == '*')
		c = _multi(a, b);
	else if (b == 0)
		printf("나누는 값은 0이 될 수 없습니다.");
	else if (d == '%')
		c = _percent(a, b);
	else if (d == '/')
		c = _divide(a, b);
	else
		printf("잘못된 산술 연산자입니다.");


	printf("%d %c %d = %d", a, d, b, c);
	return c;
}
char grade()
{
	int mygrade = 0;
	char Grade;
	printf("\n점수를 입력하세요 : ");
	scanf(" %d", &mygrade);
	if (mygrade > 100 || mygrade < 0)
	{
		printf("숫자가 너무 작거나 큽니다.");
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
//1 계산기를 만들자 단 더하기 빼기 곱하기 나누기와 같은 각 계산을 다시 별도의 함수로 분리해서 계산기 함수 안에서 각 사칙연산에 해당하는 함수를 불러서 계산할 수 있도록 만들어 보자
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
	printf("\n계산할 숫자 두개와 산술연산자를 차례대로 입력하세요\n");
	scanf(" %d %d %c",&a, &b, &c);
	switch (c)
	{
	case '+':
	{
		d = _plus(a, b);
		printf("계산결과는 = %d\n", d);
	}
		break;
	case '-':
	{
		d = _minus(a, b);
		printf("계산결과는 = %d\n", d);
	}
		break;
	case '*':
	{
		d = _multi(a, b);
		printf("계산결과는 = %d\n", d);
	}
		break;
	case '/':
	{
		if (b == 0)
			printf("0으로는 나눌 수 없습니다.");
		else
		{
		d = _divide(a, b);
		printf("계산결과는 = %d\n", d);
		}
	}
		break;
	case '%':
	{
		if (b == 0)
			printf("0으로는 나눌 수 없습니다.");
		else
		{
			d = _percent(a, b);
			printf("계산결과는 = %d\n", d);
		}
	}
		break;
	default:
		printf("잘못된 연산자입니다.");
		break;
	}
}
//2 별그리기 1번 문제를 함수로 만들어보자
void _drawingStar()
{
	int a = 0;
	printf("몇줄의 별을 그릴 것인지 입력하세요");
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
//3 함수에 점수를 3개 입력해서 점수의 평균으로 학점을 출력한느 함수를 만들자
void _grade()
{
	int a = 0, b = 0, c = 0;
	printf("3개의 점수를 입력하세요\n");
	scanf(" %d %d %d", &a, &b, &c);
	if ((a > 100 || a < 0) || (b > 100 || b < 0) || (c > 100 || c < 0))
		printf("잘못된 점수입니다.\n");
	else
	{
		printf("점수의 평균은 %d 입니다.", (a + b + c) / 3);
	}
}
//섭씨온도 입력하면 화씨온도로 바꾸는 함수를 만들자
void _temp()
{
	float temp = 0;
	printf("온도를 입력하세요(C) \n");
	scanf(" %f", &temp);

	printf("화씨온도는 %.1f(F) 입니다.", temp*1.8 +32);
	
}
//원화를 입력하면 달러화로 환전해서 출력하는 함수를 만들자
void _exchange()
{
	float money=0;
	float exchange = 1 / 1151.3;
	printf("원화를 달러로 바꿔보자 가지고 있는 한국돈은? \n");
	scanf(" %f", &money);
	printf("%.0f 를 달러로 바꾸면 %.2f 달라", money, money * exchange);
}
// 함수 예제 나이 입력하면 10년 뒤의 나이출력함수, 자신의 키를 cm로 입력하면 m로 출력, 나이 입력하면 몇년 뒤에 성인(19세)	
// 반환자연습문제 정수 2개를 입력하면 두 수 의 합을 반환하는 함수를 ㅁ나들고 반한된 값을 함수를 호출한곳에서 출력해라.

//매개변수 3개를 입력받아서 세수의 곱을 반환하는 함수를 만들고 출력
//점수를 입력하면 해당점수의 학점을 반환하는 함수를 출력
//매개변수로 숫자 2개와 산술연산자 1개를 입력받아서 입력된 숫자 2개를 입력된 산술 연산자로 계산하여 그 결과를 반환하는 함수를 만들고 출력

//똑같은 코드를 중간중간에 반복작성해야하는 경우
//미리 함수를 만들어 간단히 한줄로 대체하기 위함
//반환형(자료형) 함수명(매개변수){실행코드}
//F12: 함수이름에 커서를 위치시키고 해당키를 누르면 함수가 정이된 위치로 커서가 이동한다.
//함수의 매개변수는 여러개가 될 수 있다. 
//해당 함수를 호출한 위치로 함수의 실행결과를 전달(반환) 하겟다는 의미
//전달되는 결과값을 반환자라고 한다. (c 에 한해서는 int 형에 한해서 생략가능)

//재귀함수
int factorial(int i)
{
	if (i == 1)
		return 1;
	else
	{
		return (i * factorial(i - 1));
	}
}
//함수의 선언 => 함수의 정의 => 함수의 호출