//Aggregation relationship

#include <iostream>
#include <vector>
#include <string>
#include "Lecture.h"

using namespace std;

int main()
{
    ////Composition Relationship
    //Lecture lec1("Introduction to Computer Programming");
    //lec1.assignTeacher(Teacher("Prof. Hong"));
    //lec1.registerStudent(Student("Jack Jack", 0));
    //lec1.registerStudent(Student("Dash", 1));
    //lec1.registerStudent(Student("Violet", 2));

    //Lecture lec2("Computational Thinking");
    //lec2.assignTeacher(Teacher("Prof. Good"));
    //lec2.registerStudent(Student("Jack Jack", 0));  //lec1의 Jack Jack과 다른 주소를 가짐



    ////Aggregation relationship
    //Student std1("Jack Jack", 0);     //student와 teacher instance를 따로 만든다
    //Student std2("Dash", 1);          //lec1이 없어지면 student pointer는 사라지지만 student pointer가 가르키는 std1,std2,std3는 그대로 남아있다(main()함수 끝날 때까지는)
    //Student std3("Vilolet", 2);

    //Teacher teacher1("Prof. Hong");
    //Teacher teacher2("Prof. Good");

    //Lecture lec1("Introduction to Computer Programming");
    //lec1.assignTeacher(&teacher1);
    //lec1.registerStudent(&std1);
    //lec1.registerStudent(&std2);
    //lec1.registerStudent(&std3);

    //Lecture lec2("Computational Thinking");
    //lec2.assignTeacher(&teacher2);
    //lec2.registerStudent(&std1);


    Student* std1 = new Student("Jack Jack", 0);    //teacher와 student를 동적할당으로 만듦
    Student* std2= new Student("Dash", 1);          //장점: parameter로 pointer를 받을 때 instance 앞에 &을 따로 안붙여줘도 된다
    Student* std3= new Student("Vilolet", 2);       //main()이 아닌 다른 곳에서 만든 instance를 사용할 때 필요하다
                                                    //단점: delete을 꼭 해줘야함    
    Teacher* teacher1= new Teacher("Prof. Hong");
    Teacher* teacher2= new Teacher("Prof. Good");

    Lecture lec1("Introduction to Computer Programming");
    lec1.assignTeacher(teacher1);                   //동적 할당이므로 &필요 없음
    lec1.registerStudent(std1);
    lec1.registerStudent(std2);
    lec1.registerStudent(std3);

    Lecture lec2("Computational Thinking");
    lec2.assignTeacher(teacher2);
    lec2.registerStudent(std1);
    //test
    {
        cout << lec1 << endl;
        cout << lec2 << endl;

        //event
        lec2.study();

        cout << lec1 << endl;
        cout << lec2 << endl;

        //Composition일 경우에는 study()이후에도 lec1의 jack jack의 지능이 0이다(lec2의 jack jack과 따로 논다)
        //Aggregation일 경우에는 study()이후 lec1의 jack jack의 지능이 1이 된다(lec2의 jack jack과 동일하다)
    
        delete std1;        //동적할당으로 만들었으면 반드시 delete해주기!
        delete std2;
        delete std3;

        delete teacher1;
        delete teacher2;
    }

    return 0;
}
