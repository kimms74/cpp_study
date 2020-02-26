//Object slicing & reference_wrapper

#include <iostream>
#include <vector>
#include <functional>

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

class Derived : public Base
{
public:
    int m_j = 1;

    virtual void print() override
    {
        cout << "I'm Derived" << endl;
    }
};

//void doSomething(Base& b) //다형성 가능
void doSomething(Base b)    //이 경우도 복사가 되므로 다형성이 사라짐
{
    b.print();
}

int main()
{
    //Derived d;
    ////Base& b = d;  //d가 그대로 들어가므로 다형성을 이용해 I'm Derived 출력됨
    //Base b = d;     //d가 복사돼 들어가므로 Base class에 맞는 정보만 들어가 다형성이 사라짐, 나머지는 버려지게 된다. I'm Base 출력됨           
    //                //이를 slicing이라 하고 의도적으로 이 기능을 쓸 때는 주석을 따로 적어줘야한다!(아마 쓸일 없을듯?)
    //b.print();
    //   
    //doSomething(d);



    //초보자가 실수 많이하는 것
    Base b;
    Derived d;

    //std::vector<Base> my_vec;   //slicing 발생

    //std::vector<Base*> my_vec;                    //pointer로 vector에 넣는 법
    //my_vec.push_back(&b);
    //my_vec.push_back(&d);

    //for (auto& ele : my_vec)
    //    ele->print();

    //vector<std::reference_wrapper<int>> my_vec;
    std::vector<reference_wrapper<Base>> my_vec;        //reference로 vector에 넣는 법
    my_vec.push_back(b);
    my_vec.push_back(d);

    for (auto& ele : my_vec)
        ele.get().print();  //reference_wrapper로 부터 object를 받아오기 위해 get()을 사용한다

    return 0;
}
