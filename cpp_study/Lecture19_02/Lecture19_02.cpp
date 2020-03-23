//several returns in a function(C++17)

#include <iostream>
#include <tuple>

using namespace std;

tuple<int,int> my_func()
{
    return tuple<int, int>(123,456);
}

auto my_func1() //auto를 사용해 return type 간략히 표현
{
    return tuple(123, 456, 789);    //C++17에서부터 <int, int, ...>없어도 됨
}

auto my_func2()
{
    return tuple(123, 456, 789, 10);    
}

int main()
{
    tuple<int, int> result = my_func();

    cout << get<0>(result) << " " << get<1>(result) << endl;    //std::get  //result의 1번째 인자, 2번째 인자



    auto result1 = my_func1();

    cout << get<0>(result1) << " " << get<1>(result1) << " " << get<2>(result1) << endl;   //get<>으로 받는게 귀찮다



    auto [a, b, c, d] = my_func2();

    cout << a << " " << b << " " << c << " " << d << " " << endl;


    return 0;
}
