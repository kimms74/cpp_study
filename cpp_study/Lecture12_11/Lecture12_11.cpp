//Printing inherited classes using operator<<

#include <iostream>

using namespace std;

class Base 
{
public:
    Base() {}

    friend std::ostream& operator << (const std::ostream& out, const Base& b)
    {
        return.b.print(out);
    }

    virtual std::ostream& print(std::ostream& out) const
    {
        out << "Base";
        return out;
    }
};

int main()
{
    return 0;
}
