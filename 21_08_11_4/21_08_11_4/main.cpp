#include<iostream>
#define SAFE_DELETE(p) do{if(p){p = nullptr; delete(p);}}while(0)
//연산자 오버로딩(Operator Overloading)
class CString
{
private:
	char* m_pStr;

public:
	CString(const char* _str) :
		m_pStr(nullptr)	{
		std::cout << "CString Constructor" << std::endl;
	
		int len = 0;
		while (*(_str + len) != NULL) ++len;
		m_pStr = new char[len + 1];
		for (int i = 0; i < len; ++i)
			*(m_pStr + i) = *(_str + i);
		m_pStr[len] = '\0';
	}
	// 깊은 복사(Deep Copy)
	CString(const CString& _str) : m_pStr(nullptr)
	{
		std::cout << "CString Copy Constructor" << std::endl;

		int len = 0;
		while (_str.m_pStr[len] != '\0') ++len;
		m_pStr = new char[len + 1];
		for (int i = 0; i < len; ++i)
			m_pStr[i] = _str.m_pStr[i];
		m_pStr[len] = '\0';
	}
	~CString() {
		std::cout << "CString Destructor" << std::endl;

		if (m_pStr != nullptr)
		{
			delete m_pStr;
			m_pStr = nullptr;
		}
	}

	void Print() {
		std::cout << m_pStr << std::endl;
	}

	// 연산자 오버로딩
	CString& operator = (const CString& _str) {
		std::cout << "Cstring Operator=" << std::endl;
		// 깊은 복사
		int len = 0;
		while (_str.m_pStr[len] != '\0') ++len;
		m_pStr = new char[len + 1];
		for (int i = 0; i < len; ++i)
			m_pStr[i] = _str.m_pStr[i];
		m_pStr[len] = '\0';
		// this Pointer
		return *this;
	}
public:
	int StrLen() {
		int len = 0;
		while (m_pStr[len] != '\0')++len;	
		return len; }
	
	void StrCpy(const char* _str){
		int len = StrLen();
		for (int i = 0; i < len; ++i)
			 m_pStr[i] = *(_str + i);
		m_pStr[len] = '\0';
		
	}
	bool StrCmp(const char* _str) { 
		int len = StrLen();
		for (int i = 0; i < len + 1; ++i)
			if (*(_str + i) != m_pStr[i])
				return false;
		return true;
	}
	void StrCat(const char* _str){
		int len = StrLen();
		int len2 = 0;
		
		while (_str[len2] != '\0') ++len2;
		
		char* my_str = new char[len+len2+1];
		
		for (int i = 0; i < len; ++i)
		{
			my_str[i] = m_pStr[i];
		} ; 

		for (int i = len; i < len + len2; ++i)
		{
			my_str[i] = _str[i - len];
		}
		*(my_str+len + len2) = '\0';
		
		m_pStr = my_str;
		
	}
};

int main()
{
	//Constructor가 하나라도 지정된 class는 default constructor가 생성되지 않는다
	//CString str_1(); // x
	CString* str = new CString("Test");
	str->Print();
	//복사생성자 없이 default로 컴퓨터에게 복사를 맡기면 비트단위 복사(얕은 복사(Shallow Copy))를 한다.
	//주소만 비트단위로 복사해 준다.
	CString str2 = *str;
	SAFE_DELETE(str);

	str2.Print();

	CString* str3 = new CString("Test3");
	
	const char* buf = "abcd";
	std::cout << str3->StrLen() << "\n" << str3->StrCmp("Test3") << "\n" << std::endl;
	str3->StrCat(buf);
	str3->Print();
	//str3->StrCpy(buf);
	SAFE_DELETE(str3);
	return 0;
}

