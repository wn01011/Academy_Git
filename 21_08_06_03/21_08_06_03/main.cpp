#include <stdio.h>

int main()
{
	//�б⹮(Branch), ���ǹ�(Condition)
	//if(����)
	//������ �������� �ִٰ� �ϸ� �� ���� �ɷ��� �� ���� ���� ���� �ø��� �����ս��� ����.
	//������ �� �� ���� �ֱ� �����̴�.
	int lhs = 2;
	int rhs = 5;
	if ((lhs < rhs) && (lhs < 3)) lhs = 10;
	else lhs = 0;
	//================================================================================
	//switch(��)
	int hp = 10;
	const int const_i = 10;
	//const_i = 100;
	//literal constant�� case�� ����
	//enum�� literal, #define HP_FULL 10 �ϸ� �̰͵� ����
#define HP_0 0
	enum EHpState {
		Full = 10, Warning = 5, Dead = 0
	};
	switch (hp)
	{
	case const_i:
		printf("Hp Full\n");
		break;
	case Warning:
		printf("Hp Warning\n");
		break;
	case HP_0:
		printf("Dead\n");
		break;
	}
	printf("%d + %d = %d", 5, -5, 5 + (~(5) +1));

	return 0;
	}