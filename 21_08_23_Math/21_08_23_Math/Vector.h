#ifndef _VECTOR_H_
#define _VECTOR_H_
#include <iostream>
using namespace std;
class Vector
{
private:
	float m_fX;
	float m_fY;
	float m_fZ;
	//같은 클레스의 다른 객체 a,b,c가 모두 static변수 하나를 공유함 (static은 정적으로 로컬범위뿐 아니라 전역에 지정이됨)
	static int static_value;


public:
	Vector();
	Vector(float _x, float _y, float _z);
	Vector(const Vector& _vec);
	~Vector();
	//내적은 |a||b|*cos(Θ) : 물체에서 밝기 계산할때 광원과 물체의 법선벡터를 내적해서 세타값을 알아내 밝기를 적용시킨다..
	float Dot(const Vector& _vec);
	//외적은 ((AyBz - AzBy),(AzBx - AxBz),(AxBy - AyBx)) , 크기를 구해보면 |a||b|sinΘ 이고 이는 a와 b벡터와 끼인각이 Θ인 평행사변형의 넓이가 된다.
	//ad-bc
	Vector Cross(const Vector& _vec);
	// * :내적(Dot Product)
	// ^ :외적(Cross Product)
	float Length();
	float Distance(const Vector& _vec);
	//static으로 함수를 만들면 객체를 만들지 않고도 호출을 할 수 있다.
	static float Distance(const Vector& _vec1, const Vector& _vec2);
	//정규화(Normalize)
	// -> 단위벡터(Unit Vector), 방향벡터(Direction Vector)
	// -> 법선벡터(Normal Vector)
	void Normalize();

public:
	Vector operator+(const Vector& _vec);
	Vector operator-(const Vector& _vec);
	friend Vector operator-(const Vector& _lhs, const Vector& _rhs);
	Vector operator*(float _scalar);
	Vector operator/(float _scalar);

	Vector& operator+=(const Vector& _vec);
	Vector& operator-=(const Vector& _vec);
	Vector& operator*=(float _scalar);
	Vector& operator/=(float _scalar);
	
	bool operator==(const Vector& _vec);
	bool operator!=(const Vector& _vec);

	Vector& operator=(const Vector& _vec);

	//friend : 다른class의 private 변수까지 접근할 수 있는 권한을 주는 것
public:
	friend std::ostream& operator<<(std::ostream& _os, const Vector& _vec);
};

#endif

