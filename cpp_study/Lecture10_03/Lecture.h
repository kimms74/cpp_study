#pragma once
#include <string>
#include "Teacher.h"
#include "Student.h"

class Lecture
{
private:
	std::string m_name;

	//Teacher teacher;
	//std::vector<Student> students;

	Teacher* teacher;
	std::vector<Student*> students;	//students�� vector�� instance�̰� vector�� Lecture�� member�̹Ƿ�, Lecture�� ����� �� students�� ���������
									//Student*�� ����Ű�� ���� �״�� �����Ѵ�
public:
	Lecture(const std::string name_in)
		:m_name(name_in)
	{}

	~Lecture()
	{
		//do NOT delete teacher
		//do NOT delete students
	}

	//void assignTeacher(const Teacher& teacher_in)
	//{
	//	teacher = teacher_in;
	//}

	void assignTeacher(Teacher* const teacher_in)	//�� �տ� const�� ��������??
	{												//const Teacher* type�� Teacher* type�� ���� �� ����
		teacher = teacher_in;
	}

	//void registerStudent(const Student& student_in)
	//{
	//	students.push_back(student_in);	//push_back()�� ���� ����ǹǷ� &student_input != &students[0]�̴�
	//}

	void registerStudent(Student* student_in)
	{
		students.push_back(student_in);	
	}

	void study()
	{
		std::cout << m_name << " Study " << std::endl << std::endl;

		//for (auto& element : students) //Note: 'auto element' doesn't work //&�� �Ⱥ��̸� �����ؿ��Ƿ�
		//	element.setIntel(element.getIntel() + 1);

		for (auto& element : students)	//Note: 'auto element' works //�ּҸ� �����ϹǷ� ���� �ּҰ� ����
			(*element).setIntel((*element).getIntel() + 1);
	}

	friend std::ostream& operator << (std::ostream& out, const Lecture& lecture)
	{
		out << "Lecture name: " << lecture.m_name << std::endl;

		//out << lecture.teacher << std::endl;
		//for (auto element : lecture.students)
		//	out << element << std::endl;

		out << lecture.teacher << std::endl;
		for (auto element : lecture.students)
			out << *element << std::endl;

		return out;
	}
};