#include <iostream>
#include <string>

using namespace std;

//void print(int x = 1024)   // default argument
//{
//    cout << x << endl;
//}

//void print1(int x, int y = 10, int z)   //가운데 parameter에 default값이 있으면 오른쪽 parameter에도 default 값이 있어야한다

//void print2(int x = 10, int y = 20, int z = 30) //in header file
//void print2(int x = 10, int y = 20, int z = 30) // default 값은 선언과 정의 둘 중에 하나에서만 넣어야한다
//{                                               // 보통 함수 선언에 default 값을 넣어준다
//    cout << x << " " << y << " " << z << endl;
//}


//void print(std::string str) {}
//void print(char ch = ' ') {}


void print(int x) {}
void print(int x, int y = 20) {}

int main()
{
    //print(10);
    //print();


    //print2();
    //print2(100);
    //print2(100, 200);
    //print2(100, 200, 300);




    //print(); //char ' '로 인해 parameter char을 인식한다




    print(10); //ambiguous

    //default value 사용: log 파일을 저장할 때 이름을 기본값으로 log.txt하거나, fps를 할때 30을 넣어주거나 ..
    return 0;
}
