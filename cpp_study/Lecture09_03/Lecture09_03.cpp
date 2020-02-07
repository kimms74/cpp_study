//Overloading unary operators +, -, and !

#include <iostream>

using namespace std;

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int& getCents() { return m_cents; }

    friend std::ostream& operator << (std::ostream& out, const Cents& cents)    //output operator
    {
        out << cents.m_cents;

        return out;
    }

    Cents operator - () const
    {
        return Cents(-m_cents);
    }

    bool operator ! () const
    {
        return (m_cents == 0) ? true : false;   // condition operator ����ߴ�(if�� �ص� ��)
    }                                           //not operator�� ���ƻ� �°� � �ǹ̸� �������� ������ ���ؼ� ����Ѵ�!
};                                              //return type�� bool�̹Ƿ� �ű⿡ �´� ��Ȳ�� ¥�� ��

int main()
{
    //int a = 3;

    //cout << -a << endl;
    //cout << !a << endl;

    Cents cents1(6);
    Cents cents2(0);

    cout << cents1 << endl; //output operator overloading�� �߱⶧���� cents�� cout ��밡��
    cout <<-cents1 << endl;
    cout << -Cents(-10) << endl; //anonymous object



    //auto temp = !cents1;    //return type= bool
    //auto temp = cents1;     //return type= Cents

    cout << !cents1 << " " << !cents2 << endl;  //0: false, 0�ƴ� ��: true
    return 0;
}
