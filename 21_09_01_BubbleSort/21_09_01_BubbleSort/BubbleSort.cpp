#include "BubbleSort.h"
#include <iostream>
using namespace std;
void BubbleSort::bubbleSort()
{
	//�����͸� ���ʺ��� �ΰ��� ���ؼ�
	//�� ����� ��ġ�� ���� �ʴٸ�(������ �����ʺ��� ũ��)
	//�� ����� ��ġ�� ���� �ٲ��ְ�
	//��ġ�� �´ٸ� �״�� �ΰ�
	//�� ����� �˻簡 ������ ���� �� ����� �ٽ� ���ϱ⸦ �ݺ��ϸ� �����ϴ� ���
	//������ ���ؼ� ������ ���� ������ �̷������.

	const int aryLen = 10;
	int curNum = 0;
	int tmp =0;
	while (curNum != aryLen)
	{
		for (int i = 0; i < aryLen - curNum - 1; i++)
		{
			if(ary[i]>ary[i+1])
			{
				tmp = ary[i];
				ary[i] = ary[i + 1];
				ary[i + 1] = tmp;
			}
		}
		curNum++;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "ary["<<i<<"] = "<<ary[i] << "\t";
	}
}
