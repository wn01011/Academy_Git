#ifndef _CARRYLIST_H_
#define _CARRYLIST_H_
#include <iostream>
using namespace std;
//자료구조(Data Structure)와 알고리즘(Algorithm)
//배열(Array)
//std::vector 자료구조중에 벡터 (물리에서의 Vector랑 다름)
//배열의 길이가 가변적으로 변하는것
//템플릿으로 만든 함수는 헤더안에서 모두 정의되어야한다.
template <typename T>
class CArrayList
{
private:
	int m_iLength;
	T* m_pArr;
	int m_iCurIdx; // Current Index
public:
	//디폴트 매개변수(Default Parameter)
	CArrayList(int _len=5);
	~CArrayList();

	void Push(T _val);
	void Print() const;
};

//함수정의

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
	else //메모리가 충분하더라도 메모리단편화때문에 동적할당에 실패할 수도 있다. 이를 동적할당 적중실패라고 한다.
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
