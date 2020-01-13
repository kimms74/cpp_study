#include <iostream>

namespace work1::work11::work111
{
    int a = 1;
    void doSomething()
    {
        a += 3;
    }
}

namespace work2
{
    int a = 1;
    void doSomething()
    {
        a += 5;
    }
}

int main()
{
    using namespace std;

    //int apple = 5;
    //cout << apple << endl;

    //{
    //    int apple2 = 1;
    //    cout << apple2 << endl;

    //}

    //cout << apple << endl;

    work1::work11::work111::doSomething();

    work2::a;
    work2::doSomething();

    return 0;
}
