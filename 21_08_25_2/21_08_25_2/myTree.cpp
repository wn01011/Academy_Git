#include "myTree.h"

void myTree::push()
{
	Node* pNode = new Node;
	pNode->pLeft = nullptr;
	pNode->pRight = nullptr;
	cout << "데이터를 입력해주세요 : ";
	cin >> pNode->data;
	//1.Root가 없을때
	//2.Root가 있을때
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
				cout << "같은 값의 데이터가 존재합니다.\n"; 
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
	case 3: cout << "프로그램을 종료합니다."; return;
	default: cout << "잘못된 입력입니다.\n";	break;
	}
	manager();
}
