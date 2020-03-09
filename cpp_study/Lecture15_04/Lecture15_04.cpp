//std::move

#include <iostream>
#include <vector>
#include "AutoPtr.h"
#include "Resource.h"

using namespace std;

template<class T>
void MySwap(T& a, T& b) //std::swap이라는게 따로 존재하기 때문에 임의로 Myswap이라 지은 것
{
    //T tmp = a;  //copy constructor
    //a = b;      //copy assignment
    //b = tmp;    //copy assignment

    T tmp{ std::move(a) };  //move semantics
    a = std::move(b);       //class에서 move constructor, move assignment를 구현해야 std::move를 사용할 수 있다
    b = std::move(tmp);    
}

int main()
{
    //{
    //    AutoPtr<Resource> res1(new Resource(10000000));

    //    cout << res1.m_ptr << endl;

    //    //AutoPtr<Resource> res2 = res1;            //value(copy) constructor 작동(assignment 아닌 이유: res2를 생성하면서 대입하므로 constructor실행)
    //    AutoPtr<Resource> res2 = std::move(res1);   //std::move : l-value를 r-value로 return해줌
    //                                                //move constructor 작동함(assignment 아닌 이유: res2를 생성하면서 대입하므로 constructor실행)
    //    cout << res1.m_ptr << endl;
    //    cout << res2.m_ptr << endl;   //주의!!: res1의 data가 res2로 넘어갔기 때문에 이후로는 res2만을 이용해서 진행해야함
    //                                  //res1에는 nullptr이 들어있다, 그러므로 move semantics 주의해서 사용하기!
    //}
    



    {
        AutoPtr<Resource> res1(new Resource(3));
        res1->setAll(3);    //-> operator로 m_ptr을 return

        AutoPtr<Resource> res2(new Resource(5));
        res2->setAll(5);

        res1->print();
        res2->print();

        MySwap(res1, res2);

        res1->print();
        res2->print();
    }




    //{
    //    vector<string> v;
    //    string str = "Hello";

    //    v.push_back(str);   //커서를 올려보면 parameter가 l-value reference임을 알 수 있다

    //    cout << str << endl;
    //    cout << v[0] << endl;

    //    v.push_back(std::move(str));    //커서를 올려보면 parameter가 r-value reference임을 알 수 있다
    //                                    //vector내부에 push_back에 r-value가 들어올 때 move가 될 수 있게 코드가 다 구현이 돼있다
    //    cout << str << endl;            //str이 move돼 nullptr이 됐다
    //    cout << v[0] << " " << v[1] << endl;
    //}




    {
        std::string x{ "abc" };
        std::string y{ "de" };

        std::cout << "x : " << x << std::endl;
        std::cout << "y : " << y << std::endl;

        MySwap(x, y);

        std::cout << "x : " << x << std::endl;
        std::cout << "y : " << y << std::endl;
    }


    
    return 0;
}
