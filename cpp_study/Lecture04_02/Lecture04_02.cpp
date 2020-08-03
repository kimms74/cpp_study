//Global variable, static variable, internal linkage, and external linkage

#include <iostream>
#include "MyConstant.h"

using namespace std;

//void doSomething()
//{
//    int a = 1; 
//                      
//    ++a;
//
//    cout << a << endl;
//}

//void doSomething()
//{
//    static int a = 1; //�޸𸮰� �������� �����(�Լ� �ۿ����� �޸𸮿� �����ִ�),�ʱ�ȭ �ʼ�!,�ѹ��� �ʱ�ȭ�ϸ� �Լ��� ������ �����ص� �ʱ�ȭ�� �����ʰ� �״�� ���
//                      //������Ҷ� �ַ� ���, static: �� ������ ���� �޸𸮰� static�ϴٴ� ��
//    ++a;
//
//    cout << a << endl;
//}

int g_value = 123;      //���������� �տ� g_�� �ٿ� �˾ƺ��� ���� ǥ���ϴ°� ����
						//external linkage //�ʱ�ȭ�� �� ���������� �ؾ��Ѵ�!
						//���������� �����ϸ� ������!  //class �̿��� ��ü�������� ǥ���ϱ�!
						//�ٸ� cpp���Ͽ����� ���������� ���� �ٲ� �� �ֱ� ������ �����ϱ� ����                     

static int a = 1;     //internal linkage //�ٸ� cpp���Ͽ��� ���� �Ұ����� ��������



// forward declaration	//�ٸ� cpp���Ͽ� ���ǵ� ������ �Լ��� ����Ϸ��� �ݵ�� forward declaration�� ������Ѵ�
						//�̶��� ������ ��� extern�� �ݵ�� �ٿ�����Ѵ�, �Լ��� �Ⱥٿ��� ��
						//constexpr�� forward decalaration�� �Ұ����ϹǷ� constexpr�� ���������� ���������!(const�� ����ض�)

extern void doWhat();   //doWhat()�� test.cpp�� �ִ� �Լ��̹Ƿ�, forward declaration���� �ٸ� cpp���Ͽ��� ������ ���ָ� test.cpp�� include ���ص� ��밡���ϴ�
						//external linkage  //�ܺ� cpp���Ͽ��� ���� ����  //extern�� ���� ������ ����
						//�� cpp�����̳� �ٸ� cpp���� ��򰡿� doWhat()�̶�� function�� ��ü�� �����Ƿ� ã�Ƽ� ����� �ǹ�

extern int a;           //������ ���� ������ ���ָ� �ٸ� cpp���Ͽ� �ִ� ������ ��밡���ϴ�, �̶� extern�� �ݵ�� �ٿ������
						//��� �ʱ�ȭ�� �ѹ� �� �ϰ� �Ǹ� ������ �߻��Ѵ�(�ʱ�ȭ�� 2���ϴ� ���̹Ƿ�)

int main()
{
	//cout << value << endl;
	//
	//int value = 1;        //local variable //linkage�� ����(�ܺο� ������� �ʾ����Ƿ�)

	//cout << ::value << endl;  //:: global scope operator�� �̿��� ���� ������ ������ �� �ִ�
	//cout << value << endl;



	//doSomething();    //doSomething()���� a�� int�� �������� ��� ����� ��� 2�� ��������
	//doSomething();    //static int�� �����ϸ� a�� �Լ��ۿ����� ����ֱ⶧���� 2,3,4,5 �� ���´�
	//doSomething();
	//doSomething();


	//doWhat();
	//cout << a <<endl;



	cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << endl;	
	doWhat();																		//���� MyConstants�� ���� ������ϸ� �ְ� cpp������ ������ pi�� ���� �ּҰ� �ٸ��� ���´�
																					// header���ϰ� cpp������ ������ pi�� ���� �޸𸮸� �Ȱ��� ���� �� �ִ�.

/*	������
	//�ʱ�ȭ ���� ���Ǹ� �� ���
	int g_x; // external linkage
	static int g_x; // internal linkage // �ٸ� cpp���Ͽ��� ��� �Ұ���!
	const int g_x; // ����, const�� �ݵ�� �ʱ�ȭ�� ���� �������!

	//forward declaration�� ���
	extern int g_z;			//�ٸ� ������ �ʱ�ȭ�� �ѹ� �� �־�� ��밡��
	extern cosnt int g_z;

	//�ʱ�ȭ�ϴ� ���
	int g_y(1);			//external linkage
	static int g_y(1);	//internal linkage

	extern int g_w(1);			//�˱⽱�� extern �ٿ��� ��
	extern const int g_w(1);	//const�� ��� extern�� �ٿ���� external linkage�� ��밡��
*/

	return 0;
}
