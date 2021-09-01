#include "QuickSort.h"

void QuickSort::QuickSorting()
{
	start = 0;
	end = 9;
	pivot = 0;
	
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		ary[i] = rand();
	}

	QuickFunc(ary, 0, 9);
	for (int i = 0; i < 10; i++)
	{
		cout << ary[i] << "\t";
	}
}




void QuickSort::QuickFunc(int a[10], int start, int end)
{
	if (start>=end) return;
		
	int i = start + 1;
	int j = end;
	pivot = start;

	while (i<=j)
	{
		while (ary[i] < ary[pivot] && i <= end)
		{
			i++;
		}
		while (ary[j] > ary[pivot] && j > start)
		{
			j--;
		}
		if (i<j)
		{
			int tmp = ary[i];
			ary[i] = ary[j];
			ary[j] = tmp;
			
		}
		else
		{
			int tmp = ary[j];
			ary[j] = ary[pivot];
			ary[pivot] = tmp;
		}
		for (int i = 0; i < 10; i++)
		{
			cout << ary[i] << "\t";
		} cout << endl;
	}
	QuickFunc(ary, start, j - 1);
	QuickFunc(ary, j + 1, end );
}
