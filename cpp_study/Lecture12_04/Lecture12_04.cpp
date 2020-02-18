//Virtual destructors, virtual assignment, and overriding virtualization

#include <iostream>
using namespace std;

//class Base
//{
//public:
//    ~Base()
//    {
//        cout << "~Base()" << endl;
//    }
//};
//
//class Derived : public Base
//{
//private:
//    int* m_array;
//
//public:
//    Derived(int length)
//    {
//        m_array = new int[length];
//    }
//
//    ~Derived()
//    {
//        cout << "~Derived()" << endl;
//        delete[] m_array;
//    }
//};

class Base
{
public:
    virtual ~Base()
    {
        cout << "~Base()" << endl;
    }
};

class Derived : public Base
{
private:
    int* m_array;

public:
    Derived(int length)
    {
        m_array = new int[length];
    }

    virtual ~Derived() override //base �Ҹ��ڿ� virtual�� �ٿ��ָ� derived �Ҹ����� �̸��� �޶� override ���� �� �ִ�
    {                           //derived class �Լ��� virtual�� �Ⱥٿ��� ������ �˱⽱�� ���� �ٿ��ش�
        cout << "~Derived()" << endl;
        delete[] m_array;
    }
};

int main()
{
    //Derived derived(5);   //derived �Ҹ��� ����ǰ� base �Ҹ��� �����

    //Derived* derived = new Derived(5);  //Derived(5): �͸� ��ü, �׳� ������ new Derived[length]�� �ؾ���
    //Base* base = derived;
    //delete base;                      //������ ���� �� derived class�� ���� ���� base class�� �ϳ��̹Ƿ� derived class�� ��� ���� Ȯ���� �˱� ����� ������ ���� base �Ҹ��ڸ� �����Ų��
                                        //base �Ҹ��ڸ� �����


    Derived* derived = new Derived(5);
    Base* base = derived;
    delete base;                        //base �Ҹ��� �տ� virtual�� �ٿ��ָ� derived �Ҹ��ڰ� ���� ����ȴ�



    return 0;
}
