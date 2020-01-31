#include <iostream>

using namespace std;

void addOne(int &y) //call by reference
{
    cout << y << " " << uintptr_t(&y) << endl;

    y = y + 1;
}

void getSinCos(const double &degrees, double &sin_out, double &cos_out)  //c�� c++�� return�� 1���ۿ� �ȵǹǷ� parameter�� �̿��� ������ output ���
{   //const�� ���ΰ� ������ �����ϰ�, �� ���ΰ� output���� �����ϸ� ����
    static const double pi = 3.14314492;    //header�� �̾ƾ��� ����
    //������ ���̴� ����� ��� static�� ����ϸ� �Ź� ���� ���� �Ǵ� ���� �ƴ� �״�� Ȱ����
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
    ////������ ���� ȣ���� ���� ��ü�� �ѱ�� ������ �ּҵ� �Ȱ��� ���簡 �̷������ �ʴ´�





    double sin(0.0);
    double cos(0.0);

    getSinCos(30.0, sin, cos);  
    //call by reference�� �̿��� �Լ� �ۿ��� ������ �����ϰ� return ���� ������ ������ �� ó�� ��밡��

    cout << sin << " " << cos << endl;





    return 0;
}
