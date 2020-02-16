//Hiding inherited functionality

#include <iostream>

using namespace std;

class Base
{
protected:
    int m_i;

public:
    Base(int value)
        : m_i(value)
    {}

    void print()
    {
        cout << "I'm base " << endl;
    }
};

class Derived : public Base
{
private:
    double m_d;

public:
    Derived(int value)
        :Base(value)
    {}

    using Base::m_i;        //protected에 있던 m_i가 Derived class에서는 public으로 사용될 수 있다

private:
    using Base::print;      //()를 넣으면 안된다!  //derived에서는 private으로 작동
    void print() = delete;  //자식 class에서는 사용못하게 막는 기능!
};

int main()
{
    Base base(5);
    base.print();

    Derived derived(7);

    derived.m_i = 1024; //원래는 m_i가 protected 접근 지정자 안에 있어 사용 불가능 하지만
                        //Derived class에서 public으로 선언해줬기때문에 derived에서는 외부에서 사용 가능하다
    
    derived.print();    //원래는 Base class의 public에 있어 사용 가능하지만 
                        //Derived class에서 private으로 선언해줬기때문에 derived에서는 외부에서 사용 불가능하다






    return 0;
}
