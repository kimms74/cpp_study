#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    //int x = 5;
    //int y = --x;
    //int z = x--;
    //cout << y << endl;
    //cout << z << endl;

    int x = 6, y = 6;
    cout << x << " " << y << endl;
    cout << ++x << " " << --y << endl; 
    cout << x << " " << y << endl; // 7,5
    cout << x++ << " " << y-- << endl; // �ϴ� x,y ���� ����� �� x,y ���� ���� ++, --�ؼ� �����ϴ°�
    cout << x << " " << y << endl; //�߿�!

    int v = add(x, ++x); // ������!! ���� ������ ���� ���� �ʱ�
    cout << v << endl; 

    int w = add(x, ++y);
    cout << w << endl;

    x = x++; // ������! ���� ������ ���� ���� �ʱ�
    ++x;
    x++; // �� 2������� ����
    return 0;
}
