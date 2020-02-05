//function overloading

#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x + y;
}

int add(double x, double y) //function 이름이 같아도 parameter가 다르면 다른 함수로 인식한다
{                           
    return x + y;
}



//int getRandomValue() {}
//
//double getRandomValue() {}  //대신 return type이 달라도 parameter가 같으면 같은 함수로 인식한다
//
////대안
//void getRandom(int &x) {}       //call by reference를 이용해 void return type 함수를 정의한다
//
//void getRandom(double &x) {}    



//typedef int my_int;
//
//void print(int x) {}
//void print(my_int) {}   //typedef로 이름만 바꾼 것을 parameter로 사용하는 경우 똑같은 걸로 인식한다


//인수 구분이 힘든 case
void print(char *value) {}
void print(int value) {}

//둘 다 가능한 case
void print1(unsigned int value) {}
void print1(float value) {}

int main()
{
    //add(1, 2);      //어떤 add를 사용할지는 compile할 때 결정된다
    //add(3.0, 4.0);




    //int x;
    //getRandom(x);   //단점: x가 return으로 값을 가져오는 건지, input인지 구분이 안됨
    //                //함수를 확인해봐야 안다
    ////python에서는 x = getRandom()으로 사용한다
    ////c++에서는 int x = getRandomInt(x);, =getRandom(int());로 해야한다




    //print(0);
    //print('a');     // parameter를 int로 인식한다
    //print("a");     // string의 경우 인식 못한다    
    //                //해결법: 함수 parameter를 const char *로 할 경우 string으로 인식한다




    print1('a');        //ambiguous //해결책:casting 사용 ex) unsigned int('a')
    print1(0);          //ambiguous //해결책:0u(unsigned 의미)
    print1(3.14159);    //ambiguous //해결책:3.141592f

    //함수 overloading을 억지로 하기보단 명확히 구분해주는 것도 중요하다
    //필요하다면 주석을 꼭 남겨주는 습관 가져야

    return 0;
}
