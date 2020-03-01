// Class template specialization

#include <iostream>
#include <array>
#include "Storage.h"

using namespace std;

//template<typename T>
//class A
//{
//public:
//    void Something()
//    {
//        cout << typeid(T).name() << endl;
//    }
//
//    void test()
//    {}
//};
//
//template<>      //class template specialization
//class A<char>   //�ٸ� class�� �ϳ� ������ �Ͱ� �����ϴ�(��Ӱ��� �ٸ�)
//{
//public:
//    void Something()
//    {
//        cout << "Char type specialization" << endl;
//    }
//};


template<typename T>
class A
{
public:
    A(const T& input)
    {}

    void Something()
    {
        cout << typeid(T).name() << endl;
    }

    void test()
    {}
};

template<>      //class template specialization
class A<char>   //�ٸ� class�� �ϳ� ������ �Ͱ� �����ϴ�(��Ӱ��� �ٸ�)
{
public:
    A(const char& temp)
    {}

    void Something()
    {
        cout << "Char type specialization" << endl;
    }
};

int main()
{
    //A<int>      a_int;
    //A<double>   a_double;
    //A<char>     a_char;

    //a_int.Something();
    //a_double.Something();
    //a_char.Something();



    //A      a_int(1);        //c++17������ �����߻����� �ʴ´�
    //A      a_double(3.14);  //parameter�� type ������ �����ϸ� A<type>���� �ʿ� ����
    //A      a_char('a');



    //Define a storage8 for integers
    Storage8<int> intStorage;

    for (int count = 0; count < 8; ++count)
        intStorage.set(count, count);

    for (int count = 0; count < 8; ++count)
        cout << intStorage.get(count) << '\n';

    cout << "Sizeof Storage8<int> " << sizeof(Storage8<int>) << endl;   //32bytes�� ���´�
                                                                        //int�� 4bytes�̹Ƿ� arrray�� 8���� ���� �����̴�


    //Define a Storage8 for bool
    Storage8<bool> boolStorage;
    for (int count = 0; count < 8; ++count)
        boolStorage.set(count, count & 3);  //3�� 0b0110�̹Ƿ� count�� 0,4�� �� false�� ���´�

    for (int count = 0; count < 8; ++count)
        //cout << (boolStorage.get(count) ? "true" : "false") << '\n';  //c style true,false ���
        cout << boolalpha << boolStorage.get(count) << '\n';    //c++ style bool�� true, false�� ����ϴ� ��

    cout << "Sizeof Storage8<bool> " << sizeof(Storage8<bool>) << endl; //0b11101110�̹Ƿ� 1byte�� ���´�
                                                                        //template specialization�� ���ָ� 8bytes�� ���´�(bool�� 1bit�̶� 1byte�� ���Ƿ�)

    return 0;
}
