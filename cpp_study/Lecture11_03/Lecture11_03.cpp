//Order of construction of derived classes

#include <iostream>

using namespace std;

//class Mother
//{
//public:
//    int m_i;
//
//    Mother()
//        :m_i(1)
//    {
//        cout << "Mother construction " << endl;
//    }
//};
//
//class Child : public Mother
//{
//public:
//    double m_d;
//
//public:
//    Child()
//        : Mother(), m_d(1.0) //실제로는 Mother()가 숨어있음 //m_i(1024) 는 m_i가 아직 초기화가 안됐기때문에 불가능
//    {
//        //this->m_i = 10;
//        //this->Mother::m_i = 1024;
//
//        cout << "Child construction " << endl;
//
//        //m_i = 1024; // 이때는 m_i가 초기화 됐기때문에 가능하다
//    }
//};
//
//
//
//class Mother
//{
//public:
//    int m_i;
//
//    Mother(const int& i_in =0)  //default parameter를 사용해 default constructor를 안만들어도 된다
//        :m_i(1)
//    {
//        cout << "Mother construction " << endl;
//    }
//};

//class Child : public Mother
//{
//public:
//    double m_d;
//
//public:
//    Child()
//        : m_d(1.0),Mother(1024)    //Mother(1024)처럼 사용 가능, Mother()를 뒤에 둬도 먼저 실행된다
//    {
//        cout << "Child construction " << endl;
//    }
//};

class A
{
public:
    A()
    {
        cout << "A constructor " << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B constructor " << endl;
    }
};

class C : public B
{
public:
    C()     //C는 A의 constructor를 직접 호출 불가능
    {
        cout << "C constructor " << endl;
    }
};

int main()
{
    //Child c1;   //Mother class를 먼저 초기화 한 다음 Child class를 초기화 한다


    C c;    // A, B, C 순으로 constructor를 실행시킨다
            //destructor는 반대로 실행된다



    return 0;
}
