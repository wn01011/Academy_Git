#define _CRT_SECURE_NO_WARNINGS 
//구버전에서 사용하던 명령어를 사용할 수 있도록 만들어주는 코드 #include 보다 위에 적어야 된다.
#include <stdio.h>

int Gender(char);

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

	/*int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("초깃값 a = %d, b = %d\n", a,b);
	printf("전위형 : (++a) * 3 = %d, 후위형 : ( b++) * 3 = %d\n", pre, post);

	return 0;*/

	char gender;

	scanf("%c", &gender);

	Gender(gender);
	//void는 왜 안됩니까 ?

	//연습문제 숫자하나를 입력받아서 해당숫자가 0보다 크고 100보다 작거나 같은지 그 결과값을 출력하자.
	/*int inputNum;
	scanf("%d", &inputNum);
	if ((inputNum > 0 && inputNum <= 100) == 1)
	{
		printf("inputNum이 0보다 크고 100보다 작거나 같습니다.\n");
	}
	else
	{
		printf("inputNum이 0보다 작거나 100보다 큽니다.\n");
	}
	*/
	

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
// 논리 연산자 &&, ||
Gender(char gender)
{
	if (gender != 'M' && gender != 'F')
	{
		printf("성별은 M이거나 F로 표기해야합니다.\n");
		scanf(" %c", &gender);
		Gender(gender);
	}
	else
	printf("당신의 성별은 : %c 입니다.\n", gender);
	
	return 100;
}


// 자료 형변환 printf("정수출력:%d\n", (int)3.15) => 결과값 = 3
//소괄호 안에 바꿔줄 자료형을 넣어주면 해당데이터는 일시적으로 해당 자료형으로 취급을 한다.
/*
int testi1 = 10, testi2 = 3
printf("%d / %d = %d", testi1, testi2, testi1 / testi2)  => 결과값 = 3
printf("%d / %d = %d", testi1, testi2, (float)testi1 / testi2)  => 결과값 = 3.3333

*/
//8bit = 1byte
// 1024 byte = 1kb, 1mb, 1gb, 1tb, 1pb


