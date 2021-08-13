#include<iostream>

//using namespace std;
using std::cout;
using std::endl;
//상속(inheritance)
// Parent - Child
// Super - Sub
// Base - Drived
//객체지향프로그래밍의 꽃

class CParent
{
private:
	int m_iParentVal;
public:
	CParent(int _val) : m_iParentVal(_val) { cout << "CParent Constructor" << endl; }
	~CParent() { cout << "CParent Destructor" << endl; }
	//가상함수 (Virtual Function)
	//가상함수 테이블(Virtual Function Table)
	virtual void Print()const { cout << "CParent Print: " << m_iParentVal << endl; }
};

class CChild : public CParent
{
private:
	float m_fChildVal;
public://부모에 default생성자가 없다면 임의로 자식에서 생성해줘야한다.
	CChild() : CParent(0), m_fChildVal(0.0f)
	{
		cout << "CChild Constructor" << endl;
	};
	~CChild() { cout << "CChild Destructor" << endl; }
	//함수 오버라이딩(Function Overriding : 같은 이름의 함수가 있을 경우 자식의 함수 호출 없을경우 부모의 것을 호출)
	//부모의 함수를 재정의함
	void Print()const { cout << "CChild Print: " << m_fChildVal << endl; }
};

int main()
{
	
	CChild child;
	cout << "CParent Size: " << sizeof(CParent) << " byte" << endl; //res : 4byte
	cout << "CChild SIze: " << sizeof(CChild) << "byte" << endl; // res : 8byte
	//주소가 연결되어있다.
	//printf("m_iParentVal: %p\n", &child.m_iParentVal);
	//printf("m_fChildVal: %p\n", &child.m_fChildVal);
	
	child.Print();
	cout << endl;
	////////////////////////////////////////////////////////////////
	//상속관계에서의 동적할당
	CParent* pParent = new CParent(0);
	CChild* pChild = new CChild();
	//자식이 부모형으로 형변환
	((CParent*)pChild)->Print();
	//부모가 자식형으로 형변환(부모는 자식이 가지고 있는 메모리에 정보가 없기때문에 읽지 못하므로 오류가 일어남)
	((CChild*)pParent)->Print();
	delete pChild;
	//////////////////////////////////////////////////////////
		
	return 0;
}