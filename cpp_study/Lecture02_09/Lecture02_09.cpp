#include <iostream>
#include "MY_CONSTANTS.h"

using namespace std;

void printNumber(const int my_number) // input 값을 바꾸는 경우는 거의 드물기 때문에 const 처리
{
    int n = my_number; // 정 바꾸고 싶으면 다른 변수 선언해서 사용하기
    
    cout << n << endl;
}

int main()
{
    //printNumber(123);

    //const double gravity{ 9.8 }; // const 는 반드시 initialization해야함

    //compile 상수, runtime 상수와 구분하기 위해 constexpr로 표현함
    
    
    
    //constexpr int my_cost(123);

    //int number;
    //cin >> number;

    ////runtime 상수, runtime 상수에 cosntexpr쓰면 오류 난다.
    //const int special_number(number);



    ////c스타일로 전처리기 define쓰기보다는 const로 표현하기
    //const int price_per_item = 10;
    //int num_item = 30;
    //int price = num_item / price_per_item;
    ////자주 사용하는 상수가 많을 경우 헤더파일로 정리해두는게 좋다.



    //헤더파일로 namespace안에 상수 정리하기
    double radius;
    cin >> radius;
    double circumference = 2.0 * radius * constants::pi;

    return 0;
}
