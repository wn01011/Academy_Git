#include "myQueue.h"

void myQueue::Push()
{
	++top;
	cout << top << "��° �迭��Ҹ� �Է��ϼ��� :";
	cin >> ary[top];
	cout << endl;
}

void myQueue::Pop()
{
	if (top <= -1)
	{
		cout << "���� �� �ִ� �迭��Ұ� �����ϴ�!\n";
		return;
	}
	cout << "ù��° �迭��Ҹ� Pop�մϴ�.\n";
	for (int i = 0; i < top; ++i)
	{
		ary[i] = ary[i + 1];
	}
	--top;
}

void myQueue::Print()
{
	if (top <= -1)
	{
		cout << "����� �� �ִ� �迭��Ұ� �����ϴ�!\n";
		return;
	}
	for (int i = 0; i <= top; ++i)
		cout << i << "��° �迭��Ҵ� :" << ary[i] << " �Դϴ�.\n";
}

void myQueue::Manager()
{
	int switchNum;
	enum {
		PUSH = 1,
		POP,
		PRINT,
		EXIT
	};
	cout << "\t   -M E N U-\n1.PUSH  2.POP  3.PRINT  4.EXIT\n�޴��Է� :";
	cin >> switchNum;
	switch (switchNum)
	{
	case PUSH:
		if (top + 1 >= aryLength)
		{
			cout << "queue is full!\t I'll expand it, try again\n";
			ExpandAry();
		}
		Push();
		break;
	case POP:
		Pop();
		break;
	case PRINT:
		Print();
		break;
	case EXIT:
		return;
	default:
		cout << "�߸��� �Է��Դϴ�.\n";
		Manager();
	}
	Manager();
}

void myQueue::ExpandAry()
{
	++queOverflow;
	aryLength = aryStep * queOverflow;
	ary2 = new int[aryLength] {0};
	for (int i = 0; i < top; ++i)
		ary2[i] = ary[i];
	SAFE_DELETE(ary);
	ary = new int[aryLength] {0};
	for (int i = 0; i < top; ++i)
		ary[i] = ary2[i];
	SAFE_DELETE(ary2);
}


