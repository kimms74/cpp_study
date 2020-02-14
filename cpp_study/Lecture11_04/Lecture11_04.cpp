//Constructors and initialization of derived classes

#include <iostream>

using namespace std;

//class Mother
//{
//private:
//    int m_i;
//
//    Mother(const int& i_in =0)
//        :m_i(1)
//    {
//        cout << "Mother construction " << endl;
//    }
//};
//
//class Child : public Mother
//{
//private:
//    //float m_d;
//    double m_d;
//    int m_temp;
//
//public:
//    Child()
//        : m_d(1.0),Mother(1024)
//    {
//        cout << "Child construction " << endl;
//    }
//};

class A
{
public:
    A(int a)
    {
        cout << "A: " << a << endl;
    }

    ~A()
    {
        cout << "Destructor A" << endl;
    }
};

class B : public A
{
public:
    B(int a, double b)
        :A(a)                   //A�� constructor ���� (A�� constructor�� parameter�� �ִ� ��� �������� �ȵȴ�)
    {
        cout << "B: " << b << endl;
    }

    ~B()
    {
        cout << "Destructor B" << endl;
    }
};

class C : public B
{
public:
    C(int a, double b, char c)
        : B(a, b)               //B�� constructor ����
    {
        cout << "C : " << c << endl;
    }

    ~C()
    {
        cout << "Destructor C" << endl;
    }
};

int main()
{
    //Child c1;

    //cout << sizeof(Mother) << endl; //4bytes
    //cout << sizeof(Child) << endl;  //8, 16 bytes //Mother class���� ������ m_i�� ���Ǳ� ������ ũ�� ���´�
    //                                // double�� 8�ε� �� 12�� �� ������?
    //                                //8bytes�� �ѵ���� �޸𸮸� �����ϱ� ������ type�� ���� �ʱ�ȭ ������ �߿��ϴ�
    
    
    C c(1024, 3.14, 'a');   //A,B,C ������ �����ڸ� �����ϰ� C,B,A ������ �Ҹ��ڸ� �����Ѵ�



    
    return 0;
}
