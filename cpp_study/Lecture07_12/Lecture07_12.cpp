#include <iostream>
#include <limits>
#include <vector>

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

unsigned int pibo(unsigned int num) //0 1 2 3 5 8 13 21 ...
{
    //static unsigned int num1 = 0;
    //static unsigned int num2 = 0;
    //static unsigned int num3 = 0;

    //num3 = num1 + num2;

    //cout << num2 << endl;

    //num1 = num2;
    //num2 = num3;

    //if (num2 < 1)
    //    num2 += 1;
    //if (num2 > numeric_limits<unsigned int>::max()/10)
    //    return;

    return (num == 0 || num == 1) ? num : pibo(num - 1) + pibo(num - 2);
}

int fibo(int num)
{
    vector<int> fibo_1(num);
    fibo_1[0] = 0;
    fibo_1[1] = 1;
    for (int i = 2; i < num; i++)
        fibo_1[i] = fibo_1[i - 1] + fibo_1[i-2];

    return fibo_1[num-1];
}

int main()
{
    countDown(5);

    cout << sumTo(5) << endl;   //recursion은 stack을 사용하기 때문에 호출할 수 있는 depth가 한계가 있다
                                //가능하면 iteration을 추천!
    cout << pibo(10) << endl;

    cout << fibo(10) << endl;
    return 0;
}
