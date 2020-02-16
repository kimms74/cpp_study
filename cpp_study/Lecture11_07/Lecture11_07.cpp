//Calling inherited functions and overriding behavior

#include <iostream>

using namespace std;

class Base
{
protected:
    int m_i;

public:
    Base(int value)
        : m_i(value)
    {}

    void print()
    {
        cout << "I'm base " << endl;
    }

    friend std::ostream& operator << (std::ostream& out, const Base& b)
    {
        out << "This is base output " << endl;
        return out;
    }
};

class Derived : public Base
{
private:
    double m_d;

public:
    Derived(int value)
        :Base(value)
    {}

    //void print()            //overriding: 부모 class에 있는 함수와 같은 이름의 함수가 자식 class에도 있을 때
    //{
    //    cout << "I'm derived " << endl;
    //}

    void print()            
    {
        Base::print();      //부모 class 함수 기능에 추가도 다른 기능을 넣고 싶을 때 부모 class 함수를 자식 class함수에서 실행되게 하는 법
        cout << "I'm derived " << endl;
        //print()   //이렇게 작성하면 재귀함수로 인식해 무한 반복한다(Base::를 꼭 붙여줘야함)
    }

    friend std::ostream& operator << (std::ostream& out, const Derived& d)
    {
        cout << static_cast<Base>(d);   //static_cast를 이용해 Base의 출력연산자를 사용할 수 있다, d는 input parameter의 이름과 똑같이 사용
                                        //Derived를 Base로 casting 가능한 이유: 자식 class는 부모 class에 대한 정보를 지니고 있으므로
        out << "This is derived output " << endl;
        return out;
    }
};

int main()
{
    //Base base(5);
    //base.print();

    //Derived derived(7);
    //derived.print();


    Base base(5);
    cout << base;   //출력연산자에 endl를 넣어줬으므로 코드에 end를빼준다

    Derived derived(7);
    cout << derived;





    return 0;
}
