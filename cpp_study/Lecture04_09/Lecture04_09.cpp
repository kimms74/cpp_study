#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
    using namespace std;

    typedef double distance_t;

    std::int8_t i(97); // int8_t도 typedef로 만든것  //_t: primitive system data type으로 크기를 고정시켜 표현하려는 것

    double     my_distance;
    distance_t home2work;
    distance_t home2school;
    //장점: distance_t의 자료형을 바꾸고 싶을 때는 그냥 distnace_t 정의에서 바꿔주면 됨


    vector<pair<string, int> > pairlist; //vector<pair<string,int>>은 하나의 자료형
    vector<pair<string, int> > pairlist1;

    typedef vector<pair<string, int> > pairlist_t; //길게 쳐야하는 것을 간단히 해줌

    pairlist_t pairlist2;
    pairlist_t pairlist3;


    using pairlist_t = vector<pair<string, int> >; // typedef와 비슷함

    return 0;
}
