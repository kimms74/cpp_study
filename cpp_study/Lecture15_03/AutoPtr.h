#pragma once
#include <iostream>

template<class T>
class AutoPtr
{
private:
	T* m_ptr;

public:
	AutoPtr(T* ptr = nullptr)		//default parameter �����
		: m_ptr(ptr)
	{
		std::cout << "AutoPtr default constructor " << std::endl;
	}

	~AutoPtr()
	{
		std::cout << "AutoPtr destructor " << std::endl;

		if (m_ptr != nullptr) delete m_ptr;
	}

	//AutoPtr(const AutoPtr& a)	//copy constructor	//parameter�� l-value reference ���
	//{
	//	std::cout << "AutoPtr copy constructor " << std::endl;

	//	//deep copy		//deep copy�� ���� �ϳ��ϳ� �����ϹǷ� ������
	//	m_ptr = new T;
	//	*m_ptr = *a.m_ptr;	//m_ptr�� Resource���� class�� ��쿡�� copy assignment operator overloading�� �͸� ȣ���� deep copying�� �� ���̴�
	//}

	//AutoPtr& operator = (const AutoPtr& a)	//copy assignment	//parameter�� l-value reference ���
	//{
	//	std::cout << "AutoPtr copy assignment " << std::endl;

	//	if (&a == this)		//prevent self-assignment
	//		return *this;

	//	if (m_ptr != nullptr) delete m_ptr;

	//	//deep copy
	//	m_ptr = new T;
	//	*m_ptr = *a.m_ptr;	//m_ptr�� Resource���� class�� ��쿡�� copy assignment operator overloading�� �͸� ȣ���ϴ� ��

	//	return *this;
	//}



	//AutoPtr(const AutoPtr& a) = delete;	//copy constructor�� ������ ���� �ڵ�
	//AutoPtr& operator = (const AutoPtr& a) = delete;	//copy assignment�� ������ ���� �ڵ�

	AutoPtr(AutoPtr&& a)				//move constructor	//r-value reference�� parameter�� ���� �� ���(shallow copy �ϴ°�)
		: m_ptr(a.m_ptr)
	{
		a.m_ptr = nullptr;	//really necessary?	//�ϴ� �������� �Ѱ������Ƿ� ����ϰ� �����ִ°� ����

		std::cout << "AutoPtr move constructor " << std::endl;
	}
	
	AutoPtr& operator = (AutoPtr&& a)	//move assignment	//r-value reference�� parameter�� ���� �� ���(shallow copy �ϴ°�)
	{
		std::cout << "AutoPtr move assignment " << std::endl;

		if (&a == this)	//prevent self-assignment
			return *this;

		if (!m_ptr) delete m_ptr;

		//shallow copy	//������ r-value�� ������Ƿ� shallow�ᵵ �������		//move semantics
		m_ptr = a.m_ptr;	//��ü�� �� �ű�� ���� �ƴ϶� m_ptr�� pointer�� �ű�� ��
		a.m_ptr = nullptr;	//really necessary?	//�ϴ� �������� �Ѱ������Ƿ� ����ϰ� �����ִ°� ����

		return *this;
	}


	T& operator*() const { return *m_ptr; }	//���������� return�� ���� return by reference ���
	T* operator->() const { return m_ptr; }	//�����Ҵ��� return�� ���� return by pointer ���
	bool isNull() const { return m_ptr == nullptr; }
};