//Aggregation relationship

#include <iostream>
#include <vector>
#include <string>
#include "Lecture.h"

using namespace std;

int main()
{
    //Composition Relationship
    Lecture lec1("Introduction to Computer Programming");
    lec1.assignTeacher(Teacher("Prof. Hong"));
    lec1.registerStudent(Student("Jack Jack", 0));
    lec1.registerStudent(Student("Dash", 1));
    lec1.registerStudent(Student("Violet", 2));

    Lecture lec2("Computational Thinking");
    lec2.assignTeacher(Teacher("Prof. Good"));
    lec2.registerStudent(Student("Jack Jack", 0));  //lec1의 Jack Jack과 다른 주소를 가짐

    //TODO: implement Aggregation Relationship

    //test
    {
        cout << lec1 << endl;
        cout << lec2 << endl;

        //event
        lec2.study();

        cout << lec1 << endl;
        cout << lec2 << endl;
    }

    return 0;
}
