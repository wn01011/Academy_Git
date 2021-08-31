#include "InsertSorting.h"
#define ARYLEN 10
void InsertSorting::InsertingSort()
{
	int curNum = 0;
	int tmp;
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		ary[i] = rand();
	}
	
	while (curNum != ARYLEN)
	{
		for (int i = curNum+1; i < 10; i++)
		{
			if (i - 1 < 0) continue;
			if (ary[i - 1] > ary[i])
			{
				tmp = ary[i];
				ary[i] = ary[i - 1];
				ary[i - 1] = tmp;
				i -= 2;
			}
			else
				break;
		}
		curNum++;
	}
	for (int i = 0; i < 10; i++) 
	{
		cout << "ary[" << i << "]= " << ary[i]<<"\t";
	}
}
