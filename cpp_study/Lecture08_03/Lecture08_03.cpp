#include <iostream>

using namespace std;

//class Fraction    //line 135~ 138
//{
//private:    //member variable은 encapsulation 해두기!
//    int _numerator;
//    int _denominator;
//
//public:
//    Fraction()    //constructor: return data type이 없다
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



//class Fraction    //line: 143 ~ 159
//{
//private:    //member variable은 encapsulation 해두기!
//    int _numerator;
//    int _denominator;
//
//public:
//    Fraction(const int &num_in =1, const int &den_in =1) //default value도 사용 가능!
//    {                                               
//        _numerator = num_in;
//        _denominator =den_in;
//
//        cout << "Fraction() constructor" << endl;
//    }
//
//    //Fraction(){} //parameter가 있는 constructor가 있으면 class가 자동으로 기본 생성자를 생성하지 않는다
//
//    //Fraction()
//    //{
//    //    _numerator = 2; //initialization 가능하다
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

class First     //First class의 멤버로 Second가 들어가있는 경우
{
    Second sec; 

public:
    First()
    {
        cout << "class First constructor()" << endl;
    }
};

//constructor를 private으로 두는 경우도 있다(나중에 배울 것)

int main()
{
    //Fraction frac;  // 원래라면 Fraction()을 실행시키므로 frac()으로 해야하지만
    //             // access function과 헷갈릴 수 있으므로 constructor의 parameter가 없는 경우에만 ()을 뺀다
    //          //constructor에 parameter가 없으면 ()를 빼야 작동한다!
    //frac.print();




    //Fraction frac(1, 3);    //constructor에 parameter가 있는 경우에는 frac()으로 해야한다!
    //Fraction one_thirds(1);   //denominator는 1로 default value를 가지고 있기때문에 안넣어줘도 됨




    //Fraction one_thirds;    //Fraction(const int &num_in, const int &den_in =1)이 아닌
    //                      //Fraction()을 따로 정의해줬기 때문에 one_thirds로 instance 생성가능
    //one_thirds.print();




    //Fraction one_thirds;    //Fraction(const int &num_in =1, const int &den_in =1)인
    //                        //경우에는 parameter 둘 다 parameter value를 가지고 있기때문에
    //                        //값을 넣지않고 parameter value를 쓰고 싶으면 ()를 빼야한다!(주의!)
    //one_thirds.print();



    //Fraction one_thirds;    //constructor 2개가 default value를 가지고 있어 ambiguity 발생
    //                        //default constructor를 없애거나 parameter constructor를 없애거나 해야한다
    
    
    
    ////Fraction one_thirds = Fraction{ 1,3 };  //복사해서 사용하는 것도 가능하지만 권장x
    ////Fraction one_thirds{ 1,3 }; //훨씬 간단하게 표현할 수 있다
    //Fraction one_thirds(1, 3);  // {1,3}과 (1,3)의 차이:
    //                            //member 변수가 public일 때는 constructor 없이 uniform initialization 가능
    //                            //member 변수가 private이더라도  constructor가 있으면 uniform initialization 가능
    //                            //대신 parameter가 int일 때 {1.0,3}처럼 double을 넣으면 값변환을 안해준다!
    //                            //(1.0,3)일 경우에는 warning이 뜨지만 되긴 된다
    //                            //최근에는 좀 더 엄격한 uniform initialization을 쓴다
    


    First fir;  //First의 멤버인 Second의 constructor가 먼저 호출되고 First의 constructor가 호출된다

    
    return 0;                   
}
