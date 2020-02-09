//The copy constructor, Copy initialization, Return value optimization

#include <iostream>
#include <cassert>

using namespace std;

//class Fraction
//{
//private:
//    int m_numerator;
//    int m_denominator;
//
//public:
//    Fraction(int num = 0, int den = 1)
//        :m_numerator(num), m_denominator(den)
//    {
//        assert(den != 0);   //den�� 0�̸� �ȵȴٴ� ���� ����
//    }
//
//    Fraction(const Fraction& fraction)      //copy constructor(class�� �����ϸ� ���������� �ڵ����� �����)
//                                            //�Լ��� parameter�� class�� �� �� ����ȴٸ� copy constructor�� �۵���
//                                            //reference�� parameter�� ���� copy constructor �۵�����
//        :m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
//    {
//        cout << "Copy constructor called" << endl;
//    }
//
//    friend std::ostream& operator << (std::ostream& out, const Fraction& f) //return by reference �ϳ� �ϳĴ� return�ϴ� ���� local variable�� �ƴϳĿ� ���� ������
//    {
//        out << f.m_numerator << " / " << f.m_denominator;
//
//        return out;
//    }
//};



//class Fraction
//{
//private:
//    int m_numerator;
//    int m_denominator;
//
//    Fraction(const Fraction& fraction)    //copy constructor�� private�� ������ ���縦 ����
//        :m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
//    {
//        cout << "Copy constructor called" << endl;
//    }
//
//public:
//    Fraction(int num = 0, int den = 1)
//        :m_numerator(num), m_denominator(den)
//    {
//        assert(den != 0);   //den�� 0�̸� �ȵȴٴ� ���� ����
//    }
//
//    friend std::ostream& operator << (std::ostream& out, const Fraction& f) //return by reference �ϳ� �ϳĴ� return�ϴ� ���� local variable�� �ƴϳĿ� ���� ������
//    {
//        out << f.m_numerator << " / " << f.m_denominator;
//
//        return out;
//    }
//};


class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction(int num = 0, int den = 1)
        :m_numerator(num), m_denominator(den)
    {
        assert(den != 0);   
    }

    Fraction(const Fraction& fraction)      
        :m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
    {
        cout << "Copy constructor called" << endl;
    }

    friend std::ostream& operator << (std::ostream& out, const Fraction& f) 
    {
        out << f.m_numerator << " / " << f.m_denominator << endl;

        return out;
    }
};

Fraction doSomething()
{
    Fraction temp(1, 2);

    cout << &temp << endl;
    return temp;
}

int main()
{
    //Fraction frac(3, 5);

    ////Fraction fr_copy(frac);               //copy constructor
    //Fraction fr_copy = frac;                //copy initialization(�� ��쿡�� copy constructor�� ȣ���)
    //                                        //��� initialization�� ��� copy��(��ȣ �������� ��ȣ �������� ����ż� ���Ƿ�)
    //cout << frac << " " << fr_copy << endl;



    //Fraction frac(4, 6);
    //Fraction fr_copy = frac;    //copy constructor�� private�� �ۼ��� ������ copy�Ұ�����
    //Fraction fr_copy(frac);     //��������, ��ü���⿡�� ���ȼ��� �߿�� �ϴ� ��쿡 ���� ����Ѵ�




    //Fraction frac(3, 8);

    //Fraction fr_copy(Fraction(2, 10));  //�� ��쿡�� copy constructor�� �� ��ģ��
    ////Fraction fr_copy(2,10);           //���������� Fraction fr_copy(2,10)���� �۵��ϱ� ������
    //                                    //�׳� Constructor�� ����ϴ� ���̴�
    //cout << frac << " " << fr_copy << endl;




    Fraction result = doSomething();    //debug ��忡���� �Լ� ���ο��� object �����Ű� result�� copy initialization�� ��
                                        //copy constructor�� ȣ���� ��
    cout << &result << " " << result << endl;             
                                        //������ release ��忡���� copy constructor�� ȣ�� �ȵ�
                                        //doSomething() ������ temp�� �Լ��� ���������� ������Ƿ�
                                        //temp�� result�� �׳� �Ű��ش�(return by referenceó��)
                                        //return value optimization(��ȯ�� ����ȭ)
                                        //debug��忡���� �ּҰ� �ٸ�����, release ��忡���� �ּҰ� ����
    return 0;
}
