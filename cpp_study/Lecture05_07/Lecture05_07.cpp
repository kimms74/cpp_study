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
    ////for (; count < 10; ++count) // int count =0;�� ������ ���� �ȴ�.
    ////while(true)
    //for(; ;++count) // ���� �ݺ�(while�� ����)
    //{
    //    cout << count << endl;
    //}
    //
    //cout << count << endl;


    
    
    //cout << pow(2, 4) << endl; // pow�� ���� ¥�� ����




    //for (int count = 9; count >= 0; count -=2) //������ ���� ��ȣ �ٿ�����, unsigned int ��� ����!
    //{
    //    cout << count << endl;
    //}



    //int i = 0, j = 0;
    //for (; (i+j) < 10; ++i, j +=2) // ���� ������ ��� ����
    //{
    //    cout << i << " " << j << endl;
    //}



    for(int j = 0; j < 9; ++j)
        for (int i = 0; i < 9; ++i)
        {
            cout << j << " " << i << endl;
        }

    // ������ ����� ����
    return 0;
}
