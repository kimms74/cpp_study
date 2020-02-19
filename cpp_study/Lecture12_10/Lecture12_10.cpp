//Dynamic casting

#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
    int m_i = 0;

    virtual void print()
    {
        cout << "I'm Base" << endl;
    }
};

class Derived1 : public Base
{
public:
    int m_j = 1024;

    virtual void print() override
    {
        cout << "I'm Derived1" << endl;
    }
};

class Derived2 : public Base
{
public:
    string m_name = "Dr. Two";

    virtual void print() override
    {
        cout << "I'm Derived2" << endl;
    }
};

int main()
{
    Derived1 d1;
    d1.m_j = 2048;

    Base* base = &d1;
    //base->m_j;   //보틍은 Derived class를 Base로 다형성할 때 Derived class 요소를 부르지 않지만, 필요할 때가 있다

    //auto* base_to_d1 = dynamic_cast<Derived1*>(base);   //base를 다시 Derived로 동적 형변환 시키는 것
    //cout <<base_to_d1->m_j << endl; //2048              //dynamic_cast보단 virtual function으로 사용하는게 좋다
    //base_to_d1-> m_j = 256;

    //cout << d1.m_j << endl;         //256           



    //auto* base_to_d1 = dynamic_cast<Derived2*>(base);   //Derived1을 Base로 다형성한 뒤 Derived2로 dynamic_casting한 것
    ////cout << base_to_d1->m_name << endl;                 //dynamic_cast는 casting을 실패하면 nullptr를 넣어버림
    //
    //if (base_to_d1 != nullptr)                           //그래서 if나 assert로 체크하는게 좋다
    //    cout << base_to_d1->m_name << endl;
    //else
    //    cout << "Failed" << endl;
    


    auto* base_to_d1 = static_cast<Derived2*>(base);    //static_cast는 casting에 실패하면 형변환을 안시키고 그대로 둔다
                                                        //하지만 runtime때 error check를 안하므로 이 경우에는 dynamic_cast를 이용하는거 추천(원하면 static_cast 써도 된다)
    if (base_to_d1 != nullptr)                          //그래도 동적 형변환은 되도록이면 쓰지 않는게 좋다(functional이나 lambda function 쓰기)
        base_to_d1->print();
    else
        cout << "Failed" << endl;
    return 0;
}
\