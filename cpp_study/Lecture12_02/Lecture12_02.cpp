//Virtual functions and polymorphism

#include <iostream>

using namespace std;

class A
{
public:
    virtual void print() { cout << "A " << endl; }  //�Լ��� virtual�� ��� derived class�� overriding �Լ��� ���� ��� �� �Լ��� �����Ų��
};

class B : public A
{
public:
    void print() { cout << "B " << endl; }
};

class C : public B
{
public:
    void print() { cout << "C " << endl; }
};

//class D : public C
//{
//public:
//    void print() { cout << "D " << endl; }
//};

class D : public C
{
public:
    int print() { cout << "D " << endl; return 0; }  //base class�� overriding �Լ��� return type�� �ٸ��ٰ� �˷���
};                                                  //��� ���������� base class�� ���� �߿��ϴ�
                                                    //overloading�ÿ��� return type�� �ٸ��ɷδ� �Ұ����� (return type �ǵ�������!)
int main()
{
    A a;
    //a.print();

    B b;
    //b.print();

    C c;
    //c.print();

    D d;
    //d.print();

    //A& ref = b;     //pointer�� �ص� �Ȱ��� A�� ���´�
    //ref.print();  //A

    A& ref = b;     //A�� print()�� virtual�� ����
    ref.print();    //B

    A& ref1 = c;     //A�� print()�� virtual, B�� print()�� �ƴ�
    ref1.print();   //C

    B& ref2 = c;     //A�� print()�� virtual, B�� print()�� �ƴ�
    ref2.print();   //C     //base class�� �Լ��� virtual�� ��� derived class�鵵 ��� virtual�� ��ó�� �۵��Ѵ�
                    //derived class���� virtual �Ⱥٿ��൵ ��     
                    //������ debugging�� �� overriding�� �Լ��� ���� ��Ÿ�������� derived class���� �ٿ��ִ°� ����
    

    //virtual�� stack�� �ƴ� virtual table�� ����ϹǷ� ���� ã�ư��� �����̹Ƿ� ������
    //ȣ���� ����ϰ� �Ǵ� �Լ����� ����ϸ� ������(���ӿ���, ê�� ���)
    //for ���� ���� ���ʿ� �ִ� �Լ��� virtual�� ����� �����ϰ� ��������
    
    
    
    
    
    
    return 0;       
}
