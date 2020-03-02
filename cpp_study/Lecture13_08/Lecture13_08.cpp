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

    //template<typename TT>   //TT�� doSomething������ �۵��ϴ� template
    //void doSomething()
    //{
    //    cout << typeid(T).name() << " " << typeid(TT).name() << endl;
    //}

    template<typename TT>
    void doSomething(const TT& input)
    {
        cout << typeid(T).name() << " " << typeid(TT).name() << endl;
        cout << (TT)m_value << endl;    //casting �Ҷ� template�� ����ϱ⵵ �Ѵ�
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

    ////a_int.doSomething<float>(); //parameter�� ���� function�� ��쿡�� <>�� ���� ���������� type�� �־��� �� �ִ�

    //a_int.doSomething(123.4);    //function template�� ��� parameter�� type�� �� �� ������ <float>�� �����ȴ�
    //a_int.doSomething('a');



    A<char> a_char('A');
    
    a_char.doSomething(int());  //parameter�� member function�� instantiation�� �����ϱ� ���� int()�� �ֱ⵵ �Ѵ�
    a_char.doSomething(char());



    return 0;
}
