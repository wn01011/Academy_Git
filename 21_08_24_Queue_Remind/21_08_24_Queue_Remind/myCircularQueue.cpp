#include "myCircularQueue.h"

void myCircularQueue::push()
{
	if ((rear + 1) % 10 == front)
	{
		cout << "�����Ͱ� �� á���ϴ�.\n";
		return;
	}
	rear++;
	rear %= 10; // if(rear =10) rear =0;
	cout << "�����͸� �Է��ϼ���\n";
	int i;
	cin >> i;
	ary[rear] = i;
}

void myCircularQueue::pop()
{
	if (rear == front) {
		cout << "���� �����Ͱ� �������� �ʽ��ϴ�.\n";
		return;
	}
	front++;
	front %= 10;
	cout <<front <<"�� �����͸� ���½��ϴ�.\n";

}

void myCircularQueue::print()
{
	if (front == rear) { cout << "�����Ͱ� �����ϴ�.\n"; return; }
	for (int i = (front + 1) % 10; i <= rear; (i++)%10)// i != (rear+1)%10;
	{
		cout << "�迭[" << i << "]:" << ary[i] << endl;
	}
}
