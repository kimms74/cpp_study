#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
//public:         //access specifier
//private:        //private���� �ϸ� �ܺο��� �ҷ��� �� ����
                //public:, private: ������ ������ default�� private:�̴�
    int _month;
    int _day;
    int _year;
public:     //Encapsulation: ���� class ���� public�� �ִ� ���� private�� ���� �� �� �ִ�
    void setDate(const int &month_input, const int &day_input, const int &year_input)   //access function
    {    //setters
        _month = month_input;
        _day = day_input;
        _year = year_input;
    }

    const int &getDay() //getDay()�� ���� ���� ���ϰ� const int &�� ����
    {   //getters
        return _day;
    }

    void copyFrom(const Date &original)
    {
        _month = original._month;
        _day = original._day;
        _year = original._year;
    }
    //public�� ������ �ȵΰ� private�� �� ���� getters, setters�� �̿��� �����ϴ� ����:
    //������ ���α׷��� ¥�ٺ��� class�� ���鰳 ����µ� class ������ access function ����
    //������ �ʱ�ȭ �ڵ带 ���� �Ǹ� ���߿� �̸��� �ٲܶ� �ſ� ���ŷο�����
    //access function�� ���ٸ� class �ȿ����� �̸��ٲٸ� �ǹǷ� ��������!(Encapsulation �ؾ��ϴ� ����!)
};

int main()
{
    Date today;

    //today._month = 8;     //private: �ȿ� �ִ� ���� �θ� �� ����
    //today._day = 4;
    //today._year = 2025;
    
    today.setDate(8, 4, 2025);  //public:�� �Լ��� ����� ���� private ���� ������ �� �ִ�



    Date copy;
    copy.copyFrom(today);   //�Լ��� ���� �ٸ� instance�� private���� ������ �����Ѵ�
                            //���� class��� instance�� �޶� private�� ���� �����ϴ�

    return 0;
}
