#include <iostream>
#include <array>

using namespace std;

int func()
{
    return 5;
}

int goo()
{
    return 10;
}

//void printNumbers(const array<int, 10> &my_array, bool print_even)  //������ ��쿡�� bool�� �׳� �ᵵ ��
//{
//    for (auto element : my_array)
//    {
//        if (print_even && element % 2 == 0) cout << element;
//        if (!print_even && element % 2 == 1) cout << element;
//    }
//    cout << endl;
//}

bool isEven(const int &number)  // call by reference �� �� input ���� const �ٿ��ִ°� ����
{
    if (number % 2 == 0) return true;
    else return false;      //else �����ָ� Ȧ���� �������� 1�̱⶧���� Ȧ���� true�� ����
}                           

bool isOdd(const int &number)
{
    if (number % 2 != 0) return true;
    else return false;      //else �����ָ� ¦���� �������� 0�̱� ������ ¦���� false�� ����
}                           //isOdd�� ���� �������� isEven�� �߸� ������ ������ �׻� else �������


//void printNumbers(const array<int, 10> &my_array, bool (*check_fcn)(const int &) = isEven)   //parameter ���������   
//{
//    for (auto element : my_array)
//    {
//        if (check_fcn(element) == true) cout << element;
//    }
//    cout << endl;
//}

typedef bool (*check_fcn_t)(const int &);   //typedef�� ������ ǥ���� �� �ִ�

void printNumbers(const array<int, 10> &my_array, check_fcn_t check_fcn = isEven)   //parameter ���������   
{
    for (auto element : my_array)
    {
        if (check_fcn(element) == true) cout << element;
    }
    cout << endl;
}

int main()
{
    //cout << func << endl;   // func()�� �ƴ� func�� ��� // �Լ��� pointer��

    //func();     //�Լ� �۵���: func�� �ּҸ� ã�ư� �� func()�� �����Ű�� return ���� �ٽ� ������
    //            //�ڼ��� �� stack�� heap���� ���




    ////int(*fcnptr)() = func();    //�Լ� �̸� �� () �ǹ�: �Լ��� ������Ѽ� ������� �޾ƿ��ڴ�
    //int(*fcnptr)() = func;      //()������ pointer�� �������ڴٴ� ��
    //                            //�Լ��� parameter�� ������ fcnptr()�ȿ��� type�� �־������ ex) fcnptr(int)  
    //cout << fcnptr() << endl;

    //fcnptr = goo;       //�Լ��� �ٲ�ġ�� �� ���� �ִ�

    //cout << fcnptr() << endl;




    //function pointer�� �Լ� parameter�� ���� �� �ִ�
    std::array<int, 10> my_array{ 0,1,2,3,4,5,6,7,8,9 };

    printNumbers(my_array, isEven); //�Լ��� ��ü�� pointer�̱� ������ &�Ⱥٿ��� ��
    printNumbers(my_array, isOdd);
    //�Լ��� parameter�� ����Ͽ� �Լ��� �� �� ª�� ����, ���߿� �������� ������ �� �����

    printNumbers(my_array);     //default parameter�� ����ϸ� parameter�� �ȳ־� �൵ ��


    return 0;
}
