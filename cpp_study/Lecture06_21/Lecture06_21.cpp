#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{
    ////array<int, 5> array;  //std::array
    //vector<int> array;      //std::veoctor    //array는 크기를 반드시 넣어줘야하지만 vector는 넣을 필요 없다

    //vector<int> array2 = { 1,2,3,4,5 };

    //cout << array2.size() << endl;

    //vector<int> array3 = { 1,2,3};

    //cout << array3.size() << endl;

    //vector<int> array4 { 1,2,3 };       //uniform initialization 가능

    //cout << array4.size() << endl;





    //vector <int> arr = { 1,2,3,4,5 };   
    //                                    
    //for (auto &itr : arr)
    //    cout << itr << " ";
    //cout << endl;

    //cout << arr[1] << endl;
    //cout << arr.at(1) << endl;      //at()안의 parameter가 array를 초과하는지 확인해줌






    //int *my_arr = new int[5];
    //
    //delete[] my_arr;                //new를 사용하면 delete해서 메모리를 지워줘야함
    //                                //vector를 사용하면 메모리를 자동으로 지워줌




    //cout << arr.size() << endl;     //new를 사용할 때와 다르게 size를 알 수 있다
    //
    //arr.resize(10);                 //vector를 사용하면 array의 사이즈를 마음대로 바꿀 수 있다
    //                                //new로 동적할당을 하면 사이즈 바꾸기 힘들다
    //for (auto &itr : arr)
    //    cout << itr << " ";
    //cout << endl;

    //cout << arr[1] << endl;
    //cout << arr.at(1) << endl;

    //arr.resize(2);                  //뒤에 있던것들을 날려버림




    return 0;
}
