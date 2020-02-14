//Inheritance and access specifiers

#include <iostream>

using namespace std;

class Base
{
public:             //public, protected, private를 접근 지정자라고 부른다
    int m_public;
protected:          //상속하는 class에서만 public처럼 사용가능
    int m_protected;
private:
    int m_private;
};

//class Derived : public Base
//{
//public:
//    Derived()
//    {
//        m_public = 123;
//        m_protected = 123;  
////        //m_private = 123;
//    }
//};

//class Derived : protected Base
//{
//public:
//    Derived()
//    {
//        Base::m_public = 123;   // this->m_public; m_public;과 똑같다(Base::로 표현하는걸 추천)
//        Base::m_protected = 123;  
////        Base::m_private = 123;  
//    }
//};

class Derived : private Base
{
public:
    Derived()
    {
        Base::m_public = 123;   
        Base::m_protected = 123;
        //Base::m_private = 123;  
    }
};

class GrandChild : public Derived
{
public:
    GrandChild()
    {
        Derived::m_public;      //부모 class의 조부모 class에 대한 접근 지정자가 무엇인지에 따라 자식 class에서 조부모 class member variable에 접근 가능 여부를 알 수 있다
        Derived::m_protected;   //조부모의 member variable이 public에 정의 돼 있어도 부모 class가 조부모 class를 private으로 받아 온다면 member variable을 private으로 여김
        Derived::m_private;     //조부모의 접근 지정자와 부모의 조부모에대한 접근 지정자를 비교해 더 엄격한 쪽을 접근 지정자로 결정하여 사용한다
    }                           //그러므로 m_public도 접근 불가능하다
};

int main()
{
    //Base base;

    //base.m_public = 123;
    ////base.m_protected = 123;
    ////base.m_private = 123;




    Derived derived;

    //상속을 public으로 했을 때
    //derived.m_public = 1024;
    ////derived.m_protected = 1024;       //상속받는 곳에서 쓰는 접근지정자와 상속되는 class의 접근 지정자를 비교해 더 엄격한 것으로 실행되게하므로
    ////derived.m_private = 1024;         //class 밖 외부에서는 부를 수 없다

    //상속을 protected로 했을 때
    derived.m_public = 1024;
    //derived.m_protected = 1024;
    //derived.m_private = 1024;

    //상속을 private로 했을 때
    //derived.m_public = 1024;
    //derived.m_protected = 1024;
    //derived.m_private = 1024;


    return 0;
}
