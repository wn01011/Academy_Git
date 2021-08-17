#include "myStack.h"


void MyStack::push()
{
	cout << curNum << "��° �迭�� push�� ���ڸ� �Է��ϼ���" << endl;
	cin >> ary[curNum];
	++curNum;
	
}
void MyStack::pop()
{
	--curNum;
	cout << curNum << "��° �迭�� ���ڸ� pop�߽��ϴ�." << endl;
	ary[curNum] = DEFAULT;
}
void MyStack::print()
{
	for (int i = 0; i < curNum; ++i)
	{
		cout <<i<<"��° �迭�� ����ִ� ���ڴ�: " << ary[i] <<"�Դϴ�" << endl;
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
			cout << "�迭�� ���� ��� ���ɹ����� �Ѿ����ϴ�.\n �迭�� Ȯ���մϴ�.�ٽ� Push���ּ���" << endl;
			
			++stackoverflow;
			Length = 10 * stackoverflow;
			int* tmp = new int[Length];

			for (int i = 0; i < curNum; ++i)
				tmp[i] = ary[i];
			SAFE_DELETE(ary);
			ary = tmp;
			
			
			//push�� curNum�� �����ϱ����� break;
			break;
		}
		push();
		break;
	case 2:
		if (curNum == 0)
		{
			cout << "���� ����� �迭�� ���ڰ� �������� �ʽ��ϴ�." << endl;
		}
		pop();
		break;
	case 3:
		print();
		break;
	case 4:
		cout << "�ý����� �����մϴ�." << endl;
		return;
	default:
		cout << "�߸��� �Է��Դϴ�." << endl;
	}
	cout << endl;
	Manager();
}