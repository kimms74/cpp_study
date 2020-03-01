// Partial template specialization for pointers

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

    void print()
    {
        cout << m_value << endl;
    }
};

template<class T>   //pointer에 대한 템플릿 특수화의 경우에는 <>안을 지우지 않고 둔다
class A<T*>
{
private:
    T* m_value;

public:
    A(T* input)     //Passing arguments by address
        :m_value(input)
    {
    }

    void print()
    {
        cout << *m_value << endl;   //de-referencing
    }
};

int main()
{
    A<int> a_int(123);
    a_int.print();

    int temp = 456;

    //A<int*> a_int_ptr(&temp);   //&temp: temp의 pointer
    //a_int_ptr.print();

    //double temp_d = 3.141592;
    //A<double*> a_double_ptr(&temp_d);   //&temp_d: temp_d의 pointer
    //a_double_ptr.print();



    A<int*> a_int_ptr(&temp);   //Partial template specialization for pointers을 하게 되면
    a_int_ptr.print();          //pointer가 아닌 값이 나온다

    double temp_d = 3.141592;
    A<double*> a_double_ptr(&temp_d);   
    a_double_ptr.print();

    //member function일 경우 Partial template specialization for pointers하는 법 생각해보기

    return 0;
}