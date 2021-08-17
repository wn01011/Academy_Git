#ifndef _CARRYLIST_H_
#define _CARRYLIST_H_
#include <iostream>
using namespace std;
//�ڷᱸ��(Data Structure)�� �˰���(Algorithm)
//�迭(Array)
//std::vector �ڷᱸ���߿� ���� (���������� Vector�� �ٸ�)
//�迭�� ���̰� ���������� ���ϴ°�
//���ø����� ���� �Լ��� ����ȿ��� ��� ���ǵǾ���Ѵ�.
template <typename T>
class CArrayList
{
private:
	int m_iLength;
	T* m_pArr;
	int m_iCurIdx; // Current Index
public:
	//����Ʈ �Ű�����(Default Parameter)
	CArrayList(int _len=5);
	~CArrayList();

	void Push(T _val);
	void Print() const;
};

//�Լ�����

template <class T>
CArrayList<T>::CArrayList::CArrayList(int _len) :
	m_iLength(_len), m_pArr(nullptr), m_iCurIdx(0)
{
	cout << "CArrayList Constructor" << endl;

	// Memory Pool
	//int* AllocateLength();
	m_pArr = new T[_len];
	if (m_pArr)
	{
		cout << "Allcate Successed! (" << _len << ")" << endl;
	}
	else //�޸𸮰� ����ϴ��� �޸𸮴���ȭ������ �����Ҵ翡 ������ ���� �ִ�. �̸� �����Ҵ� ���߽��ж�� �Ѵ�.
	{
		cout << "[" << __LINE__ << "]" <<
			"m_pArr Allocate Failed! " <<
			__FILE__ << endl;
	}
}
template <class T>
CArrayList<T>::CArrayList::~CArrayList()
{
	cout << "CArrayList Destructor" << endl;
	//SAFE_DELETE
	if (m_pArr)
	{
		delete[] m_pArr;
		m_pArr = nullptr;
	}
}
template<class T>
void CArrayList<T>::Push(T _val)
{
	if (!m_pArr) return;

	//bool isFull()
	if (m_iCurIdx == m_iLength)
	{
		//Extend()
		m_iLength += 5;


		T* pNewArr = new T[m_iLength];
		//void Copy(int* _dest, int* _sour);
		for (int i = 0; i < m_iCurIdx; ++i)
			pNewArr[i] = m_pArr[i];

		cout << "Extend (" << m_iLength - 5 << "->" << m_iLength << ")" << endl;
		if (m_pArr)
		{
			delete[] m_pArr;
			m_pArr = nullptr;
		}
		m_pArr = pNewArr;
	}
	cout << "Push (" <<
		m_iCurIdx << "->" << _val << ")" << endl;

	m_pArr[m_iCurIdx++] = _val;
}
template<class T>
void CArrayList<T>::Print() const
{
	for (int i = 0; i < m_iCurIdx; ++i)
		cout << m_pArr[i] << "-";
	cout << "(" << m_iCurIdx << "/" << m_iLength << ")" << endl;
}

#endif
