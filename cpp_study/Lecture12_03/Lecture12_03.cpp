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
//    //void print(short x) { cout << "B" << endl; }          //parameter가 달라 컴파일러는 overloading이라고 생각한다
//    
//    //void print(short x) override { cout << "B" << endl; }   //함수 뒤에 override를 붙여주면 실수를 방지할 수 있다
//    //                                                        //parameter를 다르게 적은것, 이름을 다르게 적은 것 등등 컴파일러가 찾아줌!
//    
//    virtual void print() final { cout << "B" << endl; }     //이 클래스의 derived class들에서 이 함수를 override할 수 없게 된다
//};                                                          
//
//class C : public B
//{
//public:
//    virtual void print() { cout << "C" << endl; }           //final function을 override했으므로 오류발생(override 못쓰게 하는 것)
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
    }   //return type이 다르지만 class B는 class A의 derived class이므로 class B를 return type으로 하는 것은 가능하다
};                                          //covariant return type이라한다

int main()
{
    //A a;
    //B b;


    //A& ref = b;
    //ref.print(1);   //parameter가 다른 함수끼리 overriding 불가능하다! (컴파일러가 오류를 잡아낼 수 없다, overloading으로 인식함)




    A a;
    B b;
    //C c;

    A& ref = b;
    b.getThis()->print();
    ref.getThis()->print();     //B::getThis()를 실행시키지만 A가 나온다   //return type이 A이므로 내부적으로 B를 A로 바꿔서 출력해준다

    cout << typeid(b.getThis()).name() << endl;
    cout << typeid(ref.getThis()).name() << endl;


    return 0;
}
