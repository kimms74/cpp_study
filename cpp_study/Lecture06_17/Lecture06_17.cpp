#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    //int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

    //////output
    ////for (int number : fibonacci)
    ////    cout << number << " ";
    ////cout << endl;



    ////change array values
    ////for (const int number : fibonacci)    //함수 parameter처럼 for 내부의 number는 빠져나오면 사라진다( output에서 10으로 안나옴)
    ////    number = 10;                      //그래서 보통 const int로 값을 변경 못하게 사용

    ////for (auto &number : fibonacci)           //int &는 그대로 가져오는 것이기때문에 값을 변경할 수 있다(int&는 lvalue이다)
    ////    number *= 10;                        //보통 type을 auto로 가져감

    //////output
    ////for (int number : fibonacci)
    ////    cout << number << " ";
    ////cout << endl;




    //int max_number = numeric_limits<int>::lowest();

    //for (const auto &n : fibonacci)
    //    max_number = max(max_number, n);

    //cout << max_number << endl;





    vector<int> fibonacci = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };    //동적할당 array 대신에 vector 사용가능
                                                                            //작업속도 빨라짐
    int max_number = numeric_limits<int>::lowest();

    for (const auto &n : fibonacci)
        max_number = max(max_number, n);

    cout << max_number << endl; 

    return 0;
}
