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

template<class T>   //pointer�� ���� ���ø� Ư��ȭ�� ��쿡�� <>���� ������ �ʰ� �д�
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

    //A<int*> a_int_ptr(&temp);   //&temp: temp�� pointer
    //a_int_ptr.print();

    //double temp_d = 3.141592;
    //A<double*> a_double_ptr(&temp_d);   //&temp_d: temp_d�� pointer
    //a_double_ptr.print();



    A<int*> a_int_ptr(&temp);   //Partial template specialization for pointers�� �ϰ� �Ǹ�
    a_int_ptr.print();          //pointer�� �ƴ� ���� ���´�

    double temp_d = 3.141592;
    A<double*> a_double_ptr(&temp_d);   
    a_double_ptr.print();

    //member function�� ��� Partial template specialization for pointers�ϴ� �� �����غ���

    return 0;
}