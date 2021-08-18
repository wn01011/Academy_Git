#ifndef _CIRCLEQUEUE_H_
#define _CIRCLEQUEUE_H_
#define ARY_STEP 4
#include <iostream>
#define NULL -9999
using namespace std;

class CircleQueue
{
private:
	int curNum = 0; int pushCycle = 0;
	int popNum = 0; int popCycle = 0;
	int Length = ARY_STEP;
	int pushnum = curNum % Length; int popnum = popNum % Length;
	int* ary = new int[Length] {NULL,NULL,NULL,NULL};
	int front = 0; int rear = 0;
public:
	void Push();
	void Pop();
	void Manager();
	void Print();
};
#endif

