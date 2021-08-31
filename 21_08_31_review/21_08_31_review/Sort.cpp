#include "Sort.h"

void Sort::selectionSort(int* ary)
{
	int curNum = 0;
	int aryMaxNum = 10;
	int tmp = 0;
	int min = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "ary[" << i << "] = ";
		cin >> ary[i];
	}
	while (curNum != aryMaxNum)
	{
		for(int i =curNum+1;i<10;i++)
		{
			min = curNum;
			if (ary[min] > ary[i])
			{
				/*tmp = ary[i];
				ary[i] = ary[curNum];
				ary[curNum] = tmp;*/
				min = i;
			}
			tmp = ary[min];
			ary[min] = ary[curNum];
			ary[curNum] = tmp;
		}
		curNum++;
	}
	for(int i =0 ; i<10;i++)
		cout << ary[i] <<"\t";
}

