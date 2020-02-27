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
class Storage8<bool>	//bool�� true,false�̱� ������ 1bit�� ǥ���� �� ������, �޸� �ּ� ü�谡  1byte ������ ���ֱ� ������ 1byte�� �Ҵ�ȴ�
{
private:
	unsigned char m_data;	//unsigned char: ��ȣ�� ���� 1byte�� �޸𸮸� �����ϴ� data����

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