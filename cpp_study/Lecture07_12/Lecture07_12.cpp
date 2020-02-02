#include <iostream>

using namespace std;

void countDown(int count)
{
    cout << count << endl;
    
    if(count > 0)
        countDown(count - 1);   //계속 반복되기 때문에 종료 조건을 반드시 걸어줘야함
}                           //stack overflow 발생할 수 있다

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

    cout << sumTo(5) << endl;   //recursion은 stack을 사용하기 때문에 호출할 수 있는 depth가 한계가 있다
                                //가능하면 iteration을 추천!

    int number = 0;
    int number1 = 1;


    return 0;
}
