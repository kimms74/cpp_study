//Dependencies relationship

#include "Worker.h" //main 파일에서도 Worker.h에 대해서만 알면 된다

using namespace std;


int main()
{
    Worker().doSomething(); //익명 객체(생성자에 parameter가 없으므로 ()로 둔다

     
    return 0;
}
