//The virtual table

#include <iostream>
#include <string>

using namespace std;

//class Base
//{
//public:
//    //FunctionPointer *_vptr;
//    virtual void fun1() {};     //virtual function이 생기면 동적 바인딩으로 표를 만든다(function pointer 사용)
//    virtual void fun2() {};
//};
//
//class Der : public Base
//{
//public:
//    //FunctinioPointer *_vptr;
//    virtual void fun1() {};
//};



class Base
{
public:
    virtual void fun1() {};     
    void fun2() {};
};

class Der : public Base
{
public:
    void fun1() {};
    void fun3() {};
};

int main()
{
    Base my_base;
    //class Base
    //    *_vptr                Base VTable
    //    virtual fun1()        fun1()      //Base class의 virtual fun1()을 찾아감
    //    virtual fun2()        fun2()      //Base class의 virtual fun2()을 찾아감

    //class Der : public Base   Der VTable
    //    *_vptr (inherited)    fun1()      //Der class의 virtual fun1()을 찾아감
    //    virtual fun1()        fun2()      //Der VTable에 없기때문에 Base class의 virtual fun2()을 찾아감(차이점)



    cout << sizeof(Base) << endl;   //virtual이 안붙으면 최소 byte 1이 나온다
    cout << sizeof(Der) << endl;    //virtual이 붙으면 function pointer를 생성하므로 8bytes가 나온다
    return 0;
}
