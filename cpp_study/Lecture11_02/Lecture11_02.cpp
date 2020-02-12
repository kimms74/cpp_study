//Inheritance relationship 2

#include <iostream>
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
    //Student�� Teacher�� �������� ���� ��Ƴ��� �θ� class:generalized class

    Student std("Jack Jack");
    std.setName("Jack Jack 2");
    cout << std.getName() << endl;

    Teacher teacher1("Dr. H");
    teacher1.setName("Dr. K");

    cout << teacher1.getName() << endl;

    cout << std << endl;
    cout << teacher1 << endl;

    std.doNothing();
    teacher1.doNothing();

    std.study();        //std�� teach() ��� �Ұ�(������ class�� ����� �Լ��̹Ƿ�)
    teacher1.teach();   //teacher1�� study() ��� �Ұ�(������ class�� ����� �Լ��̹Ƿ�)

    Person person;
    person.setName("MR. Icredible");
    cout <<person.getName() << endl;
    //person.study();
    //person.teach();   //study(), teach()�� �ڽ� class�� �������ֱ� ������ ��� �Ұ�
    

    return 0;
}
