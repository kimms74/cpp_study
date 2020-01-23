#include <iostream>

using namespace std;

enum Type
{
    INT,
    FLOAT,
    DOUBLE,
};

int main()
{
    int i = 5;
    float f = 3.0;
    char c = 'a';

    void *ptr = nullptr;

    ptr = &i;
    ptr = &f;
    ptr = &c;

    int *ptr_i = &i;

    cout << ptr_i << endl;

    cout << ptr_i + 1 << endl;  //ptr_i�� type�� int *�� �ϸ� ptr ���� ����
    cout << ptr + 1 << endl;    //void type�� ptr�� ������ ���� �Ұ���, +1�� �� �� bytes�� ���ؾ����� �� �� ���� ������

    cout << &c << endl;         // &c�� type�� char *�̹Ƿ� �����߻�, char *�� ��� string���� ������ '\0'�� ���ö� ���� ��� �������� ��

    cout << *ptr << endl;       // type�� �𸣱� ������ de-refencing �Ұ���
    cout << *static_cast<char *>(ptr) << endl;  //������ casting�� ���� ǥ������, �̷��� ���� ǥ���� �ؾ��ϳ�??

    Type type = FLOAT;                //����ϴ� ��찡 �߻��ϸ� enum�� �̿��Ѵ�, ��� c++������ �� ���� ��� ����
                                    //�׷��� void pointer�� ����ϴ� ��찡 �� ����
    if(type == FLOAT)
        cout << *static_cast<float *>(ptr) << endl;
    if (type == INT)
        cout << *static_cast<float *>(ptr) << endl;

    return 0;
}
