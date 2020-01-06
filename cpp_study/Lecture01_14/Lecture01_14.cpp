#include <algorithm>

using namespace std;

//#define MAX(a,b) (((a)>(b)) ? (a):(b))

//define은 파일 내에서만 영향을 끼치기 때문에 함수를 불러오면 그 함수에 대해서는 사용 안됨
#define LIKE_APPLE

void doSomething();

int main()
{
//전처리기 #ifdef는 멀티플랫폼 사용시 처음에 윈도우인지 리눅스 인지 확인용으로 자주 사용(조건에 따라 컴파일이 달라지기 때문에)

    doSomething();
    //cout << MAX(1+2,2) << endl;
    //cout << std::max(1+4,2) << endl;

    return 0;
}
