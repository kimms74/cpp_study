#pragma once

//#include <iostream>
#include <string>
#include "Position2D.h"

class Monster
{
private:
	std::string m_name;	//string class�� ���������� char* data, unsigned length ����Ѵ�
	//int m_x;	//location�� class�� ���°� ����
	//int m_y;  //������ ���̸� class�� �ɰ��� �ɷ��� �߿��ϴ�
	Position2D m_location;	//class�� ����ϰ� ǥ�� //m_location�� Moster�� composition�̴�
							//������ m_location�� �ٸ� class���� ������ �ʴ´�(Position2D�� ������ member�� �������� ����)
							//Monster class�� Position2D�� ���� �˾ƾ�������, Position2D�� Monster�� ���� �� �ʿ�����Ƿ� �ܹ����̴�		
public:
	//Monster(const std::string name_in, const int& x_in, const int& y_in)	//parameter���� const reference�� ��� ����� ���� �� �ִ�)
	//	: m_name(name_in), m_x(x_in), m_y(y_in)
	//{}

	Monster(const std::string name_in, const Position2D& pos_in)	//parameter���� const reference�� ��� ����� ���� �� �ִ�)
		: m_name(name_in), m_location(pos_in)
	{}

	//void moveTo(const int& x_target, const int& y_target)
	//{
	//	m_x = x_target;
	//	m_y = y_target;
	//}

	void moveTo(const Position2D& pos_target)
	{
		m_location.set(pos_target);		//moster class������ set�� ���� �� ���� �ȴ�(��ɸ� ������ ���� �ǹǷ�)
	}

	friend std::ostream& operator << (std::ostream& out, const Monster& monster)
	{
		//out << monster.m_name << " " << monster.m_x << " " << monster.m_y << std::endl;	//friend �Լ��� this�� ���� �Ⱥٿ��ֹǷ� member selector ����ؾ���
		out << monster.m_name << " " << monster.m_location;

		return out;
	}
};