#include <iostream>

using namespace std;

//void foo(int *ptr)
//{
//    cout << *ptr << " " <<uintptr_t(ptr) << " " << uintptr_t(&ptr) << endl;
//}

//void foo( int *ptr)     
//{
//    cout << *ptr << " " << uintptr_t(ptr) << " " << uintptr_t(&ptr) << endl;
//
//    *ptr = 10;
//}

void foo(double degrees, double *sin_out, double *cos_out) //call by referenceó�� int *�� outputó�� ��� ����
{
    *sin_out = 1.0;
    *cos_out = 2.0;
}

void foo(const int * const ptr, int *arr, const int length)    //call by pointer ����ϴ� ���: array ������ ��, c��Ÿ�� �ڵ���, c++�� reference�� ����Ѵ�
{
    for (int i = 0; i < length; ++i)
        cout << arr[i] << endl;

    arr[0] = 1.0;   //arr�� ã�ư� ���� �ٲ۴� [0]�� de-referencingó�� ���
    int x = 1;

    *ptr = 1;   //const int �̹Ƿ� �ȵ�
    ptr = &x;   // int * const �̹Ƿ� �ȵ�
}

int main()
{   
    int value = 5;

    //cout << value << " " << uintptr_t(&value) << endl;

    int *ptr = &value;

    //cout << uintptr_t(&ptr) << endl;    
    ////foo(ptr)�� �ٸ� ���� ������ ������ ptr�� ���� �����ؼ� parameter�� ���Ƿ� ���ο� �޸𸮸� ������

    //foo(ptr);
    //foo(&value);



    
    //foo(ptr);

    //cout << value << endl; // ���� 10���� �ٲ�




    double degrees = 30;
    double sin, cos;

    foo(degrees, &sin, &cos);   //call by reference�� �ٸ��� output�κп� &�� �ٿ������(������)

    cout << sin << " " << cos << endl;

    return 0;
}
