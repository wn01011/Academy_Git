#include<iostream>

//using namespace std;
using std::cout;
using std::endl;
//���(inheritance)
// Parent - Child
// Super - Sub
// Base - Drived
//��ü�������α׷����� ��

class CParent
{
private:
	int m_iParentVal;
public:
	CParent(int _val) : m_iParentVal(_val) { cout << "CParent Constructor" << endl; }
	~CParent() { cout << "CParent Destructor" << endl; }
	//�����Լ� (Virtual Function)
	//�����Լ� ���̺�(Virtual Function Table)
	virtual void Print()const { cout << "CParent Print: " << m_iParentVal << endl; }
};

class CChild : public CParent
{
private:
	float m_fChildVal;
public://�θ� default�����ڰ� ���ٸ� ���Ƿ� �ڽĿ��� ����������Ѵ�.
	CChild() : CParent(0), m_fChildVal(0.0f)
	{
		cout << "CChild Constructor" << endl;
	};
	~CChild() { cout << "CChild Destructor" << endl; }
	//�Լ� �������̵�(Function Overriding : ���� �̸��� �Լ��� ���� ��� �ڽ��� �Լ� ȣ�� ������� �θ��� ���� ȣ��)
	//�θ��� �Լ��� ��������
	void Print()const { cout << "CChild Print: " << m_fChildVal << endl; }
};

int main()
{
	
	CChild child;
	cout << "CParent Size: " << sizeof(CParent) << " byte" << endl; //res : 4byte
	cout << "CChild SIze: " << sizeof(CChild) << "byte" << endl; // res : 8byte
	//�ּҰ� ����Ǿ��ִ�.
	//printf("m_iParentVal: %p\n", &child.m_iParentVal);
	//printf("m_fChildVal: %p\n", &child.m_fChildVal);
	
	child.Print();
	cout << endl;
	////////////////////////////////////////////////////////////////
	//��Ӱ��迡���� �����Ҵ�
	CParent* pParent = new CParent(0);
	CChild* pChild = new CChild();
	//�ڽ��� �θ������� ����ȯ
	((CParent*)pChild)->Print();
	//�θ� �ڽ������� ����ȯ(�θ�� �ڽ��� ������ �ִ� �޸𸮿� ������ ���⶧���� ���� ���ϹǷ� ������ �Ͼ)
	((CChild*)pParent)->Print();
	delete pChild;
	//////////////////////////////////////////////////////////
		
	return 0;
}