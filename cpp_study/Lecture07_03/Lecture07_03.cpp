#include <iostream>

using namespace std;

void addOne(int &y) //call by reference
{
    cout << y << " " << uintptr_t(&y) << endl;

    y = y + 1;
}

void getSinCos(const double &degrees, double &sin_out, double &cos_out)  //c나 c++은 return이 1개밖에 안되므로 parameter를 이용해 여러개 output 사용
{   //const를 붙인건 변수로 생각하고, 안 붙인건 output으로 생각하면 편함
    static const double pi = 3.14314492;    //header로 뽑아쓰면 편함
    //여러번 쓰이는 상수일 경우 static을 사용하면 매번 새로 정의 되는 것이 아닌 그대로 활용함
    const double radians = degrees * pi / 180.0;
    sin_out = sin(radians);
    cos_out = cos(radians);
}

int main()
{
    //int x = 5;

    //cout << x << " " << uintptr_t(&x) << endl;

    //addOne(x);

    //cout << x << " " << uintptr_t(&x) << endl;  
    ////참조에 의한 호출은 변수 자체를 넘기기 때문에 주소도 똑같고 복사가 이루어지지 않는다





    double sin(0.0);
    double cos(0.0);

    getSinCos(30.0, sin, cos);  
    //call by reference를 이용해 함수 밖에서 변수를 정의하고 return 값을 여러개 나오는 것 처럼 사용가능

    cout << sin << " " << cos << endl;





    return 0;
}
