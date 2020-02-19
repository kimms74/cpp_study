//Virtual base classes & the diamond problem

#include <iostream>

using namespace std;

class PowerDevice
{
public:
    int m_i;

    PowerDevice(int power)
    {
        cout << "PowerDevice: " << power << '\n';
    }
};

//class Scanner : public PowerDevice
class Scanner : virtual public PowerDevice  //public앞에 virtual 삽입
{
public:
    Scanner(int scanner, int power)
        : PowerDevice(power)
    {
        cout << "Scanner: " << scanner << '\n';
    }
};

//class Printer : public PowerDevice
class Printer : virtual public PowerDevice  //public앞에 virtual 삽입
{
public:
    Printer(int printer, int power)
        : PowerDevice(power)
    {
        cout << "Scanner: " << printer << '\n';
    }
};

class Copier : public Scanner, public Printer   //다이아몬드 상속 구조
{
public:
    Copier(int scanner, int printer, int power)
        //: Scanner(scanner, power), Printer(printer, power)
        : Scanner(scanner, power), Printer(printer, power), PowerDevice(power)  
    {   //virtual base class를 사용할 때 PowerDevice 생성자 실행은 한번만 해야한다
    }   //그 역할은 다이아몬드 상속 구조 제일 아래에 있는 Copier가 담당하므로 Copier 생성자에서 PowerDevice를 부른다 
};      //non-immediate-parent constructor(바로 위 상속자가 아닌 상속자)를 부르는 유일한 case이다

int main()
{
    //diamond 구조를 생각하고 A를 상속받는 B1,B2와 B1,B2를 상속받는 C를 만들지만
    //실제로는 B1, B2가 각각 A를 상속하는 구조로 만들어진다
    //A가 하나만 있는 구조를 만들기 위해 virtual public A를 사용한다!

    Copier cop(1, 2, 3);

    cout << &cop.Scanner::PowerDevice::m_i << endl;     //scanner와 printer 안에 있는 m_i의 주소가 다르게 나온다
    cout << &cop.Printer::PowerDevice::m_i << endl;


    return 0;
}
