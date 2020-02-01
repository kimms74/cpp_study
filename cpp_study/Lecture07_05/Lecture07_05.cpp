#include <iostream>
#include <array>
#include <tuple>

using namespace std;

//int getValue(int x)       // return by value
//{
//    int value = x * 2;
//    return value;
//}

//int* getValue(int x)       // return by pointer
//{
//    int value = x * 2;
//    return &value;
//}

int* allocateMemory(int size)       // return by pointer 사용하는 경우
{
    return new int[size];
}

int& getValue(int x)       //return by reference
{
    int value = x * 2;
    return value;
}

int &get(std::array<int, 100> &my_array, int ix)        //return by reference 사용하는 경우 
{
    return my_array[ix];
}

struct S
{
    int a, b, c, d;
};

S getStrct()            //보통 return을 여러개 하기위해 struct를 사용한다
{                       //단점은 함수 하나 만들 때마다 struct를 만들어야한다
    S my_s{ 1, 2,3,4 };

    return my_s;
}

std::tuple<int, double> getTuple()    //tuple<int, double>이 사용자 정의 자료형처럼 작동
{
    int a = 10;
    double d = 3.14;
    return std::make_tuple(a, d);
}

int main()
{
    //int value = getValue(3);




    //int value = *getValue(3);   //warning: 값은 나오지만 local variable의 주소를 referencing하기 때문에 위험하다

    //cout << value << endl;





    //int *value = getValue(3);       //warning: local variable의 주소를 받으면 함수를 빠져나올 때 사라지기에 더 위험하다
  
    //cout << *value << endl;





    //int *array = allocateMemory(1024);      // return by pointer 사용하는 경우

    //delete[] array;                         // 이 경우 따로 delete을 해줘야한다





    //int value = getValue(5);

    //cout << value << endl;





    //int &value = getValue(5);               //local variable의 reference를 다시 referencing하므로 위험하다

    //cout << value << endl;
    //cout << value << endl;                  //두번째 cout할 때 쓰레기 값이 value로 들어가버림




    //array<int, 100> my_array;               //메모리에 미리 array이가 저장되어있음
    //my_array[30] = 10;

    //get(my_array, 30) = 1024;               //return by reference로 인해 my_array[30]과 get(my_array, 30)이 같은 것을 가리킨다
    //get(my_array, 30) *= 10;                //array는 미리 메모리에 저장해두고 reference로 call하고 return하여 안전하게 사용가능(자주 사용한다)

    //cout << my_array[30] << endl;           //return by reference 사용하는 경우




    //S my_s = getStrct();                    //struct를 이용해 return을 여러개 받는 법, c는 이 방법을 사용(대신 c++보다는 조금 더 빠르다)
    //my_s.a;




    //std::tuple<int, double> my_tp = getTuple(); //parameter로 struct도 사용가능
    //cout << std::get<0>(my_tp) << endl; // a    //값을 가져올 때 get을 써야하므로 여전히 불편하다
    //cout << std::get<1>(my_tp) << endl; // d




    auto [a, d] = getTuple();       // c++17부터 편하게 사용가능!
    cout << a << endl;
    cout << d << endl;


    return 0;
}
