#include <iostream>

using namespace std;

//void foo(int *ptr)
//{
//    cout << *ptr << " " <<uintptr_t(ptr) << " " << uintptr_t(&ptr) << endl;
//}

//void foo( int *ptr)     
//{
//    cout << *ptr << " " << uintptr_t(ptr) << " " << uintptr_t(&ptr) << endl;
//
//    *ptr = 10;
//}

void foo(double degrees, double *sin_out, double *cos_out) //call by reference처럼 int *로 output처럼 사용 가능
{
    *sin_out = 1.0;
    *cos_out = 2.0;
}

void foo(const int * const ptr, int *arr, const int length)    //call by pointer 사용하는 경우: array 가져올 때, c스타일 코딩법, c++은 reference를 사용한다
{
    for (int i = 0; i < length; ++i)
        cout << arr[i] << endl;

    arr[0] = 1.0;   //arr를 찾아가 값을 바꾼다 [0]은 de-referencing처럼 기능
    int x = 1;

    *ptr = 1;   //const int 이므로 안됨
    ptr = &x;   // int * const 이므로 안됨
}

int main()
{   
    int value = 5;

    //cout << value << " " << uintptr_t(&value) << endl;

    int *ptr = &value;

    //cout << uintptr_t(&ptr) << endl;    
    ////foo(ptr)과 다른 값이 나오는 이유는 ptr의 값을 복사해서 parameter로 들어가므로 새로운 메모리를 가져옴

    //foo(ptr);
    //foo(&value);



    
    //foo(ptr);

    //cout << value << endl; // 값이 10으로 바뀜




    double degrees = 30;
    double sin, cos;

    foo(degrees, &sin, &cos);   //call by reference와 다르게 output부분에 &을 붙여줘야함(귀찮다)

    cout << sin << " " << cos << endl;

    return 0;
}
