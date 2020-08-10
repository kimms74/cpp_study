#include <iostream>

using namespace std;

int main()
{
    //const int length = 5;

    //int array[length];  //fixed array에서는 컴파일 때 크기가 정해져 있어야함
    


    //int length;

    //cin >> length;

    ////int *array = new int[length];
    ////int *array = new int[length] {}; // 기본으로 0으로 initialization, {}대신 ()사용 가능
    //int *array = new int[length] {11, 22, 33, 44, 55, 66}; // 6개 입력하고 만약 length=4로 하면 런타임 에러 발생, 6개 이상을 넣으면은 문제없다

    //array[0] = 1;
    //array[1] = 2;

    //for (int i = 0; i < length; ++i)
    //{
    //    cout << uintptr_t(&array[i]) << endl; //메모리 주소 출력 //(uintptr_t)&array[i]나 uintptr_t(&array[i])는 둘다 형변환을 해 정수로 표현해준다
    //    cout << array[i] << endl;
    //}

    //delete [] array;




    int fixeArray[] = { 1, 2, 3, 4, 5 };
    
    //int *array = new int[] {1, 2, 3, 4, 5}; //new는 런타임 때 수를 정할 수 없어 error발생(cin으로는 가능)
    int *array = new int[3] {1, 2, 3, 4, 5}; // initialization보다 적은 array는 에러발생




    //resizing
    // 1. 다른 메모리를 가져온 후 기존 메모리에 저장된 데이터 복사 후 나머지 데이터추가
    // 2. os한테 현재 쓰고 있는 메모리에 이어지는 메모리를 받을 수 있는 지 요청(될수도 안될수도)

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
