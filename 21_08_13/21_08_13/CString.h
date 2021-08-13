//Pre-Compile Header(�̸� ������ �� ���)

#ifndef _CSTRING_H_
#define _CSTRING_H_
#include <iostream>

//#define SAFE_DELETE_ARRAY(p) do{if(p) delete[] p; p = nullptr;}while(0)

class CString 
{
private:
	//sz ���� null���ڷ� ������ ���ڿ�
	char* m_szStr = nullptr;
public:
	CString(const char* _pStr);
	//���� ������
	CString(const CString& _str);
	~CString();

	//int StrLen();
	inline int Length() const;
	int Length(const char* _str) const;
	bool Compare(const char* _str);
	void Copy(const char* _str);
	void Concatenate(const char* _str);
	
	// �ζ���(Inline Function) - ġȯ
	// �Լ� ��� == �ܺο��� �޾ƿ� �Ű����� �������� ������ �ٲ� �� ���� ����
	inline void Print() const { std::cout << "Print: " << m_szStr << std::endl; }

public:
	CString& operator=(const CString& _str);

	CString operator+(const CString& _str);
	CString& operator+=(const CString& _str);

	bool operator==(const CString& _str);
	bool operator!=(const CString& _str);
};
#endif
