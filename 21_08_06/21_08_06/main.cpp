#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

//RAM = Random Access Memory(�ֹ߼�)
//ROM = Read-Only Memory(���� ��� ��ġ)

//�ڷ���
int main()
{
	//int : integer, ����;
	// ���� (Variables)
	int i = 0;
	//������ ���ÿ� �ʱ�ȭ �ؾ��ϴ� EU : CPU�� �ι� ���°� �����Ѵ�.(�����Ⱚ�� �ְ� ���� �ð��� ����)
	// %i
	// 4Byte, 1Byte = 8Bit;
	//CPU�� ���� ������ ó���ϴ� �ڷ����� int 
	printf("int Size: %d Byte\n", sizeof(int));


	short int s = 0;
	printf("short Size : %d Byte\n", sizeof(short));
	//���� int�� 4byte�� �ƴϾ���. long�� �� ����
	long int l = 0L;
	printf("long Size : %d Byte\n", sizeof(long));
	long long int ll = 0LL;
	printf("longlong Size : %d Byte\n", sizeof(long long));

	
	//float : Single-Precision Floating _Point, �ε��Ҽ���, �Ǽ�
	float f = 0.0f;
	printf("float Size: %d Byte\n", sizeof(float));
	//Double-Precision Float-Point 
	//�� �� ���е� �ε��Ҽ���
	double d = 0.0;
	printf("double Size: %d Byte\n", sizeof(double));

	//���(Constant) 
	//���ͷ� ���(Literal Constant)

	//char : Character, ����
	//1Byte 256���� ĳ���� == ASCII Code, ASCII Table;
	//(unsigned) ���� ���� �ִ� �ڷ����� Ǯ������ signed intó�� ��ȣ�� �ִ� ���̴�.
	//float �� double�� unsigned�� �Ұ����ϴ�. 
	//������ �Ǽ��� ������ ���ؿ� ��ȣ�� ���� ���̱� ����
	//��ȣ��Ʈ�� ���� ���ڸ�
	//*��ȣ�� ���� ���� unsigned�� �� CPU ������ ������(��ȣ��Ʈ�� �˻��� �ʿ䰡 ���� ����)

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

	//��ǻ�Ͱ� ������ �����ϴ� ��� == ������ ���� +1;
	//���� 1byte �� ��� 0(��ȣ��Ʈ) 1 1 1 1 1 1 1���� 1�� ���ϰ� �Ǹ� 1/ 0 0 0 0 0 0 0�̵ȴ�.
	//���� 2������ 127�̴�.���⼭ 1�� ���ϰ� �Ǹ� ��ȣ��Ʈ�� 1�̵ǰ� �������� 0�̵ȴ�. ����
	//+���� -�� �ٲ�� ù��° ������ 1�̺ٴ´�. ���� c = 128�϶��� ����� -128�� �Ǵ� ���̴�.
	//129�� -127�̵ǰ� ...�� ���� 255 �� -1�� �Ǵ� ���̴�.
	// 2�� ������
	//	 00000101	5
	//	(11111010	5�� ����)
	//	+11111011	5�� ���� + 1
	// ==============================
	//	 00000000	(5 + (5�� ����+1)) = 0
 	return 0;

	//Memory Overflow
	//#include <limits.h>
	printf("int Min : %d\n", INT_MIN);
	printf("int Max : %d\n", INT_MAX);
}