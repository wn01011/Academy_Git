#include "myTree.h"

void myTree::push()
{
	Node* pNode = new Node;
	pNode->pLeft = nullptr;
	pNode->pRight = nullptr;
	cout << "�����͸� �Է����ּ��� : ";
	cin >> pNode->data;
	//1.Root�� ������
	//2.Root�� ������
	if (pRoot == nullptr)
	{
		pRoot = pNode;
	}
	else
	{
		Node* tmp = pRoot;
		while (true)
		{
			if (tmp->data > pNode->data)
			{
				if (tmp->pLeft == nullptr)
				{
					tmp->pLeft = pNode; break;
				}
				else
				{
					tmp = tmp->pLeft;
				}
			}
			else if (tmp->data < pNode->data)
			{
				if (tmp->pRight == nullptr)
				{
					tmp->pRight = pNode; break;
				}
				else
				{
					tmp = tmp->pRight;
				}
			}
			else
			{
				cout << "���� ���� �����Ͱ� �����մϴ�.\n"; 
				delete pNode; break;
			}
		}
	}
}

void myTree::pruning(Node* tmp)
{
	if (tmp == nullptr) return;
	pruning(tmp->pLeft);
	cout << tmp->data << ", ";
	pruning(tmp->pRight);
}

void myTree::print()
{
	pruning(pRoot);	
	cout << "\n";
}


void myTree::manager()
{
	int num;
	cout << "MENU\n1.Push  2.Print  3.Exit\n";
	cin >> num;
	switch (num)
	{
	case 1: push();	break;
	case 2: print();	break;
	case 3: cout << "���α׷��� �����մϴ�."; return;
	default: cout << "�߸��� �Է��Դϴ�.\n";	break;
	}
	manager();
}
