// Container classes

#include <iostream>
#include <vector>
#include <array>

using namespace std;

class IntArray      //직접 기능 구현해보기
{
private:
    int m_length = 0;
    int* m_data = nullptr;

public:
    //Constructors
    //Destructors
    //initialze()
    //reset()
    //resize() parameter 존재한다
    //insertBefor(const int& value, const int& ix)
    //remove(const int& ix)
    //push_back(const int& value)
    //output operator <<
};

int main()
{
    //IntArray my_arr{ 1, 3, 5, 7, 9 };
    //my_arr.insertBefore(10, 1);           // 1, 10, 3, 5, 7, 9
    //my_arr.remove(3);                     // 1, 10, 3, 7, 9   //1,10,3은 그대로 두고 5자리에 7,9를 끌어오면 됨, 메모리가 하나 남으므로 메모리를 새로 할당받아서 쫙 복사해주면 됨
    //my_arr.push_back(13);                 // 1, 10, 3, 7, 9, 13


    std::vector<int> int_vec;
    std::array<int, 10> int_arr;


    return 0;
}
