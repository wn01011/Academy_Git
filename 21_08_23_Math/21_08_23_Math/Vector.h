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
	//���� Ŭ������ �ٸ� ��ü a,b,c�� ��� static���� �ϳ��� ������ (static�� �������� ���ù����� �ƴ϶� ������ �����̵�)
	static int static_value;


public:
	Vector();
	Vector(float _x, float _y, float _z);
	Vector(const Vector& _vec);
	~Vector();
	//������ |a||b|*cos(��) : ��ü���� ��� ����Ҷ� ������ ��ü�� �������͸� �����ؼ� ��Ÿ���� �˾Ƴ� ��⸦ �����Ų��..
	float Dot(const Vector& _vec);
	//������ ((AyBz - AzBy),(AzBx - AxBz),(AxBy - AyBx)) , ũ�⸦ ���غ��� |a||b|sin�� �̰� �̴� a�� b���Ϳ� ���ΰ��� ���� ����纯���� ���̰� �ȴ�.
	//ad-bc
	Vector Cross(const Vector& _vec);
	// * :����(Dot Product)
	// ^ :����(Cross Product)
	float Length();
	float Distance(const Vector& _vec);
	//static���� �Լ��� ����� ��ü�� ������ �ʰ� ȣ���� �� �� �ִ�.
	static float Distance(const Vector& _vec1, const Vector& _vec2);
	//����ȭ(Normalize)
	// -> ��������(Unit Vector), ���⺤��(Direction Vector)
	// -> ��������(Normal Vector)
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

	//friend : �ٸ�class�� private �������� ������ �� �ִ� ������ �ִ� ��
public:
	friend std::ostream& operator<<(std::ostream& _os, const Vector& _vec);
};

#endif

