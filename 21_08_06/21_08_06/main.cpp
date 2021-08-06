#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

//RAM = Random Access Memory(휘발성)
//ROM = Read-Only Memory(고정 기억 장치)

//자료형
int main()
{
	//int : integer, 정수;
	// 변수 (Variables)
	int i = 0;
	//생성과 동시에 초기화 해야하는 EU : CPU가 두번 도는걸 방지한다.(쓰레기값을 넣고 빼는 시간을 줄임)
	// %i
	// 4Byte, 1Byte = 8Bit;
	//CPU가 가장 빠르게 처리하는 자료형이 int 
	printf("int Size: %d Byte\n", sizeof(int));


	short int s = 0;
	printf("short Size : %d Byte\n", sizeof(short));
	//옛날 int는 4byte가 아니었다. long은 옛 잔재
	long int l = 0L;
	printf("long Size : %d Byte\n", sizeof(long));
	long long int ll = 0LL;
	printf("longlong Size : %d Byte\n", sizeof(long long));

	
	//float : Single-Precision Floating _Point, 부동소수점, 실수
	float f = 0.0f;
	printf("float Size: %d Byte\n", sizeof(float));
	//Double-Precision Float-Point 
	//두 배 정밀도 부동소수점
	double d = 0.0;
	printf("double Size: %d Byte\n", sizeof(double));

	//상수(Constant) 
	//리터럴 상수(Literal Constant)

	//char : Character, 문자
	//1Byte 256개의 캐릭터 == ASCII Code, ASCII Table;
	//(unsigned) 원래 쓰고 있던 자료형의 풀네임은 signed int처럼 부호가 있단 뜻이다.
	//float 와 double은 unsigned가 불가능하다. 
	//정수부 실수부 나누는 기준에 부호도 같이 묶이기 때문
	//부호비트는 가장 앞자리
	//*부호를 없이 쓰는 unsigned가 더 CPU 연산이 빠르다(부호비트를 검사할 필요가 없기 때문)

	signed char c = 'a';

	printf("char Size : %d Byte\n", sizeof(c));
	printf("%c\n", c);
	printf("%d\n", c);

	c = 127;
	printf("c 127 : %d\n", c);
	c = 128;
	printf("c 128 : %d\n", c);
	c = 255;
	printf("c 255 : %d\n", c);
	c = -10;
	printf("c -10 : %d\n", c);
	printf("c -10 : %c\n", c);

	//컴퓨터가 음수를 저장하는 방식 == 숫자의 보수 +1;
	//따라서 1byte 의 경우 0(부호비트) 1 1 1 1 1 1 1에서 1을 더하게 되면 1/ 0 0 0 0 0 0 0이된다.
	//앞의 2진수는 127이다.여기서 1을 더하게 되면 부호비트가 1이되고 나머지가 0이된다. 따라서
	//+에서 -로 바뀌고 첫번째 음수인 1이붙는다. 따라서 c = 128일때의 결과가 -128이 되는 것이다.
	//129는 -127이되고 ...쭉 가면 255 는 -1이 되는 것이다.
	// 2의 보수법
	//	 00000101	5
	//	(11111010	5의 보수)
	//	+11111011	5의 보수 + 1
	// ==============================
	//	 00000000	(5 + (5의 보수+1)) = 0
 	return 0;

	//Memory Overflow
	//#include <limits.h>
	printf("int Min : %d\n", INT_MIN);
	printf("int Max : %d\n", INT_MAX);
}