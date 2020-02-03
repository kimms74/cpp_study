#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])    //문자열의 array: 2차 array?
{
    for (int count = 0; count < argc; ++count)
    {
        string argv_single = argv[count];

        if (count == 1)
        {
            int input_number = std::stoi(argv_single);  //stoi: string to int
            cout << input_number + 1 << endl;
        }
        else
            cout << argv[count] << endl;
    }
    //종종 command line에서 실행해야할 때도 있다 ex)ros 쓸 때,scripting 할 때
    //단점: 사용자가 입력을 잘못했을 때 오류처리를 매번 자세히 해줘야함
    //      얘기치 못하게 개수 입력을 잘못한다 던가 불편함이 있다
    //Boost.Program_options라는 library 함수를 이용하면 편함(준표준 library)






    return 0;
}
