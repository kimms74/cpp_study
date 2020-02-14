//Adding new functionality to a derived class

#include <iostream>

using namespace std;

class Base
{
//private:      
protected:
    int m_value;

public:
    Base(int value)
        : m_value(value)
    {

    }

};

class Derived : public Base
{
public:
    Derived(int value)
        :Base(value)        //Base 생성자를 호출해주면 class Base에 대한 instance를 안만들어도 된다
    {
    }

    void setValue(int value)    //자식 class에서 부모 class의 변수를 건들이려면 부모 변수의 접근 지정자를 protected로 하면 된다
    {
        Base::m_value = value;  //m_value는 private member이므로 접근 불가
                                //m_value가 protected일 경우 접근 가능
        //do some work with the variables defined in Derived
        //부모 class의 변수의 접근 지정자를 private으로 하고 getValue() 함수로 불러 사용하면 느려지므로 protected 사용해라!
    }                           
};


int main()
{











    return 0;
}
