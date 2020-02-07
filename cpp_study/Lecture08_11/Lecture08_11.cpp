//static member function

#include <iostream>

using namespace std;

//class Something
//{
//private:
//    static int s_value;
//    int m_value;
//    
//public:
//    //Something()
//        //:m_value(123), s_value(1024); //���� cpp������ static constructor�� �������� �ʾ�
//    //{}                                  //static member variable�� constrctor���� �ʱ�ȭ�� �� ����(static constructor�� �����Ѵٸ� �����������̴�)

//    static int getValue()     //static member function�� instance���� ���� ����
//    {
//        return s_value;         //s_value�� �������� �޸𸮿� �����Ͽ� ���� ����(this�� �����ص� �ȴ�)
//        //return this->s_value; //this�� non static member function������ ����� �� �ִ�
//        //return m_value;       //this�� �����ؾ��ϴ� ��� ���� static member function���� �Ұ�����
//    }
//
//    int temp()
//    {
//        //return this->s_value + this->m_value;   //this�� �ǹ�: Ư�� instance�� �ּҸ� �޾� �� instance�� �����ִ� member���� �ּҸ� ������ ���ڴ�
//        return this->s_value;
//    }
//};
//int Something::s_value = 1024;


class Something
{
public:
    class _init
    {
    public:
        _init()
        {
            s_value = 9876; //���� class�̱� ������ private�� static member variable�� ���ٰ���
        }                   //s_value�� � type�̵� �� ������(array, string, ...)
    };

private:
    static int s_value;         //�ٸ� ������ static�� �����ڿ��� �ٷ� �� �ִٰ� ��
    int m_value;

    static _init s_initializer; //inner class�� static���� �ϳ� ����

public:
    static int getValue()
    {
        return s_value;
   }

    int temp()
    {
        return this->s_value;
    }
};

int Something::s_value;              //�ʱ�ȭ�� ������� memory�� ������ �ȴ�(���� �ȳ־��ָ� 0���� �ʱ�ȭ)
Something::_init Something::s_initializer;  //inner class�� �̿��� �ʱ�ȭ�ϴ� ���


int main()
{
    //cout << Something::getValue() << endl;

    //Something s1;
    //cout << s1.getValue() << endl;
    ////cout << s1.s_value << endl;




    Something s1, s2;
    
    int (Something:: * fptr1)() = &Something::temp; //member function�� class�� ���������Ƿ� &�� �ٿ�����Ѵ�
                                                    //���� pointer function�� �Ҽ��� ��Ÿ���� ���� Something::�� ���δ�
                                                    //*�� �ǹ�:member function�� pointer�� �����ϰڴٴ� ��
    
    cout << (s2.*fptr1)() << endl;  //class���� member function�� ������ �� s2.*�� ���̴� ����
                                    //fptr1�� Something::temp�� pointer�� ������ �ִµ�
                                    //�� pointer�� �Լ��� �����ų �� s2��� instance�� pointer�� �Ѱ��ְ�
                                    //s2�� this pointer�� �����ٰ� �۵��ϴ� ������
                                    //member functnion ��ü�� ������ pointer�� ������ �ְ� instance�� ���� this pointer�� ����� �����Ų��
                                    //non static member function�� instance�� ���ӵ��ֱ⿡ this pointer�� ������ �۵� ���Ѵ�
                                    //�׷��Ƿ� non static member function ���ο� this pointer�� �����ִ�
                                    //class function pointer�� ��� .*���� �θ���(class ���� fptr1�̶�� �Լ��� �����Ƿ� *�� ������ ã�ư��°�)
    
    
    
    int (* fptr2)() = &Something::getValue; //static member function�� Ư�� instance�� ������� �����ų �� �ִ�
    
    cout << fptr2() << endl;    //Ư�� instance�� ���� �Ƚ��ѵ� �۵��� �ȴ�

    return 0;
}
