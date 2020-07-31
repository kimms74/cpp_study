//Const, constexpr, and symbolic constants

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

    //int number;
    //cin >> number;
    //const int special_number(number);
    
    ////compile ���: graivity(line 19)
    ////runtime ���: special_number(line 30)
    ////compile ���, runtime ����� ���������� ���̰� �ȳ��� ������
    ////������ ���� compile ����� constexpr�� ����!, runtime ����� constexpr�� ���� �����߻�

    //constexpr int my_cost(123);


    ////c��Ÿ�Ϸ� ��ó���� define���⺸�ٴ� const�� ǥ���ϱ�
    ////ex) #define PRICE_PER_ITEM 30, define ����: debugging�� �����(�ǹ��ϴ� ���� ã�ư��� Ȯ���غ�����), 
                                                ////#define�� ��ó�����̱� ������ ���� ��ü�� ������ ��ħ(�߰�ȣ �ۿ��� ��� �����ϹǷ� ���� ������ �� �� ����)
    //const int price_per_item = 10;
    //int num_item = 30;
    //int price = num_item / price_per_item;
    ////���� ����ϴ� ����� ���� ��� ������Ϸ� �����صδ°� ����.



    //������Ϸ� namespace�ȿ� ��� �����ϱ�
    double radius;
    cin >> radius;
    double circumference = 2.0 * radius * constants::pi;    //namespace constants�ȿ� pi ����� ������

    return 0;
}
