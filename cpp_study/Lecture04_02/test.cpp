#include <iostream>
#include "MyConstant.h"

extern int a =123;	//�ʱ�ȭ�� �����ָ� �޸𸮿� �Ҵ��� �ȵȴ�!

void doWhat()
{
	using namespace std;

	cout << "In test.cpp " << Constants::pi << " " << &Constants::pi << endl;
	
}