//Overloading the increment and decrement operators

#include <iostream>

using namespace std;

class Digit
{
private:
    int m_digit;

public:
    Digit(int digit=0) : m_digit(digit) {}

    //prefix
    Digit& operator ++()    //*this를 return할 때 return by reference를 써줘야한다
    {
        ++m_digit;

        return *this;
    }

    //postfix
    Digit operator ++(int)  //postfix는 parameter에 dummy argument를 넣어줘야함(외워야한다)
    {                       //int는 실제 int를 의미하는 것이 아닌 postfix를 나타내는데 쓰이는것
        Digit temp(m_digit);//또한 과정이 prefix보다 복잡하므로 효율이 떨어진다(local variable을 생성해야하므로)

        //++m_digit;
        ++(*this);

        return temp;        //temp라는 local variable을 return하므로 return by value를 해야함
    }                       //(temp는 함수를 빠져나가면 사라짐)

    friend std::ostream& operator << (std::ostream& out, const Digit& digit)    //output operator
    {
        out << digit.m_digit;

        return out;
    }

};

int main()
{
    //int a = 10;

    //cout << ++a << endl;    //+1을 먼저하고 a 출력
    //cout << a << endl;
    //cout << a++ << endl;    //a를 출력하고 +1
    //cout << a << endl;



    Digit d(5);

    cout << ++d << endl;
    cout << d << endl;

    cout << d++ << endl;
    cout << d << endl;

    return 0;
}
