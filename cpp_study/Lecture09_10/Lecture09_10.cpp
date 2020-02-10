//Converting constructors, explicit, and delete

#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction(char) = delete; // delete

    explicit Fraction(int num = 0, int den = 1) //explicit
        :m_numerator(num), m_denominator(den)
    {
        assert(den != 0);
    }

    Fraction(const Fraction& fraction)
        :m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
    {
        cout << "Copy constructor called" << endl;
    }

    friend std::ostream& operator << (std::ostream& out, const Fraction& f)
    {
        out << f.m_numerator << " / " << f.m_denominator << endl;

        return out;
    }
};

void doSomething(Fraction frac)
{
    cout << frac << endl;
}

int main()
{
    Fraction frac(7);

    doSomething(frac);
    doSomething(Fraction(7));

    doSomething(7);             //converting constructor, explicit을 쓰게 되면 오류발생

    Fraction frac2('c');        //delete했기때문에 오류발생







    return 0;
}
