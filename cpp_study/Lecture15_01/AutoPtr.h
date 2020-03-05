#pragma once

#include <iostream>

template<class T>
class AutoPtr
{
public:
	T* m_ptr = nullptr;

public:
	AutoPtr(T* ptr = nullptr)		//default parameter �����
		: m_ptr(ptr)
	{
	}

	AutoPtr(AutoPtr& a)				//copy constructoró�� ���������� copy constructor�� �ƴ�
	{
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;
	}

	AutoPtr& operator = (AutoPtr& a)	//copy assignment (������ overloading�̶��� �ٸ���!)ó�� ���������� copy�� �ƴ�
	{
		if (&a == this)		//������ �� pointer�� ������ �׳� *this�� ������
			return *this;

		delete m_ptr;		//������ �� pointer�� �ٸ��ٸ� a�� m_ptr�� ������ �ְ� a�� ptr�� ���ֹ����� *this�� ������
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;
		return *this;
	}
	~AutoPtr()
	{
		if (m_ptr != nullptr) delete m_ptr;
	}

	T& operator*() const { return *m_ptr; }	//���������� return�� ���� return by reference ���
	T* operator->() const { return m_ptr; }	//�����Ҵ��� return�� ���� return by pointer ���
	bool isNull() const { return m_ptr == nullptr; }
};