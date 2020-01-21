#include <iostream>

using namespace std;

int main()
{
    //int value = 7;
    //int *ptr = &value;

    //cout << uintptr_t(ptr) << endl;
    //cout << uintptr_t(ptr-1) << endl;   // type에 따라 type의 bytes만큼 이동
    //cout << uintptr_t(ptr+3) << endl;   // short는 2, int는 4, double은 8 ...




    //int array[] = { 9, 7 ,5, 3, 1 };
    //
    //int *ptr = array;

    //for (int i = 0; i < 5; ++i)
    //{
    //    //cout << array[i] << " " << uintptr_t(&array[i]) << endl;    //주소는 4씩 증가
    //    cout << *(ptr + i) << " " << uintptr_t(ptr + i) << endl;      //윗줄과 똑같이 나옴
    //}



    char name[] = "Jack Jack";

    const int n_name = sizeof(name) / sizeof(char);

    char *ptr = name;

    //for (int i = 0; i < n_name; ++i)
    //{
    //    cout << *(ptr + i);
    //}
    //cout << endl;


    // while,break, ++ptr를 이용해 만들어보기
    while (true)
    {
        if (*ptr == '\0')
            break;
        cout << *ptr;
        ++ptr;
    }
    cout << endl;
    return 0;
}
