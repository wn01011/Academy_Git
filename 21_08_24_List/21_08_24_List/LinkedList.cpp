#include "LinkedList.h"

void LinkedList::push()
{
	Node* pTail = new Node;
	if (pHead == nullptr)
	{
		cout << "Head에 데이터를 입력하세요: ";
		cin >> pTail->data;
		pTail->pNext = nullptr;
		pHead = pTail;
	}
	else
	{
		Node* tmp = pHead;
		for (int i = 0; ; i++)
		{
			if (tmp->pNext != nullptr)
			{
				tmp = tmp->pNext;
			}
			else if (tmp->pNext == nullptr)
			{
				cout << top << "번째 데이터를 입력하세요 : ";
				cin >> pTail->data;
				pTail->pNext = nullptr;
				tmp->pNext = pTail;
				break;
			}
		}
	}
	top++;
}
void LinkedList::pop() //링크드리스트의 데이터 삭제는 단순히 해당 데이터를 삭제하고 끝이 아니라  삭제하려는 데이터와 관련된 모든 정보를 정리해주어야한다.
{
	if (pHead == nullptr)
	{
		cout << "삭제할 데이터가 없습니다\n";
		return;
	}
	Node* pTmp = pHead;
	Node* pFront = pHead;
	int num = 0;
	while (pTmp->pNext != nullptr)
	{
		pTmp = pTmp->pNext;
		num++;
	}
	for (int i = 0; i < num-1; i++)
	{
		pFront = pFront->pNext;
	}
	if (pTmp == pHead)
	{
		SAFE_DELETE(pHead);
	}
	else
	{
		pFront->pNext = nullptr;
		SAFE_DELETE(pTmp);
	}
	top--;
}

void LinkedList::print()
{
	Node* pTmp = pHead;
	//링크드리스트는 무조건 헤드에서부터 시작한다.
	while (pTmp != nullptr)
	{
		cout << pTmp->data << "->";
		pTmp = pTmp->pNext;
	}
	cout << "\n";
}

void LinkedList::manager()
{
	int num;
	cout << "MENU\n1.PUSH\t2.POP\t3.PRINT\t4.EXIT\n";
	cin >> num;
	enum {
		PUSH = 1,
		POP,
		PRINT,
		EXIT
	};
	switch (num)
	{
	case PUSH:
		push();
		break;
	case POP:
		pop();
		break;
	case PRINT:
		print();
		break;
	case EXIT:
		cout << "프로그램을 종료합니다.\n";
		return;
	default:
		cout << "잘못된 입력입니다.\n";
		break;
	}
	manager();
}


