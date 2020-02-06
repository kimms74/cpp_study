//friend function and class

#include <iostream>

using namespace std;

//class B;    //forward declaration //class A�� class B ���� ���� ���ֱ� ������
//            //class A������ B�� ���縦 �𸣹Ƿ� �̸� �����صδ� ��
//
//class A
//{
//private:
//    int m_value = 1;
//
//    friend void doSomething(A& a, B& b);  //�ܺ� function�� friend�� ����
//};
//
//class B
//{
//private:
//    int m_value = 2;
//
//    friend void doSomething(A& a, B& b);
//};
//
//void doSomething(A& a, B& b)      //�ܺ� function�� class A, B�� �����ϴ� ��
//{
//    cout << a.m_value << endl;
//}



//class A
//{
//private:
//    int m_value = 1;
//
//    friend class B;   //class B���� ��ä�� �����ְڴ�
//};                    //class B�� A�� �����ϴ� ��
//
//class B
//{
//private:
//    int m_value = 2;
//
//public:
//    void doSomething(A& a)
//    {
//        cout << a.m_value << endl;
//    }
//};



class A;

class B
{
private:
    int m_value = 2;

public:
    void doSomething(A& a);     //class A�� forward declaration��
};

class A
{
private:
    int m_value = 1;

    friend void B::doSomething(A& a);   //class B�� Ư���Լ����� �����ְڴ�
};                                      //class B�� ���� ���������Ƿ� B::doSomething�� ���縦 �ȴ�                        

void B::doSomething(A& a)               //���Ǹ� class B �ۿ��� ��
{
    cout << a.m_value << endl;          //doSomething ���Ǹ� class A �Ʒ��� �ϱ⶧���� class A�� ���� ������ �� �ȴ�
}



int main()
{
    //A a;
    //B b;
    //doSomething(a,b);



    A a;
    B b;
    b.doSomething(a);






    return 0;
}
