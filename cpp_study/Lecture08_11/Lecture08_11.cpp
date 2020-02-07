//static member function

#include <iostream>

using namespace std;

//class Something
//{
//private:
//    static int s_value;
//    int m_value;
//    
//public:
//    //Something()
//        //:m_value(123), s_value(1024); //현재 cpp에서는 static constructor를 지원하지 않아
//    //{}                                  //static member variable을 constrctor에서 초기화할 수 없다(static constructor를 지원한다면 가능해질것이다)

//    static int getValue()     //static member function은 instance없이 접근 가능
//    {
//        return s_value;         //s_value는 정적으로 메모리에 존재하여 접근 가능(this를 안통해도 된다)
//        //return this->s_value; //this는 non static member function에서만 사용할 수 있다
//        //return m_value;       //this로 접근해야하는 모든 것이 static member function에서 불가능함
//    }
//
//    int temp()
//    {
//        //return this->s_value + this->m_value;   //this의 의미: 특정 instance의 주소를 받아 그 instance에 속해있는 member들의 주소를 가져다 쓰겠다
//        return this->s_value;
//    }
//};
//int Something::s_value = 1024;


class Something
{
public:
    class _init
    {
    public:
        _init()
        {
            s_value = 9876; //내부 class이기 때문에 private의 static member variable에 접근가능
        }                   //s_value가 어떤 type이든 다 가능함(array, string, ...)
    };

private:
    static int s_value;         //다른 언어에서는 static을 생성자에서 다룰 수 있다고 함
    int m_value;

    static _init s_initializer; //inner class를 static으로 하나 만듦

public:
    static int getValue()
    {
        return s_value;
   }

    int temp()
    {
        return this->s_value;
    }
};

int Something::s_value;              //초기화를 시켜줘야 memory를 가지게 된다(값을 안넣어주면 0으로 초기화)
Something::_init Something::s_initializer;  //inner class를 이용해 초기화하는 방법


int main()
{
    //cout << Something::getValue() << endl;

    //Something s1;
    //cout << s1.getValue() << endl;
    ////cout << s1.s_value << endl;




    Something s1, s2;
    
    int (Something:: * fptr1)() = &Something::temp; //member function은 class에 속해있으므로 &을 붙여줘야한다
                                                    //또한 pointer function의 소속을 나타내기 위해 Something::을 붙인다
                                                    //*의 의미:member function의 pointer를 복사하겠다는 말
    
    cout << (s2.*fptr1)() << endl;  //class안의 member function에 접근할 때 s2.*을 붙이는 이유
                                    //fptr1이 Something::temp의 pointer를 가지고 있는데
                                    //이 pointer의 함수를 실행시킬 때 s2라는 instance의 pointer를 넘겨주고
                                    //s2의 this pointer를 가져다가 작동하는 형태임
                                    //member functnion 자체가 고유의 pointer를 가지고 있고 instance에 따라 this pointer를 사용해 실행시킨다
                                    //non static member function은 instance에 종속돼있기에 this pointer가 없으면 작동 안한다
                                    //그러므로 non static member function 내부에 this pointer가 숨어있다
                                    //class function pointer의 경우 .*으로 부른다(class 내에 fptr1이라는 함수가 없으므로 *로 원본을 찾아가는것)
    
    
    
    int (* fptr2)() = &Something::getValue; //static member function은 특정 instance에 상관없이 실행시킬 수 있다
    
    cout << fptr2() << endl;    //특정 instance에 연결 안시켜도 작동이 된다

    return 0;
}
