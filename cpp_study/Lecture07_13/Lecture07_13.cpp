#include <iostream>
#include <string>

using namespace std;

int main()
{
    ////semantic errors

    //int x;
    //cin >> x;

    //if (x >= 5)
    //    cout << "x is greater than 5" << endl;  //>=이지만 greater than으로 작성한 것
    //                                            //코드를 보는 사람 입장에서는 찾기 힘들다




    //violated assumption
    string hello = "Hello, my name is Myeong soo";

    cout << "Input from 0 to " << hello.size() - 1 << endl;

    while (true)
    {
        int ix;
        cin >> ix;

        if (ix >= 0 && ix <= hello.size() - 1)
        {
            cout << hello[ix] << endl; //string 길이보다 더 큰 값을 넣으면 runtime error발생한다
            break;
        }
        else
            cout << "Please try again" << endl;
    }
    //출시되는 모든 프로그램은 이렇게 안전장치가 다 돼있어야한다
    //손이 많이 간다(compiler가 오류를 방지할 수 있도록 짜기!)
    //runtime error가 발생하면 게임 데이터가 다 날아간다!






    return 0;
}
