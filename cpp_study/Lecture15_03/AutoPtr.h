#pragma once
#include <iostream>

template<class T>
class AutoPtr
{
public:
	T* m_ptr;

public:
	AutoPtr(T* ptr = nullptr)		//default parameter �����
		: m_ptr(ptr)
	{
		std::cout << "AutoPtr default constructor " << std::endl;
	}

	AutoPtr(const AutoPtr& a)	//copy constructor	//parameter�� l-value reference ���
	{
		std::cout << "AutoPtr copy constructor " << std::endl;

		//deep copy		//deep copy�� ���� �ϳ��ϳ� �����ϹǷ� ������
		m_ptr = new T;
		*m_ptr = *a.m_ptr;	//m_ptr�� Resource���� class�� ��쿡�� copy assignment operator overloading�� �͸� ȣ���ϴ� ��
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

	T& operator*() const { return *m_ptr; }	//���������� return�� ���� return by reference ���
	T* operator->() const { return m_ptr; }	//�����Ҵ��� return�� ���� return by pointer ���
	bool isNull() const { return m_ptr == nullptr; }
};