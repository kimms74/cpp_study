//Anonymous objects

#include <iostream>

using namespace std;

//class A
//{
//public:
//    A()
//    {
//        cout << "Constructor" << endl;
//    }
//
//    ~A()
//    {
//        cout << "Destructor" << endl;
//    }
//
//    void print()
//    {
//        cout << "Hello" << endl;
//    }
//};
//


//class A
//{
//public:
//    int m_value;
//
//    A(const int& input)
//        :m_value(input)
//    {
//        cout << "Constructor" << endl;
//    }
//
//    ~A()
//    {
//        cout << "Destructor" << endl;
//    }
//
//    void printDouble()
//    {
//        cout << m_value*2 << endl;
//    }
//};


class Cents
{
private:
    int m_cents;

public:
    Cents(int cents) { m_cents = cents; }

    const int getCents() const { return m_cents; }
};

Cents add(const Cents& c1, const Cents& c2)         //function
{
    return Cents(c1.getCents() + c2.getCents() );    //�ΰ��� ���� parameter�� �޴� class Cents�� return 
}


int main()
{
    //A a;
    //a.print();
    //a.print();      //�Լ��� 2�� �����ص� Constructor,Destructor �ѹ����� ������

    //A().print();    //A()�� rvalueó�� �۵�, �ѹ� ����ϸ� �������
    //A().print();    //instance�� ���鶧ó�� ��Ȱ���� �Ұ���
    //                //Constructor,Destructor �Ź� ������



    //A a(1);
    //a.printDouble();

    //A(1).printDouble();



    cout << add(Cents(6), Cents(8)).getCents() << endl;
    cout << int(6) + int(8) << endl;    //casting�� �ƴ� anonymous variable?
                                        //operator overloading ����(���߿� ����)

    return 0;
}
