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

    operator Cents ()                   //return type�� ()���� ���������
    {
        return Cents(m_dollars *= 100);
    }
};

int main()
{
    //Cents cents(7);

    //int value = (int)cents;
    //value = int(cents);
    //value = static_cast<int>(cents);    //type_cast overloading�� ���� 3������ �����ϴ�

    //printInt(cents);



    Dollar dol(2);
    Cents cents = dol;          //���� ��ƴ�

    printInt(cents);



    return 0;
}
