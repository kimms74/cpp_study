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

    //int i = 3.141592; //copy initialization, int�� double �־ int�� ��ȯ��Ű�� ���� ���
    //int a(3.14); // direct initialization, int�� double �־ int�� ��ȯ��Ű�� ���� ���
    //int b{ 4.15 }; // uniform initialization, int�� double ������ error ���

    //int k, l, m= 123; // �̷��� ������ ���� �ʱ�ȭ ��Ű�� ����� �� �� ȥ���� �� �� �ִ�!

    return 0;
}
