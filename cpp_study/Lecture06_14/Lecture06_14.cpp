#include <iostream>

using namespace std;

//int doSomething(int n)
//{
//    n = 10;
//
//    cout << n << endl;  //함수 밖의 int n과 parameter int n이 다르기 때문에 빠져나오면서 사라진다 
//}



//int doSomething(int &n)
//{
//    n = 10;
//
//    cout << n << endl;  //ref를 사용하면 아예 변수 자체가 넘어가므로 n이 같은 주소를 가진다
//}                       //주소를 복사하기만 하므로 pointer보다 효율적이다



int doSomething(const int &n)   //n이 doSomething에 들어가는데 함수가 n의 값을 못바꾸게 하고 싶을때 const를 붙인다
{                               //c++ 17부터 return값을 여러개 받을 수 있게 된 후 깔끔하게 정리하기 위해 이렇게 사용함
    n = 10;                     //const가 붙어서 값을 변경 못함

    cout << n << endl;  
}                       

int printElements(int (&arr)[5])    //ref에 array를 사용하려면 array의 수를 넣어줘야함
{
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

struct Something
{
    int v1;
    float v2;
};

struct Other
{
    Something st;
};

int main()
{
    //int value = 5;

    //int *ptr = nullptr;
    //ptr = &value;

    //int &ref = value;

    //cout << ref << endl;

    //ref = 10;   // *ptr = 10;   // pointer와 다르게 *을 안붙여도 값을 assignment할 수 있다

    //cout << value << " " << ref << endl;

    //cout << &value << endl;
    //cout << &ref << endl;   // &value 와 &ref의 주소값이 같다
    //cout << ptr << endl;
    //cout << &ptr << endl;




    //int value = 8;

    //int &ref;   // &ref는 반드시 initalization 필요! 주소값을 공유하므로, literal도 못들어감(104,"lol"), lvalue를 넣어야함

    //int x = 6;
    //int &ref = x;

    //const int y = 7;
    //int &ref = y;   //ref로 값을 바꾸려할 수도 있기때문에 const가 앞에 붙어야함




    ////re-assignment of refence variable
    //int value1 = 2;
    //int value2 = 4;

    //int &ref1 = value1;

    //cout << ref1 << endl;

    //ref1 = value2;

    //cout << ref1 << endl;




    //int n = 5;

    //cout << n << endl;

    //doSomething(n);     

    //cout << n << endl;      // int n일 때: 5, int &n일 때: 10





    //const int length = 5;
    //int arr[length] = { 1, 2, 3, 4, 5 };

    //printElements(arr);




    //Other ot;
    //ot.st.v1 = 1;       //이름이 길어지고 들어가는게 많아지면 치기 힘들고 느려진다
    //int &v1 = ot.st.v1; //refence를 이용해 간단하게 나타낼 수 있다.
    //v1 = 1;             //실전에서 정말 많이 사용





    int value = 5;
    int *const ptr = &value;
    int &ref = value;       // *const ptr과 &ref는 동일하다

    *ptr = 10;
    ref = 10;




    return 0;
}
