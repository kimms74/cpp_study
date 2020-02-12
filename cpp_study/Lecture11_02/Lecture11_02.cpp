//Inheritance relationship 2

#include <iostream>
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
    //Student와 Teacher의 공통적인 것을 담아내는 부모 class:generalized class

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

    std.study();        //std는 teach() 사용 불가(각각의 class에 선언된 함수이므로)
    teacher1.teach();   //teacher1는 study() 사용 불가(각각의 class에 선언된 함수이므로)

    Person person;
    person.setName("MR. Icredible");
    cout <<person.getName() << endl;
    //person.study();
    //person.teach();   //study(), teach()는 자식 class에 구현되있기 때문에 사용 불가
    

    return 0;
}
