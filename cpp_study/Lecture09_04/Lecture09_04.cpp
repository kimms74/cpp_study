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



    friend bool operator < (const Cents& c1, const Cents& c2)   //ũ�� �����ִ� operator
    {                                                           //sort�� ������ �� �۳ĸ� ���� �����ڸ� ����ϹǷ� operator <�� �����
                                                                //operator >�� �ϸ� error��
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

    //cout << std::boolalpha; //bool�� ����� �� true, false�� ������ �ϴ� ��




    vector<Cents> arr(20);

    for (unsigned i = 0; i < arr.size(); ++i)
        arr[i].getCents() = i;  //getCents()�� return type�� int&�̹Ƿ� lvalue��

    std::random_shuffle(begin(arr), end(arr));

    for (auto& e : arr)
        cout << e << " ";
    cout << endl;

    std::sort(begin(arr), end(arr));    //Cents���� ũ�� �񱳸� ���ؼ� sort�� �׳� ����� �� ����
                                        //ũ�� ���ϴ� operator�� overloading ����� �Ѵ�
    for (auto& e : arr)
        cout << e << " ";
    cout << endl;                       //sort�� ������ user defined type �ȿ��� �� �������� �����Ǿ��Ѵ�


    return 0;
}
