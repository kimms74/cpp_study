#pragma once	//중복 정의 막아주는 코드

#include <iostream> 
//header file에서는 using namespace std;사용하지 말기!
//header 파일을 여러개 불렀을 때 중복으로 namespace가 선언되면 오류발생

class Calc  //header 파일에서 대략적인 기능 확인하고, 자세히 알고싶을 때 cpp파일 확인하는 식으로 사용한다
{
private:
    int _value;

public:
    Calc(int init_value);    //생성자 내부도 깔끔하게 cpp파일로 옮겨주는게 좋다

    Calc &add(int value_in);
    Calc &sub(int value_in);
    Calc &mult(int value_in);
    void print();

    //템플릿을 만들어 쓸 때는 function의 definition을 header에 같이 써두는걸 권장한다
    //템플릿으로 구현된 function의 body를 cpp로 옮길 때 코딩하기 번잡해질 수 있다
};