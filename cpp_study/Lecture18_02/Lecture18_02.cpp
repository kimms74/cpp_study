//Output with ostream and ios

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //cout.setf(std::ios::showpos);    //set flag //+��ȣ ǥ��
    //cout << 108 << endl;

    //cout.unsetf(std::ios::showpos);    //+��ȣ ����
    //cout << 109 << endl;


    ////cout.unsetf(std::ios::dec);    //10���� ��� ����
    ////cout.setf(std::ios::hex);    //16���� ��� �ѱ�(10���� �� ���� 16������ �� ��Ÿ����)
    ////cout.setf(std::ios::hex, std::ios::basefield);    //basefield�� hex�� set�ϴ� �� //���ٷ� ���� �� �ִ�
    //cout << std::hex;   //setf�� �Ⱦ��� �����ϰ� ǥ���� ���� �ִ�
    //cout << 109 << endl;//6d
    //cout << 108 << endl;//6c

    //cout << std::dec;
    //cout << 110 << endl;


    ////cout.setf(std::ios::uppercase); //16�������� ���ĺ��� �빮�ڷ� ǥ������
    ////cout << std::hex;   
    //cout << std::hex << std::uppercase; //uppercase�� setf �� �ᵵ ��
    //cout << 109 << endl;//6D


    //cout << std::boolalpha;
    //cout << true << " " << false << endl;   //boolalpha�� ������ 1 0���� ��µ�


    ////cout << std::defaultfloat;    //�⺻ ����
    //cout << std::setprecision(3) << 123.456 << endl;    //���ڸ�ŭ �ڸ��� ǥ��
    //cout << std::setprecision(4) << 123.456 << endl;
    //cout << std::setprecision(5) << 123.456 << endl;
    //cout << std::setprecision(6) << 123.456 << endl;
    //cout << std::setprecision(7) << 123.456 << endl;


    //cout << std::fixed;
    //cout << std::setprecision(3) << 123.456 << endl;    //std::fixed�� ������ ���ڸ�ŭ �Ҽ��� �Ʒ� �ڸ��� ǥ�� 
    //cout << std::setprecision(4) << 123.456 << endl;
    //cout << std::setprecision(5) << 123.456 << endl;
    //cout << std::setprecision(6) << 123.456 << endl;
    //cout << std::setprecision(7) << 123.456 << endl;


    //cout << std::scientific <<std::uppercase;           //x.xxxxe+0x�� ǥ���ȴ�  //uppercase ���̸� e�� E�� ǥ���ȴ�
    //cout << std::setprecision(3) << 123.456 << endl;    //std::scientific�� ������ ���ڸ�ŭ �Ҽ��� �Ʒ� �ڸ��� ǥ�� 
    //cout << std::setprecision(4) << 123.456 << endl;
    //cout << std::setprecision(5) << 123.456 << endl;
    //cout << std::setprecision(6) << 123.456 << endl;
    //cout << std::setprecision(7) << 123.456 << endl;


    //cout << std::showpoint;
    //cout << std::setprecision(3) << 123.456 << endl;    //std::showpoint�� �ϸ� �Ҽ���.�� ���δ� 
    //cout << std::setprecision(4) << 123.456 << endl;
    //cout << std::setprecision(5) << 123.456 << endl;
    //cout << std::setprecision(6) << 123.456 << endl;
    //cout << std::setprecision(7) << 123.456 << endl;


    cout << -12345 << endl;
    cout.fill('*');                                             //��ĭ�� *�� ä����
    cout << std::setw(10) << -12345 << endl;                    //setw(10): 10ĭ�� ä��� ��
    cout << std::setw(10) << std::left << -12345 << endl;       //�������� ����
    cout << std::setw(10) << std::right << -12345 << endl;      //���������� ����
    cout << std::setw(10) << std::internal << -12345 << endl;   //��ȣ�� ���� ���ڴ� ���������� ����

    return 0;
}
