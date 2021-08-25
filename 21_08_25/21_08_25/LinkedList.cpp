#include "LinkedList.h"

void LinkedList::push()
{
	Node* node = new Node;
	if (pHead == nullptr)
	{
		pHead = node;
		pHead->pNext = nullptr;
		cout << "Head에 data를 입력하세요: ";
		cin >> pHead->data;
		cout << endl;
	}
	else
	{
		Node* tmp = pHead;
		while (tmp->pNext != nullptr)
		{
			tmp = tmp->pNext;
		}
		tmp->pNext = node;
		//tmp->pNext->pNext = nullptr;
		node->pNext = nullptr;
		cout << "데이터를 입력하세요: ";
		cin >> tmp->pNext->data;
		cout << endl;
	}
}

void LinkedList::pop()
{
	Node* tmp = pHead;
	Node* pForward = pHead;
	if (pHead == nullptr)
	{
		cout << "삭제할 데이터가 없습니다.\n";
	}
	else
	{
		while (tmp->pNext != nullptr)
		{
			pForward = tmp;
			tmp = tmp->pNext;
		}
		if (tmp == pHead)
			SAFE_DELETE(pHead);
		pForward->pNext = nullptr;
		SAFE_DELETE(tmp);
		cout << "데이터 삭제가 완료되었습니다.\n";
	}
}

void LinkedList::insert()
{
	int listNum;
	int i = 1;
	Node* tmp = pHead;
	Node* node = new Node;
	cout << "몇번 째 리스트에 데이터를 입력하시겠습니까: ";
	cin >> listNum;
	if (listNum < 0)
	{
		cout << "음수 번째는 입력할 수 없습니다.\n";
		insert();
		return;
	}
	cout << "데이터 입력: ";
	cin >> node->data;
	while (i != listNum)
	{
		if (listNum == 0)
		{
			node->pNext = pHead;
			pHead = node;
			return;
		}
		if (tmp->pNext == nullptr)
		{
			cout << "범위를 초과했습니다.\n가장 뒤에 입력 받겠습니다.\n";
			break;
		}
		tmp = tmp->pNext;
		i++;
	}
	node->pNext = tmp->pNext;
	tmp->pNext = node;
}

void LinkedList::remove()
{
	int listNum;
	int i = 0;
	Node* tmp = pHead;
	Node* forward = pHead;
	cout << "몇 번째 리스트를 삭제하시겠습니까: ";
	cin >> listNum;
	if (listNum < 0)
	{
		cout << "음수 번째는 삭제할 수 없습니다.\n";
		remove();
		return;
	}
	if (listNum == 0)
	{
		tmp = tmp->pNext;
		pHead = tmp;
		SAFE_DELETE(tmp);
		return;
	}
	while (i != listNum)
	{
		if (pHead == nullptr)
		{
			cout << "삭제할 데이터가 없습니다.\n";
			return;
		}
		if (tmp->pNext == nullptr)
		{
			cout << "범위를 초과했습니다 가장 마지막 데이터를 삭제합니다.\n";
			break;
		}
		forward = tmp;
		tmp = tmp->pNext;
		i++;
	}
	forward->pNext = tmp->pNext;
	SAFE_DELETE(tmp);
}

void LinkedList::print()
{
	Node* tmp = pHead;
	while (tmp != nullptr)
	{
		if (tmp->pNext == nullptr)
		{
			cout << tmp->data << endl;
			return;
		}
		cout << tmp->data << "->";
		tmp = tmp->pNext;
	}
}

void LinkedList::manager()
{
	int num = 0;
	cout << "MENU\n1.PUSH  2.POP  3.Print  4.Exit  5.Insert  6.Remove\n";
	cin >> num;
	switch (num)
	{
	case 1:	push();	break;
	case 2:	pop();	break;
	case 3:	print();break;
	case 4:	cout << "프로그램을 종료합니다.\n";return;
	case 5:	insert();break;
	case 6:	remove();break;
	default:cout << "잘못된 입력입니다.\n";break;
	}
	manager();
}


