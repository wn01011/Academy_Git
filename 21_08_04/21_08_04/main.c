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
//������ p.234
//������ ����, �ּҸ� �����ϴ� ����

void main()
{
	pointer_Study5();
}

void pointer_Study()
{
	int i = 10;

	int* p_i;
	//�Ϲ� ������ �ٸ��� ������ ������ ������ �����Ҷ� �ڷ����� ������ ���̿� ��(*)�� ���δ�.
	p_i = &i;
	//������ ������ �ּҸ� �����ϴ� �����̱⶧���� �ּҸ� ������ �� �ִ�.
	printf("i�� : %d\n",i);
	printf("p_i �� : %d\n", p_i);
	//������ ����Ǵ� �ּҰ��� ���α׷��� �����Ҷ����� �Ź� �޶����µ� 
	//�̴� ���α׷��� ����Ǵ� ��ÿ� ����ִ� ��������� ��ǻ�Ͱ� ������ ã�Ƽ� �ش���ġ�� �˾Ƽ� �����ϱ� ����
	printf("i�� �ּ� %d\n", &i);

	float f = 3.14f;
	float* p_f = &f;
	printf("f�� �� :%.1f\n", f);
	printf("p_f�� �� :%d\n", p_f);
	printf("f�� �ּ� : %d\n", &f);

	p_i = &i;
	printf("p_i(�ּ�)��ġ�� ����� �� : %d\n", *p_i);
	//���� �ڷ����� ���� �ʴ� ������ �ּҰ��� �����Ϳ� �����ϰ� �Ǹ� �ش� �ּҰ��� �����ϴ� �����͸� �����ö� �������� �ջ��� �Ͼ��.
	//������ ���鶧 ���̴� ���� �ش� ������ �ּҸ� �����ϴ� ���������� ��Ÿ���� 
	//������ ����Ҷ� ���̴� ���� �ش� �ּ���ġ�� ����� �����͸� �ǹ��ϰ� �ȴ�.
}

//��������1. int�� ������ �ϳ������ �ش� ������ �ּҸ� �����ϴ� �����͸� ����
//int�� ������ ���� ������ ������ ����, �����͸� �̿��� �ּҿ� ����� ���� ������ �̿��� �ּҰ��� ����غ���
void pointer1()	
{
	int a = 10;
	int* pa;
	pa = &a;
	printf("a = %d\npa = %d\n*pa = %d\n&a = %d\n", a, pa, *pa, &a);
}
//�����ʹ� �����Ͱ��� �����ϴ°� �ƴ϶� �����Ͱ� ����� ��ġ(�ּ�)�� �����ϴ� ���̴�.
//�ּҰ��� ������ �����ɶ� �ڵ����� �������Ƿ� ������ �� ����.
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
//int�� ���� i�� i �� �ּҸ� �����ϴ� ������ ����pi�� �����pi�� �̿��ؼ� i���� �����Ͽ�i���� ����غ���.
//float �� ����f�� f�� �ּҸ� �����ϴ� �����ͺ���pf�� ����� scanf�� �̿��Ͽ� f�� ���� �����ϰ� ����϶� �� f �� �Է¹��� ���� pf�� �̿��ؼ� f�� �����͸� �Է¹޾ƶ�.
void pointer2()
{
	int i;
	int* pi;
	pi = &i;
	*pi = 10;
	printf("i = %d\n", i);

	float f;
	float* pf = &f;
	printf("�Է¹���  *pf�� ����\n");
	scanf(" %f", &*pf);
	//scanf(" �ڷ���", �ּҰ�) -- *pf�� �̹� �ּ��̴�.
	printf("f = : %f\n", *pf);
}
//�������� ������ ������ ���� ������ �����ϴ�.
void pointer_Study3()
{
	int i = 100;
	int* pi = &i;
	int j = 200;
	int* pj = &j;
	pi = pj; // i�� ����Ű�� �����Ͱ� j�� ����Ű�� �ȴ�. ���� pi�� j�� �ּҰ� �ȴ�.
	printf("i: %d\n", i);
	printf("&i: %d\n", &i);
	printf("pi: %d\n", pi);
	printf("*pi: %d\n", *pi);

	
	printf("j: %d\n", j);
	printf("&j: %d\n", &j);
	printf("pj: %d\n", pj);
	printf("*pj: %d\n", *pj);

}
//�Լ��� �Ű������� �����͸� ����� ���
void pointer_Study4(int* i)
{
	(*i)++;
}
//�Լ��� �Ű������� �����͸� ������� �������
void pointer_Study4_1(int i)
{
	i++;
}
//�ּ�(������ ����)�� �Ű������� �Լ��� ������ ��� �Լ��ۿ����� �ٲ� �����Ͱ� �����ȴ�.
void call_pointer_Study4()
{
	int x = 50;
	printf("�Լ� ���� �� x : %d\n", x);
	pointer_Study4(&x);
	printf("�Ű������� �������� �Լ� ���� �� x : %d\n", x);
	pointer_Study4_1(x);
	printf("�Ű������� �����Ͱ� �ƴ� �Լ��� ���� �� x : %d\n", x);

}
//��������2. �Ű����� 2���� �Է¹޾Ƽ� �κ����� ���� ���� �ٲ��ִ� �Լ��� ������
//�� ����� ���� �Լ� �ۿ����� ������ ������ �Ǿ���Ѵ�.
//���⼭ pa, pb�� �ٲ��ָ� �ּҸ� ����Ű�� ������ �����ؼ� �Լ��� ������ ������ ���� �ٲٴ� ���(�Լ� �ۿ� ������ ����.)
// ������ ������ �ּҰ��̶� �� �ּҰ��� �̿��� �ּҰ� ���� ���� �����ϸ� �ٲ� �� �ִ�.
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
//�迭�� ��� �������̴�.
//sizeof(pointer) �ڷ����� ������� ũ�Ⱑ ��� ������ ���ܷ� �迭�� �ٸ���. 
//(OS�� ���� 64bit, 32bit������ �������� ũ�Ⱑ �޶��� �� �ִ�.)
void pointer_Study5()
{
	int ary[5] = { 1,2,3,4,5 };
	printf("ary : %d\n", ary);
	printf("ary[0]�� �ּ� : %d\n", &ary[0]);
	printf("ary[1]�� �ּ� : %d\n", &ary[1]);
	printf("ary[2]�� �ּ� : %d\n", &ary[2]);
	printf("ary[3]�� �ּ� : %d\n", &ary[3]);
	printf("ary[4]�� �ּ� : %d\n", &ary[4]);

	printf("(&ary[0]+4)�� �� : %d\n", (&ary[0] + 4));
	printf("*(&ary[0]+1)�� �� : %d\n", *(&ary[0] + 1));
//�����Ϳ��� ���������� �ϰ� �Ǹ� �ּҰ��� �ִ� �״���� ��ġ�� �������� �ʰ� �ش� �������� ũ�⸸ŭ �����Ѵ�.
}