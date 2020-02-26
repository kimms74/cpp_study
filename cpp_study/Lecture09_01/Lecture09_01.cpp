//Overloading the arithmetic operators using friend functions(��� ������)

#include <iostream>

using namespace std;

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents=0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int& getCents() { return m_cents; }     //return by reference�� lvalue
       
    //friend Cents operator + (const Cents& c1, const Cents& c2);   




    Cents operator + (const Cents& c2)          //operator +�� member function���� ����� ��
    {                                           //parameter�� �Ѱ��� ����Ѵ�(���� �ǿ����ڰ� �����ڸ� ȣ���ϴ� �����̹Ƿ�)
                                                //cents1.operator+(cents2)ó�� �۵��Ѵ�
                                                //������ operator+(&cents1,cents2)�� �۵���(���� �Ȱ���)
       
        return Cents((*this).m_cents + c2.m_cents); //left operand�� this pointer�� ������ �� parameter�� �ȳ־ �ȴ�
    }
};

//void add(const Cents& c1, const Cents& c2, Cents& c_out)
//{
//    c_out.getCents() = c1.getCents() + c2.getCents();
//}

//Cents add(const Cents& c1, const Cents& c2)     //������ return���� ����ϴ°� �뼼!
//{
//    return Cents( c1.getCents() + c2.getCents());
//}

//Cents operator + (const Cents& c1, const Cents& c2)       //operator + (cents1,cents2)������ ������ ����� ���� cents1 + cents2ó�� ���� �ȴ�
//{                                                         //operator +�� ������ operator + (&cents1,cents2)�� �ٲ㼭 ����Ѵ�  
//    return Cents(c1.getCents() + c2.getCents());           
//}

//Cents operator + (const Cents& c1, const Cents& c2)     
//{
//    return Cents(c1.m_cents + c2.m_cents);  //friend�� ����ؼ� getCents()������
//}

int main()
{
    //Cents cents1(6);
    //Cents cents2(8);

    //Cents sum;      //Cents(int)�� default parameter �־ default constructor���� ���ص� error �ȶ߰� ��
    //add(cents1, cents2, sum);

    //cout << sum.getCents() << endl; //class�� �̿��� ���(�����ϴ�)

    ////int i = 6, j = 8; cout << i + j << endl; //������ ��Ÿ���� �̷��� �����!




    //Cents cents1(6);
    //Cents cents2(8);

    //cout << add(cents1, cents2).getCents() << endl; // I/O operator�� ���� �� �� �־� add()�����δ� ���ȵ�!
    //                                                //���� �� ��������



    Cents cents1(6);
    Cents cents2(8);

    cout << (cents1 + cents2 + Cents(6)).getCents() << endl;  // operator +�� ������ ��Ÿ�� �� �ִ�
                                                            //Cents(6): anonymous object
                                                            

    cout << (cents1 + cents2 + Cents(6)).getCents() << endl;    //operator +�� friend�� ����صθ� �Լ� �ȿ��� getCents()�� �ᵵ �ȴ�
                                    
    
    // ?:(���� ������), ::(������ ������), sizeof, .(member access from an object), .*(member object selector)
    //���� operator overloading �Ұ���(+,-,/,* �� �������� �� �����ϴ�!)
    //operator overloading�� �͵� ������ �켱������ operator �켱������ ����( *�� +���� �켱�̴�)
    //�׷��Ƿ� �켱������ Ȯ���� �� �� �ִ� �͵鿡 ���ؼ��� operator overloading����
    //�������� �׳� �Լ� �̸��� ���ؼ� ������Ѷ�(�����Ѱź��� �������� ����)
    //Ư�� ^(bitwise xor)�� �켱������ �ſ� �����Ƿ� ������ ()�� �Ἥ ����ؾ���(�����ε� ������!)
    
    
    cout << (cents1 + cents2 + Cents(6)).getCents() << endl;    //operator +�� member function���� ����


    // =(assignment), [](subscript), ()(function call), ->(member selection operator)
    //���� member function���θ� overloading �����ϴ�!

    return 0;
}
