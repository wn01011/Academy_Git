#ifndef _MYLIST_H_
#define _MYLIST_H_
#include <iostream>
using namespace std;
//큐나 스택은 데이터를 넣는 위치와 데이터를 꺼내는 위치가 정해져있었다면 리스트는 데이터를 넣고 꺼낼때 위치의 제한이 없다.
//선형리스트(순차리스트)선형큐와 마찬가지로 데이터를 보관하지만 데이터를 넣는 위치를 사용자가 임의로 정할 수있고
//데이터가 중간에 들어가면 그 뒤의 나머지 데이터는 모두 뒤로 한칸씩 밀림
//반대로 중간의 데이터가삭제되면 그 뒤의 나머지 데이터는 모두 앞으로 한칸씩 당김
class myList
{
private:
	int top = -1;
	int ary[10]{0};
public:
	void push();
	//데이터 중간에 이가 빠져서 데이터를 찾아넣는 행위가 어려워지지 않도록 데이터를 삽입하는 push는 만드는 편이 좋다.
	void pop();
	void insert(); // 사용자가 선택한 위치에 데이터를 삽입해주는 함수
	void remove(); // 사용자가 선택한 위치에 데이터를 삭제해주는 함수
	void print();
	void Manager();
};

#endif

