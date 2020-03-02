// Templatize member function one more time

#include <iostream>

using namespace std;

template<class T>
class A
{
private:
    T m_value;

public:
    A(const T& input)   //Passing arguments by reference
        :m_value(input)
    {
    }

    //template<typename TT>   //TT는 doSomething에서만 작동하는 template
    //void doSomething()
    //{
    //    cout << typeid(T).name() << " " << typeid(TT).name() << endl;
    //}

    template<typename TT>
    void doSomething(const TT& input)
    {
        cout << typeid(T).name() << " " << typeid(TT).name() << endl;
        cout << (TT)m_value << endl;    //casting 할때 template을 사용하기도 한다
    }

    void print()
    {
        cout << m_value << endl;
    }
};

int main()
{
    //A<int> a_int(123);
    //a_int.print();

    ////a_int.doSomething<float>(); //parameter가 없는 function일 경우에는 <>을 통해 직접적으로 type을 넣어줄 수 있다

    //a_int.doSomething(123.4);    //function template의 경우 parameter로 type을 알 수 있으면 <float>을 빼도된다
    //a_int.doSomething('a');



    A<char> a_char('A');
    
    a_char.doSomething(int());  //parameter로 member function의 instantiation을 구별하기 위해 int()로 넣기도 한다
    a_char.doSomething(char());



    return 0;
}
