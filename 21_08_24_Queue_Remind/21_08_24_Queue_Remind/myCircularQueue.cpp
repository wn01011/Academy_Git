#include "myCircularQueue.h"

void myCircularQueue::push()
{
	if ((rear + 1) % 10 == front)
	{
		cout << "데이터가 꽉 찼습니다.\n";
		return;
	}
	rear++;
	rear %= 10; // if(rear =10) rear =0;
	cout << "데이터를 입력하세요\n";
	int i;
	cin >> i;
	ary[rear] = i;
}

void myCircularQueue::pop()
{
	if (rear == front) {
		cout << "빼낼 데이터가 존재하지 않습니다.\n";
		return;
	}
	front++;
	front %= 10;
	cout <<front <<"의 데이터를 빼냈습니다.\n";

}

void myCircularQueue::print()
{
	if (front == rear) { cout << "데이터가 없습니다.\n"; return; }
	for (int i = (front + 1) % 10; i <= rear; (i++)%10)// i != (rear+1)%10;
	{
		cout << "배열[" << i << "]:" << ary[i] << endl;
	}
}
