#include <iostream>

using namespace std;

void printArray(int array[])        // array[]가 들어가 20이 나올 거 같지만 pointer로 들어가 8이 나옴
//void printArray(int *array)     //위와 동일하게 결과가 나온다
{
    cout << sizeof(array) << endl;  //8

    cout << *array << endl;

    *array = 100;
}

struct Mystruct
{
    int array[5] = { 9, 7, 5, 3, 1 };
};

void doSomething(Mystruct *ms)
{
    cout << sizeof((*ms).array) << endl;
}

int main()
{
    //int array[5] = { 9, 7, 5, 3, 1 };

    //cout << array[0] << " " << array[1] << endl;
    //cout << array << endl;              // fixed array는 pointer다
    //cout << &array[0] << endl;
    //
    //cout << *array << endl;

    //char name[] = "jackjack0";
    //cout << *name << endl;
    //
    //int *ptr = array;
    //cout << ptr << endl;
    //cout << *ptr << endl;



    //int array[5] = { 9, 7, 5, 3, 1 };

    //cout << sizeof(array) << endl;  //20      //array에는 편의기능이 조금 더 들어있다

    //int *ptr = array;

    //cout << sizeof(ptr) << endl;    //8 (pointer)

    //printArray(array);
    //
    //cout << array[0] << " " << *array << endl;  
    //// 100 100 함수를 빠져나와도 값이 바껴있다(주로 c에서 사용), c++에서는 reference를 더 많이 씀

    //cout << *ptr << " " << *(ptr + 1) << endl;



    Mystruct ms;
    cout << ms.array[0] << endl;
    cout << sizeof(ms.array) << endl;

    doSomething(&ms);       
    // fixed array가 struct나 class 안에 있을 경우 pointer로 강제변환 x, input으로 들어갈때만 pointer로 변환


    return 0;
}
