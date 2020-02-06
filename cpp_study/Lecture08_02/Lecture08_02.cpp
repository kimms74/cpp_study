#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
//public:         //access specifier
//private:        //private으로 하면 외부에서 불러쓸 수 없다
                //public:, private: 안적혀 있으면 default로 private:이다
    int _month;
    int _day;
    int _year;
public:     //Encapsulation: 같은 class 안의 public에 있는 것은 private에 접근 할 수 있다
    void setDate(const int &month_input, const int &day_input, const int &year_input)   //access function
    {    //setters
        _month = month_input;
        _day = day_input;
        _year = year_input;
    }

    const int &getDay() //getDay()가 값을 변경 못하게 const int &를 쓴다
    {   //getters
        return _day;
    }

    void copyFrom(const Date &original)
    {
        _month = original._month;
        _day = original._day;
        _year = original._year;
    }
    //public에 변수를 안두고 private에 둔 다음 getters, setters를 이용해 접근하는 이유:
    //복잡한 프로그램을 짜다보면 class가 수백개 생기는데 class 변수를 access function 없이
    //일일이 초기화 코드를 쓰게 되면 나중에 이름을 바꿀때 매우 번거로워진다
    //access function을 쓴다면 class 안에서만 이름바꾸면 되므로 편해진다!(Encapsulation 해야하는 이유!)
};

int main()
{
    Date today;

    //today._month = 8;     //private: 안에 있는 것은 부를 수 없다
    //today._day = 4;
    //today._year = 2025;
    
    today.setDate(8, 4, 2025);  //public:에 함수를 만들어 쓰면 private 값을 변경할 수 있다



    Date copy;
    copy.copyFrom(today);   //함수를 보면 다른 instance의 private안의 변수에 접근한다
                            //같은 class라면 instance가 달라도 private에 접근 가능하다

    return 0;
}
