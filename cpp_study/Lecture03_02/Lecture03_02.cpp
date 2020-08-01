//Arithmetic operators

#include <iostream>

using namespace std;

int main()
{
    
    int x = 7;
    int y = 2;
    int z = x;

    //cout << x / y << " " << z << endl;

    //cout << x / y << endl;
    //cout << float(x) / y << endl;
    //cout << x / float(y) << endl;
    //cout << float(x) / float(y) << endl;

    cout << -5 / 2 << endl; // 나머지는 버려버림,절삭!(-2)
    cout << -5 % 2 << endl; // 왼쪽 숫자 부호에 따라 값의 기호가 정해짐(-1)

    z += y; // z=z+y, +=,-=,*=,/= 사용 가능

    return 0;
}
