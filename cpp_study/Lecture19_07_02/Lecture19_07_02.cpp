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

    CustomVector(const unsigned& _n_data, const int& _init = 0) //_n_data: parameter ����, _init: �ʱⰪ
    {
        cout << "Constructor" << endl;

        init(_n_data, _init);   //�ʱ�ȭ�ϴ� �ڵ带 ������ �и��ؼ� ����ϴ°� �� ���ϴ�
    }

    CustomVector(CustomVector& l_input) //���� �����ϴ� ��
    {
        cout << "Copy constructor" << endl;

        init(l_input.n_data);

        for (unsigned i = 0; i < n_data; ++i)
            ptr[i] = l_input.ptr[i];
    }

    CustomVector(CustomVector&& r_input)    //���� �Űܿ��� ��(������ ���� ������)
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

void doSomething(CustomVector&& vec)    //parameter�� r-value�̴��� ���ο��� move semantics�� ����Ϸ��� std::move�� ������Ѵ�
{
    cout << "Pass by R-reference" << endl;
    //CustomVector new_vec(vec);            //�̷��� �ۼ��ϸ� copy constructor�� ȣ���� �ȴ�
    CustomVector new_vec(std::move(vec));   // Note: vec itself is L-value�̹Ƿ� move constructor�� ����Ϸ��� std::move�� �־������
}                                           //r-value, l-value �ٸ��� �۵��ϴ� ���δ� constructor�ܿ��� assignment operator ����� �ִ�

template<typename T>
void doSomethingTemplate(T vec)   
{
    doSomething(vec);  //�׳� template�� ����ϸ� l-value, r-value ���� �����ش�
}

template<typename T>
void doSomethingTemplate1(T&& vec)   //parameter�� &&���!
{
    doSomething(std::forward<T>(vec));  //std::forward�� �̿��ϸ� template���� ���� ���� l-value, r-value�� �������ش�
}

int main()
{
    //CustomVector my_vec(10, 1024);

    //CustomVector temp(my_vec);              //Copy constructor ȣ��

    //cout << my_vec.n_data << endl;

    //CustomVector temp(std::move(my_vec));   //Move constructor ȣ��

    //cout << my_vec.n_data << endl;




    //CustomVector my_vec(10, 1024);

    //CustomVector temp(my_vec);

    //doSomething(my_vec);
    //doSomething(CustomVector(10,8));    //parameter�ȿ��� �ٷ� ������ �ϸ� R-value ref�� �νĵ�

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
