#pragma once

#include <string>
#include <iostream>

class Person
{
private:
	std::string m_name;

public:
	Person(const std::string& name_in = "No Name")
		:m_name(name_in) {}

	void setName(const std::string& name_in)
	{
		m_name = name_in;
	}

	std::string getName() const	//Studnet, Teacher class의 output 함수 parameter가 const 이기때문에 const 붙여줘야함
	{							//헷갈리지 않기 위해서는 평소에 get함수들은 const를 붙이자!
		return m_name;
	}

	void doNothing() const
	{
		std::cout << m_name << " is doing nothing " << std::endl;
	}

};