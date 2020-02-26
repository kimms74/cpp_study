//Printing inherited classes using operator<<

#include <iostream>

using namespace std;

class Base 
{
public:
    Base() {}

    friend std::ostream& operator << (std::ostream& out, const Base& b)   //friend function은 member function이 아니므로 직접 overriding이 안된다
    {
        return b.print(out);                                            //member function을 부른다
    }

    virtual std::ostream& print(std::ostream& out) const        //member function으로 만듦
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
