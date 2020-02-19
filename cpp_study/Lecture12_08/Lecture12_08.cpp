//Virtual base classes & the diamond problem

#include <iostream>

using namespace std;

class PowerDevice
{
public:
    int m_i;

    PowerDevice(int power)
    {
        cout << "PowerDevice: " << power << '\n';
    }
};

//class Scanner : public PowerDevice
class Scanner : virtual public PowerDevice  //public�տ� virtual ����
{
public:
    Scanner(int scanner, int power)
        : PowerDevice(power)
    {
        cout << "Scanner: " << scanner << '\n';
    }
};

//class Printer : public PowerDevice
class Printer : virtual public PowerDevice  //public�տ� virtual ����
{
public:
    Printer(int printer, int power)
        : PowerDevice(power)
    {
        cout << "Scanner: " << printer << '\n';
    }
};

class Copier : public Scanner, public Printer   //���̾Ƹ�� ��� ����
{
public:
    Copier(int scanner, int printer, int power)
        //: Scanner(scanner, power), Printer(printer, power)
        : Scanner(scanner, power), Printer(printer, power), PowerDevice(power)  
    {   //virtual base class�� ����� �� PowerDevice ������ ������ �ѹ��� �ؾ��Ѵ�
    }   //�� ������ ���̾Ƹ�� ��� ���� ���� �Ʒ��� �ִ� Copier�� ����ϹǷ� Copier �����ڿ��� PowerDevice�� �θ��� 
};      //non-immediate-parent constructor(�ٷ� �� ����ڰ� �ƴ� �����)�� �θ��� ������ case�̴�

int main()
{
    //diamond ������ �����ϰ� A�� ��ӹ޴� B1,B2�� B1,B2�� ��ӹ޴� C�� ��������
    //�����δ� B1, B2�� ���� A�� ����ϴ� ������ ���������
    //A�� �ϳ��� �ִ� ������ ����� ���� virtual public A�� ����Ѵ�!

    Copier cop(1, 2, 3);

    cout << &cop.Scanner::PowerDevice::m_i << endl;     //scanner�� printer �ȿ� �ִ� m_i�� �ּҰ� �ٸ��� ���´�
    cout << &cop.Printer::PowerDevice::m_i << endl;


    return 0;
}
