#include <stdio.h>
#include <malloc.h>
//사용자 정의 자료형 = 기본적인 자료형들을 조합해서 새로운 자료형을 만든다.

typedef struct SCharacter
{
	//구조체 맴버 변수(Member Valuables)
	//구조체 패딩(Padding) CPU 처리 속도를 위해 일정하게 맴버변수들의 크기를 맞춰주는 것
	//char 변수 같은 경우엔 CPU가 한번에 처리할 수 있는 단위가 4byte기 때문에 두개의 char를 같이 처리 해버릴 수 있다.
	//가장 큰 맴버 변수를 기준으로 패딩단위가 결정 된다.
	int hp;
	float mp;
	char lv; 
	char skill;
} schar_t;
#define SCHAR struct SCharacter //Debug에서 추적이 잘 안됨 #define VAL 10 같은 경우도 const int val = 10; 을 좀더 권장
//typedef struct SCharacter schar_t; //Debug때 값이 나오기때문에 얘를 좀 더 권장 , 긴 걸 줄이기 위해쓴다. 구조체를 선언하며 동시에도 가능
///////////////////////////////////////////////////////////////////////////////////////////////

//공용체(Union)
//같은 메모리안에서 자료형을 바꾸면서 사용, 잘안씀
union UMem
{
	double d;
	int i;
	char c;
};

//열거체(Enum)
enum EState { IDLE, Walk = 100, kRun, LEN }; // 열거체 길이 구할때 LEN뒤에 붙이면 구하기 편하다;

int main()
{
	//구조체 (Structure)
	struct SCharacter character = { 1, 2, 3, 4 };
	//멤버 접근 연산자 .
	character.hp = 10;
	printf("hp : %d(%p)\n", character.hp, &character.hp);
	printf("mp : %f(%p)\n", character.mp, &character.mp);
	printf("lv : %d(%p)\n", character.lv, &character.lv);
	printf("skill : %d(%p)\n", character.skill, &character.skill);
	
	printf("SCharacter's Size : %d\n", sizeof(struct SCharacter));

	struct SCharacter* pChar = (schar_t*)malloc(sizeof(struct SCharacter));
	//포인터 멤버 접근 연산자
	
	pChar->hp = 100;

	if (pChar)
	{
		pChar = NULL;
		free(pChar);
	}

	//////////////////////////////////////////////////////////

	union UMem mem;
	mem.c = 'a';

	printf("UMem Size : %d byte\n", sizeof(union UMem));

	return 0;
}