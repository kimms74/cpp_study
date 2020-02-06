//friend function and class

#include <iostream>

using namespace std;

//class B;    //forward declaration //class A가 class B 위에 정의 돼있기 때문에
//            //class A에서는 B의 존재를 모르므로 미리 선언해두는 것
//
//class A
//{
//private:
//    int m_value = 1;
//
//    friend void doSomething(A& a, B& b);  //외부 function을 friend로 선언
//};
//
//class B
//{
//private:
//    int m_value = 2;
//
//    friend void doSomething(A& a, B& b);
//};
//
//void doSomething(A& a, B& b)      //외부 function이 class A, B에 접근하는 법
//{
//    cout << a.m_value << endl;
//}



//class A
//{
//private:
//    int m_value = 1;
//
//    friend class B;   //class B에게 통채로 열어주겠다
//};                    //class B가 A에 접근하는 법
//
//class B
//{
//private:
//    int m_value = 2;
//
//public:
//    void doSomething(A& a)
//    {
//        cout << a.m_value << endl;
//    }
//};



class A;

class B
{
private:
    int m_value = 2;

public:
    void doSomething(A& a);     //class A를 forward declaration함
};

class A
{
private:
    int m_value = 1;

    friend void B::doSomething(A& a);   //class B의 특정함수에만 열어주겠다
};                                      //class B를 먼저 정의했으므로 B::doSomething의 존재를 안다                        

void B::doSomething(A& a)               //정의를 class B 밖에서 함
{
    cout << a.m_value << endl;          //doSomething 정의를 class A 아래에 하기때문에 class A에 대한 정보를 다 안다
}



int main()
{
    //A a;
    //B b;
    //doSomething(a,b);



    A a;
    B b;
    b.doSomething(a);






    return 0;
}
