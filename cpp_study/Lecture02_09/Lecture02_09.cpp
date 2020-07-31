//Const, constexpr, and symbolic constants

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

    //int number;
    //cin >> number;
    //const int special_number(number);
    
    ////compile 상수: graivity(line 19)
    ////runtime 상수: special_number(line 30)
    ////compile 상수, runtime 상수가 문법적으로 차이가 안나기 때문에
    ////구별을 위해 compile 상수를 constexpr로 쓴다!, runtime 상수에 constexpr를 쓰면 오류발생

    //constexpr int my_cost(123);


    ////c스타일로 전처리기 define쓰기보다는 const로 표현하기
    ////ex) #define PRICE_PER_ITEM 30, define 단점: debugging이 힘들다(의미하는 값을 찾아가서 확인해봐야함), 
                                                ////#define은 전처리기이기 때문에 파일 전체에 영향을 미침(중괄호 밖에서 계속 존재하므로 범위 제한을 할 수 없다)
    //const int price_per_item = 10;
    //int num_item = 30;
    //int price = num_item / price_per_item;
    ////자주 사용하는 상수가 많을 경우 헤더파일로 정리해두는게 좋다.



    //헤더파일로 namespace안에 상수 정리하기
    double radius;
    cin >> radius;
    double circumference = 2.0 * radius * constants::pi;    //namespace constants안에 pi 상수를 가져옴

    return 0;
}
