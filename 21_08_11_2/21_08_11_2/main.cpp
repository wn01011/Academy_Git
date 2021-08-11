#include <iostream>

//생성자(Constructor)
class CWeapon
{
public:
	//반환형이 없고 클래스명과 똑같은 함수를 '생성자' 라고 부른다. 
	//만약 우리가 아무것도 안넣으면 Default Constructor가 자동으로 생긴다.
	//멤버 초기화 리스트(Member Initialization List)
	CWeapon() :
		m_fDurability(0.0f),
		m_iAtk(0),
		m_dAtkSpeed(0.0) {
		std::cout << "CWeapon Constructor<default>" << std::endl;
	}
	//복사생성자(Copy Constructor)
	CWeapon(CWeapon& _weapon) :
		m_iAtk(_weapon.m_iAtk),
		m_dAtkSpeed(_weapon.m_dAtkSpeed),
		m_fDurability(_weapon.m_fDurability)
	{
		std::cout << "CWeapon Copy Constructor" << std::endl;
	}
	CWeapon(int _atk, float _durability, double _spd) :
		m_fDurability(_durability),
		m_iAtk(_atk),
		m_dAtkSpeed(_spd)
	{
		std::cout << "CWeapon Constructor" << std::endl;
		//m_iAtk = 0;
		//m_fDurability = 0;
		//m_dAtkSpeed = 0;
	}
	//소멸자(Destructor)
	//생성자와 마찬가지로 Default Destructor가 있다.
	~CWeapon() {
		std::cout << "CWeapon Destructor (" << m_iAtk << ")" << std::endl;
	}
	//Getter /Setter
	int GetAtk() {
		return m_iAtk;
	}
	void SetAtk(int _atk) {
		if (_atk > 99) return;
		m_iAtk = _atk;
	}
//캡슐화(Encapsualization)가 잘 돼있는 class 같은 경우엔 기능만 보면 되기 때문에
//밑에 멤버 변수들을 깔아두는 것이 가독성이 좋다.
private:
	int m_iAtk;
	const double m_dAtkSpeed;
	float m_fDurability;
	
};

//함수 오버로딩(Function Overloading)
int SumI(int _lhs, int _rhs) { return _lhs + _rhs; }
float SumF(float _lhs, float _rhs) { return _lhs + _rhs; }
//C에선 함수명이 같아서 에러가난다. 
//하지만 C++에선 함수 오버로딩으로 해당 자료형의 갯수나 타입을 찾아서 자동생성해준다.
//다만 반환형은 같아야한다 매개변수만 달라야 작동한다.
void Foo() { std::cout << "Foo\n" << std::endl; }
void Foo(int _i) { std::cout << "Foo int\n" << std::endl; }
void Foo(float _f) { std::cout << "Foo float\n" << std::endl; }
void Foo(int _i1, int _i2) {
	std::cout << "Foo int int\n" << std::endl;
}

void Swap_1(int* _lhs, int* _rhs)
{
	int tmp = *_lhs;
	*_lhs = *_rhs;
	*_rhs = tmp;
}
// &(Reference), 참조 // 포인터와는 다르다. 매개변수를 복사해서 받는게 아닌 참조만 하므로 메모리를 따로 잡아먹지 않는다.
//포인터는 생성후 따로 값을 넣어줄 수 있지만 (메모리 주소가 있어서)
//참조는 생성후 바로 초기화를 시켜줘야만 한다.
void Swap(int& _lhs, int& _rhs)
{
	int tmp = _lhs;
	_lhs = _rhs;
	_rhs = tmp;
}
int main()
{
	CWeapon weapon;
	CWeapon sword(1,1,1);
	CWeapon bow(sword);
	
	std::cout << std::endl;

	int lhs = 5;
	int rhs = 3;
	Swap(lhs, rhs);
	std::cout << lhs << " / " << rhs << "참조&" << std::endl;
	Swap_1(&lhs, &rhs);
	std::cout << lhs << " / " << rhs <<"포인터*"<< std::endl;

	return 0;
}