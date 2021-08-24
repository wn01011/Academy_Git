#include "myQueue.h"

void myQueue::push()
{
	if (top >= 9)
	{
		cout << "�����Ͱ� ���� á���ϴ�. = \n";
		return;
	}
	top++;
	cout << "�����͸� �Է��ϼ���.\n";
	int i;
	cin >> i;
	ary[top] = i;
}

void myQueue::pop()
{
	if (top == -1)
	{
		cout << "�����Ͱ� ������ϴ�.\n";
		return;
	}
	cout << "�迭 0���� �����͸� pop�մϴ�.\n";
	for (int i = 0; i < top; i++)
		ary[i] = ary[i + 1];
	top--;
}

void myQueue::print()
{
	if (top == -1)
	{
		cout << "�����Ͱ� ������ϴ�.\n";
		return;
	}
	for (int i = 0; i <= top; i++)
	{
		cout << "ary[" << i << "]:" << ary[i] << endl;
	}
}
