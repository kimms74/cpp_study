#include <iostream>

using namespace std;

//class Fraction
//{
//private:    //member variable은 encapsulation 해두기!
//    int _numerator;
//    int _denominator;
//
//public:
//    Fraction()    //constructor: type이 없다
//    {           //외부에서 호출하기 위해 쓰는 것이 아닌 instance가 생성될 때 실행이 되는 함수이다
//              //instant가 construct될 때 실행되는 함수라고 생각하면 됨
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
private:    //member variable은 encapsulation 해두기!
    int _numerator;
    int _denominator;

public:
    Fraction()
    {
        _numerator = 2;
        _denominator = 2;
    }

    Fraction(const int &num_in, const int &den_in =1) //default parameter도 사용 가능!
    { 
        _numerator = 1;
        _denominator = 1;

        cout << "Fraction() constructor" << endl;
    }

    //Fraction(){} //constructor가 없으면 class가 자동으로 기본 생성자를 생성시킨다

    void print()
    {
        cout << _numerator << " / " << _denominator << endl;
    }
};

int main()
{
    //Fraction frac;  // 원래라면 Fraction()을 실행시키므로 frac()으로 해야하지만
    //             // access function과 헷갈릴 수 있으므로 constructor의 parameter가 없는 경우에만 ()을 뺀다
    //          //constructor에 parameter가 없으면 ()를 빼야 작동한다!
    //frac.print();



    //Fraction frac(1, 3);    //constructor에 parameter가 있는 경우에는 frac()으로 해야한다!



    Fraction one_thirds;
    one_thirds.print();

    return 0;
}
