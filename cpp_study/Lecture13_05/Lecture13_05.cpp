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
//class A<char>   //다른 class를 하나 구현한 것과 동일하다(상속과는 다름)
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
class A<char>   //다른 class를 하나 구현한 것과 동일하다(상속과는 다름)
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



    //A      a_int(1);        //c++17에서는 오류발생하지 않는다
    //A      a_double(3.14);  //parameter로 type 구별이 가능하면 A<type>해줄 필요 없다
    //A      a_char('a');



    //Define a storage8 for integers
    Storage8<int> intStorage;

    for (int count = 0; count < 8; ++count)
        intStorage.set(count, count);

    for (int count = 0; count < 8; ++count)
        cout << intStorage.get(count) << '\n';



    return 0;
}
