#include "myList.h"

void myList::push()
{
	if (top >= 9) { cout << "데이터가 꽉 찼습니다.\n"; return; }
	top++;
	cout << "ary[" << top << "]: ";
	cin >> ary[top];
}

void myList::pop()
{
	if (top == -1) { cout << "데이터가 텅 비었습니다.\n"; return; }
	cout << top << "번째 데이터를 비우겠습니다.\n";
	top--;
}

void myList::insert()
{
	if (top >= 9)
	{
		cout << "리스트가 꽉 찼습니다.\n"; return;
	}
	int i = 0, j = 0;
	cout << "몇 번째 자리에 데이터를 넣을지 입력해주세요 :";
	cin >> i;
	if (i == 0) { "첫번째 데이터를 입력합니다.\n"; }
	else if(i>9 || i > top+1 ||i <0)
	{
		cout << "데이터가 이어지지 않았습니다.\n";
		return;
	}
	
	cout << "입력할 데이터 :";
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
	cout << "몇 번째 자리에 데이터를 뺄지 입력해주세요 :";
	cin >> i;
	if (top <= -1 || i > top) { cout << "빼낼 데이터가 존재하지 않습니다.\n"; return; }
	for (int j = i; j < top; j++)
	{
		ary[j] = ary[j + 1];
	}
	ary[top] = 0;
	top--;
}

void myList::print()
{
	if (top == -1) { cout << "출력할 데이터가 없습니다.\n"; }
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
		cout << "프로그램을 종료합니다.\n";
		return;
	default:
		cout << "잘못된 입력입니다." << endl;
		break;
	}
	Manager();
}
