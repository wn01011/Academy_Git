#include "myList.h"

void myList::push()
{
	if (top >= 9) { cout << "�����Ͱ� �� á���ϴ�.\n"; return; }
	top++;
	cout << "ary[" << top << "]: ";
	cin >> ary[top];
}

void myList::pop()
{
	if (top == -1) { cout << "�����Ͱ� �� ������ϴ�.\n"; return; }
	cout << top << "��° �����͸� ���ڽ��ϴ�.\n";
	top--;
}

void myList::insert()
{
	if (top >= 9)
	{
		cout << "����Ʈ�� �� á���ϴ�.\n"; return;
	}
	int i = 0, j = 0;
	cout << "�� ��° �ڸ��� �����͸� ������ �Է����ּ��� :";
	cin >> i;
	if (i == 0) { "ù��° �����͸� �Է��մϴ�.\n"; }
	else if(i>9 || i > top+1 ||i <0)
	{
		cout << "�����Ͱ� �̾����� �ʾҽ��ϴ�.\n";
		return;
	}
	
	cout << "�Է��� ������ :";
	cin >> j;
	for (int k = top; k >= i; k--)
	{
		
		ary[k + 1] = ary[k];
	}
	ary[i] = j;
	top++;
	
}

void myList::remove()
{
	int i = 0;
	cout << "�� ��° �ڸ��� �����͸� ���� �Է����ּ��� :";
	cin >> i;
	if (top <= -1 || i > top) { cout << "���� �����Ͱ� �������� �ʽ��ϴ�.\n"; return; }
	for (int j = i; j < top; j++)
	{
		ary[j] = ary[j + 1];
	}
	ary[top] = 0;
	top--;
}

void myList::print()
{
	if (top == -1) { cout << "����� �����Ͱ� �����ϴ�.\n"; }
	for (int i = 0; i <= top; i++)
	{
		cout << "ary[" << i << "] : " << ary[i] << endl;
	}
}

void myList::Manager()
{
	enum {
		PUSH = 1,
		POP = 2,
		INSERT = 3,
		REMOVE = 4,
		PRINT = 5,
		EXIT = 6
	};
	int num;
	cout << "\nMENU\n1.PUSH\t2.POP\t3.INSERT\n4.REMOVE\t5.PRINT\t6.EXIT\n\n";
	cin >> num;
	switch (num)
	{
	case PUSH:
		push();
		break;
	case POP:
		pop();
		break;
	case INSERT:
		insert();
		break;
	case REMOVE:
		remove();
		break;
	case PRINT:
		print();
		break;
	case EXIT:
		cout << "���α׷��� �����մϴ�.\n";
		return;
	default:
		cout << "�߸��� �Է��Դϴ�." << endl;
		break;
	}
	Manager();
}
