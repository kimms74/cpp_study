#include "Storage.h"

template <>						//template specialization�� cpp�� ���� main ���Ͽ��� ���縦 �� �� ���� �ȴ�
void Storage<double>::print()	//�ذ�� 1: ���� header�� �ִ´�, �ذ�� 2: main ���Ͽ� cpp�� include�Ѵ�
{								//header�� �ִ°� ����
	std::cout << "Double type ";
	std::cout << std::scientific << m_value << '\n';
}