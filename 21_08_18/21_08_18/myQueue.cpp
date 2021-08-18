#include "myQueue.h"

void myQueue::Push()
{
	++top;
	cout << top << "번째 배열요소를 입력하세요 :";
	cin >> ary[top];
	cout << endl;
}

void myQueue::Pop()
{
	if (top <= -1)
	{
		cout << "꺼낼 수 있는 배열요소가 없습니다!\n";
		return;
	}
	cout << "첫번째 배열요소를 Pop합니다.\n";
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
		cout << "출력할 수 있는 배열요소가 없습니다!\n";
		return;
	}
	for (int i = 0; i <= top; ++i)
		cout << i << "번째 배열요소는 :" << ary[i] << " 입니다.\n";
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
	cout << "\t   -M E N U-\n1.PUSH  2.POP  3.PRINT  4.EXIT\n메뉴입력 :";
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
		cout << "잘못된 입력입니다.\n";
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


