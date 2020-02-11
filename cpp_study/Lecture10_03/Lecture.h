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
	std::vector<Student*> students;	//students는 vector의 instance이고 vector는 Lecture의 member이므로, Lecture가 사라질 때 students는 사라지지만
									//Student*가 가르키는 것은 그대로 존재한다
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

	void assignTeacher(Teacher* const teacher_in)	//왜 앞에 const를 빼야하지??
	{												//const Teacher* type을 Teacher* type에 넣을 수 없다
		teacher = teacher_in;
	}

	//void registerStudent(const Student& student_in)
	//{
	//	students.push_back(student_in);	//push_back()에 들어갈때 복사되므로 &student_input != &students[0]이다
	//}

	void registerStudent(Student* student_in)
	{
		students.push_back(student_in);	
	}

	void study()
	{
		std::cout << m_name << " Study " << std::endl << std::endl;

		//for (auto& element : students) //Note: 'auto element' doesn't work //&를 안붙이면 복사해오므로
		//	element.setIntel(element.getIntel() + 1);

		for (auto& element : students)	//Note: 'auto element' works //주소를 복사하므로 같은 주소가 들어간다
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