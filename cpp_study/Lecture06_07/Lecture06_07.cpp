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

    //// de-reference operator (*) // 선언할 때 *과 de-reference하는 *은 다르다!

    //cout << *&x << endl; // pointer는 주소를 저장하는 변수다

    ////typedef int *pint;
    ////pint ptr_x = &x, ptr_y = &x;
    //int *ptr_x = &x, *ptr_y = &x;
    //cout << ptr_x << endl;
    //cout << *ptr_x << endl;




    //double d = 1.0;
    //double *ptr_d = &d;
    //
    //cout << ptr_d << endl;
    ////double *prt_e = 0x0000008C56EFF598; // 주소값을 직접 대입하는 것은 기본적으로 막혀있다
    //
    //cout << typeid(ptr_d).name() << endl;




    //int x = 5;
    //double d = 123.0;

    //int *ptr_x;
    //double *ptr_d;

    //cout << sizeof(x) << endl;
    //cout << sizeof(d) << endl;
    //cout << sizeof(&x) << " " << sizeof(ptr_x) << endl; //x64에서는 8bytes로 주소 사용
    //cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;




    //Something ss;
    //Something *ptr_s;

    //cout << sizeof(Something) << endl;
    //cout << sizeof(ptr_s) << endl;




    int *ptr_x;
    double *ptr_d;

    cout << *ptr_x << endl;     // initialization 안하면 쓰레기 값이 들어있어 오류발생


    return 0;
}
