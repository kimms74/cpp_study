//Operator precedence and associativity(�켱������ ���չ�Ģ)

#include <iostream>

using namespace std;

int main()
{
    int x = 3 * 4 / 2; //���� �켱���� �϶��� left-to-right ������ ��, operators in c++ �˻��غ���
                        //https://www.learncpp.com/cpp-tutorial/operator-precedence-and-associativity/
                        //associativity 1.L->R 2.R->L : �켱������ ���� �ͳ��� ������ �� ������ ���� ����Ұų�(ex) 4*3/2,i++), 
                        //�������� ���� ����Ұųĸ� ��Ÿ��(ex) +3(>0),-3(<0),++i,?:(�񱳿�����),=(assignment operator))
                        //i++�� i�� ����ϰ� +1 ,++i�� +1�ϰ� i�� ����� ��Ÿ��
                        //�ڵ��Ҷ� �켱������ �򰥸� ��� ��ȣ�� �̿��� ��Ȯ�ϰ� ǥ�����ִ°� ����
    return 0;
}
