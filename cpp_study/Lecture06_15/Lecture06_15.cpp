#include <iostream>

using namespace std;

void doSomething(const int& x)      // const int&로 parameter를 사용하면 복사하는게 아닌 그 값 그대로 사용가능
{                                   // 상수를 함수의 parameter에 넣어도 사용 가능하다
    cout << x << endl;
}

using namespace std;

int main()
{
    //int x = 5;
    //const int &ref_x = x;



    //const int x = 5;
    //const int &ref_x = x;     //reference variable에 const lvalue 대입 불가능하므로 variable에 const붙여준다

    //const int &ref_x2 = ref_x;
     
    
    
    // int x = 5;
    // int &ref_x = x;

    //const int &ref_x2 = ref_x;

    

    

    const int &ref_x = 3+4;     //const int &로 type을 하면 상수도 넣을 수 있고, 주소도 가지게 된다
    int ref_x2 = 3 + 4;         // 그냥 int와 차이점: const int &는 함수 parameter로 사용시 유용!

    cout << ref_x2 << endl;
    cout << &ref_x2 << endl;




    int a = 1;
    doSomething(a);
    doSomething(1);     // doSomething의 parameter로 const int &를 사용하면 상수도 넣을 수 있다 
    doSomething(a + 3);
    doSomething(3 * 4);
    
    
    
    
    
    
    
    
    return 0;
}
