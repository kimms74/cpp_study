#pragma once

#include <iostream>

template<class T>
class AutoPtr
{
public:
	T* m_ptr = nullptr;

public:
	AutoPtr(T* ptr = nullptr)		//default parameter 사용함
		: m_ptr(ptr)
	{
	}

	AutoPtr(AutoPtr& a)				//copy constructor처럼 구현했지만 copy constructor가 아님
	{
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;
	}

	AutoPtr& operator = (AutoPtr& a)	//copy assignment (연산자 overloading이랑은 다르다!)처럼 구현했지만 copy는 아님
	{
		if (&a == this)		//비교했을 때 pointer가 같으면 그냥 *this를 내보냄
			return *this;

		delete m_ptr;		//비교했을 때 pointer가 다르다면 a의 m_ptr을 복사해 넣고 a의 ptr을 없애버리고 *this를 내보냄
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;
		return *this;
	}
	~AutoPtr()
	{
		if (m_ptr != nullptr) delete m_ptr;
	}

	T& operator*() const { return *m_ptr; }	//전역변수를 return할 때는 return by reference 사용
	T* operator->() const { return m_ptr; }	//동작할당을 return할 때는 return by pointer 사용
	bool isNull() const { return m_ptr == nullptr; }
};