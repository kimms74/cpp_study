#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
    using namespace std;

    typedef double distance_t;

    std::int8_t i(97); // int8_t�� typedef�� �����  //_t: primitive system data type���� ũ�⸦ �������� ǥ���Ϸ��� ��

    double     my_distance;
    distance_t home2work;
    distance_t home2school;
    //����: distance_t�� �ڷ����� �ٲٰ� ���� ���� �׳� distnace_t ���ǿ��� �ٲ��ָ� ��


    vector<pair<string, int> > pairlist; //vector<pair<string,int>>�� �ϳ��� �ڷ���
    vector<pair<string, int> > pairlist1;

    typedef vector<pair<string, int> > pairlist_t; //��� �ľ��ϴ� ���� ������ ����

    pairlist_t pairlist2;
    pairlist_t pairlist3;


    using pairlist_t = vector<pair<string, int> >; // typedef�� �����

    return 0;
}
