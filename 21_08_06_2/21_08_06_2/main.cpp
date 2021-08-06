#include <stdio.h>
#include <limits.h>

int main()
{
	//Operator(������)
	//��Ģ���� : + - * / 
	// %(������ ������)
	//������ �켱�ӵ��� *, /�� �������� + - �� ������ü�� �ӵ��� ������.
	// *�� ��� 2*2�� ��� 2 + 2�� �ٲ㼭 �����ϱ⶧���� �ٲٴ� ������ ���� �������̴�.
	// /�����Ⱑ ���� ������. ==> 1/2�� 0.5�� ��������.
	
	printf("%d\n", (3 + 4) * 2);

	// C���� �������� ���
	//���� ������ : ++ -- 
	int i = 0;
	printf("++i : %d\n",++i); // ������ ������

	//������ ������ ������ ���꺸�� ������ ������.
	//�������� �� ���� �ڵ尡 ��� ����ǰ� �����ٷ� �Ѿ�� ���� �ٷ� �����־�� �ż�
	//�� �ڵ带 �����ϴ� ���� ���ϱ� �� ���� �ٸ����� ������ �ξ�� �ϱ� ������ ������ �ϳ� ������. 
	printf("i++ : %d\n",i++); // ������ ������
	printf("i : %d\n", i);
	--i;
	i--;
	
	//Bitwise Operator(��Ʈ������)
	//��� �����ڵ��� Bit-Operator�� ���� FASTEST
	//Left-Hand Side, Right-Hand Side (�º�, �캯)
	int lhs = 1; // 00000001
	int rhs = 3; // 00000011
	// 0 : ����(False), 1: ��(True)
	// &(AND) : �Ѵ� ���� ��쿡 ���̵ȴ�.
	printf("lhs & rhs : %d\n", lhs & rhs); //result = 1
	// |(OR) : ���߿� �ϳ��� ���̸� ��
	printf("lhs | rhs : %d\n", lhs | rhs); //res = 3
	// ^(XOR = Exclusive Or) : �ΰ��� ���� �ٸ��� ��
	printf("lhs & rhs : %d\n", lhs ^ rhs); //res = 2
	// ~(NOT) : ������ �ȴ�.
	printf("~lhs : %d\n", ~lhs + 1); //res = -lhs == ���� + 1 �� ��ȣ�� �ٲ��.

	//Example
	//Bit-Flag
	enum EQuset {Q1 = 1, Q2 = 2, Q3 = 4, Q4 = 8, Q5 = 16, Q6 = 32, Q7 = 64, Q8 = 128};//enum = literal constant

	unsigned char questClear = 0;
	questClear |= Q3;
	questClear |= Q5;
	printf("Q5 clear : %s\n", (questClear & Q5) > 0 ? "True" : "False");
	printf("Q1 clear : %s\n", (questClear & Q3) > 0 ? "True" : "False");
	questClear ^= Q5;
	printf("Q5 clear : %s\n", (questClear& Q5) > 0 ? "True" : "False");
	printf("Q3 clear : %s\n", (questClear& Q3) > 0 ? "True" : "False");
	//Q5 ����
	if ((16 & questClear) == 16)
	{
		printf("quest 5 clear!\n");
	}
	// Shitf : <<, >> : << �ѹ��Ҷ����� ���� x2 �ݴ�� >> �� 1/2
	// �Ǽ��� ���� �Ұ�
	float f = 0.0f;
	//printf("%.5f\n", f << 1);
	int x = 9;
	printf("%d\n", x>>1); // res : 4


	//��������(Logical Operator)
	//�� : ��, ����
	//0�� ����, 0�� �ƴ� ���� ��
	//&&(AND)
	//||(OR)
	// !(NOT)

	//�񱳿�����(Compare Operator)
	// A>B, A<B, >=, <=, ==, !=

	return 0;
}