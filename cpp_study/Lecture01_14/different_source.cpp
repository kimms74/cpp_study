#include <iostream>

void doSomething()
{
using namespace std;

//��ó���� #ifdef�� ��Ƽ�÷��� ���� ó���� ���������� ������ ���� Ȯ�ο����� ���� ���(���ǿ� ���� �������� �޶����� ������)

#ifdef LIKE_APPLE
    cout << "APPLE" << endl;
#else
    cout << "ORANGE" << endl;
#endif

}