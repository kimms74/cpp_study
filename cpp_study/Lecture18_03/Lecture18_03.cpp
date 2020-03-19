//Stream classes for strings

#include <iostream>
#include <sstream>  //string stream

using namespace std;

int main()
{
    //stringstream os;

    //os << "Hello, World!";          //<< : insertion operator, >> : extraction operator
    //os << "Hello, World2" << endl;  //뒤로 붙는다
    ////os.str("Hello, World!\n");      //원래 들어있는 것을 지워버리고 새로 넣음
    ////                                //줄바꿈('\n'), endl도 stringstream에 포함 가능 
    //string str;

    ////os >> str;    //Hello,    //빈칸이 있으면 잘라버림
    ////str = os.str(); //Hello, World!    //os를 통채로 가져옴
    ////cout << str << endl;
    //cout << os.str() << endl;   //os.str()로 직접 출력도 가능



    //stringstream os;

    ////os << "1234567.89";    //중간에 띄어쓰기 없으면 str1만 받아들임
    //os << "12345 67.89";    //중간에 띄어쓰기 있으면 str1 str2가 각자 받아들임

    //string str1;
    //string str2;

    //os >> str1 >> str2;

    //cout << str1 << "|" << str2 << endl;    



    //stringstream os;

    //int i = 12345;
    //double d = 67.89;

    ////os << i << d;   //i와 d 사이에 띄어쓰기 안넣으면 os에서 붙은걸로 인식해서 str1에만 들어감
    //os << i << " " << d;    //i와 d가 str1과 str2에 각각 들어감

    //string str1;
    //string str2;

    //os >> str1 >> str2;

    //cout << str1 << "|" << str2 << endl;



    //stringstream os;

    //int i = 12345;
    //double d = 67.89;

    //os << i << " " << d;    

    //int i2;
    //double d2;

    //os >> i2 >> d2; //int와 double로 각각 받아들임

    //cout << i2 << "|" << d2 << endl;



    //stringstream os;

    //os << "12345 67.89";

    //int i2;
    //double d2;

    //os >> i2 >> d2; //string으로 넣어도 int와 double로 각각 받아들임

    //cout << i2 << "|" << d2 << endl;




    stringstream os;

    os << "12345 67.89";
    
    os.str("");         //os를 비워버림
    os.str(string());   //윗줄과 똑같다
    os.clear();         //state까지 초기화를 해버린다(다음 강의에서 설명)

    cout << os.str() << endl;   //str()에서 parameter가 있으면 그 값으로 변경해주는데
                                //parameter가 없으면 가지고 있는 값을 return 해줌





    return 0;
}