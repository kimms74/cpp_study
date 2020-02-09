#include <iostream>

using namespace std;

int main()
{
    ////// 정적 할당은 stack에 들어감, stack은 용량이 작다 <-> 동적할당은 힙에 들어감&힙은 용량이 크다
    ////int array[1000000000]; 

    //int var;
    //var = 7;

    //int *ptr = new int{ 7 };    //new: type의 사이즈에 맞춰 os에서 메모리를 받아온 후 그 메모리 주소를 우리에게 알려줌
    //                            //그러므로 pointer로 받아야한다    
    //cout << ptr << endl;
    //cout << *ptr << endl;

    //delete ptr;


    //cout << "After delete" << endl;
    //cout << ptr << endl;
    //cout << *ptr << endl;   //군대에서 휴가나와 집을 찾아갔는데 이사를 가버리고 다른 사람이 살고있는 경우

    



    //delete ptr;
    //ptr = nullptr;  // 오류를 없애기 위해 delte ptr과 같이 다님

    //if (ptr != nullptr)
    //{
    //    cout << ptr << endl;
    //    cout << *ptr << endl;   
    //}
    //else
    //{
    //cout << "Could not allocate memory" << endl;
    //}





    // 다른 프로그램이 메모리를 다 쓰고 있어서 할당받지 못할 때 메모리 날때 까지 기다렸다 할당 받는 법
    int *ptr = new (std::nothrow) int{ 7 };
    int *ptr2 = ptr;

    delete ptr;
    ptr = nullptr;
    ptr2 = nullptr; // ptr2도 nullptr로 처리해줘야 값이 정리됨, 최근에는 smart pointer로 처리함(대신 속도가 조금 느림)



    //memory leak
    while (true)
    {
        int *ptr = new int;     //delete 없이 사용하면 메모리 사용량이 계속 늘어난다
        cout << ptr << endl;

        delete ptr;     // 메모리를 일정하게 사용한다 //new, delete은 느리다, 적게 사용하는게 좋다
    }








    return 0;
}
