#pragma once

//#include <string>
#include "Person.h"

class Student : public Person
{
private:
	//std::string m_name;
	int m_intel;	//intelligence


public:
	Student(const std::string name_in = "No Name", const int& intel_in = 0)
		:Person(name_in), m_intel(intel_in)
	{}

	void setIntel(const int& intel_in)	//setIntel,getIntel은 Student.h에 둬야함 
	{									//Person에는 m_intel이 없기 때문이다
		m_intel = intel_in;
	}

	int getIntel()
	{
		return m_intel;
	}

	void study()
	{
		std::cout << getName() << " is studying " << std::endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Student& student)
	{
		//out << student.m_name << " " << student.m_intel;	//m_name이 Person 안에 private으로 들어있음
		out << student.getName() << " " << student.m_intel;	//student에서 getName()을 호출하는데 getName()은 Person class에 속해있으므로
															//student를 parameter에서 const로 받아오기 때문에 getName() 뒤에 const를 붙여줘야함
		return out;
	}
};