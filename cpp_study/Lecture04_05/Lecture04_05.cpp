#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{
    using namespace std;

    //float a = 1.0f;
    //double d = a; //numeric promotion //�� ū data type�� �ִ� ��   //���� �� ���� ����

    //cout << typeid(a).name() << endl;



    //numeric conversion    //ū ���� ���� ������ �ٲٰų�, Ȥ�� type�� �ٲٰų� �� ��   //���� ���� �� �ִ�
    //int i = 127;
    //char c = i;

    //cout << static_cast<int>(c) << endl;  //���� �̻��� ���ڰ� ���´�
                                            //static_cast: ����ȯ, ()����ȯ�� �������� ��ȯ�ص� �������� üũ���ش�

    double d = 0.123456789;
    float f = d;

    cout << std::setprecision(12) << f << endl;

    float g = 3.14;
    int i = g;      //�Ͻ��� ����ȯ���� ������ �Ѵ�

    cout << std::setprecision(12) << g << endl;

    cout << 5u - 10u; // ���ڵڿ� u���̸� unsigned //unsigned int�� ���������� int���� �켱������ �����Ƿ� �̻��� ���ڰ� ������ �ȴ�
    // �켱 ���� int < unsigned int < long < unsigned long < long long < unsigned long long < float < double < long double ������ ����


    //int h = (int)4; //c��Ÿ�� casting
    //int h = int(4); //c++��Ÿ�� casting
    int h = static_cast<int>(4.0);  //���� ���� ����� casting

    return 0;
}
