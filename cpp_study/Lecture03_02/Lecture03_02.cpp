//Arithmetic operators

#include <iostream>

using namespace std;

int main()
{
    
    int x = 7;
    int y = 2;
    int z = x;

    //cout << x / y << " " << z << endl;

    //cout << x / y << endl;
    //cout << float(x) / y << endl;
    //cout << x / float(y) << endl;
    //cout << float(x) / float(y) << endl;

    cout << -5 / 2 << endl; // �������� ��������,����!(-2)
    cout << -5 % 2 << endl; // ���� ���� ��ȣ�� ���� ���� ��ȣ�� ������(-1)

    z += y; // z=z+y, +=,-=,*=,/= ��� ����

    return 0;
}
