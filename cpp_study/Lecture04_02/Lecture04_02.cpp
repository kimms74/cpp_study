#include <iostream>
#include "MyConstant.h"

using namespace std;


//void doSomething()
//{
//    static int a = 1; // �޸𸮰� �������� �����( �Լ��� �ٽ� ������ѵ� �Ȱ��� �޸� ���, �ʱ�ȭ�� ó�� �ѹ�!) ������Ҷ� �ַ� ��� 
//                      // static: �� ������ ���� �޸𸮰� static�ϴٴ� ��
//    ++a;
//
//    cout << a << endl;
//}

int g_value = 123;        //external linkage //�ʱ�ȭ�� �� ���������� �ؾ��Ѵ�!
                        //���������� �����ϸ� ������!  //class ����!
                        //�ٸ� cpp���Ͽ����� ���������� ���� �ٲ� �� �ֱ� ������ �����ϱ� ����                     

static int a = 1;     //internal linkage //�ٸ� cpp���Ͽ��� ���� �Ұ����� ��������



// forward declaration
extern void doWhat();  //external linkage  //�ܺ� cpp���Ͽ��� ���� ����  //extern�� ���� ������ ����
                        //�� cpp�����̳� �ٸ� cpp���� ��򰡿� doWhat()�̶�� function�� ��ü�� �����Ƿ� ã�Ƽ� ����� �ǹ�
extern int a;


int main()
{
    //cout << value << endl;
    //
    //int value = 1;        //local variable //linkage�� ����(�ܺο� ������� �ʾ����Ƿ�)

    //cout << ::value << endl;  //:: global scope operator�� �̿��� ���� ������ ������ �� �ִ�
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
