#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_
#include <iostream>
#define SAFE_DELETE(p) if(p){p = nullptr; delete p;}
using namespace std;
//���� ����Ʈ(��ũ�帮��Ʈ) ��������Ʈ�� �޸� ���ӵ� ��ġ�� �����͸� �������� �ʰ� ������ ������ ��ġ�� �����͸� �����ϴ� ���
struct Node
{
	int data;
	Node* pNext;
};
class LinkedList
{
private :
	//��ũ�帮��Ʈ�� �Ӹ��� �Ǵ� ù��° �������� �ּҰ�
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

