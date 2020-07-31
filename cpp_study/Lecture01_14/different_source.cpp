#include <iostream>

void doSomething()
{
using namespace std;

//전처리기 #ifdef는 멀티플랫폼 사용시 처음에 윈도우인지 리눅스 인지 확인용으로 자주 사용(조건에 따라 컴파일이 달라지기 때문에)

#ifdef LIKE_APPLE
    cout << "APPLE" << endl;
#else
    cout << "ORANGE" << endl;
#endif

}