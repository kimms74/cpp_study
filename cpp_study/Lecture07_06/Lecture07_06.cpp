#include <iostream>

using namespace std;

inline int min(int x, int y)    // ���� header file�� inline�� �ٿ� ����
{                               //���򿡴� compiler�� ������ �Ǵ��ؼ� inline�� ���̱⵵ ��
    return x > y ? y : x;       //���ٰ� ���� �������� �ʰ�, �Ƚᵵ �׷��� ������ �ʴ�
}                               //technic�� �������� ����ȭ�� �����Ѵ�!
                                //������ compiler ������ ũ�Ⱑ Ŀ����
int main()
{
    cout << min(5, 6) << endl;      //���α׷��� ���۵Ǹ� min�Լ��� ������ ��, int x,y�� �����ϰ�
    cout << min(3, 2) << endl;      // (5,6),(3,2) ���� min()������ ���� x > y ? y : x�� �����Ų�� ����� return�Ѵ� 
                                    // �� �Լ��� ������ ȣ���ϸ� ������ �ݺ��ǹǷ� ���α׷��� ��������        
                                     
    cout << (5 > 6 ? 6 : 5) << endl;    // inline�� ���̸� min(5,6)�� �̷��� �۵��Ѵ�
    cout << (3 > 2 ? 2 : 3) << endl;






    return 0;
}
