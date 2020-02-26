//Printing inherited classes using operator<<

#include <iostream>

using namespace std;

class Base 
{
public:
    Base() {}

    friend std::ostream& operator << (std::ostream& out, const Base& b)   //friend function�� member function�� �ƴϹǷ� ���� overriding�� �ȵȴ�
    {
        return b.print(out);                                            //member function�� �θ���
    }

    virtual std::ostream& print(std::ostream& out) const        //member function���� ����
    {
        out << "Base";
        return out;
    }
};

class Derived : public Base
{
public:
    Derived() {}

    virtual std::ostream& print(std::ostream& out) const override
    {
        out << "Derived";
        return out;
    }
};

int main()
{
    Base b;
    std::cout << b << '\n';

    Derived d;
    std::cout << d << '\n';

    Base& bref = d;
    std::cout << bref << '\n';










    return 0;
}
