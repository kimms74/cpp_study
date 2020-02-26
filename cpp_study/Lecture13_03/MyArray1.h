#pragma once
#include <assert.h> // for assert()
#include <iostream>

template<typename T>

class MyArray
{
private:
	int m_length;
	//int* m_data;
	T* m_data;

public:
	MyArray()
	{
		m_length = 0;
		m_data = nullptr;
	}

	MyArray(int length)
	{
		//m_data = new int[length];
		m_data = new T[length];
		m_length = length;
	}

	~MyArray()
	{
		reset();
	}

	void reset()
	{
		delete[] m_data;
		m_data = nullptr;
		m_length = 0;
	}

	//int& operator [] (int index)
	T& operator [] (int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	int getLength()
	{
		return m_length;
	}

	//void print()
	//{
	//	for (int i = 0; i < m_length; ++i)
	//		std::cout << m_data[i] << " ";
	//	std::cout << std::endl;


	//	//for (auto& n : m_data)	//for each는 class 내부에서는 사용 불가
	//	//	std::cout << n;			//instance가 있어야한다
	//	//std::cout << std::endl;
	//}

	void print();		// move definition location을 통해 밖으로 빼냄

};
