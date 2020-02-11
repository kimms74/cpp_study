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
    //lec2.registerStudent(Student("Jack Jack", 0));  //lec1�� Jack Jack�� �ٸ� �ּҸ� ����



    ////Aggregation relationship
    //Student std1("Jack Jack", 0);     //student�� teacher instance�� ���� �����
    //Student std2("Dash", 1);          //lec1�� �������� student pointer�� ��������� student pointer�� ����Ű�� std1,std2,std3�� �״�� �����ִ�(main()�Լ� ���� ��������)
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


    Student* std1 = new Student("Jack Jack", 0);    //teacher�� student�� �����Ҵ����� ����
    Student* std2= new Student("Dash", 1);          //����: parameter�� pointer�� ���� �� instance �տ� &�� ���� �Ⱥٿ��൵ �ȴ�
    Student* std3= new Student("Vilolet", 2);       //main()�� �ƴ� �ٸ� ������ ���� instance�� ����� �� �ʿ��ϴ�
                                                    //����: delete�� �� �������    
    Teacher* teacher1= new Teacher("Prof. Hong");
    Teacher* teacher2= new Teacher("Prof. Good");

    Lecture lec1("Introduction to Computer Programming");
    lec1.assignTeacher(teacher1);                   //���� �Ҵ��̹Ƿ� &�ʿ� ����
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

        //Composition�� ��쿡�� study()���Ŀ��� lec1�� jack jack�� ������ 0�̴�(lec2�� jack jack�� ���� ���)
        //Aggregation�� ��쿡�� study()���� lec1�� jack jack�� ������ 1�� �ȴ�(lec2�� jack jack�� �����ϴ�)
    
        delete std1;        //�����Ҵ����� ��������� �ݵ�� delete���ֱ�!
        delete std2;
        delete std3;

        delete teacher1;
        delete teacher2;
    }

    return 0;
}
