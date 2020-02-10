//std::initializer_list

#include <iostream>
#include <cassert>
#include <initializer_list>

using namespace std;

class IntArray
{
private:
    unsigned m_length = 0;
    int* m_data = nullptr;

public:
    IntArray(unsigned length)
        :m_length(length)
    {
        m_data = new int[length];
    }

    IntArray(const std::initializer_list<int>& list)
        :IntArray(list.size())      //다른 생성자를 불러 object생성함(중복되는 기능은 가급적 쪼개서 한군데에서만 구현이 되도록 하기!
    {                               //다른 곳에서는 불러와서 사용하는 것!
        
        int count = 0;              //번거롭더라도 따로 count를 만들어 쓰는게 좋다
        for (auto& element : list)  //initializer_list는 []를 쓸 수 없으므로 조금 번거롭다
        {
            m_data[count] = element;
            ++count;
        }
        //for (unsigned count = 0; count < list.size(); ++count)
        //    m_data[count] = list[count]; //error  //initializer_list는 []를 쓸 수 없다
    }
    ~IntArray()
    {
        delete[] this->m_data;
    }

    //TODO: overload operator =

    friend ostream& operator << (ostream& out, IntArray& arr)
    {
        for (unsigned i = 0; i < arr.m_length; ++i)
            out << arr.m_data[i] << " ";
        out << endl;

        return out;
    }

};

int main()
{
    int my_arr1[5] = { 1, 2, 3, 4, 5 };         //정적 배열
    int* my_arr2 = new int[5]{ 1, 2, 3, 4, 5 }; //동적 배열

    auto il = { 10, 20, 30 };   //std::initializer_list가 자동으로 type을 잡아준다

    
    
    
    //IntArray int_array { 1, 2, 3, 4, 5 }; //uniform initialization  //class에도 initializer_list 사용
    IntArray int_array = { 1, 2, 3, 4, 5 };
    cout << int_array << endl;








    return 0;
}
