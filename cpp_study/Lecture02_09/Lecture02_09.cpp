#include <iostream>
#include "MY_CONSTANTS.h"

using namespace std;

void printNumber(const int my_number) // input ���� �ٲٴ� ���� ���� �幰�� ������ const ó��
{
    int n = my_number; // �� �ٲٰ� ������ �ٸ� ���� �����ؼ� ����ϱ�
    
    cout << n << endl;
}

int main()
{
    //printNumber(123);

    //const double gravity{ 9.8 }; // const �� �ݵ�� initialization�ؾ���

    //compile ���, runtime ����� �����ϱ� ���� constexpr�� ǥ����
    
    
    
    //constexpr int my_cost(123);

    //int number;
    //cin >> number;

    ////runtime ���, runtime ����� cosntexpr���� ���� ����.
    //const int special_number(number);



    ////c��Ÿ�Ϸ� ��ó���� define���⺸�ٴ� const�� ǥ���ϱ�
    //const int price_per_item = 10;
    //int num_item = 30;
    //int price = num_item / price_per_item;
    ////���� ����ϴ� ����� ���� ��� ������Ϸ� �����صδ°� ����.



    //������Ϸ� namespace�ȿ� ��� �����ϱ�
    double radius;
    cin >> radius;
    double circumference = 2.0 * radius * constants::pi;

    return 0;
}
