#pragma once	//�ߺ� ���� �����ִ� �ڵ�

#include <iostream> 
//header file������ using namespace std;������� ����!
//header ������ ������ �ҷ��� �� �ߺ����� namespace�� ����Ǹ� �����߻�

class Calc  //header ���Ͽ��� �뷫���� ��� Ȯ���ϰ�, �ڼ��� �˰���� �� cpp���� Ȯ���ϴ� ������ ����Ѵ�
{
private:
    int _value;

public:
    Calc(int init_value);    //������ ���ε� ����ϰ� cpp���Ϸ� �Ű��ִ°� ����

    Calc &add(int value_in);
    Calc &sub(int value_in);
    Calc &mult(int value_in);
    void print();

    //���ø��� ����� �� ���� function�� definition�� header�� ���� ��δ°� �����Ѵ�
    //���ø����� ������ function�� body�� cpp�� �ű� �� �ڵ��ϱ� �������� �� �ִ�
};