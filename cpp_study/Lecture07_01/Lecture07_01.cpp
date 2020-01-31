#include <iostream>

using namespace std;

int foo(int x, int y);

int foo(int x, int y)          //x,y: parameter
{
    return x + y;
}   // x and y are desroyed here

int main()
{
    int x = 1, y = 2;

    foo(6, 7);  //6,7 : arguments (acutual parameters)  //인자
    foo(x, y + 1);  //x,(y+1): 인자





    return 0;
}
