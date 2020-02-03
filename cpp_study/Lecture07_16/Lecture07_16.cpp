#include <iostream>
#include <cstdarg>  // ellipsis

using namespace std;

double findAverage(int count, ...)  // ...:���� ��ȣ ellipsis(�ϸ��ý�)
{                                   //�ʺ��ڿ��� ���� x,debugging �����, runtime error �߻��� �� ����
    double sum = 0;

    va_list list;   //va_list type: char *: ���ڿ��� �޴� ��

    va_start(list, count);

    for (int arg = 0; arg < count; ++arg)
        sum += va_arg(list, int);   //type�� �ݵ�� ���������

    va_end(list);

    return sum / count;
}

int main()
{
    cout << findAverage(1, 1, 2, 3, "Hello", 'c') << endl;  //1�� �ްڴ�, 1�� ����
    cout << findAverage(3, 1, 2, 3) << endl;                //3�� �ްڴ�, 1,2,3 ����
    cout << findAverage(5, 1, 2, 3, 4, 5) << endl;          //5�� �ްڴ�, 1,2,3,4,5 ����
    cout << findAverage(10, 1, 2, 3, 4, 5) << endl;         //10�� �ްڴ�, �����߻�




    return 0;
}
