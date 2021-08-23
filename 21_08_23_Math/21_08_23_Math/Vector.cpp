#include "Vector.h"


Vector::Vector() :
	m_fX(0.0f), m_fY(0.0f), m_fZ(0.0f)
{
	cout << "Vector Default Constructor" << endl;
}

Vector::Vector(float _x, float _y, float _z) :
	m_fX(_x), m_fY(_y), m_fZ(_z)
{
	cout << "Vector Overloading Constructor" << endl;
}

Vector::Vector(const Vector& _vec) :
	m_fX(_vec.m_fX), m_fY(_vec.m_fY), m_fZ(_vec.m_fZ)
{
	cout << "Vector Copy Constructor" << endl;
}

Vector::~Vector()
{
	cout << "Vector Destructor" << endl;
}

float Vector::Dot(const Vector& _vec)
{
	return(m_fX * _vec.m_fX + m_fY * _vec.m_fY + m_fZ * _vec.m_fZ);
}

Vector Vector::Cross(const Vector& _vec)
{
	return Vector(
		m_fY * _vec.m_fZ - m_fZ * _vec.m_fY,
		m_fZ * _vec.m_fX - m_fX * _vec.m_fZ,
		m_fX * _vec.m_fY - m_fY * _vec.m_fX);
}
float Vector::Length()
{
	return sqrtf((m_fX * m_fX) + powf(m_fY, 2.0f) + (m_fZ * m_fZ));
}

float Vector::Distance(const Vector& _vec)
{
	return (*this - _vec).Length();
}

float Vector::Distance(const Vector& _vec1, const Vector& _vec2)
{
	return(_vec1 - _vec2).Length();
}

void Vector::Normalize()
{
	float len = Length();
	*this /= len;
}

Vector Vector::operator+(const Vector& _vec)
{
	//ÀÓ½Ã°´Ã¼(Temporary Object)
	return Vector(
		m_fX + _vec.m_fX,
		m_fY + _vec.m_fY,
		m_fZ + _vec.m_fZ);
}

Vector Vector::operator-(const Vector& _vec)
{
	return Vector(
		m_fX - _vec.m_fX,
		m_fY - _vec.m_fY,
		m_fZ - _vec.m_fZ);
}

Vector operator-(const Vector& _vec1, const Vector& _vec2)
{
	return Vector(
		_vec1.m_fX - _vec2.m_fX,
		_vec1.m_fY - _vec2.m_fY,
		_vec1.m_fZ - _vec2.m_fZ);
}

Vector Vector::operator*(float _scalar)
{
	return Vector(
		m_fX * _scalar,
		m_fY * _scalar,
		m_fZ * _scalar);
}

Vector Vector::operator/(float _scalar)
{
	if (_scalar == 0.0f) _scalar = 1.0f;
	return Vector(
		m_fX / _scalar,
		m_fY / _scalar,
		m_fZ / _scalar);
}
Vector& Vector::operator+=(const Vector& _vec)
{
	m_fX += _vec.m_fX;
	m_fY += _vec.m_fY;
	m_fZ += _vec.m_fZ;
	return *this;
}

Vector& Vector::operator-=(const Vector& _vec)
{
	m_fX -= _vec.m_fX;
	m_fY -= _vec.m_fY;
	m_fZ -= _vec.m_fZ;
	return *this;
}
Vector& Vector::operator*=(float _scalar)
{
	m_fX *= _scalar;
	m_fY *= _scalar;
	m_fZ *= _scalar;
	return *this;
}
Vector& Vector::operator/=(float _scalar)
{
	if (_scalar == 0.0f) _scalar = 1.0f;
	m_fX /= _scalar;
	m_fY /= _scalar;
	m_fZ /= _scalar;
	return *this;
}
bool Vector::operator==(const Vector& _vec)
{
	if (
		m_fX == _vec.m_fX &&
		m_fY == _vec.m_fY &&
		m_fZ == _vec.m_fZ
		)return true;
	else
		return false;
}

bool Vector::operator!=(const Vector& _vec)
{
	if (
		m_fX == _vec.m_fX &&
		m_fY == _vec.m_fY &&
		m_fZ == _vec.m_fZ
		)return false;
	else
		return true;
}
std::ostream& operator<<(std::ostream& _os, const Vector& _vec)
{
	//(x, y, z)
	_os << "(" << _vec.m_fX << ", " << _vec.m_fY << ", " << _vec.m_fZ << ")";
	return _os;
}

Vector& Vector::operator=(const Vector& _vec)
{
	m_fX = _vec.m_fX;
	m_fY = _vec.m_fY;
	m_fZ = _vec.m_fZ;
	return *this;
}