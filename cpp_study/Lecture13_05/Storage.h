#pragma once

template<typename T>
class Storage8
{
private:
	T m_array[8];

public:
	void set(int index, const T& value)
	{
		m_array[index] = value;
	}

	const T& get(int index)
	{
		return m_array[index];
	}

};

template <>
class Storage8<bool>	//bool은 true,false이기 때문에 1bit로 표현할 수 있지만, 메모리 주소 체계가  1byte 단위로 돼있기 때문에 1byte로 할당된다
{
private:
	unsigned char m_data;	//unsigned char: 부호가 없는 1byte의 메모리를 차지하는 data형식

public:
	Storage8() : m_data(0)
	{}

	void set(int index, bool value)
	{
		unsigned char mask = 1 << index;	//bit mask(lecture 03_09)

		if (value)
			m_data |= mask;
		else
			m_data &= ~mask;
	}

	bool get(int index)
	{
		unsigned char mask = 1 << index;
		return (m_data & mask) != 0;
	}

};