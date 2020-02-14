//Inheritance and access specifiers

#include <iostream>

using namespace std;

class Base
{
public:             //public, protected, private�� ���� �����ڶ�� �θ���
    int m_public;
protected:          //����ϴ� class������ publicó�� ��밡��
    int m_protected;
private:
    int m_private;
};

//class Derived : public Base
//{
//public:
//    Derived()
//    {
//        m_public = 123;
//        m_protected = 123;  
////        //m_private = 123;
//    }
//};

//class Derived : protected Base
//{
//public:
//    Derived()
//    {
//        Base::m_public = 123;   // this->m_public; m_public;�� �Ȱ���(Base::�� ǥ���ϴ°� ��õ)
//        Base::m_protected = 123;  
////        Base::m_private = 123;  
//    }
//};

class Derived : private Base
{
public:
    Derived()
    {
        Base::m_public = 123;   
        Base::m_protected = 123;
        //Base::m_private = 123;  
    }
};

class GrandChild : public Derived
{
public:
    GrandChild()
    {
        Derived::m_public;      //�θ� class�� ���θ� class�� ���� ���� �����ڰ� ���������� ���� �ڽ� class���� ���θ� class member variable�� ���� ���� ���θ� �� �� �ִ�
        Derived::m_protected;   //���θ��� member variable�� public�� ���� �� �־ �θ� class�� ���θ� class�� private���� �޾� �´ٸ� member variable�� private���� ����
        Derived::m_private;     //���θ��� ���� �����ڿ� �θ��� ���θ𿡴��� ���� �����ڸ� ���� �� ������ ���� ���� �����ڷ� �����Ͽ� ����Ѵ�
    }                           //�׷��Ƿ� m_public�� ���� �Ұ����ϴ�
};

int main()
{
    //Base base;

    //base.m_public = 123;
    ////base.m_protected = 123;
    ////base.m_private = 123;




    Derived derived;

    //����� public���� ���� ��
    //derived.m_public = 1024;
    ////derived.m_protected = 1024;       //��ӹ޴� ������ ���� ���������ڿ� ��ӵǴ� class�� ���� �����ڸ� ���� �� ������ ������ ����ǰ��ϹǷ�
    ////derived.m_private = 1024;         //class �� �ܺο����� �θ� �� ����

    //����� protected�� ���� ��
    derived.m_public = 1024;
    //derived.m_protected = 1024;
    //derived.m_private = 1024;

    //����� private�� ���� ��
    //derived.m_public = 1024;
    //derived.m_protected = 1024;
    //derived.m_private = 1024;


    return 0;
}
