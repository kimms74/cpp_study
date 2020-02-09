//Overloading the parenthesis operator

#include <iostream>

using namespace std;

class Accumulator
{
private:
    int m_counter = 0;

public:
    int operator() (int i) { return m_counter += i; }
};

int main()
{
    Accumulator acc;
    cout << acc(10) << endl;    //��ȣ �����ڸ� �̿��� ��ü�� �Լ�ó�� ����ϴ� ��
    cout << acc(20) << endl;    //functor��� �θ�, chaining�� ���� ����(����?)








    return 0;
}
