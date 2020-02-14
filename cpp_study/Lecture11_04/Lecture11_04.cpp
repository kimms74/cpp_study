//Constructors and initialization of derived classes

#include <iostream>

using namespace std;

//class Mother
//{
//private:
//    int m_i;
//
//    Mother(const int& i_in =0)
//        :m_i(1)
//    {
//        cout << "Mother construction " << endl;
//    }
//};
//
//class Child : public Mother
//{
//private:
//    //float m_d;
//    double m_d;
//    int m_temp;
//
//public:
//    Child()
//        : m_d(1.0),Mother(1024)
//    {
//        cout << "Child construction " << endl;
//    }
//};

class A
{
public:
    A(int a)
    {
        cout << "A: " << a << endl;
    }

    ~A()
    {
        cout << "Destructor A" << endl;
    }
};

class B : public A
{
public:
    B(int a, double b)
        :A(a)                   //A의 constructor 실행 (A의 constructor에 parameter가 있는 경우 빼먹으면 안된다)
    {
        cout << "B: " << b << endl;
    }

    ~B()
    {
        cout << "Destructor B" << endl;
    }
};

class C : public B
{
public:
    C(int a, double b, char c)
        : B(a, b)               //B의 constructor 실행
    {
        cout << "C : " << c << endl;
    }

    ~C()
    {
        cout << "Destructor C" << endl;
    }
};

int main()
{
    //Child c1;

    //cout << sizeof(Mother) << endl; //4bytes
    //cout << sizeof(Child) << endl;  //8, 16 bytes //Mother class에서 물려준 m_i도 사용되기 때문에 크게 나온다
    //                                // double은 8인데 왜 12가 더 붙을까?
    //                                //8bytes를 한덩어리로 메모리를 정리하기 때문에 type에 따른 초기화 순서가 중요하다
    
    
    C c(1024, 3.14, 'a');   //A,B,C 순으로 생성자를 실행하고 C,B,A 순으로 소멸자를 실행한다



    
    return 0;
}
