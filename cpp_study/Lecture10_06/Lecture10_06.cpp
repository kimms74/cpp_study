// Container classes

#include <iostream>
#include <vector>
#include <array>

using namespace std;

class IntArray      //���� ��� �����غ���
{
private:
    int m_length = 0;
    int* m_data = nullptr;

public:
    //Constructors
    //Destructors
    //initialze()
    //reset()
    //resize() parameter �����Ѵ�
    //insertBefor(const int& value, const int& ix)
    //remove(const int& ix)
    //push_back(const int& value)
    //output operator <<
};

int main()
{
    //IntArray my_arr{ 1, 3, 5, 7, 9 };
    //my_arr.insertBefore(10, 1);           // 1, 10, 3, 5, 7, 9
    //my_arr.remove(3);                     // 1, 10, 3, 7, 9   //1,10,3�� �״�� �ΰ� 5�ڸ��� 7,9�� ������� ��, �޸𸮰� �ϳ� �����Ƿ� �޸𸮸� ���� �Ҵ�޾Ƽ� �� �������ָ� ��
    //my_arr.push_back(13);                 // 1, 10, 3, 7, 9, 13


    std::vector<int> int_vec;
    std::array<int, 10> int_arr;


    return 0;
}
