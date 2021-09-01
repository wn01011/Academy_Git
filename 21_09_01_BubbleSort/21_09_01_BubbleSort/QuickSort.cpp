#include "QuickSort.h"

void QuickSort::QuickSorting()
{
	start = 0;
	end = 19;
	pivot = 0;
	

	
	QuickFunc(ary, 0, 19);
	for (int i = 0; i < 20; i++)
	{
		cout << ary[i] << "\t";
	}
}

bool QuickSort::CrossTest(int* _i, int* _j, int* _pivot)
{
	if (*_i > *_j)
	{
		int tmp = ary[*_pivot];
		ary[*_pivot] = ary[*_j];
		ary[*_j] = tmp;
		*_pivot = *_j;
		return true;
	}
	return false;
}


void QuickSort::QuickFunc(int a[20], int start, int end)
{
	if (start>=end) return;
		
	int i = start + 1;
	int j = end;
	pivot = start;

	while (i<=j)
	{
		while (ary[i] <= ary[pivot] && i <= end)
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
			for (int i = 0; i < 20; i++)
			{
				cout << ary[i] << "\t";
			} cout << endl;
			QuickFunc(ary, i, j);
		}
	
		if (CrossTest(&i, &j, &pivot))break; 
	}
	QuickFunc(ary, start, j - 1);
	QuickFunc(ary, j + 1, end );
}
