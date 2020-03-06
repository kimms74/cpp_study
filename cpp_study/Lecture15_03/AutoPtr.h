#pragma once
#include <iostream>

template<class T>
class AutoPtr
{
public:
	T* m_ptr;

public:
	AutoPtr(T* ptr = nullptr)		//default parameter 사용함
		: m_ptr(ptr)
	{
		std::cout << "AutoPtr default constructor " << std::endl;
	}

	AutoPtr(const AutoPtr& a)	//copy constructor	//parameter로 l-value reference 사용
	{
		std::cout << "AutoPtr copy constructor " << std::endl;

		//deep copy		//deep copy는 값을 하나하나 복사하므로 느리다
		m_ptr = new T;
		*m_ptr = *a.m_ptr;	//m_ptr이 Resource같은 class일 경우에는 copy assignment operator overloading된 것를 호출하는 것
	}

	AutoPtr& operator = (const AutoPtr& a)	//copy assignment
	{
		std::cout << "AutoPtr copy assignment " << std::endl;

		if (&a == this)		//prevent self-assignment
			return *this;

		if (m_ptr != nullptr) delete m_ptr;

		//deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr;

		return *this;
	}

	~AutoPtr()
	{
		std::cout << "AutoPtr destructor " << std::endl;

		if (m_ptr != nullptr) delete m_ptr;
	}

	T& operator*() const { return *m_ptr; }	//전역변수를 return할 때는 return by reference 사용
	T* operator->() const { return m_ptr; }	//동작할당을 return할 때는 return by pointer 사용
	bool isNull() const { return m_ptr == nullptr; }
};