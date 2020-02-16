//Calling inherited functions and overriding behavior

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

    friend std::ostream& operator << (std::ostream& out, const Base& b)
    {
        out << "This is base output " << endl;
        return out;
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

    //void print()            //overriding: �θ� class�� �ִ� �Լ��� ���� �̸��� �Լ��� �ڽ� class���� ���� ��
    //{
    //    cout << "I'm derived " << endl;
    //}

    void print()            
    {
        Base::print();      //�θ� class �Լ� ��ɿ� �߰��� �ٸ� ����� �ְ� ���� �� �θ� class �Լ��� �ڽ� class�Լ����� ����ǰ� �ϴ� ��
        cout << "I'm derived " << endl;
        //print()   //�̷��� �ۼ��ϸ� ����Լ��� �ν��� ���� �ݺ��Ѵ�(Base::�� �� �ٿ������)
    }

    friend std::ostream& operator << (std::ostream& out, const Derived& d)
    {
        cout << static_cast<Base>(d);   //static_cast�� �̿��� Base�� ��¿����ڸ� ����� �� �ִ�, d�� input parameter�� �̸��� �Ȱ��� ���
                                        //Derived�� Base�� casting ������ ����: �ڽ� class�� �θ� class�� ���� ������ ���ϰ� �����Ƿ�
        out << "This is derived output " << endl;
        return out;
    }
};

int main()
{
    //Base base(5);
    //base.print();

    //Derived derived(7);
    //derived.print();


    Base base(5);
    cout << base;   //��¿����ڿ� endl�� �־������Ƿ� �ڵ忡 end�����ش�

    Derived derived(7);
    cout << derived;





    return 0;
}
