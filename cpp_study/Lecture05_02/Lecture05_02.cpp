#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x > 10)
        cout << x << " is greater than 10" << endl; // 문장이 한 줄일 경우 중괄호 생략 가능
    else
        cout << x << " is not greater than 10" << endl;



    return 0;
}
