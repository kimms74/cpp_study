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
        return (m_cents == 0) ? true : false;   // condition operator 사용했다(if로 해도 됨)
    }                                           //not operator는 문맥상에 맞게 어떤 의미를 갖는지를 스스로 정해서 써야한다!
};                                              //return type이 bool이므로 거기에 맞는 상황을 짜면 됨

int main()
{
    //int a = 3;

    //cout << -a << endl;
    //cout << !a << endl;

    Cents cents1(6);
    Cents cents2(0);

    cout << cents1 << endl; //output operator overloading을 했기때문에 cents에 cout 사용가능
    cout <<-cents1 << endl;
    cout << -Cents(-10) << endl; //anonymous object



    //auto temp = !cents1;    //return type= bool
    //auto temp = cents1;     //return type= Cents

    cout << !cents1 << " " << !cents2 << endl;  //0: false, 0아닌 수: true
    return 0;
}
