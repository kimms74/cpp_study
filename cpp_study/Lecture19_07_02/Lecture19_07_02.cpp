//Perfect forwarding & std::forward 2

#include <iostream>
#include <vector>
#include <cstdio>
#include <utility>  //std::forward

using namespace std;

class CustomVector
{
public:
    unsigned n_data = 0;
    int* ptr = nullptr;

    CustomVector(const unsigned& _n_data, const int& _init = 0) //_n_data: parameter 개수, _init: 초기값
    {
        cout << "Constructor" << endl;

        init(_n_data, _init);   //초기화하는 코드를 별도로 분리해서 사용하는게 더 편리하다
    }

    CustomVector(CustomVector& l_input) //값을 복사하는 것
    {
        cout << "Copy constructor" << endl;

        init(l_input.n_data);

        for (unsigned i = 0; i < n_data; ++i)
            ptr[i] = l_input.ptr[i];
    }

    CustomVector(CustomVector&& r_input)    //값을 옮겨오는 것(기존의 것은 비어버림)
    {
        cout << "Move constructor" << endl;

        n_data = r_input.n_data;
        ptr = r_input.ptr;

        r_input.n_data = 0;
        r_input.ptr = nullptr;
    }

    ~CustomVector()
    {
        delete[] ptr;
    }

    void init(const unsigned& _n_data, const int& _init = 0)
    {
        n_data = _n_data;
        ptr = new int[n_data];
        for (unsigned i = 0; i < n_data; ++i)
            ptr[i] = _init;
    }
};

void doSomething(CustomVector& vec)
{
    cout << "Pass by L-reference" << endl;
    CustomVector new_vec(vec);
}

void doSomething(CustomVector&& vec)    //parameter가 r-value이더라도 내부에서 move semantics를 사용하려면 std::move를 써줘야한다
{
    cout << "Pass by R-reference" << endl;
    //CustomVector new_vec(vec);            //이렇게 작성하면 copy constructor가 호출이 된다
    CustomVector new_vec(std::move(vec));   // Note: vec itself is L-value이므로 move constructor를 사용하려면 std::move를 넣어줘야함
}                                           //r-value, l-value 다르게 작동하는 경우로는 constructor외에도 assignment operator 등등이 있다

template<typename T>
void doSomethingTemplate(T vec)   
{
    doSomething(vec);  //그냥 template을 사용하면 l-value, r-value 구별 안해준다
}

template<typename T>
void doSomethingTemplate1(T&& vec)   //parameter로 &&사용!
{
    doSomething(std::forward<T>(vec));  //std::forward를 이용하면 template으로 받은 값을 l-value, r-value로 구별해준다
}

int main()
{
    //CustomVector my_vec(10, 1024);

    //CustomVector temp(my_vec);              //Copy constructor 호출

    //cout << my_vec.n_data << endl;

    //CustomVector temp(std::move(my_vec));   //Move constructor 호출

    //cout << my_vec.n_data << endl;




    //CustomVector my_vec(10, 1024);

    //CustomVector temp(my_vec);

    //doSomething(my_vec);
    //doSomething(CustomVector(10,8));    //parameter안에서 바로 생성을 하면 R-value ref로 인식됨

    //my_vec;



    CustomVector my_vec(10, 1024);

    CustomVector temp(my_vec);

    doSomethingTemplate(my_vec);               //l-value
    doSomethingTemplate(CustomVector(10, 8));  //l-value

    my_vec;
    cout << endl;

    doSomethingTemplate1(my_vec);               //l-value
    doSomethingTemplate1(CustomVector(10, 8));  //r-value

    my_vec;



    return 0;
}
