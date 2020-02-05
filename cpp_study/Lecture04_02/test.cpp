#include <iostream>
#include "MyConstant.h"

extern int a =123;	//초기화를 안해주면 메모리에 할당이 안된다!

void doWhat()
{
	using namespace std;

	cout << "In test.cpp " << Constants::pi << " " << &Constants::pi << endl;
	
}