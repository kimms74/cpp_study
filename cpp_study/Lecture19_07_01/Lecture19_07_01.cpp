//Perfect forwarding & std::forward 1

#include <iostream>
#include <vector>
#include <utility>  //std::forward

using namespace std;

struct MyStruct
{};

void func(MyStruct& s)  //L value reference
{
    cout << "Pass by L-ref" << endl;
}

void func(MyStruct&& s) //R value reference //parameter가 다르기 때문에 overloading
{
    cout << "Pass by R-ref" << endl;
}

//void func(MyStruct s)
//{
//    cout << "Pass by Value" << endl;
//}

template<typename T>
void func_wrapper(T t)
{
    func(t);
}

template<typename T>
void func_wrapper1(T&& t)
{
    func(std::forward<T>(t));   //std::forward 역할: t가 l-value로 들어왔으면 l-vlaue를, t가 r-value로 들어왔으면 r-vlaue를 return 해준다
}

int main()
{
    //MyStruct s;
    //func(s);            //l-value ref
    //func(MyStruct());   //r-value ref



    //MyStruct s;
    //func_wrapper(s);            //template 사용시 l-value, r-value 구별을 못하게 된다
    //func_wrapper(MyStruct());   //template화 되면서 parameter가 l-value인지 r-value인지 정보가 날아가버려
    //                            //func()에서 구별을 못하게 됨




    MyStruct s;
    func_wrapper1(s);           //l-value ref
    func_wrapper1(MyStruct());  //r-value ref
    return 0;
}
