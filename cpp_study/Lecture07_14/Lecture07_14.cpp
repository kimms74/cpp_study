#include <iostream>
#include <cassert> //assert.h
#include <array>
using namespace std;

void printValue(const std::array<int, 5> &my_array, const int &ix)
{
    assert(ix >= 0);
    assert(ix <= my_array.size() - 1);  //assert �ΰ��� �ѹ��� �� ���� ������ � ���� �������� �˱� ���� ���� ���°� ����
    cout << my_array[ix] << endl;
}


int main()
{
    //assert(false);  //assert�� debug��忡���� �۵�, release ��忡���� �۵����� �ʴ´�

    


    //int number = 5;

    //// ...

    //assert(number == 5);  //number < 5�� �� ������ ��Ÿ�� �� �ְ� assert�� ����ϸ� �ȴ�
                            //assert(true)�� pass, assert(false)�� assert error �߻�





    //std::array<int, 5> my_array{ 1,2,3,4,5 };
    //
    //printValue(my_array, 100);    //assert�� �����




    const int x = 10;

    assert(x == 5);

    static_assert(x == 5, "x should be 5 (jm)");    //x�� ����� ���� ��밡��!
                                                    //compile�ϴ� ���� error�� �����
                                                    //compile���� �̹Ƿ� assert error�� �߻�����


    return 0;
}
