//Pre-Compile Header(미리 컴파일 된 헤더)

#ifndef _CSTRING_H_
#define _CSTRING_H_
#include <iostream>

//#define SAFE_DELETE_ARRAY(p) do{if(p) delete[] p; p = nullptr;}while(0)

class CString 
{
private:
	//sz 끝이 null문자로 끝나는 문자열
	char* m_szStr = nullptr;
public:
	CString(const char* _pStr);
	//복사 생성자
	CString(const CString& _str);
	~CString();

	//int StrLen();
	inline int Length() const;
	int Length(const char* _str) const;
	bool Compare(const char* _str);
	void Copy(const char* _str);
	void Concatenate(const char* _str);
	
	// 인라인(Inline Function) - 치환
	// 함수 상수 == 외부에서 받아온 매개변수 같은것이 내용이 바뀔 수 없게 해줌
	inline void Print() const { std::cout << "Print: " << m_szStr << std::endl; }

public:
	CString& operator=(const CString& _str);

	CString operator+(const CString& _str);
	CString& operator+=(const CString& _str);

	bool operator==(const CString& _str);
	bool operator!=(const CString& _str);
};
#endif
