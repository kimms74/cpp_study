// Early binding and late binding

#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    int x, y;
    cin >> x >> y;

    int op;
    cout << "0 : add, 1 : subtract, 2 : multiply" << endl;
    cin >> op;

    ////static binding (early binding) 정적 바인딩
    //int result;
    //switch (op)
    //{
    //case 0: result = add(x, y); break;
    //case 1: result = subtract(x, y); break;
    //case 2: result = multiply(x, y); break;
    //}

    //cout << result << endl;           //이미 컴파일 타임에 다 결정돼있기 때문에 빠르다



    //Dynamic binding (late binding)    동적 바인딩
    int(*func_ptr)(int, int) = nullptr; //function pointer  //다른 함수의 pointer를 가지고 있는 함수(동적할당 역할)
    switch (op)
    {
    case 0: func_ptr = add; break;
    case 1: func_ptr = subtract; break;
    case 2: func_ptr = multiply; break;
    }

    cout << func_ptr(x, y) << endl;     //주소를 한번 타고가야하기 때문에 정적 바인딩에 비해 느리다
                                        //대신 프로그래밍이 더 유연해진다(나중에 설명해줌 ex) 12_01 for문)
                                        //특히 virtual function을 for 루프 안에 넣는다든지, functino pointer로 가지고 온걸 반복이 잦은 부분에 사용한다든지만 피하면
                                        //동적 바인딩은 좋다!(특히 게임엔진 같은건 외부에서 디자이너가 입력한것에 따라 거기에 맞춰서 프로그래밍하는 방식이므로 유연하게 프로그래밍하는 것에 필수적이다)
    return 0;
}
