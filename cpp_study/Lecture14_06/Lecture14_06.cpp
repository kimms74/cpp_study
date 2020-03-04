// Exception dangers and downsides(단점)

#include <iostream>
#include <memory>

using namespace std;

class A
{
public:
    ~A()                //소멸자 안에서 throw를 시도함    //금기시 되는 행위
    {                   //소멸자에서는 예외를 throw 할 수 없다      
        throw "error";
    }
};

int main()
{
    //try
    //{
    //    int* i = new int[100000];

    //    // do something with i
    //    throw "error";  //예외가 throw 된다면 delete이 안되고 빠져나가므로 memory leak 발생한다

    //    delete[] i;
    //}

    //catch (...)
    //{
    //    cout << "Catch" << endl;
    //}




    //try
    //{
    //    int* i = new int[100000];
    //    unique_ptr<int> up_i(i);    //smart pointer를 사용하면 delete[]할 필요 없이 scope를 벗어나면 자동으로 delete 해준다

    //    // do something with i
    //    throw "error";  //throw를 하더라도 unique_ptr가 알아서 지워준다

    //    //delete[] i;   //없어도 된다
    //}

    //catch (...)
    //{
    //    cout << "Catch" << endl;
    //}



    try
    {
        A a;
    }

    catch (A a)
    {
        cerr << "wow" << endl;
    }


    //for문 안에서 빈번하게 호출되는 곳에서 throw, catch를 쓰면 프로그램이 많이 느려지므로 주의!!
    //가급적이면 main() 바로 안에서 쓰는것을 추천(for문 주의하자!)





    return 0;
}
