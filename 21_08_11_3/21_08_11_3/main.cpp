#include<iostream>
#define SAFE_FREE(p) if(p){delete(p);p=nullptr;}
class CTest
{

public :
	CTest() { std::cout << "CTest Constructor" << std::endl; }
	~CTest() { std::cout << "CTest Destructor" << std::endl; }
	
	void Print() { std::cout << "CTest Print" << std::endl; }
};

int main()
{
	// 동적할당(Memory Allocate)
	int* pval = (int*)malloc(sizeof(int));
	int* pVal = new int{10};
	//*pVal = 10;
	std::cout << *pVal << std::endl;
	
	if (pval)
	{
		free(pval);
		pval = nullptr;
	}
	delete pVal;
	

	//calloc : 동적할당한놈을 0으로 초기화까지 시켜주는놈, realloc 이미할당된 메모리를 크기를 변경시크는 놈
	//CTest* test = (CTest*)malloc(sizeof(CTest));
	CTest* test = new CTest;
	test->Print();
	//free(test) // 생성자와 소멸자가 동작하지 않는다.
	SAFE_FREE(test); //생성자와 소멸자가 동작하지만 속도가 조금 더 빠르다.
	//동적할당 배열
	int* pArr = new int[5]{1,2,3,4,5};
	for (int i = 0; i < 5; ++i)
		std::cout << pArr[i] << " - ";
	std::cout << std::endl;
	delete[] pArr;

	return 0;
}