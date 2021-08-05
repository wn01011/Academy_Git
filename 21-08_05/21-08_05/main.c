#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h>//동적할당을 위해 가져와야하는 라이브러리

void dynamic_pointer();
void dynamic_ary();
int main() {
	// 구조체의 포이터를 사용할땐 .이 아니라 ->를 사용한다.

	
}

	//동적할당, 쓰는 가장 큰 이유는 배열 때문
void dynamic_pointer()
{
	int* i = malloc(4);
	int* ii = malloc(sizeof(int));
	//여태까지는 포인터를 쓰기 위해서 다른 변수가 저장된 주소값을 가져와서 써야했지만
	//동적할당을 이용하면 포인터 변수 자신만을 위한 메모리 공간을 할당 받아
	//해당 공간의 주소를 저장하여 사용할 수 있다.
	//malloc이라는 함수를 통해 비어있는 메모리를 확보할 수 있다.
	//매개 변수로는 메모리공간의 크기를 준다.
	*i = 10;
	printf("i : %d\n", i);
	printf("*i : %d\n", *i);
}
void dynamic_ary()
{
	int x = 5;
	int ary[5];
	//int ary2[x]; (X)

	int* d_ary = malloc(20);
	//5칸 짜리 배열을 만든 것과 동일하다.

	int* d_ary2 = malloc(sizeof(int) * x);
	//malloc을 이용하면 배열을 만들때 배열의 크기를 변수로 지정할 수 있다.
	//동적할당을 통해 배열을 만든 경우는 생성이malloc을 통해 만들어 지기 때문에
	//생성과 동시에 중괄호로 초기화하는 것이 불가능.
	//malloc으로 할당한 메모리공간은 따로 풀어지주 않는 이상 계속 묶여있음
	//따라서 사용해제를 시키는 함수(free)가 필요하다.
	for (int i = 0; i < 5; i++)
	{
		d_ary[i] = 10 * i;
	}
	for (int i = 0; i < x; i++)
	{
		d_ary2[i] = 100 * i;
	}
	free(d_ary);
	free(d_ary2);
}