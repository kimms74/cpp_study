#include "MyArray.h"

//void MyArray::print()			//class template�� �� ������ �̷��� ������ ��
//{
//	for (int i = 0; i < m_length; ++i)
//		std::cout << m_data[i] << " ";
//	std::cout << std::endl;
//}


template<typename T>			//class template�� ����߱� ������ template�� ���� �������´�
void MyArray<T>::print()		//MyArray���� <T>�� Ȯ���� �� �ִ�
{
	for (int i = 0; i < m_length; ++i)
		std::cout << m_data[i] << " ";
	std::cout << std::endl;
}

//print() member function body�� hadder���Ͽ� ���� ���� ���������� �۵������� cpp���Ϸ� �ű�� link ���� �߻��Ѵ�
//cpp���Ϸ� �ű�� �Ǹ� Lecture13_02�� MyArray<char> my_array(10);���� <char>�̶�� ���� cpp���Ͽ����� �� �� ���⶧���̴�
//�׷��Ƿ� cpp���Ͽ� ���� explicit instantiation�� ������Ѵ�

//explicit instantiation
//template void MyArray<char>::print();		//�̷��� �ϸ� ������ �ٸ� �Լ��� ����� �ϵ� �ֱ⶧���� ������ type���� ���ִ� �� ��ȿ�����̴�
//template void MyArray<double>::print();	

template class MyArray<char>;	//print() �Լ��� ���ؼ��� �ƴ� MyArray Ŭ���� ��ü�� explicit instantiation���ش�
template class MyArray<double>;