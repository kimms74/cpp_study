#include <iostream>

int main()
{
    using namespace std;


    //sizeof opeartor
    //float a;
    //sizeof(float); //sizeof�� operator��
    //cout << sizeof(a) << endl; //ǥ�� ������ bytes
    //sizeof a; // operator�� �������� ()���� ��밡��

    //comma operator
    //int x = 3;
    //int y = 10;
    //int z = (++x, ++y); // �޸� �յڸ� ����� �� �޸� ���� ���� �������� ++x, ++y, int z=y��� ��,
    //                     //for������ ���� ���
    //cout << x << " " << y << " " << z << endl;

    //int a = 1, b = 10;
    //int z;

    //z = a, b;
    //cout << z << endl; // =�� ,���� �켱������ ���� (z=a), b�� Ǯ����

    //z = (a, a + b++); // 11 , for������ ���� ���
    //cout << z << " " << b << endl;



    //conditional operator(arithmetric if)
    bool onSale = true;

    const int price = (onSale == true) ? 10 : 100; //if�����δ� price�� const �� ���� ����!, ������ ������ ���� if������ �ɰ��� �ϱ�

    //if (onSale)           // if�� const int �ϰ� ������ if�� �Լ��� § �� cost int price�� �����ؾ���
    //     price = 10;
    //else
    //     price = 100;

    cout << price << endl;

    int x = 5;
    cout << ((x % 2 == 0) ? "even" : "odd") << endl; // conditional operator �ٱ��� ()�������� ?:�� �켱������ comma �������� �����̹Ƿ�

    return 0;
}
