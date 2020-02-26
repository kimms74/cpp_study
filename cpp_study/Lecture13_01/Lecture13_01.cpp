// Function templates

#include <iostream>
#include "Cents.h"

using namespace std;

//int getMax(int x, int y)
//{
//    return (x > y) ? x : y;
//}
//
//double getMax(double x, double y)     //���ϴ� ������ �巡�� �� �� ctrl+h�� �ϸ� ���ϴ� �ܾ ��ü�� �� �ִ�
//{
//    return (x > y) ? x : y;
//}
//
//float getMax(float x, float y)        //������ �ٲٴ� �� ������ -> template ���
//{
//    return (x > y) ? x : y;
//}
//
//char getMax(char x, char y)
//{
//    return (x > y) ? x : y;
//}

template<typename T>    //typename �ڸ��� class�� �͵� �ȴ� (���̴� ����)
T getMax(T x, T y)      //template�� ����ϸ� �˾Ƽ� type�� ã���ش�
{
    return (x > y) ? x : y;
}

int main()
{
    cout << getMax(1, 2) << endl;
    cout << getMax(3.14, 1.592) << endl;
    cout << getMax(1.0f, 3.4f) << endl;
    cout << getMax('a', 'c') << endl;

    cout << getMax(Cents(5), Cents(9)) << endl; //class�� template�� ��밡��(��� opeartor overloading �������)

    //T�� Ư���� data type���� ����� ���� instantiation�̶�� �Ѵ�



    return 0;
}
