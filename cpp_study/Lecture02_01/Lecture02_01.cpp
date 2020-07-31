#include <iostream>

int main()
{
    using namespace std;

    bool bValue = true;
    char chValue = 65;

    cout << chValue << endl;

    cout << bValue << endl;

    //float fValue = 3.141592;
    //double dValue = 3.141592;

    auto aValue = 3.141592;
    auto aValue2 = 3.141592f;
   
    cout << sizeof(aValue) << endl;
    cout << sizeof(aValue2) << endl;

    cout << sizeof(bool) << endl;
    cout << sizeof(bValue) << endl;
    cout << &fValue << endl;
    cout << &dValue << endl;

    //cout << (bValue ? 1:0) << endl;

    //int i = 3.141592; //copy initialization, int에 double 넣어도 int로 변환시키고 워닝 띄움
    //int a(3.14); // direct initialization, int에 double 넣어도 int로 변환시키고 워닝 띄움
    //int b{ 4.15 }; // uniform initialization, int에 double 넣으면 error 띄움

    //int k, l, m= 123; // 이렇게 마지막 꺼만 초기화 시키면 사람이 볼 때 혼란을 줄 수 있다!

    return 0;
}
