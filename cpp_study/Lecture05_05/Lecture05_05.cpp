#include <iostream>

using namespace std;

int main()
{
    cout << "While-loop test" << endl;

    //int count = 0;

    //while (true)
    //{
    //    //static int count = 0; // 거의 사용 안함, 보통 while문 밖에서 선언 
    //    cout << count << endl;
    //    ++count;

    //    if (count == 10) break;
    //}
    


    //unsigned int count = 10; // 감소하는 경우 0이후 max값으로 넘어가기 때문에 unsigned는 되도록 쓰지마
    //                        // 대신 unsigned는 속도가 빠르다

    //while (count >= 0)
    //{
    //    if (count == 0) cout << "zero";
    //    else cout << count << " ";

    //    count--;
    //}



    //int count = 1;

    //while (count < 100)
    //{
    //    if (count % 5 == 0) cout << "Hello " << count << endl; // 딥러닝할 때 데이터 부분부분 확인용으로 사용

    //    count ++;
    //}

    

    int outer_count = 5;

    while (outer_count >= 1) //while 안에 while
    {
        int inner_count = 5;
        while (inner_count >= outer_count)
        {
            cout << inner_count-- << " ";
        }
        cout << endl;
        --outer_count;
    }

    // 보통 while 보다 for를 많이 사용함

    return 0;
}
