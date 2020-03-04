// Function try blocks

#include <iostream>

using namespace std;

class A
{
private:
    int m_x;

public:
    A(int x) : m_x(x)
    {
        if (x <= 0)
            throw 1;
    }
};

class B : public A
{
public:
    //B(int x) : A(x)
    //{}

    B(int x) try : A(x)     //function try  //class�� ������ �ڿ� try�� �ٿ��ش�
    {
        //do initialization
    }

    catch (...)
    {
        cout << "Catch in B constructor " << endl;
        //throw;
    }
};

void doSomething()
{
    try
    {
        throw - 1;
    }

    catch (...)
    {
        cout << "Catch in doSomething()" << endl;
    }
}

int main()
{
    //try
    //{
    //    doSomething();    //�Ϲ� function�� ��쿡�� doSomething()�ȿ����� catch�ϰ� main()������ catch�� ���� �ʴ´�
    //}

    //catch (...)
    //{
    //    cout << "Catch in main()" << endl;
    //}




    try
    {
        B b(0);             //������ class�� �����ڿ��� function try�� ����ϴ� ��쿡�� function �ȿ��� rethrow�� ���� �ʾƵ� �ڵ����� ���ֹǷ� main()������ catch�� �� �� �ִ�
    }

    catch (...)
    {
        cout << "Catch in main()" << endl;
    }





    return 0;
}
