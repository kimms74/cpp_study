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

	~AutoPtr()
	{
		std::cout << "AutoPtr destructor " << std::endl;

		if (m_ptr != nullptr) delete m_ptr;
	}

	AutoPtr(const AutoPtr& a)	//copy constructor	//parameter로 l-value reference 사용
	{
		std::cout << "AutoPtr copy constructor " << std::endl;

		//deep copy		
		m_ptr = new T;
		*m_ptr = *a.m_ptr;	
	}

	AutoPtr& operator = (const AutoPtr& a)	//copy assignment	//parameter로 l-value reference 사용
	{
		std::cout << "AutoPtr copy assignment " << std::endl;

		if (&a == this)		//prevent self-assignment
			return *this;

		if (m_ptr != nullptr) delete m_ptr;

		//deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr;	//m_ptr이 Resource같은 class일 경우에는 copy assignment operator overloading된 것를 호출하는 것

		return *this;
	}



	//AutoPtr(const AutoPtr& a) = delete;	//copy constructor를 못쓰게 막는 코드
	//AutoPtr& operator = (const AutoPtr& a) = delete;	//copy assignment를 못쓰게 막는 코드

	AutoPtr(AutoPtr&& a)				//move constructor	//r-value reference 사용
		: m_ptr(a.m_ptr)
	{
		a.m_ptr = nullptr;	

		std::cout << "AutoPtr move constructor " << std::endl;
	}

	AutoPtr& operator = (AutoPtr&& a)	//move assignment	//r-value reference 사용
	{
		std::cout << "AutoPtr move assignment " << std::endl;

		if (&a == this)	//prevent self-assignment
			return *this;

		if (!m_ptr) delete m_ptr;

		//shallow copy	
		m_ptr = a.m_ptr;	
		a.m_ptr = nullptr;	

		return *this;
	}


	T& operator*() const { return *m_ptr; }	//전역변수를 return할 때는 return by reference 사용
	T* operator->() const { return m_ptr; }	//동작할당을 return할 때는 return by pointer 사용
	bool isNull() const { return m_ptr == nullptr; }
};