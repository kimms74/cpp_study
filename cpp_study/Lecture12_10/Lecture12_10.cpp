//Dynamic casting

#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
    int m_i = 0;

    virtual void print()
    {
        cout << "I'm Base" << endl;
    }
};

class Derived1 : public Base
{
public:
    int m_j = 1024;

    virtual void print() override
    {
        cout << "I'm Derived1" << endl;
    }
};

class Derived2 : public Base
{
public:
    string m_name = "Dr. Two";

    virtual void print() override
    {
        cout << "I'm Derived2" << endl;
    }
};

int main()
{
    Derived1 d1;
    d1.m_j = 2048;

    Base* base = &d1;
    //base->m_j;   //���v�� Derived class�� Base�� �������� �� Derived class ��Ҹ� �θ��� ������, �ʿ��� ���� �ִ�

    //auto* base_to_d1 = dynamic_cast<Derived1*>(base);   //base�� �ٽ� Derived�� ���� ����ȯ ��Ű�� ��
    //cout <<base_to_d1->m_j << endl; //2048              //dynamic_cast���� virtual function���� ����ϴ°� ����
    //base_to_d1-> m_j = 256;

    //cout << d1.m_j << endl;         //256           



    //auto* base_to_d1 = dynamic_cast<Derived2*>(base);   //Derived1�� Base�� �������� �� Derived2�� dynamic_casting�� ��
    ////cout << base_to_d1->m_name << endl;                 //dynamic_cast�� casting�� �����ϸ� nullptr�� �־����
    //
    //if (base_to_d1 != nullptr)                           //�׷��� if�� assert�� üũ�ϴ°� ����
    //    cout << base_to_d1->m_name << endl;
    //else
    //    cout << "Failed" << endl;
    


    auto* base_to_d1 = static_cast<Derived2*>(base);    //static_cast�� casting�� �����ϸ� ����ȯ�� �Ƚ�Ű�� �״�� �д�
                                                        //������ runtime�� error check�� ���ϹǷ� �� ��쿡�� dynamic_cast�� �̿��ϴ°� ��õ(���ϸ� static_cast �ᵵ �ȴ�)
    if (base_to_d1 != nullptr)                          //�׷��� ���� ����ȯ�� �ǵ����̸� ���� �ʴ°� ����(functional�̳� lambda function ����)
        base_to_d1->print();
    else
        cout << "Failed" << endl;
    return 0;
}
\