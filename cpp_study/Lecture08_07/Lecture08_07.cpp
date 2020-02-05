//Chaining Member Functions

#include <iostream>

using namespace std;

class Simple
{
private:
    int _id;

public:
    Simple(int id_in)
    {
        this->setID(id_in);     //�ٸ� instance���� �����ϴ� ��: ���������� this->�� �����ִ�
        //(*this).setID(id_in); //���� ���� �ǹ̴�

        cout << this << endl;   //this: �ڱ� �ڽ��� �ּҸ� �������
    }
    void setID(int id_in) { _id = id_in; }
    int getID() { return _id; }
};

class Calc
{
private:
    int _value;

public:
    Calc(int init_value)
        : _value(init_value)
    {}

    //void add(const int &value_in) { _value += value_in; }
    //void sub(const int &value_in) { _value -= value_in; }
    //void mult(const int &value_in) { _value *= value_in; }

    Calc &add(int value_in) { _value += value_in; return *this; }    //������ instance�� return������
    Calc &sub(int value_in) { _value -= value_in; return *this; }
    Calc &mult(int value_in) { _value *= value_in; return *this; }

    void print()
    {
        cout << _value << endl;
    }
};

int main()
{
    Simple s1(1), s2(2);
    s1.setID(2);
    s2.setID(4);

    cout << &s1 << " " << &s2 << endl;

    //���̽��� member function�� self���°Ͱ� �����ϰ�
    //c++������ Simple::setID(&s1, 1);ó�� �۵��Ѵ�(��������� �̷��ٴ� ������ ������(= s2.setID(1))���� ������ �ƴ�)
    //���߿� ���� ���� ������ ����� ���� �ִ�




    Calc calc(10);
    //calc.add(10);
    //calc.sub(1);
    //calc.mult(2);   // ��� calc.ġ�°� ���ŷӴ�

    //calc.print();




    calc.add(10).sub(1).mult(2).print(); // member functions�� �ڱ� �ڽ��� return�ϱ� ������ �����ϰ� ��� ����

    //Calc cal(10);                 //�� ������ ���������� �̷��� �۵��ϴ� ���̴�
    //Calc &temp1 = cal.add(10);    //�ٸ� ���鿡���� ���� �� �������� c++������ member function type�� �ٲٰ�
    //Calc &temp2 = temp1.sub(1);   //, return *this�� ���� �ٿ����ϱ� ������ ȿ�������� �ǹ��̴�
    //Calc &temp3 = temp2.mult(2);  //�׸��� API�� ������ ��� ����ϴ� �Լ�, ������� ���ϴ� �Լ� �����ؾ��ϱ� ������
    //temp3.print();                //����� ���忡�� ���� �򰥸� �� �ִٴ� �����ִ�
 
    Calc(10).add(10).sub(1).mult(2).print();    //�̷��Ե� �ۼ�����, �̸��� ���� instance?


    return 0;
}
