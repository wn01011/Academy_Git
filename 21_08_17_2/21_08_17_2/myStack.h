#ifndef _MYSTACK_H_
#define _MYSTACK_H_
#define STACK_STEP 10
#define DEFAULT 0
#define SAFE_DELETE(p) if(p){delete[] p; p = nullptr;}
#include <iostream>

using namespace std;

class MyStack
{
private:
	int curNum =0;
	int* ary = new int[STACK_STEP];//�����͸� ������ ����
	int stackoverflow = 1;
public:
	MyStack() { cout << "Constructor" << endl; };
	~MyStack() { 
		cout << "Destructor" << endl;
		delete[] ary;
	};
	//�ڷᱸ������ ���ο� �����͸� ����(�Է�)�ϴ� ���� push��� �Ѵ�.
	void push();
	// ����Ǿ��ִ� �����͸� ������ ������ pop�̶�� �Ѵ�.
	void pop();
	//�迭(���ñ���)�� ����� ������ ��ü�� ����ؼ� �����͸� Ȯ�� �����ִ� �Լ�
	void print();
	void Manager();
};


#endif