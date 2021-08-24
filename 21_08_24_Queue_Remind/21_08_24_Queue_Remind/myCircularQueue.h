#ifndef _MYCIRCULARQUEUE_H_
#define _MYCIRCULARQUEUE_H_
#include <iostream>
using namespace std;
class myCircularQueue
{
private:
	int front = 3;
	int rear = 3;
	int ary[10]{0};
public:
	void push();
	void pop();
	void print();
};

#endif

