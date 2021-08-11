#include <iostream>

//������(Constructor)
class CWeapon
{
public:
	//��ȯ���� ���� Ŭ������� �Ȱ��� �Լ��� '������' ��� �θ���. 
	//���� �츮�� �ƹ��͵� �ȳ����� Default Constructor�� �ڵ����� �����.
	//��� �ʱ�ȭ ����Ʈ(Member Initialization List)
	CWeapon() :
		m_fDurability(0.0f),
		m_iAtk(0),
		m_dAtkSpeed(0.0) {
		std::cout << "CWeapon Constructor<default>" << std::endl;
	}
	//���������(Copy Constructor)
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
	//�Ҹ���(Destructor)
	//�����ڿ� ���������� Default Destructor�� �ִ�.
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
//ĸ��ȭ(Encapsualization)�� �� ���ִ� class ���� ��쿣 ��ɸ� ���� �Ǳ� ������
//�ؿ� ��� �������� ��Ƶδ� ���� �������� ����.
private:
	int m_iAtk;
	const double m_dAtkSpeed;
	float m_fDurability;
	
};

//�Լ� �����ε�(Function Overloading)
int SumI(int _lhs, int _rhs) { return _lhs + _rhs; }
float SumF(float _lhs, float _rhs) { return _lhs + _rhs; }
//C���� �Լ����� ���Ƽ� ����������. 
//������ C++���� �Լ� �����ε����� �ش� �ڷ����� ������ Ÿ���� ã�Ƽ� �ڵ��������ش�.
//�ٸ� ��ȯ���� ���ƾ��Ѵ� �Ű������� �޶�� �۵��Ѵ�.
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
// &(Reference), ���� // �����Ϳʹ� �ٸ���. �Ű������� �����ؼ� �޴°� �ƴ� ������ �ϹǷ� �޸𸮸� ���� ��Ƹ��� �ʴ´�.
//�����ʹ� ������ ���� ���� �־��� �� ������ (�޸� �ּҰ� �־)
//������ ������ �ٷ� �ʱ�ȭ�� ������߸� �Ѵ�.
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
	std::cout << lhs << " / " << rhs << "����&" << std::endl;
	Swap_1(&lhs, &rhs);
	std::cout << lhs << " / " << rhs <<"������*"<< std::endl;

	return 0;
}