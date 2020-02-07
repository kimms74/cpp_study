#include <iostream>
#include <string>

using namespace std;

//class Something
//{
//public:
//    int _value = 0;
//
//    Something(const Something &st_in)   //class내부에 숨어있는 copy constructor이다
//    {
//        _value = st_in._value;
//
//        cout << "Copy constructor" << endl;
//    }
//
//    Something()
//    {
//        cout << "Constructor" << endl;
//    }
//
//    void setValue(int value_in) //setValue()는 내부에 값을 바꾸는 코드가 있으므로
//    {                           //setValue() const라 적으면 오류 발생한다
//        _value = value_in;
//    }
//
//    int getValue() const   //member function 뒤에 const를 붙이면 이 함수는 값을 바꾸지 않겠다는 것을 의미(member function을 const한다는 것)
//    {                       //const Something 일때 사용가능하다
//        return _value;      //나중에 복잡한 함수를 구현할 때는 const로 넣어줄 수 있는 함수는
//    }                       //전부 const로 막아두는게 좋다
//                            //나중에 debugging에 유리함
//};                          

//void print(Something st)    //Copy constructor를 호출하여 복사한다(다른 type에서도 동일하다!)
//{                           //parameter에 변수가 들어가면 복사되는 것을 class를 통해 증명함(주소가 다르므로)
//    cout << &st << endl;
//    cout << st._value << endl;
//}

//void print(const Something& st) //복사는 parameter로 인수가 들어갈 때 발생하는 것이다
//{                               //복사하는 것을 원치 않는다면 const reference를 이용하면 된다(주소가 같다)
//                                //효율성에 영향을 많이 준다
//    cout << &st << endl;
//    cout << st.getValue << endl;
//}

class Something
{
public:
    string s_value = "default";

    const string& getValue() const  //member function을 const로 만들 때 보통 return도 const로 만든다
    {                               
        cout << "const version" << endl;
        return s_value; 
    }

    string& getValue()              //member function의 const여부가 overloading 가능함을 보여줌
    {                               
        cout << "non-const version" << endl;
        return s_value; 
    }
};



int main()
{
    //const Something something;    //const: something 안의 것을 바꾸지 않겠다는 의미(member variable을 const로 만든 것과 같다)
    ////something.setValue(3);      //const class이므로 오류발생

    //something.getValue; // getValue() 뒤에 const가 붙어있어 실행 가능
                        //const class는 const member function만 실행할 수 있다
    
    
    
    //Something something;  //something을 instance나 object라고 부름

    //cout << &something << endl; //print(something)의 &st와 다른 것을 알 수 있다

    //print(something);   //print는 class 외부 함수 이므로 parameter로 class를 받으면
    //                    //복사돼서 들어가므로 Something()이 실행되며 "Constructor"가 생겨야하는데 생기지 않았다
    //                    //이유는 class가 복사될 때 class 안에 Copy constructor가 숨어있기 때문에
    //                    //Something(const Something &st_in)가 대신 실행되기 때문이다
    
    
    
    Something something;        //non-const reference
    something.getValue() = "10";  //return by non-const reference이므로 값 변경 가능(return by reference는 lvalue이다)
    cout << something.getValue() << endl;

    const Something something2; //const reference
    something2.getValue();      //return by const reference이므로 값 변경 불가능
    
    //보통 member function의 parameter가 다를 경우에만 overloading이 가능하지만
    //member function이 const인가 아닌가로도 overloading이 가능하다
    //return type을 바꾸는 것으로는 overloading 불가능

    return 0;
}
