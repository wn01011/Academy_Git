#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void height();
void age();
void adultAge();
void myProfile();

void main() // 함수 
{ // 함수 예제 나이 입력하면 10년 뒤의 나이출력함수, 자신의 키를 cm로 입력하면 m로 출력, 나이 입력하면 몇년 뒤에 성인(19세)	
	age();
	height();
	adultAge();
	myProfile();
}

void age()
{
	int age;
	printf("\nmy age : ");
	scanf(" %d", &age);
	printf("\nmy 10 years future age : %d", age + 10);
}

void height()
{
	float height;
	printf("\nmy height(cm) : ");
	scanf(" %f", &height);
	printf("\n%.3f(m)", height/100.0);
}

void adultAge()
{
	int adultAge;
	printf("\nmy age : ");
	scanf(" %d", &adultAge);
	if (adultAge <= 19)
		printf("you maybe an adult in %d years", 19 - adultAge);
	else
		printf("you are already an adult");
}

void myProfile()
{
	int age;
	float weight;
	float hegiht;
	printf("\n나이와 키 몸무게 순으로 입력해주세요 : ");
	scanf(" %d %f %f", &age, &hegiht, &weight);
	printf("\n몸무게(kg) : %.1f 키(cm) : %.1f 나이 : %d", weight, hegiht, age);
}




	//똑같은 코드를 중간중간에 반복작성해야하는 경우
	//미리 함수를 만들어 간단히 한줄로 대체하기 위함
	//반환형(자료형) 함수명(매개변수){실행코드}
	//F12: 함수이름에 커서를 위치시키고 해당키를 누르면 함수가 정이된 위치로 커서가 이동한다.
	//함수의 매개변수는 여러개가 될 수 있다. 
	//해당 함수를 호출한 위치로 함수의 실행결과를 전달(반환) 하겟다는 의미
	//전달되는 결과값을 반환자라고 한다. (c 에 한해서는 int 형에 한해서 생략가능 반환값은0으로 생각한다.)