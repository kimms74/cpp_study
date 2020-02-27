// Function template specialization

#include <iostream>
#include "Storage.h"

using namespace std;

template<typename T>
T getMax(T x, T y)
{
    return (x > y) ? x : y;
}

template<>  //function template specialization  //이 경우에는 typename 작성필요 x  
char getMax(char x, char y) //특수한 경우만을 빼서 template화 한다
{                           //getMax 중에서 char을 쓰는 경우에만 발동된다
    cout << "Warning : comparing chars" << endl;

    return (x > y) ? x : y;
}

int main()
{
    //cout << getMax(1, 2) << endl;   //class template처럼 getMax<double>(1,2)로 써줘도 된다
    //                                //강제로 type을 적어주고 싶은 경우에!

    //cout << getMax('a', 'b') << endl;   //char을 비교하는 경우 사용자에게 알려주는게 좋다
    //                                    //하지만 compile time에 정해지는 것이므로 if문 사용 불가능하다(if문은 run time때 찾아준다)
    //                                    //function template specialization 사용하면 된다



    Storage<int> nValue(5);
    Storage<double> dValue(6.7);    //double type일 때 scientific notation을 쓰고 싶으면 template specialization 사용하면 된다
                                    //template specialization 사용할 때 cpp로 따로 빼버리면 main에서 인식을 못한다 
    nValue.print();                 //cpp로 빼지말고 header에 그대로 두고 써라(header only)
    dValue.print();

    return 0;
}
