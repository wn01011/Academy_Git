#include <stdio.h>
#include <malloc.h>

void mystrcpy(char**, const char*);
void mystrcat(char** _dest, const char* _str1, const char* _str2);
int mystrlen(const char*);
bool mystrcmp(const char*, const char*);

int main()
{
	//문자열(String)
	//문자열의 끝에는 널문자를 추가해줘야한다. NULL : '\0'
	char str[4] = { 'k','j','k' };
	printf("myName : %s\n", str);
	////////////////////////////////////////////////////

	//char string[];
	const char* string = "Hello";
	char string2[] = "Hello";
	printf("Say_Hello : %s, %s\n", string, string2);
	int size1 = sizeof(string); // res : 4
	int size2 = sizeof(string2); // rew : 6
	printf("%d, %d\n", size1, size2);

	int len = 0;

	while (string2[len] != NULL) ++len;

	printf("len : %d\n", len);

	char* cpyStr = (char*)malloc(sizeof(char) * (len + 1));
	for (int i = 0; i < len; ++i)
	{
		*(cpyStr + i) = *(string + i);
	}
	*(cpyStr + len) = NULL;
	printf("cpyStr : %s\n", cpyStr);

	if (cpyStr)
	{
		cpyStr = NULL;
		free(cpyStr);
	}

	/////////////////////////////////////////////////////////////////////
	//strlen() : 문자열 길이 구하기
	//strcpy() : 문자열 복사
	//strcat() : 문자열 붙이기
	//strcpr() : 문자열 비교
	const char* mychar = "abcde";
	const char* mychar2 = "abcde";
	char* buf = (char*)malloc(10);
	int len2;
	len2 = mystrlen(mychar);
	len2 = mystrlen("abcdabcd");
	printf("%d\n", len2);
	if (mystrcmp(mychar, mychar2) == true)
		printf("true\n");
	else
		printf("false\n");
	//printf("%s\n", mystrcmp(mychar,mychar2) ? "True" : "False");

	mystrcpy(&buf, mychar2);
	printf("%s\n", buf);
	if (buf) { free(buf); buf = 0; }

	mystrcat(&buf, "Hello, ", "World!");
	printf("%s\n", buf);
	if (buf) { free(buf); buf = 0; }

	return 0;
}


int mystrlen(const char* str1)
{
	if (str1 == 0) return -1;
	//예외처리
	int len = 0;
	while (*(str1 + len) != NULL) ++len;
	return len;
}
bool mystrcmp(const char* _lhs, const char* _rhs)
{
	if (_lhs == 0 || _rhs == 0)return false;

	if (mystrlen(_lhs) != mystrlen(_rhs))
	{
		return false;
	}
	else
	{
		for (int i = 0; i < mystrlen(_lhs); ++i)
		{
			if (*(_lhs + i) != *(_rhs + i))
			{
				return false;
			}
		}
		return true;
	}
}

void mystrcpy(char** _dest, const char* _sour)
{
	if (*_dest)
	{
		*_dest = 0;
		free(*_dest);
	}

	int len = mystrlen(_sour);
	*_dest = (char*)malloc(sizeof(char) * (len + 1));
	for (int i = 0; i < len; ++i)
	{
		*(*_dest + i) = *(_sour + i);
	}
	*(*_dest + len) = NULL;


}
void mystrcat(char** _dest, const char* _str1, const char* _str2)
{
	if (_str1 == 0 && _str2 == 0) return;
	if (_str1 != 0 && _str2 == 0)
	{
		mystrcpy(_dest, _str1);
		return;
	}
	if (_str1 == 0 && _str2 != 0)
	{
		mystrcpy(_dest, _str2);
		return;
	}
	if (*_dest != 0) { free(*_dest); *_dest = 0; }

	int str1Len = mystrlen(_str1);
	int str2Len = mystrlen(_str2);
	*_dest = (char*)malloc(sizeof(char) * (str1Len + str2Len + 1));
	if (*_dest)
	{
		for (int i = 0; i < str1Len; ++i)
		{
			*(*_dest + i) = *(_str1 + i);
		}

		for (int i = 0; i < str2Len; ++i)
		{
			*(*_dest + str1Len + i) = *(_str2 + i);
		}
		*(*_dest + str1Len + str2Len) = NULL;

	}



}