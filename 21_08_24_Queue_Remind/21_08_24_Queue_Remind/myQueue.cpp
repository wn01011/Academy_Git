#include "myQueue.h"

void myQueue::push()
{
	if (top >= 9)
	{
		cout << "데이터가 가득 찼습니다. = \n";
		return;
	}
	top++;
	cout << "데이터를 입력하세요.\n";
	int i;
	cin >> i;
	ary[top] = i;
}

void myQueue::pop()
{
	if (top == -1)
	{
		cout << "데이터가 비었습니다.\n";
		return;
	}
	cout << "배열 0번의 데이터를 pop합니다.\n";
	for (int i = 0; i < top; i++)
		ary[i] = ary[i + 1];
	top--;
}

void myQueue::print()
{
	if (top == -1)
	{
		cout << "데이터가 비었습니다.\n";
		return;
	}
	for (int i = 0; i <= top; i++)
	{
		cout << "ary[" << i << "]:" << ary[i] << endl;
	}
}
