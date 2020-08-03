#include <iostream>
#include "MyConstant.h"

//extern int a;	//초기화를 안하면 빌드는 돼도 오류가 난다, 메모리 할당을 못받으므로

extern int a =123;	//non-const 변수는 기본적으로 external이므로 extern을 안붙여도 된다

void doWhat()	//함수는 기본적으로 external이므로 extern을 안붙인다
{
	using namespace std;

	cout << "In test.cpp " << Constants::pi << " " << &Constants::pi << endl;
	
}