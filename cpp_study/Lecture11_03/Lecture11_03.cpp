//Order of construction of derived classes

#include <iostream>

using namespace std;

//class Mother
//{
//public:
//    int m_i;
//
//    Mother()
//        :m_i(1)
//    {
//        cout << "Mother construction " << endl;
//    }
//};
//
//class Child : public Mother
//{
//public:
//    double m_d;
//
//public:
//    Child()
//        : Mother(), m_d(1.0) //�����δ� Mother()�� �������� //m_i(1024) �� m_i�� ���� �ʱ�ȭ�� �ȵƱ⶧���� �Ұ���
//    {
//        //this->m_i = 10;
//        //this->Mother::m_i = 1024;
//
//        cout << "Child construction " << endl;
//
//        //m_i = 1024; // �̶��� m_i�� �ʱ�ȭ �Ʊ⶧���� �����ϴ�
//    }
//};
//
//
//
//class Mother
//{
//public:
//    int m_i;
//
//    Mother(const int& i_in =0)  //default parameter�� ����� default constructor�� �ȸ��� �ȴ�
//        :m_i(1)
//    {
//        cout << "Mother construction " << endl;
//    }
//};

//class Child : public Mother
//{
//public:
//    double m_d;
//
//public:
//    Child()
//        : m_d(1.0),Mother(1024)    //Mother(1024)ó�� ��� ����, Mother()�� �ڿ� �ֵ� ���� ����ȴ�
//    {
//        cout << "Child construction " << endl;
//    }
//};

class A
{
public:
    A()
    {
        cout << "A constructor " << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B constructor " << endl;
    }
};

class C : public B
{
public:
    C()     //C�� A�� constructor�� ���� ȣ�� �Ұ���
    {
        cout << "C constructor " << endl;
    }
};

int main()
{
    //Child c1;   //Mother class�� ���� �ʱ�ȭ �� ���� Child class�� �ʱ�ȭ �Ѵ�


    C c;    // A, B, C ������ constructor�� �����Ų��
            //destructor�� �ݴ�� ����ȴ�



    return 0;
}
