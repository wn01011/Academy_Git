#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int weight;
	float height;
	
	printf("체중(kg)과 키(m)를 순서대로 입력하세요 \n");
	
	scanf(" %d %f", &weight, &height);

	float BMI = weight / (height * height);
	printf("BMI 수치는 = %f\n", BMI);

	BMI = (BMI < 25 && BMI>20) ? printf("표준입니다.") : printf("체중관리가 필요합니다.");
}