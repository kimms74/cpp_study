//Hiding inherited functionality

#include <iostream>

using namespace std;

class Base
{
protected:
    int m_i;

public:
    Base(int value)
        : m_i(value)
    {}

    void print()
    {
        cout << "I'm base " << endl;
    }
};

class Derived : public Base
{
private:
    double m_d;

public:
    Derived(int value)
        :Base(value)
    {}

    using Base::m_i;        //protected�� �ִ� m_i�� Derived class������ public���� ���� �� �ִ�

private:
    using Base::print;      //()�� ������ �ȵȴ�!  //derived������ private���� �۵�
    void print() = delete;  //�ڽ� class������ �����ϰ� ���� ���!
};

int main()
{
    Base base(5);
    base.print();

    Derived derived(7);

    derived.m_i = 1024; //������ m_i�� protected ���� ������ �ȿ� �־� ��� �Ұ��� ������
                        //Derived class���� public���� ��������⶧���� derived������ �ܺο��� ��� �����ϴ�
    
    derived.print();    //������ Base class�� public�� �־� ��� ���������� 
                        //Derived class���� private���� ��������⶧���� derived������ �ܺο��� ��� �Ұ����ϴ�






    return 0;
}
