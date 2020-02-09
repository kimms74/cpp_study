//Overloading typecasts

#include <iostream>

using namespace std;

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents = 0)
    {
        m_cents = cents;
    }

    int getCents() { return m_cents; }
    void setCents(int cents) { m_cents = cents; }

    operator int ()      //type_cast overloading
    {
        cout << "cast here" << endl;
        return m_cents;
    }
};

void printInt(const int& value)
{
    cout << value << endl;
}


class Dollar
{
private:
    int m_dollars = 0;

public:
    Dollar(const int& input) : m_dollars(input){}

    operator Cents ()                   //return type을 ()전에 적어줘야함
    {
        return Cents(m_dollars *= 100);
    }
};

int main()
{
    //Cents cents(7);

    //int value = (int)cents;
    //value = int(cents);
    //value = static_cast<int>(cents);    //type_cast overloading은 옆의 3가지와 동일하다

    //printInt(cents);



    Dollar dol(2);
    Cents cents = dol;          //조금 어렵다

    printInt(cents);



    return 0;
}
