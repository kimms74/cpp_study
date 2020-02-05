//static member variable

#include <iostream>

using namespace std;

//int generateID()    //함수를 부를 때마다 1씩 올라감 // 고유넘버를 생성할 때 쓰임
//{
//    static int s_id = 0;
//    return ++s_id;
//}

//class Something
//{
//public:
//    static int s_value;  //class 내애서는 static member variable은 초기화 하지 않는다
//};                      //static은 internal linkage이지만 class로 만들어 쓰면 external linkage처럼 사용되기에
//                        //각각의 cpp파일 안에서 따로 initialization해야한다
//
//int Something::s_value = 1; //static variable이므로 s_를 붙인다
//                            // class밖에서 static member variable에 값을 넣어준다
//                            //define은 header가 아닌 cpp에 해두기!(header에 하면 오류남)


//class Something
//{
//public:
//    static const int s_value =1;    //static const의 경우 class 안에서 정의할 수 있다
//};                                  //어느 cpp파일에서도 const이므로 값이 바뀔 여지가 없기 때문에
////const int Something::s_value = 1;



class Something
{
public:
    static constexpr int s_value = 1;    //static constexpr의 경우에는 compile time때 값이 정해져야함
};                                      //design 패턴 중에서 single turn에 static const가 쓰인다


int main()
{
    //cout << generateID() << endl;
    //cout << generateID() << endl;
    //cout << generateID() << endl;




    //cout << &Something::s_value << " " << Something::s_value << endl;   //s_value는 instance가 없을 떄도 주소를 가진다
    //                                                                    //static은 메모리에 정적으로 존재하므로 초기화를 할 때 주소를 가지기 때문이다
    //Something st1;
    //Something st2;

    //st1.s_value = 2;
    //cout << &st1 << " " << &st2 << endl;
    //cout << &st1.s_value << " " << st1.s_value << endl;   
    //cout << &st2.s_value << " " << st2.s_value << endl;   //st1과 st2의 주소는 다르지만 _value의 주소는 같다

    //Something::s_value = 1024;

    //cout << &Something::s_value << " " << Something::s_value << endl;




    cout << &Something::s_value << " " << Something::s_value << endl;
    return 0;
}
