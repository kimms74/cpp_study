#include <iostream>

using namespace std;
int main()
{
    //int value = 5;
    //int *ptr = &value;
    //*ptr = 6;           // de-referencing을 통해 assignment 가능



    //const int value = 5;
    //const int *ptr = &value;    //const int를 pointer로 저장 가능
    //// *ptr = 6;                //de-refence를 통해 assignment 불가능

    //cout << *ptr << endl;
    
    
    
    //int value = 5;
    //const int *ptr = &value;    //const int *에 int의 주소 넣는 것 가능
    ////*ptr = 6;                 //de-refence를 통해 assignment 불가능
    //value = 6;                  //value의 값 변경 가능 -> ptr 값도 변함

    //cout << value << " " << *ptr << endl;   // 6 6



    //int value1 = 5;
    //const int *ptr = &value1;   // ptr의 주소를 안바꾼다는 것이지 ptr에 저장되는 주소는 변해도 됨

    //int value2 = 6;
    //ptr = &value2;
    //// *ptr =8 // 불가능 const가 붙었으므로


    
    //int value = 5;
    //int *const ptr = &value;

    //*ptr = 10;                  //pointer에 저장된 주소가 가르키는 값은 바꿀 수 있다.
    //cout << *ptr << endl;

    //int value2 = 8;
    ////ptr = &value2;              // pointer에 저장되는 주소값은 못바꾼다.



    //int value = 5;
    //const int *const ptr;           //앞에 const가 붙었으므로 initialization안하면 안됨




    int value = 5;
    const int *ptr1 = &value;       //const int *: 출력값이 상수
    int *const ptr2 = &value;       //int * const: ptr이 상수
    const int *const ptr3 = &value; //const int *const: 출력값, ptr 둘 다 상수



    return 0;
}
