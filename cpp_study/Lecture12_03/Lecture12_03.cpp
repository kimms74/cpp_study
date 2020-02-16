//The override and final specifiers, and covariant return types

#include <iostream>

using namespace std;

class A
{
public:
    virtual void print(int x) { cout << "A" << endl; }
};

class B : public A
{
public:
    //void print(short x) { cout << "B" << endl; }
    void print(short x) override { cout << "B" << endl; }   //�Լ� �ڿ� override�� �ٿ��ָ� �Ǽ��� ������ �� �ִ�
                                                            //parameter�� �ٸ��� ������, �̸��� �ٸ��� ���� �� ��� �����Ϸ��� ã����!
    //void print(int x) { cout << "B" << endl; }
};                                                          

int main()
{
    A a;
    B b;


    A& ref = b;
    ref.print(1);   //parameter�� �ٸ� �Լ����� overriding �Ұ����ϴ�! (�����Ϸ��� ������ ��Ƴ� �� ����, overloading���� �ν���)





    return 0;
}
