//Adding new functionality to a derived class

#include <iostream>

using namespace std;

class Base
{
//private:      
protected:
    int m_value;

public:
    Base(int value)
        : m_value(value)
    {

    }

};

class Derived : public Base
{
public:
    Derived(int value)
        :Base(value)        //Base �����ڸ� ȣ�����ָ� class Base�� ���� instance�� �ȸ��� �ȴ�
    {
    }

    void setValue(int value)    //�ڽ� class���� �θ� class�� ������ �ǵ��̷��� �θ� ������ ���� �����ڸ� protected�� �ϸ� �ȴ�
    {
        Base::m_value = value;  //m_value�� private member�̹Ƿ� ���� �Ұ�
                                //m_value�� protected�� ��� ���� ����
        //do some work with the variables defined in Derived
        //�θ� class�� ������ ���� �����ڸ� private���� �ϰ� getValue() �Լ��� �ҷ� ����ϸ� �������Ƿ� protected ����ض�!
    }                           
};


int main()
{











    return 0;
}
