#ifndef _MYTREE_H_
#define _MYTREE_H_
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* pLeft;
	Node* pRight;
};
class myTree
{
public:
	Node* pRoot = nullptr;
	
	void push();
	void pruning(Node* _Pnode);
	void print();
	void manager();
};

#endif
