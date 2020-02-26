// Function templates

#include <iostream>
#include "Cents.h"

using namespace std;

//int getMax(int x, int y)
//{
//    return (x > y) ? x : y;
//}
//
//double getMax(double x, double y)     //원하는 범위를 드래그 한 후 ctrl+h를 하면 원하는 단어를 교체할 수 있다
//{
//    return (x > y) ? x : y;
//}
//
//float getMax(float x, float y)        //일일이 바꾸는 거 귀찮음 -> template 사용
//{
//    return (x > y) ? x : y;
//}
//
//char getMax(char x, char y)
//{
//    return (x > y) ? x : y;
//}

template<typename T>    //typename 자리에 class가 와도 된다 (차이는 없다)
T getMax(T x, T y)      //template을 사용하면 알아서 type을 찾아준다
{
    return (x > y) ? x : y;
}

int main()
{
    cout << getMax(1, 2) << endl;
    cout << getMax(3.14, 1.592) << endl;
    cout << getMax(1.0f, 3.4f) << endl;
    cout << getMax('a', 'c') << endl;

    cout << getMax(Cents(5), Cents(9)) << endl; //class도 template에 사용가능(대신 opeartor overloading 해줘야함)

    //T를 특정한 data type으로 만드는 것을 instantiation이라고 한다



    return 0;
}
