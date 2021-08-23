#include <iostream>
#include <math.h>
#include "Vector.h"

int main()
{

	Vector v1(3, 4, 1);
	Vector v2(3, 4, 1);
	Vector v3, v4;
	v3 = v1.operator+(v2); // v3 = v1 + v2;
	v4 = v1 - v2;
	v3 = v1;
	v3 *= 3.0f;
	cout << "v1 == v2 :" << (v1 == v2) << endl;
	cout << "v1 != v2 :" << (v1 != v2) << endl;
	cout << "v1 + v2 :" << (v1 + v2) << endl;
	cout << "v1 - v2 :" << v4 << endl;
	cout << "v1 += v2:" << (v1 += v2) << endl;
	cout << "v1-= v2:" << (v1 -= v2) << endl;
	cout << v1 << v2 << v3 <<endl;
	cout << "v3 *= 3.0f :" << (v3 *= 3.0f) << endl;

	v3.Normalize();
	cout << "v3: " << v3 << endl;
	cout << "v3 LengthL " << v3.Length() << endl;
	return 0;
}