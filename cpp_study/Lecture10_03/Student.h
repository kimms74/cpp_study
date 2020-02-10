#pragma once
#include <string>

class Student
{
private:
	std::string m_name;
	int m_intelligence;
	//TODO: add more members like address, phone, favorate food, habits, ...

public:
	Student(const std::string name_in=" ", const int& intel_in=0)
		:m_name(name_in), m_intelligence(intel_in)
	{}

	void setName(const std::string& name_in)
	{
		m_name = name_in;
	}

	void setIntel(const int& intel_in)
	{
		m_intelligence = intel_in;
	}

	std::string getName()
	{
		return m_name;
	}
	
	int getIntel()
	{
		return m_intelligence;
	}

	friend std::ostream& operator << (std::ostream& out, const Student& student)
	{
		out << student.m_name << " "<< student.m_intelligence;

		return out;
	}
};