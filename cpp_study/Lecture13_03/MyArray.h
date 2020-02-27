#pragma once
#include <assert.h> // for assert()
#include <iostream>

template<typename T, unsigned int T_SIZE>	//m_length 대신 template parameter를 하나 추가한다
											//대신 T_SIZE는 compile time때 알려져있어야한다
class MyArray
{
private:
	T* m_data;	// T m_data[T_SIZE]: stack은 메모리가 작으므로 동적할당으로 heap에 잡는게 좋다
				//T_SIZE가 작을 경우에는 그냥 stack에 쌓아도 됨
public:
	MyArray()
	{
		m_data = new T [T_SIZE];
	}

	~MyArray()
	{
		delete[] m_data;
	}

	T& operator [] (int index)		//member function으로 작성할 경우 opeartor의 parameter는 한개만 들어가야한다
	{								//이 클래스가 member function을 부르는 개념이기 때문에 []앞에 class instance가 적혀있어야한다( ex) myarray[10])
		assert(index >= 0 && index < T_SIZE);
		return m_data[index];
	}

	int getLength()
	{
		return T_SIZE;
	}

	void print()		// explicit instantiation을 할 경우 0~마지막 숫자까지 일일이 다 해줘야한다(lecture 13_02 MyArray.cpp파일 확인하기)
	{					// 그러므로 non-type template parameter를 쓸 경우에는 전부 헤더에 집어넣는게 좋다
		for (int i = 0; i < T_SIZE; ++i)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}
};
