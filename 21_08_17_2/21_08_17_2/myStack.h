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
	int* ary = new int[STACK_STEP];//데이터를 저장할 공간
	int stackoverflow = 1;
public:
	MyStack() { cout << "Constructor" << endl; };
	~MyStack() { 
		cout << "Destructor" << endl;
		delete[] ary;
	};
	//자료구조에서 새로운 데이터를 삽입(입력)하는 것을 push라고 한다.
	void push();
	// 저장되어있던 데이터를 꺼내는 행위를 pop이라고 한다.
	void pop();
	//배열(스택구조)에 저장된 데이터 전체를 출력해서 데이터를 확인 시켜주는 함수
	void print();
	void Manager();
};


#endif