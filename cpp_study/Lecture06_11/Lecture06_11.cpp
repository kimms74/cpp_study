#include <iostream>

using namespace std;

int main()
{
    //// ���� �Ҵ��� stack�� ��, stack�� �뷮�� �۴� <-> �����Ҵ��� ���� ��&���� �뷮�� ũ��
    //int array[1000000000]; 

    int var;
    var = 7;

    int *ptr = new int{ 7 };    //���� �Ҵ� new!
    
    cout << ptr << endl;
    cout << *ptr << endl;

    delete ptr;
    ptr = nullptr;

    cout << "After delete" << endl;

    cout << ptr << endl;
    cout << *ptr << endl;













    return 0;
}
