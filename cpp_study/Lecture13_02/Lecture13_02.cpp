// Template classes

#include <iostream>
#include "MyArray.h"

using namespace std;

int main()
{
    //MyArray my_array(10); //� type�� ���� �ȳ־ error�߻�

    //for (int i = 0; i < my_array.getLength(); ++i)
    //    my_array[i] = i * 5;

    //my_array.print();



    //MyArray<int> my_array(10);  //class template�� ����� ���� <type>�� �ٿ�����Ѵ�

    //for (int i = 0; i < my_array.getLength(); ++i)
    //    my_array[i] = i * 5;

    //my_array.print();



    MyArray<char> my_array(10);  //class template�� ����� ���� <type>�� �ٿ�����Ѵ�
                                //MyArray.cpp���� Ȯ���ϱ�
    for (int i = 0; i < my_array.getLength(); ++i)
        my_array[i] = i +65;

    my_array.print();



    return 0;
}
