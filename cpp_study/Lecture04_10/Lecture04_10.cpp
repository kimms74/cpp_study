#include <iostream>

using namespace std;

//void printPerson(double height, float weight, int age)

struct Person
{
    double  height=3.0;
    float   weight=200.0;
    int     age=100;
    string  name="Mr. Incredible"; // 초기화 안해줘도 상관x 

    void print()
    {
        cout << height << " " << weight << " " << age << " " << name;
        cout << endl;
    }
};

//void printPerson(Person ps)
//{
//    cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
//    cout << endl;
//}


struct Family
{
    Person me, mom, dad;
};


Person getMe()
{
    Person me{ 2.0, 100.0, 20, "Jack Jack" };

return me;
}

struct Employee     // 2 + (2) + 4 + 8 = 16 bytes // padding
{
    short   id;     // 2 bytes
    int     age;    // 4 bytes
    double  wage;   // 8 bytes
};




int main()
{
    ////double  height1; // double height1[100];
    ////float   weight; 
    ////int     age;
    ////string  name;

    //Person me{ 2.0, 100.0, 20, "Jack Jack" }; // uniform intialization으로 쉽게 표현 가능
    ////me.age = 20;
    ////me.name = "Jack Jack";
    ////me.height = 2.0;
    ////me.weight = 100.0;

    //me.print();
    //
    //Person me2{ me };
    //me2.print();

    //Person me_from_func = getMe();
    //me_from_func.print();



    Employee emp1;

    cout << sizeof(Employee) << endl; // data structure alignment에 의해 16bytes로 저장됨
    return 0;
}
