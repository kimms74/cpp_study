#include <iostream>

using namespace std;

enum Type
{
    INT,
    FLOAT,
    DOUBLE,
};

int main()
{
    int i = 5;
    float f = 3.0;
    char c = 'a';

    void *ptr = nullptr;

    ptr = &i;
    ptr = &f;
    ptr = &c;

    int *ptr_i = &i;

    cout << ptr_i << endl;

    cout << ptr_i + 1 << endl;  //ptr_i의 type을 int *로 하면 ptr 연산 가능
    cout << ptr + 1 << endl;    //void type의 ptr는 포인터 연산 불가능, +1할 때 몇 bytes를 더해야할지 알 수 없기 때문에

    cout << &c << endl;         // &c의 type이 char *이므로 오류발생, char *의 경우 string으로 생각해 '\0'이 나올때 까지 계속 받으려고 함

    cout << *ptr << endl;       // type을 모르기 때문에 de-refencing 불가능
    cout << *static_cast<char *>(ptr) << endl;  //강제로 casting을 통해 표현가능, 이렇게 까지 표현을 해야하나??

    Type type = FLOAT;                //써야하는 경우가 발생하면 enum을 이용한다, 모던 c++에서는 더 편한 방법 등장
                                    //그래서 void pointer는 사용하는 경우가 잘 없다
    if(type == FLOAT)
        cout << *static_cast<float *>(ptr) << endl;
    if (type == INT)
        cout << *static_cast<float *>(ptr) << endl;

    return 0;
}
