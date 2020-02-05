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
//    Student(const string &name_in)  //constructor�� ���� ����� _name�� �޴¹��
//        //: _id(0), _name(name_in)    //������ member initalization�ϴ� ����� �� �������� �����صα�!
//        :Student(0, name_in)        //�̸� ������ Student(const int &id_in, const string &name_in)
//                                    //�� �̿��� �ʱ�ȭ �ض�!
//        //Delegating Constructor:���� ������ //����� ����ϴ� constructor
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
    {   //������ ���������� delagating constructor���ٴ� ���� �ʱ�ȭ �Լ��� ����� ����Ѵ�
        //�ʱ�ȭ �ڵ带 �и��ؼ� ����ϴ� ���� ��õ!
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
