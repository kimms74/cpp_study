#include <iostream>
#include "MyConstant.h"
using namespace std;

int value = 123;

// forward declaration
extern void doWhat() ;
extern int a ;

//void doSomething()
//{
//    static int a = 1; // 메모리가 정적으로 선언됨( 함수를 다시 실행시켜도 똑같은 메모리 사용, 초기화는 처음 한번!) 디버깅할때 주로 사용 
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
    // header파일과 cpp파일을 만들어야 pi에 대한 메모리를 똑같이 잡을 수 있다.
    
    /*
        int g_x; // external linkage
        static int g_x; // internal linkage // extern으로 다른 파일에서 사용 불가능!
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
