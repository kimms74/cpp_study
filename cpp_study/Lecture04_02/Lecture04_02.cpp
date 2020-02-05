#include <iostream>
#include "MyConstant.h"

using namespace std;


//void doSomething()
//{
//    static int a = 1; // 메모리가 정적으로 선언됨( 함수를 다시 실행시켜도 똑같은 메모리 사용, 초기화는 처음 한번!) 디버깅할때 주로 사용 
//                      // static: 이 변수가 받은 메모리가 static하다는 것
//    ++a;
//
//    cout << a << endl;
//}

int g_value = 123;        //external linkage //초기화는 한 군데에서만 해야한다!
                        //전역변수는 웬만하면 쓰지마!  //class 쓰기!
                        //다른 cpp파일에서도 전역변수의 값을 바꿀 수 있기 때문에 추적하기 힘듬                     

static int a = 1;     //internal linkage //다른 cpp파일에서 접근 불가능한 전역변수



// forward declaration
extern void doWhat();  //external linkage  //외부 cpp파일에서 접근 가능  //extern은 보통 생략돼 있음
                        //이 cpp파일이나 다른 cpp파일 어딘가에 doWhat()이라는 function의 몸체가 있으므로 찾아서 써라라는 의미
extern int a;


int main()
{
    //cout << value << endl;
    //
    //int value = 1;        //local variable //linkage가 없다(외부와 연결되지 않았으므로)

    //cout << ::value << endl;  //:: global scope operator를 이용해 전역 변수를 가져올 수 있다
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
