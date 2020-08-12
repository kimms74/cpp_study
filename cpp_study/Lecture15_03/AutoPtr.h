#pragma once
#include <iostream>

template<class T>
class AutoPtr
{
private:
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

	//AutoPtr(const AutoPtr& a)	//copy constructor	//parameter로 l-value reference 사용
	//{
	//	std::cout << "AutoPtr copy constructor " << std::endl;

	//	//deep copy		//deep copy는 값을 하나하나 복사하므로 느리다
	//	m_ptr = new T;
	//	*m_ptr = *a.m_ptr;	//m_ptr이 Resource같은 class일 경우에는 copy assignment operator overloading된 것를 호출해 deep copying을 할 것이다
	//}

	//AutoPtr& operator = (const AutoPtr& a)	//copy assignment	//parameter로 l-value reference 사용
	//{
	//	std::cout << "AutoPtr copy assignment " << std::endl;

	//	if (&a == this)		//prevent self-assignment
	//		return *this;

	//	if (m_ptr != nullptr) delete m_ptr;

	//	//deep copy
	//	m_ptr = new T;
	//	*m_ptr = *a.m_ptr;	//m_ptr이 Resource같은 class일 경우에는 copy assignment operator overloading된 것를 호출하는 것

	//	return *this;
	//}



	//AutoPtr(const AutoPtr& a) = delete;	//copy constructor를 못쓰게 막는 코드
	//AutoPtr& operator = (const AutoPtr& a) = delete;	//copy assignment를 못쓰게 막는 코드

	AutoPtr(AutoPtr&& a)				//move constructor	//r-value reference를 parameter로 받을 때 사용(shallow copy 하는것)
		: m_ptr(a.m_ptr)
	{
		a.m_ptr = nullptr;	//really necessary?	//일단 소유권을 넘겨줬으므로 깔끔하게 지워주는게 좋다

		std::cout << "AutoPtr move constructor " << std::endl;
	}
	
	AutoPtr& operator = (AutoPtr&& a)	//move assignment	//r-value reference를 parameter로 받을 때 사용(shallow copy 하는것)
	{
		std::cout << "AutoPtr move assignment " << std::endl;

		if (&a == this)	//prevent self-assignment
			return *this;

		if (!m_ptr) delete m_ptr;

		//shallow copy	//어차피 r-value는 사라지므로 shallow써도 상관없다		//move semantics
		m_ptr = a.m_ptr;	//본체를 다 옮기는 것이 아니라 m_ptr의 pointer만 옮기는 것
		a.m_ptr = nullptr;	//really necessary?	//일단 소유권을 넘겨줬으므로 깔끔하게 지워주는게 좋다

		return *this;
	}


	T& operator*() const { return *m_ptr; }	//전역변수를 return할 때는 return by reference 사용
	T* operator->() const { return m_ptr; }	//동작할당을 return할 때는 return by pointer 사용
	bool isNull() const { return m_ptr == nullptr; }
};