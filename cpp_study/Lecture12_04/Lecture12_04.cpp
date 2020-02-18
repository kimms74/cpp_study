//Virtual destructors, virtual assignment, and overriding virtualization

#include <iostream>
using namespace std;

//class Base
//{
//public:
//    ~Base()
//    {
//        cout << "~Base()" << endl;
//    }
//};
//
//class Derived : public Base
//{
//private:
//    int* m_array;
//
//public:
//    Derived(int length)
//    {
//        m_array = new int[length];
//    }
//
//    ~Derived()
//    {
//        cout << "~Derived()" << endl;
//        delete[] m_array;
//    }
//};

class Base
{
public:
    virtual ~Base()
    {
        cout << "~Base()" << endl;
    }
};

class Derived : public Base
{
private:
    int* m_array;

public:
    Derived(int length)
    {
        m_array = new int[length];
    }

    virtual ~Derived() override //base 소멸자에 virtual을 붙여주면 derived 소멸자의 이름이 달라도 override 붙일 수 있다
    {                           //derived class 함수에 virtual을 안붙여도 되지만 알기쉽게 같이 붙여준다
        cout << "~Derived()" << endl;
        delete[] m_array;
    }
};

int main()
{
    //Derived derived(5);   //derived 소멸자 실행되고 base 소멸자 실행됨

    //Derived* derived = new Derived(5);  //Derived(5): 익명 객체, 그냥 쓰려면 new Derived[length]로 해야함
    //Base* base = derived;
    //delete base;                      //다형성 생성 시 derived class는 여러 개고 base class는 하나이므로 derived class가 어디서 온지 확실히 알기 힘들기 때문에 보통 base 소멸자를 실행시킨다
                                        //base 소멸자만 실행됨


    Derived* derived = new Derived(5);
    Base* base = derived;
    delete base;                        //base 소멸자 앞에 virtual을 붙여주면 derived 소멸자가 먼저 실행된다



    return 0;
}
