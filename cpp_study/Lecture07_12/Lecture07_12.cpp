#include <iostream>

using namespace std;

void countDown(int count)
{
    cout << count << endl;
    
    if(count > 0)
        countDown(count - 1);   //��� �ݺ��Ǳ� ������ ���� ������ �ݵ�� �ɾ������
}                           //stack overflow �߻��� �� �ִ�

int sumTo(int sumto)
{
    if (sumto <= 0)
        return 0;
    else if (sumto <= 1)
        return 1;
    else
        return sumTo(sumto - 1) + sumto;
}

int pibonacci(int &number,int &number1) //0 1 2 3 5 8 13 21 ...
{
    cout << number << endl;
    if (number1 <= 1)
    {
        number1 += 1;
        number = number1;
        number1 = pibonacci(number, number1);
    }
    else
        number1 = pibonacci(number, number1)

}

int main()
{
    countDown(5);

    cout << sumTo(5) << endl;   //recursion�� stack�� ����ϱ� ������ ȣ���� �� �ִ� depth�� �Ѱ谡 �ִ�
                                //�����ϸ� iteration�� ��õ!

    int number = 0;
    int number1 = 1;


    return 0;
}
