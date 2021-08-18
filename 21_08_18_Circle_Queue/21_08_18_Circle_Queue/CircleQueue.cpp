#include "CircleQueue.h"

void CircleQueue::Push()
{
	/*pushnum = curNum % Length; popnum = popNum % Length;
	pushCycle = (curNum) / Length; popCycle = (popNum) / Length;
	
	if (pushCycle - 1 == popCycle && pushnum >= popnum)
	{
		cout << "해당 위치에 숫자가 이미 존재합니다!\n";
		return;
	}
	cout << curNum << "번째 배열에 Push할 숫자: ";
	cin >> ary[curNum % Length];
	++curNum;
	cout << endl;*/
	//////push///////////////////////////////////////
	if ((rear + 1)%4 == front)
	{
		cout << "큐가 꽉 찼습니다.\n";
		return;
	}

	rear = (rear + 1) % 4;
	cout << "데이터를 입력하세요.\n";
	int i;
	cin >> i;
	ary[rear] = i;
}

void CircleQueue::Pop()
{
	/*pushnum = curNum % Length; popnum = popNum % Length;
	popCycle = popNum / Length; pushCycle = curNum / Length;
	if(pushCycle == popCycle && popnum >= pushnum )
	{
		cout << "꺼낼 값이 없습니다.\n";
		return;
	}
	cout << popNum << "번째 배열요소 Pop";
	ary[popNum % Length] = NULL;
	++popNum;
	cout << endl;*/
	//////pop///////////////////////////////////////
	if (front == rear) {
		cout << "큐가 비었습니다.\n";
		return;
	}
	front = (front + 1) % 4;
	cout << front << "번의 데이터"<<ary[front]<<"를 pop합니다.\n";
}

void CircleQueue::Print()
{
	/*for(int i =pushnum+1; i< pushnum +5; ++i)
	{
		if (ary[i%4] == NULL)continue;
		else
			cout <<"배열["<<i%4<<"]번: " << ary[i % 4] << endl;
	}*/
	if (front == rear) {
		cout << "큐가 비었습니다.\n";
		return;
	}
	for (int i = (front + 1) % 4; i != (rear + 1) % 4; i= (i +1) %4)
		cout << ary[i] << endl;

}

void CircleQueue::Manager()
{
	cout << "\t   -M E N U-\n1.Push   2.Pop   3.Print   4.Exit\n";
	cout << "메뉴값 입력 :";
	int switchNum = 0;
	cin >> switchNum;
	enum {
		PUSH = 1,
		POP,
		PRINT,
		EXIT
	};
	switch (switchNum)
	{
	case PUSH:
		Push();
		break;
	case POP:
		Pop();
		break;
	case PRINT:
		Print();
		break;
	case EXIT:
		cout << "프로그램을 종료합니다.\n";
		return;
	default:
		cout << "잘못된 값을 입력하였습니다.\n";
		break;
	}
	Manager();
}
