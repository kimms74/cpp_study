#include <iostream>
#include <cstdarg>  // ellipsis

using namespace std;

double findAverage(int count, ...)  // ...:생략 부호 ellipsis(일립시스)
{                                   //초보자에게 권장 x,debugging 힘들고, runtime error 발생할 수 있음
    double sum = 0;

    va_list list;   //va_list type: char *: 문자열을 받는 것

    va_start(list, count);

    for (int arg = 0; arg < count; ++arg)
        sum += va_arg(list, int);   //type을 반드시 정해줘야함

    va_end(list);

    return sum / count;
}

int main()
{
    cout << findAverage(1, 1, 2, 3, "Hello", 'c') << endl;  //1개 받겠다, 1만 받음
    cout << findAverage(3, 1, 2, 3) << endl;                //3개 받겠다, 1,2,3 받음
    cout << findAverage(5, 1, 2, 3, 4, 5) << endl;          //5개 받겠다, 1,2,3,4,5 받음
    cout << findAverage(10, 1, 2, 3, 4, 5) << endl;         //10개 받겠다, 오류발생




    return 0;
}
