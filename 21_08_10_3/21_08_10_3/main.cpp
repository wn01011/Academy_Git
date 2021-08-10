//C++ 
#include <iostream> // .h가 없는게 특징 input output stream 헤더가 없으면 cpp컴파일러가 컴파일함

int main() 
{
	//standard : Namespace 스텐다드라는 이름을 가진 공간이다.
	// :: : 범위 접근 지정자 std에 접근을 할 겁니다.
	// cout : 문자를 출력하는 함수 이름
	// << : 출력 스트림
	// enl : end line 
	int val = 10;
	std::cout << "Hello, World!\n" << "test\n" << ("%d\n",val) << std::endl;

	return 0;
}