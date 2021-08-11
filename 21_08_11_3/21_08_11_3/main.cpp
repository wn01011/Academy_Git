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
	// �����Ҵ�(Memory Allocate)
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
	

	//calloc : �����Ҵ��ѳ��� 0���� �ʱ�ȭ���� �����ִ³�, realloc �̹��Ҵ�� �޸𸮸� ũ�⸦ �����ũ�� ��
	//CTest* test = (CTest*)malloc(sizeof(CTest));
	CTest* test = new CTest;
	test->Print();
	//free(test) // �����ڿ� �Ҹ��ڰ� �������� �ʴ´�.
	SAFE_FREE(test); //�����ڿ� �Ҹ��ڰ� ���������� �ӵ��� ���� �� ������.
	//�����Ҵ� �迭
	int* pArr = new int[5]{1,2,3,4,5};
	for (int i = 0; i < 5; ++i)
		std::cout << pArr[i] << " - ";
	std::cout << std::endl;
	delete[] pArr;

	return 0;
}