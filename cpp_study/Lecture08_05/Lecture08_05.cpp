#include <iostream>
#include <string>

using namespace std;

//class Student
//{
//private:
//    int         _id;
//    string      _name;
//
//public:
//
//    Student(const int &id_in, const string &name_in)
//        : _id(id_in), _name(name_in)
//    {}
//
//    Student(const string &name_in)  //constructor를 새로 만들어 _name만 받는방법
//        //: _id(0), _name(name_in)    //하지만 member initalization하는 기능은 한 군데에만 구현해두기!
//        :Student(0, name_in)        //미리 만들어둔 Student(const int &id_in, const string &name_in)
//                                    //을 이용해 초기화 해라!
//        //Delegating Constructor:위임 생성자 //기능을 대신하는 constructor
//    {}
//
//    void print()
//    {
//        cout << _id << " " << _name << endl;
//    }
//};

class Student
{
private:
    int         _id;
    string      _name;

public:

    Student(const int &id_in, const string &name_in)
    {
        init(id_in, name_in);
    }

    Student(const string &name_in)
    {
        init(0, name_in);
    }

    void init(const int &id_in, const string &name_in)
    {   //하지만 실전에서는 delagating constructor보다는 만능 초기화 함수를 만들어 사용한다
        //초기화 코드를 분리해서 사용하는 것을 추천!
        _id = id_in;
        _name = name_in;
    }

    void print()
    {
        cout << _id << " " << _name << endl;
    }
};


int main()
{
    Student st1(0, "Jack Jack");
    st1.print();

    Student st2("Dash");
    st2.print();

    return 0;
}
