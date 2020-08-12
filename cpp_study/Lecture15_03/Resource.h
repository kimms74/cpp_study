#pragma once
#include <iostream>

class Resource
{
	//private:
public:
	int* m_data = nullptr;	//���Ѵٸ� template�� ����ؼ� int�� �Ϲ�ȭ�� ���� �ִ�
	unsigned m_length = 0;

public:
	Resource()
	{
		std::cout << "Resource default constructed" << std::endl;
	}

	Resource(unsigned length)
	{
		std::cout << "Resource length constructed" << std::endl;

		this->m_data = new int[length];	//this->�Ⱥٿ��� ��
		this->m_length = length;		//this->�Ⱥٿ��� ��
	}

	Resource(const Resource& res)
	{
		std::cout << "Resource copy constructed" << std::endl;

		Resource(res.m_length);

		for (unsigned i = 0; i < m_length; ++i)	//deep copying(���� ����)	//lecture09_11 ����
			m_data[i] = res.m_data[i];			//�ּҰ��� �����ϴ� �� �ƴ� data ��ü�� ������ �ִ°�
	}

	~Resource()
	{
		std::cout << "Resource dstroyed " << std::endl;

		if (m_data != nullptr) delete[] m_data;
	}

	Resource& operator = (Resource& res)
	{
		std::cout << "Resource copy assignment" << std::endl;

		if (&res == this) return *this;

		if (this->m_data != nullptr) delete[] m_data;	//copy assignment�� copy�� memory�� ������ ���� �� �ֱ� ������ �����ִ� ��
		
		m_length = res.m_length;
		m_data = new int[m_length];

		for (unsigned i = 0; i < m_length; ++i)	//deep copying(���� ����)	//memory�� ���� ����������� trouble �߻����� �ʴ´�
			m_data[i] = res.m_data[i];

		return *this;
	}

	void print()
	{
		for (unsigned i = 0; i < m_length; ++i)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}
};