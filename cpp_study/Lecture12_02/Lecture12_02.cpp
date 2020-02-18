//Virtual functions and polymorphism

#include <iostream>

using namespace std;

class A
{
public:
    virtual void print() { cout << "A " << endl; }  //함수가 virtual일 경우 derived class에 overriding 함수가 있을 경우 그 함수를 실행시킨다
};

class B : public A
{
public:
    void print() { cout << "B " << endl; }
};

class C : public B
{
public:
    void print() { cout << "C " << endl; }
};

//class D : public C
//{
//public:
//    void print() { cout << "D " << endl; }
//};

class D : public C
{
public:
    int print() { cout << "D " << endl; return 0; }  //base class의 overriding 함수와 return type이 다르다고 알려줌
};                                                  //상속 구조에서는 base class가 가장 중요하다
                                                    //overloading시에도 return type이 다른걸로는 불가능함 (return type 건들이지마!)
int main()
{
    A a;
    //a.print();

    B b;
    //b.print();

    C c;
    //c.print();

    D d;
    //d.print();

    //A& ref = b;     //pointer로 해도 똑같이 A가 나온다
    //ref.print();  //A

    A& ref = b;     //A의 print()를 virtual로 변경
    ref.print();    //B

    A& ref1 = c;     //A의 print()만 virtual, B의 print()는 아님
    ref1.print();   //C

    B& ref2 = c;     //A의 print()만 virtual, B의 print()는 아님
    ref2.print();   //C     //base class의 함수가 virtual일 경우 derived class들도 모두 virtual인 것처럼 작동한다
                    //derived class에선 virtual 안붙여줘도 됨     
                    //하지만 debugging할 때 overriding한 함수인 것을 나타내기위해 derived class에도 붙여주는게 좋다
    

    //virtual은 stack이 아닌 virtual table을 사용하므로 직접 찾아가는 과정이므로 느리다
    //호출이 빈번하게 되는 함수에는 사용하면 안좋다(게임엔진, 챗봇 등등)
    //for 루프 가장 안쪽에 있는 함수를 virtual로 만들면 현저하게 느려진다
    
    
    
    
    
    
    return 0;       
}
