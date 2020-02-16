//The override and final specifiers, and covariant return types

#include <iostream>

using namespace std;

class A
{
public:
    virtual void print(int x) { cout << "A" << endl; }
};

class B : public A
{
public:
    //void print(short x) { cout << "B" << endl; }
    void print(short x) override { cout << "B" << endl; }   //함수 뒤에 override를 붙여주면 실수를 방지할 수 있다
                                                            //parameter를 다르게 적은것, 이름을 다르게 적은 것 등등 컴파일러가 찾아줌!
    //void print(int x) { cout << "B" << endl; }
};                                                          

int main()
{
    A a;
    B b;


    A& ref = b;
    ref.print(1);   //parameter가 다른 함수끼리 overriding 불가능하다! (컴파일러가 오류를 잡아낼 수 없다, overloading으로 인식함)





    return 0;
}
