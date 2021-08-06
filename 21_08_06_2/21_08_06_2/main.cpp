#include <stdio.h>
#include <limits.h>

int main()
{
	//Operator(연산자)
	//사칙연산 : + - * / 
	// %(나머지 연산자)
	//연산의 우선속도는 *, /가 빠르지만 + - 가 연산자체의 속도가 빠르다.
	// *의 경우 2*2의 경우 2 + 2로 바꿔서 연산하기때문에 바꾸는 과정이 들어가서 느린것이다.
	// /나누기가 가장 느리다. ==> 1/2는 0.5를 곱해주자.
	
	printf("%d\n", (3 + 4) * 2);

	// C언어는 절차지향 언어
	//단항 연산자 : ++ -- 
	int i = 0;
	printf("++i : %d\n",++i); // 선증가 연산자

	//선증가 연산이 후증가 연산보다 무조건 빠르다.
	//후증가는 그 줄의 코드가 모두 실행되고 다음줄로 넘어가기 직전 바로 더해주어야 돼서
	//그 코드를 실행하는 동안 더하기 전 값을 다른곳에 저장해 두어야 하기 때문에 연산이 하나 더들어간다. 
	printf("i++ : %d\n",i++); // 후증가 연산자
	printf("i : %d\n", i);
	--i;
	i--;
	
	//Bitwise Operator(비트연산자)
	//모든 연산자들중 Bit-Operator가 가장 FASTEST
	//Left-Hand Side, Right-Hand Side (좌변, 우변)
	int lhs = 1; // 00000001
	int rhs = 3; // 00000011
	// 0 : 거짓(False), 1: 참(True)
	// &(AND) : 둘다 참인 경우에 참이된다.
	printf("lhs & rhs : %d\n", lhs & rhs); //result = 1
	// |(OR) : 둘중에 하나라도 참이면 참
	printf("lhs | rhs : %d\n", lhs | rhs); //res = 3
	// ^(XOR = Exclusive Or) : 두값이 서로 다르면 참
	printf("lhs & rhs : %d\n", lhs ^ rhs); //res = 2
	// ~(NOT) : 보수가 된다.
	printf("~lhs : %d\n", ~lhs + 1); //res = -lhs == 보수 + 1 은 부호가 바뀐다.

	//Example
	//Bit-Flag
	enum EQuset {Q1 = 1, Q2 = 2, Q3 = 4, Q4 = 8, Q5 = 16, Q6 = 32, Q7 = 64, Q8 = 128};//enum = literal constant

	unsigned char questClear = 0;
	questClear |= Q3;
	questClear |= Q5;
	printf("Q5 clear : %s\n", (questClear & Q5) > 0 ? "True" : "False");
	printf("Q1 clear : %s\n", (questClear & Q3) > 0 ? "True" : "False");
	questClear ^= Q5;
	printf("Q5 clear : %s\n", (questClear& Q5) > 0 ? "True" : "False");
	printf("Q3 clear : %s\n", (questClear& Q3) > 0 ? "True" : "False");
	//Q5 빼기
	if ((16 & questClear) == 16)
	{
		printf("quest 5 clear!\n");
	}
	// Shitf : <<, >> : << 한번할때마다 값은 x2 반대로 >> 은 1/2
	// 실수는 연산 불가
	float f = 0.0f;
	//printf("%.5f\n", f << 1);
	int x = 9;
	printf("%d\n", x>>1); // res : 4


	//논리연산자(Logical Operator)
	//논리 : 참, 거짓
	//0은 거짓, 0이 아닌 값은 참
	//&&(AND)
	//||(OR)
	// !(NOT)

	//비교연산자(Compare Operator)
	// A>B, A<B, >=, <=, ==, !=

	return 0;
}