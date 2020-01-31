#include <iostream>

using namespace std;

void doSomething(int y) //call by value
{
    cout << "In func " << y << " " << uintptr_t(&y) << endl;
}

int main()
{
    doSomething(5); //5라는 argument 값을 parameter로 전달
                    //int y를 생성한 뒤 5를 복사해서 넣는 과정임

    int x = 6;

    cout << "In main " << x << " " << uintptr_t(&x) << endl;

    doSomething(x);     //x가 그대로 들어가는 것이 아닌 6이라는 값만 복사돼서 들어감
    doSomething(x + 1); //함수를 빠져나오면 외부에 있는 변수에 영향을 미치지 않음

    



    return 0;
}
