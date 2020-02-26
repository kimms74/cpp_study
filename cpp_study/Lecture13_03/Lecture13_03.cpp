// Template non-type parameters

#include <iostream>
#include "MyArray.h"

using namespace std;

int main()
{
    //std::vector<double> my_array; my_array.resize(100);
    //MyArray<double> my_array(100);
    //�� �ΰ��� memory�� �����Ҵ� �����Ƿ� compile time�� 100�̶�� ���ڸ� ���� �ȴ�(cin���� �޾Ƶ� ��)

    //int i = 100;
    //MyArray<double, i> my_array;    //template�� �ٸ� parameter�� �߰��ϸ� compile time�� �������־�� �Ѵ�

    MyArray<double, 100> my_array; // std::array<double,100>�� ����ϴ�

    for (int i = 0; i < my_array.getLength(); ++i)
        my_array[i] = i + 65;

    my_array.print();







    return 0;
}
