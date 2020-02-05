#include <iostream>

using namespace std;

class B
{
private:
    int _b;

public:
    B(const int &_b_in)
        :_b{ _b_in }
    {}
};

class Something
{
private:
    int     _i=100;
    double  _d=100.0;
    char    _c='F';
    int     _arr[5] = { 100, 200, 300, 400, 500 }; //c++ 11���� array�� �ʱ�ȭ ����
    B       _b{ 1024 };
    //non static member���� private���� �ʱ�ȭ �� �� �ִ�
public:
    Something()
        //: _i(1), _d(3.14), _c('a') // member initializer list
        : _i{ 1 }
        , _d{ 3.14 }
        , _c{ 'a' }
        , _arr{ 1,2,3,4,5 }
        , _b{ _i-1 }        //comma�� ������ �ڵ���Ÿ��(����� �߰��� �ƴ� �������� �� ��ġ�� ���ϴ�)
        //{}�� ����ȯ�� �ȵ�, �� �� �����ϴ�
    {
        _i *= 3;
        _d *= 3.0;
        _c += 3;
    }

    void print()
    {
        cout << _i << " " << _d << " " << _c << endl;
        for (auto &ele : _arr)
            cout << ele << " ";
        cout << endl;
    }
};

int main()
{
    Something some; //private�� public constructor���� initialization�� �� �� �� �� �ִ�
                    //constructor initialization�� �켱������

                    //constructor initializer list���� �ʱ�ȭ�� �� �� �ٽ� ������ ���� ���´�
                    //�� ó���� initializer list ���� ���� �ٸ� ���� �ٽ� ���°�
    some.print();





    return 0;
}
