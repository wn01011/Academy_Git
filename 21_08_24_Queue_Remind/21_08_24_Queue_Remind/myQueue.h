#ifndef _MYQUEUE_H_
#define _MYQUEUE_H_

#include <iostream>
using namespace std;

class myQueue
{
public:
	int ary[10];
	void push();
	void pop();
	void print();
	int top = -1;
};

#endif

