#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{
    using namespace std;

    //float a = 1.0f;
    //double d = a; //numeric promotion

    //cout << typeid(a).name() << endl;



    //nemeric conversion
    //int i = 127;
    //char c = i;

    //cout << static_cast<int>(c) << endl;
 

    double d = 0.123456789;
    float f = d;

    cout << std::setprecision(12) << f << endl;

    float g = 3.14;
    int i = g;

    cout << std::setprecision(12) << g << endl;

    cout << 5u - 10u; // ���ڵڿ� u���̸� unsigned
    // �켱 ���� int < unsigned int < long < unsigned long < long long < unsigned long long < float < double < long double ������ ����

    int h = static_cast<int>(4.0);

    return 0;
}
