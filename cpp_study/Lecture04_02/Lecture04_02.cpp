#include <iostream>
#include "MyConstant.h"
using namespace std;

int value = 123;

// forward declaration
extern void doWhat() ;
extern int a ;

//void doSomething()
//{
//    static int a = 1; // �޸𸮰� �������� �����( �Լ��� �ٽ� ������ѵ� �Ȱ��� �޸� ���, �ʱ�ȭ�� ó�� �ѹ�!) ������Ҷ� �ַ� ��� 
//
//    ++a;
//
//    cout << a << endl;
//}

int main()
{
    //cout << value << endl;
    //
    //int value = 1;

    //cout << ::value << endl;
    //cout << value << endl;



    //doSomething();
    //doSomething();
    //doSomething();
    //doSomething();


    //doWhat();

    //cout << a <<endl;



    cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << endl;

    doWhat();
    // header���ϰ� cpp������ ������ pi�� ���� �޸𸮸� �Ȱ��� ���� �� �ִ�.
    
    /*
        int g_x; // external linkage
        static int g_x; // internal linkage // extern���� �ٸ� ���Ͽ��� ��� �Ұ���!
        const int g_x; // X

        extern int g_z;
        extern cosnt int g_z;

        int g_y(1);
        static int g_y(1);

        extern int g_w(1);
        extern const int g_w(1);
    */
    
    return 0;
}
