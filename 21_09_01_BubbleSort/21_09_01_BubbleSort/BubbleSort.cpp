#include "BubbleSort.h"
#include <iostream>
using namespace std;
void BubbleSort::bubbleSort()
{
	//데이터를 왼쪽부터 두개씩 비교해서
	//두 대상의 위치가 맞지 않다면(왼쪽이 오른쪽보다 크면)
	//두 대상의 위치를 서로 바꿔주고
	//위치가 맞다면 그대로 두고
	//두 대상의 검사가 끝나면 다음 두 대상을 다시 비교하기를 반복하며 정렬하느 방식
	//정렬을 통해서 오른쪽 부터 정렬이 이루어진다.

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
