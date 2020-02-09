//Overloading the parenthesis operator

#include <iostream>

using namespace std;

class Accumulator
{
private:
    int m_counter = 0;

public:
    int operator() (int i) { return m_counter += i; }
};

int main()
{
    Accumulator acc;
    cout << acc(10) << endl;    //괄호 연산자를 이용해 객체를 함수처럼 사용하는 법
    cout << acc(20) << endl;    //functor라고 부름, chaining도 구현 가능(굳이?)








    return 0;
}
