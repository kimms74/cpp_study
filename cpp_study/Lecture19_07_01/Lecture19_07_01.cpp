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

void func(MyStruct&& s) //R value reference //parameter�� �ٸ��� ������ overloading
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
    func(std::forward<T>(t));   //std::forward ����: t�� l-value�� �������� l-vlaue��, t�� r-value�� �������� r-vlaue�� return ���ش�
}

int main()
{
    //MyStruct s;
    //func(s);            //l-value ref
    //func(MyStruct());   //r-value ref



    //MyStruct s;
    //func_wrapper(s);            //template ���� l-value, r-value ������ ���ϰ� �ȴ�
    //func_wrapper(MyStruct());   //templateȭ �Ǹ鼭 parameter�� l-value���� r-value���� ������ ���ư�����
    //                            //func()���� ������ ���ϰ� ��




    MyStruct s;
    func_wrapper1(s);           //l-value ref
    func_wrapper1(MyStruct());  //r-value ref
    return 0;
}
