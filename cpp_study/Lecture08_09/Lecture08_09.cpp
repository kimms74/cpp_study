#include <iostream>
#include <string>

using namespace std;

//class Something
//{
//public:
//    int _value = 0;
//
//    Something(const Something &st_in)   //class���ο� �����ִ� copy constructor�̴�
//    {
//        _value = st_in._value;
//
//        cout << "Copy constructor" << endl;
//    }
//
//    Something()
//    {
//        cout << "Constructor" << endl;
//    }
//
//    void setValue(int value_in) //setValue()�� ���ο� ���� �ٲٴ� �ڵ尡 �����Ƿ�
//    {                           //setValue() const�� ������ ���� �߻��Ѵ�
//        _value = value_in;
//    }
//
//    int getValue() const   //member function �ڿ� const�� ���̸� �� �Լ��� ���� �ٲ��� �ʰڴٴ� ���� �ǹ�(member function�� const�Ѵٴ� ��)
//    {                       //const Something �϶� ��밡���ϴ�
//        return _value;      //���߿� ������ �Լ��� ������ ���� const�� �־��� �� �ִ� �Լ���
//    }                       //���� const�� ���Ƶδ°� ����
//                            //���߿� debugging�� ������
//};                          

//void print(Something st)    //Copy constructor�� ȣ���Ͽ� �����Ѵ�(�ٸ� type������ �����ϴ�!)
//{                           //parameter�� ������ ���� ����Ǵ� ���� class�� ���� ������(�ּҰ� �ٸ��Ƿ�)
//    cout << &st << endl;
//    cout << st._value << endl;
//}

//void print(const Something& st) //����� parameter�� �μ��� �� �� �߻��ϴ� ���̴�
//{                               //�����ϴ� ���� ��ġ �ʴ´ٸ� const reference�� �̿��ϸ� �ȴ�(�ּҰ� ����)
//                                //ȿ������ ������ ���� �ش�
//    cout << &st << endl;
//    cout << st.getValue << endl;
//}

class Something
{
public:
    string s_value = "default";

    const string& getValue() const  //member function�� const�� ���� �� ���� return�� const�� �����
    {                               
        cout << "const version" << endl;
        return s_value; 
    }

    string& getValue()              //member function�� const���ΰ� overloading �������� ������
    {                               
        cout << "non-const version" << endl;
        return s_value; 
    }
};



int main()
{
    //const Something something;    //const: something ���� ���� �ٲ��� �ʰڴٴ� �ǹ�(member variable�� const�� ���� �Ͱ� ����)
    ////something.setValue(3);      //const class�̹Ƿ� �����߻�

    //something.getValue; // getValue() �ڿ� const�� �پ��־� ���� ����
                        //const class�� const member function�� ������ �� �ִ�
    
    
    
    //Something something;  //something�� instance�� object��� �θ�

    //cout << &something << endl; //print(something)�� &st�� �ٸ� ���� �� �� �ִ�

    //print(something);   //print�� class �ܺ� �Լ� �̹Ƿ� parameter�� class�� ������
    //                    //����ż� ���Ƿ� Something()�� ����Ǹ� "Constructor"�� ���ܾ��ϴµ� ������ �ʾҴ�
    //                    //������ class�� ����� �� class �ȿ� Copy constructor�� �����ֱ� ������
    //                    //Something(const Something &st_in)�� ��� ����Ǳ� �����̴�
    
    
    
    Something something;        //non-const reference
    something.getValue() = "10";  //return by non-const reference�̹Ƿ� �� ���� ����(return by reference�� lvalue�̴�)
    cout << something.getValue() << endl;

    const Something something2; //const reference
    something2.getValue();      //return by const reference�̹Ƿ� �� ���� �Ұ���
    
    //���� member function�� parameter�� �ٸ� ��쿡�� overloading�� ����������
    //member function�� const�ΰ� �ƴѰ��ε� overloading�� �����ϴ�
    //return type�� �ٲٴ� �����δ� overloading �Ұ���

    return 0;
}
