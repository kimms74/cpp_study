//Output with ostream and ios

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //cout.setf(std::ios::showpos);    //set flag //+기호 표시
    //cout << 108 << endl;

    //cout.unsetf(std::ios::showpos);    //+기호 제거
    //cout << 109 << endl;


    ////cout.unsetf(std::ios::dec);    //10진수 모드 끄기
    ////cout.setf(std::ios::hex);    //16진수 모드 켜기(10진수 안 끄면 16진수로 안 나타난다)
    ////cout.setf(std::ios::hex, std::ios::basefield);    //basefield에 hex를 set하는 것 //한줄로 만들 수 있다
    //cout << std::hex;   //setf를 안쓰고 간단하게 표현할 수도 있다
    //cout << 109 << endl;//6d
    //cout << 108 << endl;//6c

    //cout << std::dec;
    //cout << 110 << endl;


    ////cout.setf(std::ios::uppercase); //16진수에서 알파벳을 대문자로 표시해줌
    ////cout << std::hex;   
    //cout << std::hex << std::uppercase; //uppercase도 setf 안 써도 됨
    //cout << 109 << endl;//6D


    //cout << std::boolalpha;
    //cout << true << " " << false << endl;   //boolalpha가 없으면 1 0으로 출력됨


    ////cout << std::defaultfloat;    //기본 상태
    //cout << std::setprecision(3) << 123.456 << endl;    //숫자만큼 자리수 표현
    //cout << std::setprecision(4) << 123.456 << endl;
    //cout << std::setprecision(5) << 123.456 << endl;
    //cout << std::setprecision(6) << 123.456 << endl;
    //cout << std::setprecision(7) << 123.456 << endl;


    //cout << std::fixed;
    //cout << std::setprecision(3) << 123.456 << endl;    //std::fixed가 있으면 숫자만큼 소수점 아래 자리수 표현 
    //cout << std::setprecision(4) << 123.456 << endl;
    //cout << std::setprecision(5) << 123.456 << endl;
    //cout << std::setprecision(6) << 123.456 << endl;
    //cout << std::setprecision(7) << 123.456 << endl;


    //cout << std::scientific <<std::uppercase;           //x.xxxxe+0x로 표현된다  //uppercase 붙이면 e가 E로 표현된다
    //cout << std::setprecision(3) << 123.456 << endl;    //std::scientific이 있으면 숫자만큼 소수점 아래 자리수 표현 
    //cout << std::setprecision(4) << 123.456 << endl;
    //cout << std::setprecision(5) << 123.456 << endl;
    //cout << std::setprecision(6) << 123.456 << endl;
    //cout << std::setprecision(7) << 123.456 << endl;


    //cout << std::showpoint;
    //cout << std::setprecision(3) << 123.456 << endl;    //std::showpoint를 하면 소수점.이 보인다 
    //cout << std::setprecision(4) << 123.456 << endl;
    //cout << std::setprecision(5) << 123.456 << endl;
    //cout << std::setprecision(6) << 123.456 << endl;
    //cout << std::setprecision(7) << 123.456 << endl;


    cout << -12345 << endl;
    cout.fill('*');                                             //빈칸을 *로 채워줌
    cout << std::setw(10) << -12345 << endl;                    //setw(10): 10칸을 채우는 것
    cout << std::setw(10) << std::left << -12345 << endl;       //왼쪽으로 붙임
    cout << std::setw(10) << std::right << -12345 << endl;      //오른쪽으로 붙임
    cout << std::setw(10) << std::internal << -12345 << endl;   //부호는 왼쪽 숫자는 오른쪽으로 붙임

    return 0;
}
