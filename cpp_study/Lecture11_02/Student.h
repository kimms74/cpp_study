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

	void setIntel(const int& intel_in)	//setIntel,getIntel�� Student.h�� �־��� 
	{									//Person���� m_intel�� ���� �����̴�
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
		//out << student.m_name << " " << student.m_intel;	//m_name�� Person �ȿ� private���� �������
		out << student.getName() << " " << student.m_intel;	//student���� getName()�� ȣ���ϴµ� getName()�� Person class�� ���������Ƿ�
															//student�� parameter���� const�� �޾ƿ��� ������ getName() �ڿ� const�� �ٿ������
		return out;
	}
};