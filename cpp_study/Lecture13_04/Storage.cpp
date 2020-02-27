#include "Storage.h"

template <>						//template specialization을 cpp로 빼면 main 파일에서 존재를 알 수 없게 된다
void Storage<double>::print()	//해결법 1: 전부 header에 넣는다, 해결법 2: main 파일에 cpp를 include한다
{								//header에 넣는게 낫다
	std::cout << "Double type ";
	std::cout << std::scientific << m_value << '\n';
}