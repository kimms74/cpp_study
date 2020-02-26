#include "MyArray.h"

//void MyArray::print()			//class template을 안 썼더라면 이렇게 나왔을 것
//{
//	for (int i = 0; i < m_length; ++i)
//		std::cout << m_data[i] << " ";
//	std::cout << std::endl;
//}


template<typename T>			//class template을 사용했기 때문에 template도 같이 빠져나온다
void MyArray<T>::print()		//MyArray옆에 <T>를 확인할 수 있다
{
	for (int i = 0; i < m_length; ++i)
		std::cout << m_data[i] << " ";
	std::cout << std::endl;
}

//print() member function body가 hadder파일에 있을 때는 정상적으로 작동했지만 cpp파일로 옮기면 link 에러 발생한다
//cpp파일로 옮기게 되면 Lecture13_02의 MyArray<char> my_array(10);에서 <char>이라는 것을 cpp파일에서는 알 수 없기때문이다
//그러므로 cpp파일에 따로 explicit instantiation을 해줘야한다

//explicit instantiation
//template void MyArray<char>::print();		//이렇게 하면 되지만 다른 함수를 사용할 일도 있기때문에 일일이 type마다 쳐주는 건 비효율적이다
//template void MyArray<double>::print();	

template class MyArray<char>;	//print() 함수에 대해서만 아닌 MyArray 클래스 자체를 explicit instantiation해준다
template class MyArray<double>;