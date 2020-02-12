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

	std::string getName() const	//Studnet, Teacher class�� output �Լ� parameter�� const �̱⶧���� const �ٿ������
	{							//�򰥸��� �ʱ� ���ؼ��� ��ҿ� get�Լ����� const�� ������!
		return m_name;
	}

	void doNothing() const
	{
		std::cout << m_name << " is doing nothing " << std::endl;
	}

};