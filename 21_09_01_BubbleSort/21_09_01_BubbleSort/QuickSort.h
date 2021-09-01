#pragma once

#include <iostream>
using namespace std;
class QuickSort
{
	//i는 피벗보다 큰걸 원함, j는 피벗보다 작은걸 원함
	//교차하면 j와 pivot의 위치를 바꾸고 해당 위치의 정렬을 마침
	//i가 범위를 벗어나면 j와 pivot의 위치를 바꾸고 해당 위치의 정렬을 마침
	//재귀함수
	//배열의 범위를 지정하고 (Start, End), Start위치를 정렬의 기준값인 Pivot으로 삼는다.
	//배열 범위 내에서 pivot보다 큰 값을 찾기위한 위치i를 Pivot+1로 주고 배열 범위 내에서 pivot보다 작은 값을 찾기 위한 위치
	//j는 ENd로 준다.
	//i는 큰값을 찾기 위해서 오른쪽으로 이동하고, j는 작은 값을 찾기 위해서 왼쪽으로 이동한다.
	//i와 j가 각각 우너하는 값을 찾으면 i와 j에 저장된 데이터를 서로 자리를 바꿔주고 다시 i와 j가 각각의 원하는 값을 찾기위해서 이동한다.
	//이동하는 도중 i와 j가 서로 교차하거나 또는 i가 end범위를 넘어서거나 j가 start범위를 넘어서면 이동을 중지하고 j와 피봇의 값을 서로바꿔준다.
	//피봇의 위치가 변경되었다면 변경된 위치가 피봇이 있어야하는 위치임으로 피봇의 위치를 확정하고 확정된 피봇 위치를 기준으로 하여
	//왼쪽의 배열 범위와 오른쪽의 배열 범위를 각각 다시 퀵정렬 시켜준다.
	//왼쪽은 start가 기존의 start와 같고 end는 현재 이동한 pivot의 위치-1
	//오른쪽은 start가 이동한 pivot의 위치 +1, end는 기존과 동일한 값이 된다.
	//만약, end와 start가 같거나, start가 end보다 커지면 혹은 end가 start보다 작아지면 해당 퀵정렬은 원소가 하나뿐인것임으로 정렬하지 않고 종료된다.
	int pivot = 0;
	int start, end;
	int ary[10] = { 10,9,6,1,20,3,2,7,8,19 };
public:
	void QuickSorting();
	bool CrossTest(int* _i, int* _j, int* _pivot);
	void QuickFunc(int a[20], int start, int end);
	// 퀵정렬을 위해 사용하는 재귀함수
};

