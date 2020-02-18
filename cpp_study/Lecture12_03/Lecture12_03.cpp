//The override and final specifiers, and covariant return types

#include <iostream>

using namespace std;

//class A
//{
//public:
//    virtual void print(int x) { cout << "A" << endl; }
//};
//
//class B : public A
//{
//public:
//    //void print(short x) { cout << "B" << endl; }          //parameter�� �޶� �����Ϸ��� overloading�̶�� �����Ѵ�
//    
//    //void print(short x) override { cout << "B" << endl; }   //�Լ� �ڿ� override�� �ٿ��ָ� �Ǽ��� ������ �� �ִ�
//    //                                                        //parameter�� �ٸ��� ������, �̸��� �ٸ��� ���� �� ��� �����Ϸ��� ã����!
//    
//    virtual void print() final { cout << "B" << endl; }     //�� Ŭ������ derived class�鿡�� �� �Լ��� override�� �� ���� �ȴ�
//};                                                          
//
//class C : public B
//{
//public:
//    virtual void print() { cout << "C" << endl; }           //final function�� override�����Ƿ� �����߻�(override ������ �ϴ� ��)
//};



class A
{
public:
    void print() { cout << "A" << endl; }
    virtual A* getThis() 
    {
        cout << "A::getThis()" << endl;
        return this; 
    }
};

class B : public A
{
public:

    void print() { cout << "B" << endl; }
    virtual B* getThis() 
    {
        cout << "B::getThis()" << endl;
        return this; 
    }   //return type�� �ٸ����� class B�� class A�� derived class�̹Ƿ� class B�� return type���� �ϴ� ���� �����ϴ�
};                                          //covariant return type�̶��Ѵ�

int main()
{
    //A a;
    //B b;


    //A& ref = b;
    //ref.print(1);   //parameter�� �ٸ� �Լ����� overriding �Ұ����ϴ�! (�����Ϸ��� ������ ��Ƴ� �� ����, overloading���� �ν���)




    A a;
    B b;
    //C c;

    A& ref = b;
    b.getThis()->print();
    ref.getThis()->print();     //B::getThis()�� �����Ű���� A�� ���´�   //return type�� A�̹Ƿ� ���������� B�� A�� �ٲ㼭 ������ش�

    cout << typeid(b.getThis()).name() << endl;
    cout << typeid(ref.getThis()).name() << endl;


    return 0;
}
