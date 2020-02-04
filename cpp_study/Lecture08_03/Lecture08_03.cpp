#include <iostream>

using namespace std;

//class Fraction
//{
//private:    //member variable�� encapsulation �صα�!
//    int _numerator;
//    int _denominator;
//
//public:
//    Fraction()    //constructor: type�� ����
//    {           //�ܺο��� ȣ���ϱ� ���� ���� ���� �ƴ� instance�� ������ �� ������ �Ǵ� �Լ��̴�
//              //instant�� construct�� �� ����Ǵ� �Լ���� �����ϸ� ��
//        _numerator = 1;
//        _denominator = 1;
//
//        cout << "Fraction() constructor" << endl;
//    }
//
//    void print()
//    {
//        cout << _numerator << " / " << _denominator << endl;
//    }
//};



class Fraction
{
private:    //member variable�� encapsulation �صα�!
    int _numerator;
    int _denominator;

public:
    Fraction()
    {
        _numerator = 2;
        _denominator = 2;
    }

    Fraction(const int &num_in, const int &den_in =1) //default parameter�� ��� ����!
    { 
        _numerator = 1;
        _denominator = 1;

        cout << "Fraction() constructor" << endl;
    }

    //Fraction(){} //constructor�� ������ class�� �ڵ����� �⺻ �����ڸ� ������Ų��

    void print()
    {
        cout << _numerator << " / " << _denominator << endl;
    }
};

int main()
{
    //Fraction frac;  // ������� Fraction()�� �����Ű�Ƿ� frac()���� �ؾ�������
    //             // access function�� �򰥸� �� �����Ƿ� constructor�� parameter�� ���� ��쿡�� ()�� ����
    //          //constructor�� parameter�� ������ ()�� ���� �۵��Ѵ�!
    //frac.print();



    //Fraction frac(1, 3);    //constructor�� parameter�� �ִ� ��쿡�� frac()���� �ؾ��Ѵ�!



    Fraction one_thirds;
    one_thirds.print();

    return 0;
}
