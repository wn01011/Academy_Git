#include "CString.h"
//#include <iostream>


CString::CString(const char* _pStr) : m_szStr(nullptr)
{
	std::cout << "CString Constructor" << std::endl;
}
CString::CString(const CString& _str) : m_szStr(nullptr)
{
	std::cout << "CString Copy Constructor" << std::endl;
}

CString::~CString()
{
	std::cout << "CString Destructor" << std::endl;
	delete(m_szStr);
}

int CString::Length() const
{
	// Function Call Overhead
	return Length(m_szStr);
}
int CString::Length(const char* _str) const
{
	if (_str == nullptr) return -1;

	int len = 0;
	while (_str[len] != '\0') { len++; };
	return len;
}

bool CString::Compare(const char* _str)
{
	//if (m_szStr == nullptr && _str == nullptr)
	if (!m_szStr && !_str) return false;
	
	int myLen = Length();
	int sourLen = Length(_str);
	if(myLen != sourLen) return false;

	for (int i = 0; i < myLen; ++i)
		if (m_szStr[i] != _str[i]) return false;
	
	return true;
}

void CString::Copy(const char* _str)
{
	if (m_szStr != nullptr)
		delete(m_szStr);

	int len = Length(_str);
	m_szStr = new char[len + 1];
	for (int i = 0; i < len; ++i)
		m_szStr[i] = _str[i];
	m_szStr[len] = '\0';
}

void CString::Concatenate(const char* _str)
{
	if (!m_szStr)
	{
		Copy(_str);
		return;
	}
	int myLen = Length();
	int sourLen = Length(_str);
	char* buf = new char[myLen + sourLen + 1];

	for (int i = 0; i < myLen; ++i)
	{
		buf[i] = m_szStr[i];
	}
	int totalLen = myLen + sourLen;
	for (int i = myLen; i < totalLen; ++i)
	{
		buf[i] = _str[i - myLen];
	}
	buf[totalLen] = '\0';	
	delete[](m_szStr);
	m_szStr = buf;
}

CString& CString::operator=(const CString& _str)
{
	std::cout << "CString operator=" << std::endl;
	Copy(_str.m_szStr);
	return *this; //이클래스가 만들어졌을때의 주소값의 포인터
}

CString CString::operator+(const CString& _str) // 복사본이 나가야하는 상황 a,b,c의 변동이 있어서 안된다.
{
	//(a + b) + c;
	CString newStr(m_szStr);
	newStr.Concatenate(_str.m_szStr);
	return newStr;

	//임시객체(Template Object)
	//return CString(m_szStr).Concatenate(_str.m_szStr);
}

CString& CString::operator+=(const CString& _str) // 오리지널이 나가야하는 상황
{
	Concatenate(_str.m_szStr);
	return *this;
}

bool CString::operator==(const CString& _str)
{
	return Compare(_str.m_szStr);
}

bool CString::operator!=(const CString& _str)
{
	return !Compare(_str.m_szStr);
}