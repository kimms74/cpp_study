#include <iostream>

using namespace std;

void doSomething(int y) //call by value
{
    cout << "In func " << y << " " << uintptr_t(&y) << endl;
}

int main()
{
    doSomething(5); //5��� argument ���� parameter�� ����
                    //int y�� ������ �� 5�� �����ؼ� �ִ� ������

    int x = 6;

    cout << "In main " << x << " " << uintptr_t(&x) << endl;

    doSomething(x);     //x�� �״�� ���� ���� �ƴ� 6�̶�� ���� ����ż� ��
    doSomething(x + 1); //�Լ��� ���������� �ܺο� �ִ� ������ ������ ��ġ�� ����

    



    return 0;
}
