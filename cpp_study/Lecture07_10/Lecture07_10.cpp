#include <iostream>

using namespace std;

int g_i = 0;        //전역변수가 먼저 메모리에 자리 잡음

int second(int x)   //third stack frame //stack은 밑에서부터 쌓아서 위에서부터 메모리를 반납한다
{                   
    return 2 * x;
}

//int first(int x)    //second stack frame
//{
//    int y = 3;
//    return second(x + y);   //second()를 부른다
//}

void initArray()
{
    int *ptr2 = new int[1000];
    //delete[] ptr2;    
}

int main()  //first stack frame
{
    //int a = 1, b;
    //b = first(a);   //first()를 부른다
    //cout << b << endl;



    //
    //int array[1000000];  //stack overflow 발생(재귀호출 함수 사용시 발생할 수 있다)
    //                    //순차적으로 쌓이기 때문에 속도가 빠르지만 메모리 용량이 적다




    //int *ptr = nullptr;
    //ptr = new int[1000000]; //동적 메모리 할당은 heap에서 일어난다
    //                        //차례대로 쌓이지 않아 느리지만 용량이 크다
    //delete[] ptr;           //heap에 있던 메모리를 반납한다

    //ptr = nullptr;          //반납한 후 ptr을 부르면 trash값이 나오기때문에 nullptr을 해줘야함



    initArray();    //함수를 불러내고 일이 끝나면 stack을 반납하지만 delete을 안했기때문에 heap에는 메모리를 잡고 있다
                    //delete을 안하게 되면 heap에 계속 메모리를 잡고 있게 되어 결국 부족해질 수 있다
                    //memory leak발생

    return 0;
}
