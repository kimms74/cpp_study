//std::move

#include <iostream>
#include <vector>
#include "AutoPtr.h"
#include "Resource.h"

using namespace std;

template<class T>
void MySwap(T& a, T& b) //std::swap�̶�°� ���� �����ϱ� ������ ���Ƿ� Myswap�̶� ���� ��
{
    //T tmp = a;  //copy constructor
    //a = b;      //copy assignment
    //b = tmp;    //copy assignment

    T tmp{ std::move(a) };  //move semantics
    a = std::move(b);       //class���� move constructor, move assignment�� �����ؾ� std::move�� ����� �� �ִ�
    b = std::move(tmp);    
}

int main()
{
    //{
    //    AutoPtr<Resource> res1(new Resource(10000000));

    //    cout << res1.m_ptr << endl;

    //    //AutoPtr<Resource> res2 = res1;            //value(copy) constructor �۵�(assignment �ƴ� ����: res2�� �����ϸ鼭 �����ϹǷ� constructor����)
    //    AutoPtr<Resource> res2 = std::move(res1);   //std::move : l-value�� r-value�� return����
    //                                                //move constructor �۵���(assignment �ƴ� ����: res2�� �����ϸ鼭 �����ϹǷ� constructor����)
    //    cout << res1.m_ptr << endl;
    //    cout << res2.m_ptr << endl;   //����!!: res1�� data�� res2�� �Ѿ�� ������ ���ķδ� res2���� �̿��ؼ� �����ؾ���
    //                                  //res1���� nullptr�� ����ִ�, �׷��Ƿ� move semantics �����ؼ� ����ϱ�!
    //}
    



    {
        AutoPtr<Resource> res1(new Resource(3));
        res1->setAll(3);    //-> operator�� m_ptr�� return

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

    //    v.push_back(str);   //Ŀ���� �÷����� parameter�� l-value reference���� �� �� �ִ�

    //    cout << str << endl;
    //    cout << v[0] << endl;

    //    v.push_back(std::move(str));    //Ŀ���� �÷����� parameter�� r-value reference���� �� �� �ִ�
    //                                    //vector���ο� push_back�� r-value�� ���� �� move�� �� �� �ְ� �ڵ尡 �� ������ ���ִ�
    //    cout << str << endl;            //str�� move�� nullptr�� �ƴ�
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
