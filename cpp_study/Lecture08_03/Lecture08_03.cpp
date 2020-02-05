#include <iostream>

using namespace std;

//class Fraction    //line 135~ 138
//{
//private:    //member variable�� encapsulation �صα�!
//    int _numerator;
//    int _denominator;
//
//public:
//    Fraction()    //constructor: return data type�� ����
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



//class Fraction    //line: 143 ~ 159
//{
//private:    //member variable�� encapsulation �صα�!
//    int _numerator;
//    int _denominator;
//
//public:
//    Fraction(const int &num_in =1, const int &den_in =1) //default value�� ��� ����!
//    {                                               
//        _numerator = num_in;
//        _denominator =den_in;
//
//        cout << "Fraction() constructor" << endl;
//    }
//
//    //Fraction(){} //parameter�� �ִ� constructor�� ������ class�� �ڵ����� �⺻ �����ڸ� �������� �ʴ´�
//
//    //Fraction()
//    //{
//    //    _numerator = 2; //initialization �����ϴ�
//    //    _denominator = 2;
//
//    //}
//
//    void print()
//    {
//        cout << _numerator << " / " << _denominator << endl;
//    }
//};



//class Fraction      //line: 163 ~ 164
//{
//private:
//    int _numerator;
//    int _denominator;
//    
//public:
//    Fraction()
//    {
//        _numerator = 2;
//        _denominator = 2;
//    }
//    
//    Fraction(const int &num_in =1, const int &den_in =1)
//    {                                               
//    _numerator = num_in;
//    _denominator =den_in;
//
//    cout << "Fraction() constructor" << endl;
//    }
//
//    void print()
//    {
//    cout << _numerator << " / " << _denominator << endl;
//    }
//};



class Fraction      //line: 168 ~ 175
{
private:
    int _numerator;
    int _denominator;

public:
    Fraction(const int &num_in = 1, const int &den_in = 1)
    {
        _numerator = num_in;
        _denominator = den_in;

        cout << "Fraction() constructor" << endl;
    }

    void print()
    {
        cout << _numerator << " / " << _denominator << endl;
    }
};



class Second
{
public:
    Second()
    {
        cout << "class Second constructor()" << endl;
    }
};

class First     //First class�� ����� Second�� ���ִ� ���
{
    Second sec; 

public:
    First()
    {
        cout << "class First constructor()" << endl;
    }
};

//constructor�� private���� �δ� ��쵵 �ִ�(���߿� ��� ��)

int main()
{
    //Fraction frac;  // ������� Fraction()�� �����Ű�Ƿ� frac()���� �ؾ�������
    //             // access function�� �򰥸� �� �����Ƿ� constructor�� parameter�� ���� ��쿡�� ()�� ����
    //          //constructor�� parameter�� ������ ()�� ���� �۵��Ѵ�!
    //frac.print();




    //Fraction frac(1, 3);    //constructor�� parameter�� �ִ� ��쿡�� frac()���� �ؾ��Ѵ�!
    //Fraction one_thirds(1);   //denominator�� 1�� default value�� ������ �ֱ⶧���� �ȳ־��൵ ��




    //Fraction one_thirds;    //Fraction(const int &num_in, const int &den_in =1)�� �ƴ�
    //                      //Fraction()�� ���� ��������� ������ one_thirds�� instance ��������
    //one_thirds.print();




    //Fraction one_thirds;    //Fraction(const int &num_in =1, const int &den_in =1)��
    //                        //��쿡�� parameter �� �� parameter value�� ������ �ֱ⶧����
    //                        //���� �����ʰ� parameter value�� ���� ������ ()�� �����Ѵ�!(����!)
    //one_thirds.print();



    //Fraction one_thirds;    //constructor 2���� default value�� ������ �־� ambiguity �߻�
    //                        //default constructor�� ���ְų� parameter constructor�� ���ְų� �ؾ��Ѵ�
    
    
    
    ////Fraction one_thirds = Fraction{ 1,3 };  //�����ؼ� ����ϴ� �͵� ���������� ����x
    ////Fraction one_thirds{ 1,3 }; //�ξ� �����ϰ� ǥ���� �� �ִ�
    //Fraction one_thirds(1, 3);  // {1,3}�� (1,3)�� ����:
    //                            //member ������ public�� ���� constructor ���� uniform initialization ����
    //                            //member ������ private�̴���  constructor�� ������ uniform initialization ����
    //                            //��� parameter�� int�� �� {1.0,3}ó�� double�� ������ ����ȯ�� �����ش�!
    //                            //(1.0,3)�� ��쿡�� warning�� ������ �Ǳ� �ȴ�
    //                            //�ֱٿ��� �� �� ������ uniform initialization�� ����
    


    First fir;  //First�� ����� Second�� constructor�� ���� ȣ��ǰ� First�� constructor�� ȣ��ȴ�

    
    return 0;                   
}
