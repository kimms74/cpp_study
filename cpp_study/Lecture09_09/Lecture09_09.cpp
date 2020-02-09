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
//        assert(den != 0);   //den이 0이면 안된다는 조건 붙임
//    }
//
//    Fraction(const Fraction& fraction)      //copy constructor(class를 생성하면 내부적으로 자동으로 만든다)
//                                            //함수의 parameter로 class가 들어갈 때 복사된다면 copy constructor가 작동함
//                                            //reference로 parameter에 들어가면 copy constructor 작동안함
//        :m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
//    {
//        cout << "Copy constructor called" << endl;
//    }
//
//    friend std::ostream& operator << (std::ostream& out, const Fraction& f) //return by reference 하냐 먀냐는 return하는 것이 local variable이 아니냐에 따라 결정됨
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
//    Fraction(const Fraction& fraction)    //copy constructor를 private에 넣으면 복사를 못함
//        :m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
//    {
//        cout << "Copy constructor called" << endl;
//    }
//
//public:
//    Fraction(int num = 0, int den = 1)
//        :m_numerator(num), m_denominator(den)
//    {
//        assert(den != 0);   //den이 0이면 안된다는 조건 붙임
//    }
//
//    friend std::ostream& operator << (std::ostream& out, const Fraction& f) //return by reference 하냐 먀냐는 return하는 것이 local variable이 아니냐에 따라 결정됨
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
    //Fraction fr_copy = frac;                //copy initialization(이 경우에도 copy constructor가 호출됨)
    //                                        //모든 initialization은 사실 copy다(등호 오른쪽이 등호 왼쪽으로 복사돼서 들어가므로)
    //cout << frac << " " << fr_copy << endl;



    //Fraction frac(4, 6);
    //Fraction fr_copy = frac;    //copy constructor가 private에 작성돼 있으면 copy불가능함
    //Fraction fr_copy(frac);     //마찬가지, 객체지향에서 보안성을 중요시 하는 경우에 가끔 사용한다




    //Fraction frac(3, 8);

    //Fraction fr_copy(Fraction(2, 10));  //이 경우에는 copy constructor를 안 거친다
    ////Fraction fr_copy(2,10);           //내부적으로 Fraction fr_copy(2,10)으로 작동하기 때문에
    //                                    //그냥 Constructor를 사용하는 것이다
    //cout << frac << " " << fr_copy << endl;




    Fraction result = doSomething();    //debug 모드에서는 함수 내부에서 object 생성돼고 result에 copy initialization할 때
                                        //copy constructor가 호출이 됨
    cout << &result << " " << result << endl;             
                                        //하지만 release 모드에서는 copy constructor가 호출 안됨
                                        //doSomething() 내부의 temp는 함수를 빠져나오면 사라지므로
                                        //temp를 result로 그냥 옮겨준다(return by reference처럼)
                                        //return value optimization(반환값 최적화)
                                        //debug모드에서는 주소가 다르지만, release 모드에서는 주소가 같다
    return 0;
}
