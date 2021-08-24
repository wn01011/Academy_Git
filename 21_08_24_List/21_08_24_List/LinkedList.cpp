#include "LinkedList.h"

void LinkedList::push()
{
	Node* pTail = new Node;
	if (pHead == nullptr)
	{
		cout << "Head�� �����͸� �Է��ϼ���: ";
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
				cout << top << "��° �����͸� �Է��ϼ��� : ";
				cin >> pTail->data;
				pTail->pNext = nullptr;
				tmp->pNext = pTail;
				break;
			}
		}
	}
	top++;
}
void LinkedList::pop() //��ũ�帮��Ʈ�� ������ ������ �ܼ��� �ش� �����͸� �����ϰ� ���� �ƴ϶�  �����Ϸ��� �����Ϳ� ���õ� ��� ������ �������־���Ѵ�.
{
	if (pHead == nullptr)
	{
		cout << "������ �����Ͱ� �����ϴ�\n";
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
	//��ũ�帮��Ʈ�� ������ ��忡������ �����Ѵ�.
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
		cout << "���α׷��� �����մϴ�.\n";
		return;
	default:
		cout << "�߸��� �Է��Դϴ�.\n";
		break;
	}
	manager();
}


