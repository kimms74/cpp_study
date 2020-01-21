#include <iostream>
#include <cstddef> // nullptr_t

using namespace std;

void doSomething(double *ptr)
{
    cout << "address of pointer variable in doSomething() " << &ptr << endl;
    if (ptr != nullptr)
    {
        // do something useful
        cout << *ptr << endl;
    }
    else
    {
        // do nothing with ptr
        cout << "Null ptr, do nothing" << endl;
    }
}

int main()
{
    double *ptr = nullptr;  // modern c++

    doSomething(ptr);
    doSomething(nullptr);

    double d = 123.4;

    doSomething(&d); // input으로 int *ptr은 주소값을 ptr에 넣겠다는 말

    ptr = &d;

    doSomething(ptr);



    std::nullptr_t nptr; // null pointer만 저장가능한 함수



    cout << "address of pointer variable in main() " << &ptr << endl;


    return 0;
}
