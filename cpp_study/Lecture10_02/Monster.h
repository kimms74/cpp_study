#pragma once

//#include <iostream>
#include <string>
#include "Position2D.h"

class Monster
{
private:
	std::string m_name;	//string class는 내부적으로 char* data, unsigned length 사용한다
	//int m_x;	//location도 class로 묶는게 낫다
	//int m_y;  //여러번 쓰이면 class로 쪼개는 능력이 중요하다
	Position2D m_location;	//class로 깔끔하게 표현 //m_location이 Moster의 composition이다
							//하지만 m_location은 다른 class에서 쓰이지 않는다(Position2D가 쓰이지 member가 쓰이지는 않음)
							//Monster class는 Position2D에 대해 알아야하지만, Position2D는 Monster에 대해 알 필요없으므로 단방향이다		
public:
	//Monster(const std::string name_in, const int& x_in, const int& y_in)	//parameter에서 const reference일 경우 상수를 넣을 수 있다)
	//	: m_name(name_in), m_x(x_in), m_y(y_in)
	//{}

	Monster(const std::string name_in, const Position2D& pos_in)	//parameter에서 const reference일 경우 상수를 넣을 수 있다)
		: m_name(name_in), m_location(pos_in)
	{}

	//void moveTo(const int& x_target, const int& y_target)
	//{
	//	m_x = x_target;
	//	m_y = y_target;
	//}

	void moveTo(const Position2D& pos_target)
	{
		m_location.set(pos_target);		//moster class에서는 set에 대해 잘 몰라도 된다(기능만 가져와 쓰면 되므로)
	}

	friend std::ostream& operator << (std::ostream& out, const Monster& monster)
	{
		//out << monster.m_name << " " << monster.m_x << " " << monster.m_y << std::endl;	//friend 함수는 this를 직접 안붙여주므로 member selector 사용해야함
		out << monster.m_name << " " << monster.m_location;

		return out;
	}
};