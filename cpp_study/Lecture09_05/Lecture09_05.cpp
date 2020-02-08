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
    Digit& operator ++()    //*this�� return�� �� return by reference�� ������Ѵ�
    {
        ++m_digit;

        return *this;
    }

    //postfix
    Digit operator ++(int)  //postfix�� parameter�� dummy argument�� �־������(�ܿ����Ѵ�)
    {                       //int�� ���� int�� �ǹ��ϴ� ���� �ƴ� postfix�� ��Ÿ���µ� ���̴°�
        Digit temp(m_digit);//���� ������ prefix���� �����ϹǷ� ȿ���� ��������(local variable�� �����ؾ��ϹǷ�)

        //++m_digit;
        ++(*this);

        return temp;        //temp��� local variable�� return�ϹǷ� return by value�� �ؾ���
    }                       //(temp�� �Լ��� ���������� �����)

    friend std::ostream& operator << (std::ostream& out, const Digit& digit)    //output operator
    {
        out << digit.m_digit;

        return out;
    }

};

int main()
{
    //int a = 10;

    //cout << ++a << endl;    //+1�� �����ϰ� a ���
    //cout << a << endl;
    //cout << a++ << endl;    //a�� ����ϰ� +1
    //cout << a << endl;



    Digit d(5);

    cout << ++d << endl;
    cout << d << endl;

    cout << d++ << endl;
    cout << d << endl;

    return 0;
}
