#include <algorithm>

using namespace std;

//#define MAX(a,b) (((a)>(b)) ? (a):(b))    //매크로로 쓰는 방법, 요즘엔 함수로 정의함


#define LIKE_APPLE

void doSomething();

int main()
{
    //cout << MAX(1+2,2) << endl;
    //cout << std::max(1+4,2) << endl;

    //different_source로 #ifdef를 빼놨기 때문에 Apple이 아닌 Orange가 출력됨
    doSomething();  
    //define은 파일 내에서만 영향을 끼치기 때문에 함수를 불러오면 그 함수에 대해서는 사용 안됨
    
    return 0;
}
