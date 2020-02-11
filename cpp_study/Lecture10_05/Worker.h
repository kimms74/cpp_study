#pragma once

//#include "Timer.h"    //선언 파일인 header에서는 Timer에 대해 몰라도 된다
                        //cpp 파일에 추가하면 됨
class Worker            //이렇게 비어있는 것을 보고 dependency를 사용했다고 알면 된다(그리고 cpp확인하기)
{
public:                 //dependency는 member variable로 다른 class를 포함하지 않기 때문에 관계의 형태가 용도 외엔 무관하다 
    void doSomething(); //실제로 가장 많이 쓰는 형태이다
};