//Inheritance relationship 1

#include <iostream>

using namespace std;

class Mother
{
//private:
protected:   // �ܺο��� ����� �Ұ��������� �ڽ� class������ ���� ��������
    int m_i;

public:
    Mother(const int& i_in)
        : m_i(i_in)
    {
        std::cout << "mother constructor" << std::endl;
    }

    void setValue(const int& i_in)
    {
        m_i = i_in;
    }

    int getValue()
    {
        return m_i;
    }
};

class Child : public Mother //public���� Mother�� �θ��� Mother class�� �ִ� ���� �� ����� �� �ִ�
{
private:
    double m_d;

public:
    Child(const int& i_in, const double& d_in)  //Child class�� ������ �� Mother class�� �����ڸ� ���� ȣ���Ѵ�
        //:m_i(i_in), m_d(d_in) //Child class�� ������ �� m_i�� ���� ������ �Ҵ��� �ȵȴ�
        :Mother(i_in),m_d(d_in)
    {
        //Mother::setValue(i_in);   //���� :Mother(i_in),m_d(d_in)�� ���� Mother �����ڸ� ����鼭 Child �����ڵ� ����
        //m_d = d_in;               //{}���� �ʿ������
    }
    void setValue(const double& d_in)
    {
        m_d = d_in;
    }
    
    double getValue()
    {
        return m_d;
    }

    void setValue(const int& i_in, const double& d_in)
    {
        //m_i = i_in; //m_i�� protected:�϶� ����
        Mother::setValue(i_in);
        m_d = d_in;
    }
};

class Daughter : public Mother  //����� ���� class�� derived class��� �θ���(����ϴ� class�� generalized class��� ��)
{

};

class Son : public Mother
{

};

int main()
{
    //Mother mother;
    //mother.setValue(1024);
    //cout << mother.getValue() << endl;

    //Child child;
    //child.setValue(128);
    //cout << child.getValue() << endl;
    //child.Mother::setValue(1024);


    
    Child child(1024, 128);                 //Child class�� ������ �� Mother class�� �����ڸ� ���� ȣ���Ѵ�
    cout << child.Mother::getValue() << endl;
    cout << child.getValue() << endl;

    return 0;
}
