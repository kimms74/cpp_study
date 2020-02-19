//The virtual table

#include <iostream>
#include <string>

using namespace std;

//class Base
//{
//public:
//    //FunctionPointer *_vptr;
//    virtual void fun1() {};     //virtual function�� ����� ���� ���ε����� ǥ�� �����(function pointer ���)
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
    //    virtual fun1()        fun1()      //Base class�� virtual fun1()�� ã�ư�
    //    virtual fun2()        fun2()      //Base class�� virtual fun2()�� ã�ư�

    //class Der : public Base   Der VTable
    //    *_vptr (inherited)    fun1()      //Der class�� virtual fun1()�� ã�ư�
    //    virtual fun1()        fun2()      //Der VTable�� ���⶧���� Base class�� virtual fun2()�� ã�ư�(������)



    cout << sizeof(Base) << endl;   //virtual�� �Ⱥ����� �ּ� byte 1�� ���´�
    cout << sizeof(Der) << endl;    //virtual�� ������ function pointer�� �����ϹǷ� 8bytes�� ���´�
    return 0;
}
