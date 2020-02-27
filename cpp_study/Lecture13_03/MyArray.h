#pragma once
#include <assert.h> // for assert()
#include <iostream>

template<typename T, unsigned int T_SIZE>	//m_length ��� template parameter�� �ϳ� �߰��Ѵ�
											//��� T_SIZE�� compile time�� �˷����־���Ѵ�
class MyArray
{
private:
	T* m_data;	// T m_data[T_SIZE]: stack�� �޸𸮰� �����Ƿ� �����Ҵ����� heap�� ��°� ����
				//T_SIZE�� ���� ��쿡�� �׳� stack�� �׾Ƶ� ��
public:
	MyArray()
	{
		m_data = new T [T_SIZE];
	}

	~MyArray()
	{
		delete[] m_data;
	}

	T& operator [] (int index)		//member function���� �ۼ��� ��� opeartor�� parameter�� �Ѱ��� �����Ѵ�
	{								//�� Ŭ������ member function�� �θ��� �����̱� ������ []�տ� class instance�� �����־���Ѵ�( ex) myarray[10])
		assert(index >= 0 && index < T_SIZE);
		return m_data[index];
	}

	int getLength()
	{
		return T_SIZE;
	}

	void print()		// explicit instantiation�� �� ��� 0~������ ���ڱ��� ������ �� ������Ѵ�(lecture 13_02 MyArray.cpp���� Ȯ���ϱ�)
	{					// �׷��Ƿ� non-type template parameter�� �� ��쿡�� ���� ����� ����ִ°� ����
		for (int i = 0; i < T_SIZE; ++i)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}
};
