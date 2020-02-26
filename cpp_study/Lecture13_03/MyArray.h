#pragma once
#include <assert.h> // for assert()
#include <iostream>

template<typename T, unsigned int T_SIZE>	//m_length 대신 template parameter를 하나 추가한다
											//대신 T_SIZE는 compile time때 알려져있어야한다
class MyArray
{
private:
	T* m_data;	// T m_data[T_SIZE]

public:
	MyArray()
	{
		m_length = 0;
		m_data = nullptr;
	}

	MyArray(int length)
	{
		m_data = new T[T_SIZE];
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

	T& operator [] (int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	int getLength()
	{
		return m_length;
	}

	void print();		// move definition location을 통해 밖으로 빼냄

};
