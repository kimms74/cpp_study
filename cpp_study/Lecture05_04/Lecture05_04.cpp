#include <iostream>
#include <cmath> // sqrt()
using namespace std;

int main()
{
//    double x;
//
//tryAgain : // label
//    cout << "Enter a non-negative number" << endl;
//    cin >> x;
//
//    if (x < 0.0)
//        goto tryAgain;
//
//    cout << sqrt(x) << endl;
    
    
    
    goto skip; //x 초기화를 건너뛰고 skip으로 넘어가 error 발생

    int x = 5;

skip:
    x += 3;


    
    return 0;
}
