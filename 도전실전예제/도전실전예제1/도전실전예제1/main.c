#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int weight;
	float height;
	
	printf("ü��(kg)�� Ű(m)�� ������� �Է��ϼ��� \n");
	
	scanf(" %d %f", &weight, &height);

	float BMI = weight / (height * height);
	printf("BMI ��ġ�� = %f\n", BMI);

	BMI = (BMI < 25 && BMI>20) ? printf("ǥ���Դϴ�.") : printf("ü�߰����� �ʿ��մϴ�.");
}