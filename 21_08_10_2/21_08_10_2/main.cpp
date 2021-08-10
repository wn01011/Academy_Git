#include <stdio.h>
#include <malloc.h>
//����� ���� �ڷ��� = �⺻���� �ڷ������� �����ؼ� ���ο� �ڷ����� �����.

typedef struct SCharacter
{
	//����ü �ɹ� ����(Member Valuables)
	//����ü �е�(Padding) CPU ó�� �ӵ��� ���� �����ϰ� �ɹ��������� ũ�⸦ �����ִ� ��
	//char ���� ���� ��쿣 CPU�� �ѹ��� ó���� �� �ִ� ������ 4byte�� ������ �ΰ��� char�� ���� ó�� �ع��� �� �ִ�.
	//���� ū �ɹ� ������ �������� �е������� ���� �ȴ�.
	int hp;
	float mp;
	char lv; 
	char skill;
} schar_t;
#define SCHAR struct SCharacter //Debug���� ������ �� �ȵ� #define VAL 10 ���� ��쵵 const int val = 10; �� ���� ����
//typedef struct SCharacter schar_t; //Debug�� ���� �����⶧���� �긦 �� �� ���� , �� �� ���̱� ���ؾ���. ����ü�� �����ϸ� ���ÿ��� ����
///////////////////////////////////////////////////////////////////////////////////////////////

//����ü(Union)
//���� �޸𸮾ȿ��� �ڷ����� �ٲٸ鼭 ���, �߾Ⱦ�
union UMem
{
	double d;
	int i;
	char c;
};

//����ü(Enum)
enum EState { IDLE, Walk = 100, kRun, LEN }; // ����ü ���� ���Ҷ� LEN�ڿ� ���̸� ���ϱ� ���ϴ�;

int main()
{
	//����ü (Structure)
	struct SCharacter character = { 1, 2, 3, 4 };
	//��� ���� ������ .
	character.hp = 10;
	printf("hp : %d(%p)\n", character.hp, &character.hp);
	printf("mp : %f(%p)\n", character.mp, &character.mp);
	printf("lv : %d(%p)\n", character.lv, &character.lv);
	printf("skill : %d(%p)\n", character.skill, &character.skill);
	
	printf("SCharacter's Size : %d\n", sizeof(struct SCharacter));

	struct SCharacter* pChar = (schar_t*)malloc(sizeof(struct SCharacter));
	//������ ��� ���� ������
	
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