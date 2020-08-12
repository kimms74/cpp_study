// Template classes

#include <iostream>
#include "MyArray.h"

using namespace std;

int main()
{
    //MyArray my_array(10); //어떤 type이 올지 안넣어서 error발생

    //for (int i = 0; i < my_array.getLength(); ++i)
    //    my_array[i] = i * 5;

    //my_array.print();



    //MyArray<int> my_array(10);  //class template을 사용할 때는 <type>을 붙여줘야한다

    //for (int i = 0; i < my_array.getLength(); ++i)
    //    my_array[i] = i * 5;

    //my_array.print();



    MyArray<char> my_array(10);  //class template을 사용할 때는 <type>을 붙여줘야한다
                                //MyArray.cpp파일 확인하기
    for (int i = 0; i < my_array.getLength(); ++i)
        my_array[i] = i +65;

    my_array.print();



    return 0;
}
