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

    B(int x) try : A(x)     //function try  //class의 생성자 뒤에 try를 붙여준다
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
    //    doSomething();    //일반 function일 경우에는 doSomething()안에서는 catch하고 main()에서는 catch를 하지 않는다
    //}

    //catch (...)
    //{
    //    cout << "Catch in main()" << endl;
    //}




    try
    {
        B b(0);             //하지만 class의 생성자에서 function try를 사용하는 경우에는 function 안에서 rethrow를 하지 않아도 자동으로 해주므로 main()에서도 catch를 할 수 있다
    }

    catch (...)
    {
        cout << "Catch in main()" << endl;
    }





    return 0;
}
