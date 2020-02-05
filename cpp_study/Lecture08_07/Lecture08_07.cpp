//Chaining Member Functions

#include <iostream>

using namespace std;

class Simple
{
private:
    int _id;

public:
    Simple(int id_in)
    {
        this->setID(id_in);     //다른 instance끼리 구별하는 법: 내부적으로 this->가 숨어있다
        //(*this).setID(id_in); //위와 같은 의미다

        cout << this << endl;   //this: 자기 자신의 주소를 출력해줌
    }
    void setID(int id_in) { _id = id_in; }
    int getID() { return _id; }
};

class Calc
{
private:
    int _value;

public:
    Calc(int init_value)
        : _value(init_value)
    {}

    //void add(const int &value_in) { _value += value_in; }
    //void sub(const int &value_in) { _value -= value_in; }
    //void mult(const int &value_in) { _value *= value_in; }

    Calc &add(int value_in) { _value += value_in; return *this; }    //지정된 instance를 return시켜줌
    Calc &sub(int value_in) { _value -= value_in; return *this; }
    Calc &mult(int value_in) { _value *= value_in; return *this; }

    void print()
    {
        cout << _value << endl;
    }
};

int main()
{
    Simple s1(1), s2(2);
    s1.setID(2);
    s2.setID(4);

    cout << &s1 << " " << &s2 << endl;

    //파이썬의 member function에 self쓰는것과 동일하게
    //c++에서는 Simple::setID(&s1, 1);처럼 작동한다(개념상으로 이렇다는 것이지 문법적(= s2.setID(1))으로 옳은것 아님)
    //나중에 위와 같은 개념이 도움될 일이 있다




    Calc calc(10);
    //calc.add(10);
    //calc.sub(1);
    //calc.mult(2);   // 계속 calc.치는게 번거롭다

    //calc.print();




    calc.add(10).sub(1).mult(2).print(); // member functions이 자기 자신을 return하기 때문에 간편하게 사용 가능

    //Calc cal(10);                 //위 한줄이 내부적으로 이렇게 작동하는 것이다
    //Calc &temp1 = cal.add(10);    //다른 언어들에서는 요즘 잘 쓰이지만 c++에서는 member function type도 바꾸고
    //Calc &temp2 = temp1.sub(1);   //, return *this도 각각 붙여야하기 때문에 효율적인지 의문이다
    //Calc &temp3 = temp2.mult(2);  //그리고 API가 복잡할 경우 사용하는 함수, 사용하지 못하는 함수 구별해야하기 때문에
    //temp3.print();                //사용자 입장에서 조금 헷갈릴 수 있다는 단점있다
 
    Calc(10).add(10).sub(1).mult(2).print();    //이렇게도 작성가능, 이름이 없는 instance?


    return 0;
}
