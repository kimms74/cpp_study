#include <iostream>
#include <array>
//#include <algorithm>

using namespace std;

void printLength(const array<int, 5> &my_arr)  // array<>를 parameter로 넣으면 복사되므로 &로 해야 그대로 가져갈 수 있다
{
    cout << my_arr.size() << endl;
}

int main()
{
    //int array[5] = { 1,2,3,4,5 };     //array[]는 함수 parameter로 넘길 때 포인터로 인식돼 크기를 알 수 없는 단점 있다

    //array<int, 5> my_arr = { 1,2,3,4,5 };   //array[]와 다르게 크기를 넣어줘야함, 대신 parameter로 들어가도 크기를 알 수 있다
    //my_arr = { 0,1,2,3,4 };
    //my_arr = { 0,1,2 };     //갯수 적어도 됨

    //cout << my_arr[0] << endl;
    //cout << my_arr.at(0) << endl;   //at(), 위와 차이는 ()안에 들어간 수가 넘는지 안 넘는지 미리 확인함
    //cout << my_arr.size() << endl;   //size(), array의 원소 개수 알려줌

    //printLength(my_arr);




    array<int, 5> my_arr = { 1, 21, 3, 40, 5 };
    for (auto &element : my_arr)
        cout << element << " ";
    cout << endl;

    sort(my_arr.begin(), my_arr.end());     //sort(시작부분,끝부분)
    for (auto &element : my_arr)
        cout << element << " ";
    cout << endl;
    
    sort(my_arr.rbegin(), my_arr.rend());   //역순 정렬도 가능
    for (auto &element : my_arr)
        cout << element << " ";
    cout << endl;


    return 0;
}
