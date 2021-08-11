//Header: 클래스 선언

//#pragma once
//조건부 컴파일
// if not def a : a 라는게 정의 되어있지 않으면 endif만날때 까지 컴파일 진행
// 만약 한번더 컴파일 하러 들어오면 컴파일 미진행
#ifndef _CCHAR_H_
#define _CCHAR_H_

// 객체지향 프로그래밍(Object-Oriented Programming)
class CChar
{

	// 멤버변수(Member Variables)
	// class도 structure와 같이 padding이 된다.
	// 캡슐화(Encapsulation)

protected:
	//외부에서 지정된 hp와 mp exp를 바꾸지 못하도록 private으로 두고
	//public에서 Damage처리를 외부에서 할 수 있도록 한다.
private:
	int hp;
	int mp = 10;
	int exp;
	//class에는 함수가 들어간다.
	//값들도 가지고 있고 그 값들로 작동하는 기능(함수)도 들어간다.
public:
	void Damamge(int _dmg);
	void PrintMp();
};

#endif