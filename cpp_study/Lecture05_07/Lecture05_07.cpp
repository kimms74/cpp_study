#include <iostream>

using namespace std;

int pow(int base, int exponent)
{
    int result = 1;

    for (int count = 0; count < exponent; ++count)
        result *= base;

    return result;
}

int main()
{
    //int count = 0;
    ////for (; count < 10; ++count) // int count =0;을 밖으로 빼도 된다.
    ////while(true)
    //for(; ;++count) // 무한 반복(while과 같다)
    //{
    //    cout << count << endl;
    //}
    //
    //cout << count << endl;


    
    
    //cout << pow(2, 4) << endl; // pow를 직접 짜서 쓰기




    //for (int count = 9; count >= 0; count -=2) //감소할 때는 등호 붙여야함, unsigned int 사용 주의!
    //{
    //    cout << count << endl;
    //}



    //int i = 0, j = 0;
    //for (; (i+j) < 10; ++i, j +=2) // 변수 여러개 사용 가능
    //{
    //    cout << i << " " << j << endl;
    //}



    for(int j = 0; j < 9; ++j)
        for (int i = 0; i < 9; ++i)
        {
            cout << j << " " << i << endl;
        }

    // 구구단 만들어 보기
    return 0;
}
