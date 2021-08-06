#include <stdio.h>

int main()
{
	//분기문(Branch), 조건문(Condition)
	//if(조건)
	//조건이 여러개가 있다고 하면 더 많이 걸러질 것 같은 것을 위로 올리면 퍼포먼스가 좋다.
	//연산을 덜 할 수도 있기 때문이다.
	int lhs = 2;
	int rhs = 5;
	if ((lhs < rhs) && (lhs < 3)) lhs = 10;
	else lhs = 0;
	//================================================================================
	//switch(값)
	int hp = 10;
	const int const_i = 10;
	//const_i = 100;
	//literal constant만 case에 들어간다
	//enum은 literal, #define HP_FULL 10 하면 이것도 가능
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