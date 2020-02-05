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
    int     _arr[5] = { 100, 200, 300, 400, 500 }; //c++ 11부터 array도 초기화 가능
    B       _b{ 1024 };
    //non static member들은 private에서 초기화 할 수 있다
public:
    Something()
        //: _i(1), _d(3.14), _c('a') // member initializer list
        : _i{ 1 }
        , _d{ 3.14 }
        , _c{ 'a' }
        , _arr{ 1,2,3,4,5 }
        , _b{ _i-1 }        //comma를 내리는 코딩스타일(멤버가 추가가 됐다 빠졌다할 때 고치기 편하다)
        //{}은 형변환이 안됨, 좀 더 엄격하다
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
    Something some; //private과 public constructor에서 initialization을 둘 다 할 수 있다
                    //constructor initialization이 우선순위다

                    //constructor initializer list에서 초기화를 한 뒤 다시 대입한 값이 나온다
                    //즉 처음엔 initializer list 값이 들어가고 다른 값이 다시 들어가는것
    some.print();





    return 0;
}
