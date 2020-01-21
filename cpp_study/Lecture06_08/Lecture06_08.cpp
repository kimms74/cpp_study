#include <iostream>

using namespace std;

void printArray(int array[])        // array[]�� �� 20�� ���� �� ������ pointer�� �� 8�� ����
//void printArray(int *array)     //���� �����ϰ� ����� ���´�
{
    cout << sizeof(array) << endl;  //8

    cout << *array << endl;

    *array = 100;
}

struct Mystruct
{
    int array[5] = { 9, 7, 5, 3, 1 };
};

void doSomething(Mystruct *ms)
{
    cout << sizeof((*ms).array) << endl;
}

int main()
{
    //int array[5] = { 9, 7, 5, 3, 1 };

    //cout << array[0] << " " << array[1] << endl;
    //cout << array << endl;              // fixed array�� pointer��
    //cout << &array[0] << endl;
    //
    //cout << *array << endl;

    //char name[] = "jackjack0";
    //cout << *name << endl;
    //
    //int *ptr = array;
    //cout << ptr << endl;
    //cout << *ptr << endl;



    //int array[5] = { 9, 7, 5, 3, 1 };

    //cout << sizeof(array) << endl;  //20      //array���� ���Ǳ���� ���� �� ����ִ�

    //int *ptr = array;

    //cout << sizeof(ptr) << endl;    //8 (pointer)

    //printArray(array);
    //
    //cout << array[0] << " " << *array << endl;  
    //// 100 100 �Լ��� �������͵� ���� �ٲ��ִ�(�ַ� c���� ���), c++������ reference�� �� ���� ��

    //cout << *ptr << " " << *(ptr + 1) << endl;



    Mystruct ms;
    cout << ms.array[0] << endl;
    cout << sizeof(ms.array) << endl;

    doSomething(&ms);       
    // fixed array�� struct�� class �ȿ� ���� ��� pointer�� ������ȯ x, input���� ������ pointer�� ��ȯ


    return 0;
}
