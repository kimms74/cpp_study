#include <iostream>

using namespace std;

const char *getName()
{
    return "Jackjack";
}

int main()
{
    //const char *name = "Jack Jack";     // literal은 아직 메모리 지정이 안됐지만 const를 붙이면 pointer로 넣을 수 있다.
    //const char *name2 = "Jack Jack";    // 같은 literal일 경우 같은 주소를 가지게 됨(효율성 때문에)
    //const char *name3 = getName();      // return 타입으로도 포인터에 넣을 수 있다.

    //cout << uintptr_t(name) << endl;
    //cout << uintptr_t(name2) << endl;
    



    int int_arr[5] = { 1, 2, 3, 4, 5 };
    char char_arr[] = "Hello World";
    const char *name = "Jack Jack";
    
    cout << int_arr << endl;        //주소나옴
    cout << char_arr << endl;       //"Hello World"
    cout << name << endl;           //"Jack Jack" //literal이 포인터에 들어가면 예외적으로 literal을 출력으로 내준다
    
    

    char c = 'Q';                   

    cout << &c << endl;             // &c의 타입이 char*이므로 string을 출력하려고 해서 오류난다

    cout << typeid(&c).name() << endl;      //char * // 어렵다!
    cout << typeid(*name).name() << endl;
    return 0;
}
