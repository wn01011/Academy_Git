#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void pointer_Study();
void pointer_Study2();
void pointer_Study3();
void pointer_Study4();
void pointer_Study4_1();
void pointer_Study5();
void call_pointer_Study4();
void pointer1();
void pointer2();
void pointer4();
void pointer4_func();
//포인터 p.234
//변수의 일종, 주소를 저장하는 변수

void main()
{
	pointer_Study5();
}

void pointer_Study()
{
	int i = 10;

	int* p_i;
	//일반 변수와 다르게 포인터 변수는 변수를 생성할때 자료형과 변수명 사이에 별(*)을 붙인다.
	p_i = &i;
	//포인터 변수는 주소를 저장하는 변수이기때문에 주소만 저장할 수 있다.
	printf("i값 : %d\n",i);
	printf("p_i 값 : %d\n", p_i);
	//변수가 저장되는 주소값은 프로그램을 실행할때마다 매번 달라지는데 
	//이는 프로그램이 실행되는 당시에 비어있는 저장공간을 컴퓨터가 스스로 찾아서 해당위치에 알아서 저장하기 때문
	printf("i의 주소 %d\n", &i);

	float f = 3.14f;
	float* p_f = &f;
	printf("f의 값 :%.1f\n", f);
	printf("p_f의 값 :%d\n", p_f);
	printf("f의 주소 : %d\n", &f);

	p_i = &i;
	printf("p_i(주소)위치에 저장된 값 : %d\n", *p_i);
	//만약 자료형이 맞지 않는 변수의 주소값을 포인터에 저장하게 되면 해당 주소값에 존재하는 데이터를 가져올때 데이터의 손상이 일어난다.
	//변수를 만들때 붙이는 별은 해당 변수가 주소를 저장하는 포인터임을 나타내고 
	//변수를 사용할때 붙이는 별은 해당 주소위치에 저장된 데이터를 의미하게 된다.
}

//연습문제1. int형 변수를 하나만들고 해당 변수의 주소를 저장하는 포인터를 만들어서
//int형 변수의 값과 포인터 변수의 값과, 포인터를 이용한 주소에 저장된 값과 변수를 이용한 주소값을 출력해보자
void pointer1()	
{
	int a = 10;
	int* pa;
	pa = &a;
	printf("a = %d\npa = %d\n*pa = %d\n&a = %d\n", a, pa, *pa, &a);
}
//포인터는 데이터값을 저장하는게 아니라 데이터가 저장된 위치(주소)를 저장하는 것이다.
//주소값은 변수가 생성될때 자동으로 정해지므로 변경할 수 없다.
void pointer_Study2()
{
	int i = 600;
	int* pi = &i;
	printf("i : %d\n", i);
	printf("pi : %d\n", pi);
	printf("&i %d\n", &i);
	printf("*pa : %d\n", *pi);
	printf("\n\n");

	i = 100;
	printf("i : %d\n", i);
	printf("pi : %d\n", pi);
	printf("&i %d\n", &i);
	printf("*pa : %d\n", *pi);
}
//int형 변수 i와 i 의 주소를 저장하는 포인터 변수pi를 만들고pi를 이용해서 i값을 변경하여i값을 출려해보자.
//float 형 변수f와 f의 주소를 저장하는 포인터변수pf를 만들고 scanf를 이용하여 f의 값을 변경하고 출력하라 단 f 에 입력받지 말고 pf를 이용해서 f의 데이터를 입력받아라.
void pointer2()
{
	int i;
	int* pi;
	pi = &i;
	*pi = 10;
	printf("i = %d\n", i);

	float f;
	float* pf = &f;
	printf("입력받을  *pf의 값은\n");
	scanf(" %f", &*pf);
	//scanf(" 자료형", 주소값) -- *pf는 이미 주소이다.
	printf("f = : %f\n", *pf);
}
//정상적인 포인터 변수들 끼리 대입이 가능하다.
void pointer_Study3()
{
	int i = 100;
	int* pi = &i;
	int j = 200;
	int* pj = &j;
	pi = pj; // i를 가르키던 포이터가 j를 가르키게 된다. 따라서 pi는 j의 주소가 된다.
	printf("i: %d\n", i);
	printf("&i: %d\n", &i);
	printf("pi: %d\n", pi);
	printf("*pi: %d\n", *pi);

	
	printf("j: %d\n", j);
	printf("&j: %d\n", &j);
	printf("pj: %d\n", pj);
	printf("*pj: %d\n", *pj);

}
//함수의 매개변수로 포이터를 사용한 경우
void pointer_Study4(int* i)
{
	(*i)++;
}
//함수의 매개변수로 포인터를 사용하지 않은경우
void pointer_Study4_1(int i)
{
	i++;
}
//주소(포인터 변수)를 매개변수로 함수를 실행할 경우 함수밖에서도 바뀐 데이터가 유지된다.
void call_pointer_Study4()
{
	int x = 50;
	printf("함수 실행 전 x : %d\n", x);
	pointer_Study4(&x);
	printf("매개변수가 포인터인 함수 실행 후 x : %d\n", x);
	pointer_Study4_1(x);
	printf("매개변수가 포인터가 아닌 함수의 실행 후 x : %d\n", x);

}
//연습문제2. 매개변수 2개를 입력받아서 두변수의 값을 서로 바꿔주는 함수를 만들어보자
//단 변경된 값은 함수 밖에서도 실제로 적용이 되어야한다.
//여기서 pa, pb를 바꿔주면 주소를 가리키는 변수를 복사해서 함수로 가져온 변수를 서로 바꾸는 결과(함수 밖에 영향이 없다.)
// 하지만 복사한 주소값이라도 그 주소값을 이용해 주소값 안의 값에 접근하면 바꿀 수 있다.
void pointer4(int* pa,int*pb)
{
	int temp;
	scanf(" %d %d", pa, pb);
	printf("pi = %d\n", pa);
	printf("pj = %d\n", pb);
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	printf("pi = %d\n", pa);
	printf("pj = %d\n", pb);
}
void pointer4_func()
{
	int i = 10, j = 20;
	int* pi = &i;
	int* pj = &j;

	pointer4(&i, &j);

	printf("i = %d\nj = %d", i, j);
}
//배열은 사실 포인터이다.
//sizeof(pointer) 자료형에 상관없이 크기가 모두 같지만 예외로 배열은 다르다. 
//(OS의 종류 64bit, 32bit에따라 포인터의 크기가 달라질 순 있다.)
void pointer_Study5()
{
	int ary[5] = { 1,2,3,4,5 };
	printf("ary : %d\n", ary);
	printf("ary[0]의 주소 : %d\n", &ary[0]);
	printf("ary[1]의 주소 : %d\n", &ary[1]);
	printf("ary[2]의 주소 : %d\n", &ary[2]);
	printf("ary[3]의 주소 : %d\n", &ary[3]);
	printf("ary[4]의 주소 : %d\n", &ary[4]);

	printf("(&ary[0]+4)의 값 : %d\n", (&ary[0] + 4));
	printf("*(&ary[0]+1)의 값 : %d\n", *(&ary[0] + 1));
//포인터에게 증감연산을 하게 되면 주소값이 있는 그대로의 수치가 증가하지 않고 해당 포인터의 크기만큼 증가한다.
}