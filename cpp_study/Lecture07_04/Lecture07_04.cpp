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
//    *ptr = 10;    //int *대신 const int *를 매개변수로 받으면 ptr을 변경할 수 없다
//}

void foo(double degrees, double *sin_out, double *cos_out) //call by reference처럼 int *로 output처럼 사용 가능
{
    *sin_out = 1.0; //pointer를 받아왔으므로 de-referencing하여 값을 바꾼다
    *cos_out = 2.0;
}

void foo(const int * const ptr, int *arr, const int length)    //call by pointer 사용하는 경우: array 가져올 때, c스타일 코딩법, c++은 reference를 사용한다
{                                                              //const int * const ptr: 왼쪽 const는 *ptr(실제값)을 못바꾸게 하고, 오른쪽 const는 ptr(주소)를 못바꾸게 한다
    for (int i = 0; i < length; ++i)
        cout << arr[i] << endl;

    arr[0] = 1.0;   //arr를 찾아가 값을 바꾼다 []은 de-referencing처럼 기능
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
    ////foo(ptr)과 다른 값이 나오는 이유는 ptr의 값을 복사해서 parameter로 들어가므로 새로운 메모리를 가져옴(typedef int * pink로 해서 사용하면 pink ptr이므로 그냥 변수를 넣는것과 같다)
    ////그러므로 본체를 그대로 옮겨주는 것은 call by reference만 가능하다

    //foo(ptr);
    //foo(&value);



    
    //foo(ptr);

    //cout << value << endl; // 값이 10으로 바뀜




    double degrees = 30;
    double sin, cos;

    foo(degrees, &sin, &cos);   //call by reference와 다르게 output부분에 &을 붙여줘야함(귀찮다)

    cout << sin << " " << cos << endl;  //call by reference 처럼 출력 값을 parameter로 넣어서 사용가능

    return 0;
}
