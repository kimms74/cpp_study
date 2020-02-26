// Template non-type parameters

#include <iostream>
#include "MyArray.h"

using namespace std;

int main()
{
    //std::vector<double> my_array; my_array.resize(100);
    //MyArray<double> my_array(100);
    //위 두개는 memory에 동적할당 됐으므로 compile time때 100이라는 숫자를 몰라도 된다(cin으로 받아도 됨)

    //int i = 100;
    //MyArray<double, i> my_array;    //template에 다른 parameter를 추가하면 compile time때 정해져있어야 한다

    MyArray<double, 100> my_array; // std::array<double,100>와 비슷하다

    for (int i = 0; i < my_array.getLength(); ++i)
        my_array[i] = i + 65;

    my_array.print();







    return 0;
}
