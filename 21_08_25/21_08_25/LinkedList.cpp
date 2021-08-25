#include "LinkedList.h"

void LinkedList::push()
{
	Node* node = new Node;
	if (pHead == nullptr)
	{
		pHead = node;
		pHead->pNext = nullptr;
		cout << "Head�� data�� �Է��ϼ���: ";
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
		cout << "�����͸� �Է��ϼ���: ";
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
		cout << "������ �����Ͱ� �����ϴ�.\n";
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
		cout << "������ ������ �Ϸ�Ǿ����ϴ�.\n";
	}
}

void LinkedList::insert()
{
	int listNum;
	int i = 1;
	Node* tmp = pHead;
	Node* node = new Node;
	cout << "��� ° ����Ʈ�� �����͸� �Է��Ͻðڽ��ϱ�: ";
	cin >> listNum;
	if (listNum < 0)
	{
		cout << "���� ��°�� �Է��� �� �����ϴ�.\n";
		insert();
		return;
	}
	cout << "������ �Է�: ";
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
			cout << "������ �ʰ��߽��ϴ�.\n���� �ڿ� �Է� �ްڽ��ϴ�.\n";
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
	cout << "�� ��° ����Ʈ�� �����Ͻðڽ��ϱ�: ";
	cin >> listNum;
	if (listNum < 0)
	{
		cout << "���� ��°�� ������ �� �����ϴ�.\n";
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
			cout << "������ �����Ͱ� �����ϴ�.\n";
			return;
		}
		if (tmp->pNext == nullptr)
		{
			cout << "������ �ʰ��߽��ϴ� ���� ������ �����͸� �����մϴ�.\n";
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
	case 4:	cout << "���α׷��� �����մϴ�.\n";return;
	case 5:	insert();break;
	case 6:	remove();break;
	default:cout << "�߸��� �Է��Դϴ�.\n";break;
	}
	manager();
}


