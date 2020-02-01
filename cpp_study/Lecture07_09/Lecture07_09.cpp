#include <iostream>
#include <array>

using namespace std;

int func()
{
    return 5;
}

int goo()
{
    return 10;
}

//void printNumbers(const array<int, 10> &my_array, bool print_even)  //간단한 경우에는 bool을 그냥 써도 됨
//{
//    for (auto element : my_array)
//    {
//        if (print_even && element % 2 == 0) cout << element;
//        if (!print_even && element % 2 == 1) cout << element;
//    }
//    cout << endl;
//}

bool isEven(const int &number)  // call by reference 쓸 때 input 값은 const 붙여주는게 좋다
{
    if (number % 2 == 0) return true;
    else return false;      //else 안해주면 홀수의 나머지가 1이기때문에 홀수도 true로 나옴
}                           

bool isOdd(const int &number)
{
    if (number % 2 != 0) return true;
    else return false;      //else 안해주면 짝수의 나머지가 0이기 때문에 짝수는 false로 나옴
}                           //isOdd의 경우는 괜찮지만 isEven은 잘못 나오기 때문에 항상 else 써줘야함


//void printNumbers(const array<int, 10> &my_array, bool (*check_fcn)(const int &) = isEven)   //parameter 맞춰줘야함   
//{
//    for (auto element : my_array)
//    {
//        if (check_fcn(element) == true) cout << element;
//    }
//    cout << endl;
//}

typedef bool (*check_fcn_t)(const int &);   //typedef로 간단히 표현할 수 있다

void printNumbers(const array<int, 10> &my_array, check_fcn_t check_fcn = isEven)   //parameter 맞춰줘야함   
{
    for (auto element : my_array)
    {
        if (check_fcn(element) == true) cout << element;
    }
    cout << endl;
}

int main()
{
    //cout << func << endl;   // func()이 아닌 func을 출력 // 함수도 pointer다

    //func();     //함수 작동법: func의 주소를 찾아간 뒤 func()을 실행시키고 return 값을 다시 돌려줌
    //            //자세한 건 stack과 heap에서 배움




    ////int(*fcnptr)() = func();    //함수 이름 뒤 () 의미: 함수를 실행시켜서 결과값을 받아오겠다
    //int(*fcnptr)() = func;      //()없으면 pointer를 가져오겠다는 것
    //                            //함수에 parameter가 있으면 fcnptr()안에도 type을 넣어줘야함 ex) fcnptr(int)  
    //cout << fcnptr() << endl;

    //fcnptr = goo;       //함수를 바꿔치기 할 수도 있다

    //cout << fcnptr() << endl;




    //function pointer를 함수 parameter에 넣을 수 있다
    std::array<int, 10> my_array{ 0,1,2,3,4,5,6,7,8,9 };

    printNumbers(my_array, isEven); //함수는 자체가 pointer이기 때문에 &안붙여도 됨
    printNumbers(my_array, isOdd);
    //함수를 parameter로 사용하여 함수를 좀 더 짧게 만듬, 나중에 다형성을 이해할 때 도움됨

    printNumbers(my_array);     //default parameter를 사용하면 parameter를 안넣어 줘도 됨


    return 0;
}
