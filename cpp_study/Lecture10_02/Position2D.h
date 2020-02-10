#pragma once

#include <iostream>

class Position2D
{
private:
	int m_x;
	int m_y;

public:
	Position2D(const int& x_in, const int& y_in)
		: m_x(x_in), m_y(y_in)
	{}

	void set(const int& x_target, const int& y_target)
	{
		m_x = x_target;
		m_y = y_target;
	}

	void set(const Position2D& pos_target)
	{
		//m_x = pos_target.m_x;
		//m_y = pos_target.m_y;
		set(pos_target.m_x, pos_target.m_y);	//같은 기능이 있으면 중복 작성말고 활용하기
	}											//나중에 코드 수정할 때 하나만 고치면 다 바뀌므로

	//TODO: overload operator = 으로도 assignment 가능

	friend std::ostream& operator << (std::ostream& out, const Position2D& pos2d)
	{
		out << pos2d.m_x << " " << pos2d.m_y;	//friend 함수는 this를 직접 안붙여주므로 member selector 사용해야함

		return out;
	}
};