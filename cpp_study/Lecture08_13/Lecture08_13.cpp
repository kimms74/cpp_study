//Anonymous objects

#include <iostream>

using namespace std;

//class A
//{
//public:
//    A()
//    {
//        cout << "Constructor" << endl;
//    }
//
//    ~A()
//    {
//        cout << "Destructor" << endl;
//    }
//
//    void print()
//    {
//        cout << "Hello" << endl;
//    }
//};
//


//class A
//{
//public:
//    int m_value;
//
//    A(const int& input)
//        :m_value(input)
//    {
//        cout << "Constructor" << endl;
//    }
//
//    ~A()
//    {
//        cout << "Destructor" << endl;
//    }
//
//    void printDouble()
//    {
//        cout << m_value*2 << endl;
//    }
//};


class Cents
{
private:
    int m_cents;

public:
    Cents(int cents) { m_cents = cents; }

    const int getCents() const { return m_cents; }
};

Cents add(const Cents& c1, const Cents& c2)         //function
{
    return Cents(c1.getCents() + c2.getCents() );    //두개의 합을 parameter로 받는 class Cents를 return 
}


int main()
{
    //A a;
    //a.print();
    //a.print();      //함수를 2번 실행해도 Constructor,Destructor 한번씩만 생성됨

    //A().print();    //A()가 rvalue처럼 작동, 한번 사용하면 사라진다
    //A().print();    //instance를 만들때처럼 재활용은 불가능
    //                //Constructor,Destructor 매번 생성됨



    //A a(1);
    //a.printDouble();

    //A(1).printDouble();



    cout << add(Cents(6), Cents(8)).getCents() << endl;
    cout << int(6) + int(8) << endl;    //casting이 아닌 anonymous variable?
                                        //operator overloading 개념(나중에 배운다)

    return 0;
}
