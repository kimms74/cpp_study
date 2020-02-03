#include <iostream>
#include <cassert> //assert.h
#include <array>
using namespace std;

void printValue(const std::array<int, 5> &my_array, const int &ix)
{
    assert(ix >= 0);
    assert(ix <= my_array.size() - 1);  //assert 두개를 한번에 쓸 수도 있지만 어떤 것이 원인인지 알기 위해 따로 쓰는게 좋다
    cout << my_array[ix] << endl;
}


int main()
{
    //assert(false);  //assert는 debug모드에서만 작동, release 모드에서는 작동하지 않는다

    


    //int number = 5;

    //// ...

    //assert(number == 5);  //number < 5일 때 오류를 나타낼 수 있게 assert를 사용하면 된다
                            //assert(true)면 pass, assert(false)면 assert error 발생





    //std::array<int, 5> my_array{ 1,2,3,4,5 };
    //
    //printValue(my_array, 100);    //assert를 띄워줌




    const int x = 10;

    assert(x == 5);

    static_assert(x == 5, "x should be 5 (jm)");    //x가 상수일 때만 사용가능!
                                                    //compile하는 동안 error를 띄워줌
                                                    //compile동안 이므로 assert error는 발생안함


    return 0;
}
