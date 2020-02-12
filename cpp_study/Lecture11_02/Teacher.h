#pragma once

//#include <string>
#include "Person.h"

class Teacher : public Person
{
private:
	//std::string m_name;


public:
	Teacher(const std::string& name_in = "No Name")
		:Person(name_in)
	{}

	void teach()
	{
		std::cout << getName() << " is teaching " << std::endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Teacher& teacher)
	{
		//out << teacher.m_name;	//m_name이 Person 안에 private으로 들어있음
		out << teacher.getName();	//teacher에서 getName()을 호출하는데 getName()은 Person class에 속해있으므로
									//teacher를 parameter에서 const로 받아오기 때문에 getName() 뒤에 const를 붙여줘야함
		return out;
	}
};