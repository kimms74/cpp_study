#include <iostream>
#include <typeinfo>

using namespace std;

struct Something
{
    int a, b, c, d;     // 4 x 4 = 16bytes
};
int main()
{
    //int x = 5;

    //cout << x << endl;
    //cout << &x << endl; // & : address-of operator
    //cout << (int)&x << endl;

    //// de-reference operator (*) // ������ �� *�� de-reference�ϴ� *�� �ٸ���!

    //cout << *&x << endl; // pointer�� �ּҸ� �����ϴ� ������

    ////typedef int *pint;
    ////pint ptr_x = &x, ptr_y = &x;
    //int *ptr_x = &x, *ptr_y = &x;
    //cout << ptr_x << endl;
    //cout << *ptr_x << endl;




    //double d = 1.0;
    //double *ptr_d = &d;
    //
    //cout << ptr_d << endl;
    ////double *prt_e = 0x0000008C56EFF598; // �ּҰ��� ���� �����ϴ� ���� �⺻������ �����ִ�
    //
    //cout << typeid(ptr_d).name() << endl;




    //int x = 5;
    //double d = 123.0;

    //int *ptr_x;
    //double *ptr_d;

    //cout << sizeof(x) << endl;
    //cout << sizeof(d) << endl;
    //cout << sizeof(&x) << " " << sizeof(ptr_x) << endl; //x64������ 8bytes�� �ּ� ���
    //cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;




    //Something ss;
    //Something *ptr_s;

    //cout << sizeof(Something) << endl;
    //cout << sizeof(ptr_s) << endl;




    int *ptr_x;
    double *ptr_d;

    cout << *ptr_x << endl;     // initialization ���ϸ� ������ ���� ����־� �����߻�


    return 0;
}
