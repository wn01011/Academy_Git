#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_
#include <iostream>
#define SAFE_DELETE(p) if(p){p=nullptr;delete p;}
using namespace std;
struct Node {
	int data;
	Node* pNext;
};
class LinkedList
{
private:
	Node* pHead = nullptr;
public:
	void push();
	void pop();
	void insert();
	void remove();
	void print();
	void manager();
};
#endif