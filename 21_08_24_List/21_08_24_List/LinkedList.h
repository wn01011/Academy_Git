#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_
#include <iostream>
#define SAFE_DELETE(p) if(p){p = nullptr; delete p;}
using namespace std;
//연결 리스트(링크드리스트) 선형리스트와 달리 연속된 위치에 데이터를 저장하지 않고 임의의 무작위 위치에 데이터를 저장하는 방식
struct Node
{
	int data;
	Node* pNext;
};
class LinkedList
{
private :
	//링크드리스트의 머리가 되는 첫번째 데이터의 주소값
	Node* pHead = nullptr;
	int top = 0;
public:
	void push();
	void pop();
	void print();
	void manager();
	~LinkedList() { cout << "Default Destructor" << endl; SAFE_DELETE(pHead); }
};

#endif

