#include <iostream>
#include <array>
//#include <algorithm>

using namespace std;

void printLength(const array<int, 5> &my_arr)  // array<>�� parameter�� ������ ����ǹǷ� &�� �ؾ� �״�� ������ �� �ִ�
{
    cout << my_arr.size() << endl;
}

int main()
{
    //int array[5] = { 1,2,3,4,5 };     //array[]�� �Լ� parameter�� �ѱ� �� �����ͷ� �νĵ� ũ�⸦ �� �� ���� ���� �ִ�

    //array<int, 5> my_arr = { 1,2,3,4,5 };   //array[]�� �ٸ��� ũ�⸦ �־������, ��� parameter�� ���� ũ�⸦ �� �� �ִ�
    //my_arr = { 0,1,2,3,4 };
    //my_arr = { 0,1,2 };     //���� ��� ��

    //cout << my_arr[0] << endl;
    //cout << my_arr.at(0) << endl;   //at(), ���� ���̴� ()�ȿ� �� ���� �Ѵ��� �� �Ѵ��� �̸� Ȯ����
    //cout << my_arr.size() << endl;   //size(), array�� ���� ���� �˷���

    //printLength(my_arr);




    array<int, 5> my_arr = { 1, 21, 3, 40, 5 };
    for (auto &element : my_arr)
        cout << element << " ";
    cout << endl;

    sort(my_arr.begin(), my_arr.end());     //sort(���ۺκ�,���κ�)
    for (auto &element : my_arr)
        cout << element << " ";
    cout << endl;
    
    sort(my_arr.rbegin(), my_arr.rend());   //���� ���ĵ� ����
    for (auto &element : my_arr)
        cout << element << " ";
    cout << endl;


    return 0;
}
