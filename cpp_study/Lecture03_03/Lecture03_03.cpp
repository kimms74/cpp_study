//Increment/ decrement operators, and side effects

#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    //int x = 5;
    //int y = --x;
    //int z = x--;
    //cout << y << endl;
    //cout << z << endl;

    int x = 6, y = 6;
    cout << x << " " << y << endl;
    cout << ++x << " " << --y << endl; 
    cout << x << " " << y << endl; // 7,5
    cout << x++ << " " << y-- << endl; // 일단 x,y 값을 출력한 뒤 x,y 값에 각각 ++, --해서 대입하는것
    cout << x << " " << y << endl; //중요!

    int v = add(x, ++x); // 쓰지마!! 같은 변수에 대해 쓰지 않기
    cout << v << endl;  //compiler에 따라 결과가 다르게 나옴

    int w = add(x, ++y);
    cout << w << endl;

    x = x++; // 쓰지마! 같은 변수에 대해 쓰지 않기
    ++x;    //마찬가지로 undefined
    x++; // 위 2방식으로 쓰기
    return 0;
}
