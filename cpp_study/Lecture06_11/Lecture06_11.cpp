#include <iostream>

using namespace std;

int main()
{
    //// 정적 할당은 stack에 들어감, stack은 용량이 작다 <-> 동적할당은 힙에 들어감&힙은 용량이 크다
    //int array[1000000000]; 

    int var;
    var = 7;

    int *ptr = new int{ 7 };    //동적 할당 new!
    
    cout << ptr << endl;
    cout << *ptr << endl;

    delete ptr;
    ptr = nullptr;

    cout << "After delete" << endl;

    cout << ptr << endl;
    cout << *ptr << endl;













    return 0;
}
