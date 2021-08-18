#include "CircleQueue.h"

void CircleQueue::Push()
{
	/*pushnum = curNum % Length; popnum = popNum % Length;
	pushCycle = (curNum) / Length; popCycle = (popNum) / Length;
	
	if (pushCycle - 1 == popCycle && pushnum >= popnum)
	{
		cout << "�ش� ��ġ�� ���ڰ� �̹� �����մϴ�!\n";
		return;
	}
	cout << curNum << "��° �迭�� Push�� ����: ";
	cin >> ary[curNum % Length];
	++curNum;
	cout << endl;*/
	//////push///////////////////////////////////////
	if ((rear + 1)%4 == front)
	{
		cout << "ť�� �� á���ϴ�.\n";
		return;
	}

	rear = (rear + 1) % 4;
	cout << "�����͸� �Է��ϼ���.\n";
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
		cout << "���� ���� �����ϴ�.\n";
		return;
	}
	cout << popNum << "��° �迭��� Pop";
	ary[popNum % Length] = NULL;
	++popNum;
	cout << endl;*/
	//////pop///////////////////////////////////////
	if (front == rear) {
		cout << "ť�� ������ϴ�.\n";
		return;
	}
	front = (front + 1) % 4;
	cout << front << "���� ������"<<ary[front]<<"�� pop�մϴ�.\n";
}

void CircleQueue::Print()
{
	/*for(int i =pushnum+1; i< pushnum +5; ++i)
	{
		if (ary[i%4] == NULL)continue;
		else
			cout <<"�迭["<<i%4<<"]��: " << ary[i % 4] << endl;
	}*/
	if (front == rear) {
		cout << "ť�� ������ϴ�.\n";
		return;
	}
	for (int i = (front + 1) % 4; i != (rear + 1) % 4; i= (i +1) %4)
		cout << ary[i] << endl;

}

void CircleQueue::Manager()
{
	cout << "\t   -M E N U-\n1.Push   2.Pop   3.Print   4.Exit\n";
	cout << "�޴��� �Է� :";
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
		cout << "���α׷��� �����մϴ�.\n";
		return;
	default:
		cout << "�߸��� ���� �Է��Ͽ����ϴ�.\n";
		break;
	}
	Manager();
}
