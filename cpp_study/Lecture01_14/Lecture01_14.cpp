#include <algorithm>

using namespace std;

//#define MAX(a,b) (((a)>(b)) ? (a):(b))    //��ũ�η� ���� ���, ���� �Լ��� ������


#define LIKE_APPLE

void doSomething();

int main()
{
    //cout << MAX(1+2,2) << endl;
    //cout << std::max(1+4,2) << endl;

    //different_source�� #ifdef�� ������ ������ Apple�� �ƴ� Orange�� ��µ�
    doSomething();  
    //define�� ���� �������� ������ ��ġ�� ������ �Լ��� �ҷ����� �� �Լ��� ���ؼ��� ��� �ȵ�
    
    return 0;
}
