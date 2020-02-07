//Overloading the comparison operators

#include <iostream>
#include <vector>
#include <random>

using namespace std;

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int& getCents() { return m_cents; }

    friend std::ostream& operator << (std::ostream& out, const Cents& cents)    //output operator
    {
        out << cents.m_cents;

        return out;
    }

    friend bool operator == (const Cents&c1, const Cents&c2)
    {
        return c1.m_cents == c2.m_cents;
    }

    friend bool operator != (const Cents& c1, const Cents& c2)
    {
        return c1.m_cents != c2.m_cents;
    }



    friend bool operator < (const Cents& c1, const Cents& c2)   //크기 비교해주는 operator
    {                                                           //sort는 왼쪽이 더 작냐를 묻는 연산자를 사용하므로 operator <을 써야함
                                                                //operator >을 하면 error남
        return c1.m_cents < c2.m_cents;                         
    }
};

int main()
{
    //int a = 3, b = 3;
    //if (a == b)
    //    cout << "Equal" << endl;


    //Cents cents1(6);
    //Cents cents2(6);

    //if (cents1 == cents2)
    //    cout << "Equal" << endl;

    //cout << std::boolalpha; //bool을 출력할 때 true, false로 나오게 하는 것




    vector<Cents> arr(20);

    for (unsigned i = 0; i < arr.size(); ++i)
        arr[i].getCents() = i;  //getCents()의 return type이 int&이므로 lvalue다

    std::random_shuffle(begin(arr), end(arr));

    for (auto& e : arr)
        cout << e << " ";
    cout << endl;

    std::sort(begin(arr), end(arr));    //Cents끼리 크기 비교를 못해서 sort를 그냥 사용할 수 없다
                                        //크기 비교하는 operator를 overloading 해줘야 한다
    for (auto& e : arr)
        cout << e << " ";
    cout << endl;                       //sort를 쓰려면 user defined type 안에서 비교 연산자이 구현되야한다


    return 0;
}
