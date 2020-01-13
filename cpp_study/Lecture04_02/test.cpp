#include <iostream>
#include "MyConstant.h"

extern int a =123;

void doWhat()
{
	using namespace std;

	cout << "In test.cpp " << Constants::pi << " " << &Constants::pi << endl;
	
}