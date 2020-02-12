//Inheritance relationship 1

#include <iostream>

using namespace std;

class Mother
{
//private:
protected:   // 외부에서 사용이 불가능하지만 자식 class에서는 접근 가능해짐
    int m_i;

public:
    Mother(const int& i_in)
        : m_i(i_in)
    {
        std::cout << "mother constructor" << std::endl;
    }

    void setValue(const int& i_in)
    {
        m_i = i_in;
    }

    int getValue()
    {
        return m_i;
    }
};

class Child : public Mother //public으로 Mother을 부르면 Mother class에 있는 것을 다 사용할 수 있다
{
private:
    double m_d;

public:
    Child(const int& i_in, const double& d_in)  //Child class를 생성할 때 Mother class의 생성자를 같이 호출한다
        //:m_i(i_in), m_d(d_in) //Child class를 생성할 때 m_i가 없기 때문에 할당이 안된다
        :Mother(i_in),m_d(d_in)
    {
        //Mother::setValue(i_in);   //위의 :Mother(i_in),m_d(d_in)을 통해 Mother 생성자를 만들면서 Child 생성자도 만듬
        //m_d = d_in;               //{}안은 필요없어짐
    }
    void setValue(const double& d_in)
    {
        m_d = d_in;
    }
    
    double getValue()
    {
        return m_d;
    }

    void setValue(const int& i_in, const double& d_in)
    {
        //m_i = i_in; //m_i가 protected:일때 가능
        Mother::setValue(i_in);
        m_d = d_in;
    }
};

class Daughter : public Mother  //상속을 받은 class를 derived class라고 부른다(상속하는 class는 generalized class라고 함)
{

};

class Son : public Mother
{

};

int main()
{
    //Mother mother;
    //mother.setValue(1024);
    //cout << mother.getValue() << endl;

    //Child child;
    //child.setValue(128);
    //cout << child.getValue() << endl;
    //child.Mother::setValue(1024);


    
    Child child(1024, 128);                 //Child class를 생성할 때 Mother class의 생성자를 같이 호출한다
    cout << child.Mother::getValue() << endl;
    cout << child.getValue() << endl;

    return 0;
}
