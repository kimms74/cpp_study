#include <iostream>

int main()
{
    using namespace std;


    //숫자 앞에 0붙이면 8진수 표현 // 0 1 2 3 4 5 6 7 8 10 11 12 ...
    int x = 012;
    cout << x << endl;

    // 숫자 앞에 0x붙이면 16진수 표현 // 0 1 2 3 4 5 6 7 8 9 A B C D E F G 10 ...
    int y = 0xF;
    cout << y << endl;

    // 숫자 앞에 0b붙이면 2진수 표현
    int z = 0b1010'1011'1110'0111; // 숫자 사이에 '표시는 컴퓨터는 무시함, 사람이 읽기 편하게 표시(다른 진수에도 사용가능)
    cout << z << endl;

    //const 붙이면 상수로 남겨둠
    const int price_per_item =10;
    int num_items = 123;
    int price = num_items * price_per_item;

    return 0;
}
