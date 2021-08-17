#include "myStack.h"


void MyStack::push()
{
	cout << curNum << "번째 배열에 push할 숫자를 입력하세요" << endl;
	cin >> ary[curNum];
	++curNum;
	
}
void MyStack::pop()
{
	--curNum;
	cout << curNum << "번째 배열에 숫자를 pop했습니다." << endl;
	ary[curNum] = DEFAULT;
}
void MyStack::print()
{
	for (int i = 0; i < curNum; ++i)
	{
		cout <<i<<"번째 배열에 들어있는 숫자는: " << ary[i] <<"입니다" << endl;
	}
}

void MyStack::Manager()
{
	int choice;
	int Length = 10 * stackoverflow;
	cout << "\t  - M E N U -" << endl;
	cout << "1.Push    2.Pop    3.Print    4.Exit\n" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		if (curNum >= Length) {
			cout << "배열의 생성 허용 가능범위를 넘었습니다.\n 배열을 확장합니다.다시 Push해주세요" << endl;
			
			++stackoverflow;
			Length = 10 * stackoverflow;
			int* tmp = new int[Length];

			for (int i = 0; i < curNum; ++i)
				tmp[i] = ary[i];
			SAFE_DELETE(ary);
			ary = tmp;
			
			
			//push로 curNum이 증가하기전에 break;
			break;
		}
		push();
		break;
	case 2:
		if (curNum == 0)
		{
			cout << "현재 저장된 배열의 숫자가 존재하지 않습니다." << endl;
		}
		pop();
		break;
	case 3:
		print();
		break;
	case 4:
		cout << "시스템을 종료합니다." << endl;
		return;
	default:
		cout << "잘못된 입력입니다." << endl;
	}
	cout << endl;
	Manager();
}