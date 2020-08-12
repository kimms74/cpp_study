#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{
    using namespace std;

    //float a = 1.0f;
    //double d = a; //numeric promotion //더 큰 data type에 넣는 것   //문제 될 것이 없다

    //cout << typeid(a).name() << endl;



    //numeric conversion    //큰 것을 작은 것으로 바꾸거나, 혹은 type을 바꾸거나 할 때   //문제 생길 수 있다
    //int i = 127;
    //char c = i;

    //cout << static_cast<int>(c) << endl;  //전혀 이상한 숫자가 나온다
                                            //static_cast: 형변환, ()형변환과 차이점은 변환해도 괜찮은지 체크해준다

    double d = 0.123456789;
    float f = d;

    cout << std::setprecision(12) << f << endl;

    float g = 3.14;
    int i = g;      //암시적 형변환때는 버림을 한다

    cout << std::setprecision(12) << g << endl;

    cout << 5u - 10u; // 숫자뒤에 u붙이면 unsigned //unsigned int가 내부적으로 int보다 우선순위가 높으므로 이상한 숫자가 나오게 된다
    // 우선 순위 int < unsigned int < long < unsigned long < long long < unsigned long long < float < double < long double 순으로 높다


    //int h = (int)4; //c스타일 casting
    //int h = int(4); //c++스타일 casting
    int h = static_cast<int>(4.0);  //제일 좋은 방식의 casting

    return 0;
}
