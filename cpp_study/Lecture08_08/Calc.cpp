#include "Calc.h"

using namespace std;	// cpp������ �ٸ� ���Ͽ� ������ �� ���� ���⶧���� ����ص� �ȴ�

Calc::Calc(int init_value)
	: _value(init_value)
{}

Calc &Calc::add(int value_in)	//header file�� �ۼ��� ���� 
{										//Quick actions and refactoring
	_value += value_in;					//>>create declation and definition
	return *this;						//&move definition location �ϸ�
}										//�տ� inline�� �ٴµ� ��ǻ�Ͱ� �ǵ��� �����ؼ� ���ΰ�
										//�����ִ°� ����
Calc &Calc::sub(int value_in)	//inline�� �Լ��� �ݺ������� ������ ��
{										//�ߺ����� ������ �������� ���� ���� �Լ� ���� �ڵ带 compiler�� ������ �����Ű�� ��
	_value -= value_in;					//ũ�� �ӵ� ���� ����
	return *this; 
}

Calc &Calc::mult(int value_in)
{
	_value *= value_in;
	return *this;
}

void Calc::print()
{
	std::cout << _value << std::endl;
}
