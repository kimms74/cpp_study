#include <iostream>
#include "MyConstant.h"

//extern int a;	//�ʱ�ȭ�� ���ϸ� ����� �ŵ� ������ ����, �޸� �Ҵ��� �������Ƿ�

extern int a =123;	//non-const ������ �⺻������ external�̹Ƿ� extern�� �Ⱥٿ��� �ȴ�

void doWhat()	//�Լ��� �⺻������ external�̹Ƿ� extern�� �Ⱥ��δ�
{
	using namespace std;

	cout << "In test.cpp " << Constants::pi << " " << &Constants::pi << endl;
	
}