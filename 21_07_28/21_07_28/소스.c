#define _CRT_SECURE_NO_WARNINGS 
//구버전에서 사용하던 명령어를 사용할 수 있도록 만들어주는 코드 #include 보다 위에 적어야 된다.
#include <stdio.h>



int main()
{
		
	//숫자 한개를 입력받아서 해당 숫자의 구구단을 출력해보자

	/*int j;
	printf("구구단은 몇단 ?\n");
	scanf(" %d", &j);
	j = gugudan(j);
	for (int i = 1; i < 10; i++)
	{
		printf("구구단을 외자 구구단을 외자 %d x %d = %d\n", j, i, i * j);
	}*/

	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("초깃값 a = %d, b = %d\n", a,b);
	printf("전위형 : (++a) * 3 = %d, 후위형 : ( b++) * 3 = %d\n", pre, post);

	return 0;
}


//int gugudan(int j)
//{
//	
//	if (j > 9)
//	{
//		printf("구구단은 9단까지밖에 없다9?\n");
//		scanf(" %d", &j);
//		gugudan(j);
//	}
//	return j;
//}

// /몫을 구하는 연산자(자료형 주의), %나머지 연산자 몫을 제외한 나머지만 구하는 연산자
// 관계 연산자 >, <, >=, <=, ==, != 계산의 관계는 참과 거짓으로만 판별된다. 참은 1 거짓은 0으로 표기한다. 
// 논리 연산자 &&, ||ㅊ


