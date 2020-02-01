#include <iostream>
#include <array>
#include <tuple>

using namespace std;

//int getValue(int x)       // return by value
//{
//    int value = x * 2;
//    return value;
//}

//int* getValue(int x)       // return by pointer
//{
//    int value = x * 2;
//    return &value;
//}

int* allocateMemory(int size)       // return by pointer ����ϴ� ���
{
    return new int[size];
}

int& getValue(int x)       //return by reference
{
    int value = x * 2;
    return value;
}

int &get(std::array<int, 100> &my_array, int ix)        //return by reference ����ϴ� ��� 
{
    return my_array[ix];
}

struct S
{
    int a, b, c, d;
};

S getStrct()            //���� return�� ������ �ϱ����� struct�� ����Ѵ�
{                       //������ �Լ� �ϳ� ���� ������ struct�� �������Ѵ�
    S my_s{ 1, 2,3,4 };

    return my_s;
}

std::tuple<int, double> getTuple()    //tuple<int, double>�� ����� ���� �ڷ���ó�� �۵�
{
    int a = 10;
    double d = 3.14;
    return std::make_tuple(a, d);
}

int main()
{
    //int value = getValue(3);




    //int value = *getValue(3);   //warning: ���� �������� local variable�� �ּҸ� referencing�ϱ� ������ �����ϴ�

    //cout << value << endl;





    //int *value = getValue(3);       //warning: local variable�� �ּҸ� ������ �Լ��� �������� �� ������⿡ �� �����ϴ�
  
    //cout << *value << endl;





    //int *array = allocateMemory(1024);      // return by pointer ����ϴ� ���

    //delete[] array;                         // �� ��� ���� delete�� ������Ѵ�





    //int value = getValue(5);

    //cout << value << endl;





    //int &value = getValue(5);               //local variable�� reference�� �ٽ� referencing�ϹǷ� �����ϴ�

    //cout << value << endl;
    //cout << value << endl;                  //�ι�° cout�� �� ������ ���� value�� ������




    //array<int, 100> my_array;               //�޸𸮿� �̸� array�̰� ����Ǿ�����
    //my_array[30] = 10;

    //get(my_array, 30) = 1024;               //return by reference�� ���� my_array[30]�� get(my_array, 30)�� ���� ���� ����Ų��
    //get(my_array, 30) *= 10;                //array�� �̸� �޸𸮿� �����صΰ� reference�� call�ϰ� return�Ͽ� �����ϰ� ��밡��(���� ����Ѵ�)

    //cout << my_array[30] << endl;           //return by reference ����ϴ� ���




    //S my_s = getStrct();                    //struct�� �̿��� return�� ������ �޴� ��, c�� �� ����� ���(��� c++���ٴ� ���� �� ������)
    //my_s.a;




    //std::tuple<int, double> my_tp = getTuple(); //parameter�� struct�� ��밡��
    //cout << std::get<0>(my_tp) << endl; // a    //���� ������ �� get�� ����ϹǷ� ������ �����ϴ�
    //cout << std::get<1>(my_tp) << endl; // d




    auto [a, d] = getTuple();       // c++17���� ���ϰ� ��밡��!
    cout << a << endl;
    cout << d << endl;


    return 0;
}
