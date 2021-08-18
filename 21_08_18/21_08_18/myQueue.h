#ifndef _MYQUEUE_H_
#define _MYQUEUE_H_
#include <iostream>
#define SAFE_DELETE(p) if(p){delete[] p; p = nullptr;}
#define aryStep 10
using namespace std;

class myQueue
{
private:
	
	int queOverflow = 1;
	int aryLength = aryStep * queOverflow;
	int top = -1;
public:
	int* ary = new int[aryLength] {0};
	int* ary2 = new int[aryLength] {0};
	void Push();
	void Pop();
	void Print();
	void Manager();
	void ExpandAry();
	~myQueue() { SAFE_DELETE(ary);}

};

#endif

