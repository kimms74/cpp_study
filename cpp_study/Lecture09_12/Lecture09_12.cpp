//std::initializer_list: array�� ���� �Ҵ��ϰ� ���ִ� ��

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

    IntArray(const std::initializer_list<int>& list)    //<int> &list�� �ǹ�:list ������ �������ڴ�
    //IntArray(const std::initializer_list<int&> list)  //�ȵǴ� ����: list�� array�� ���� ��� �� ���Ҹ� parameter�� �ν��ع�����

        :IntArray(list.size())      //�ٸ� �����ڸ� �ҷ� object������(�ߺ��Ǵ� ����� ������ �ɰ��� �ѱ��������� ������ �ǵ��� �ϱ�!
    {                               //�ٸ� �������� �ҷ��ͼ� ����ϴ� ��!
        
        int count = 0;              //���ŷӴ��� ���� count�� ����� ���°� ����
        for (auto& element : list)  //initializer_list�� []�� �� �� �����Ƿ� ���� ���ŷӴ�
        {
            m_data[count] = element;
            ++count;
        }
        //for (unsigned count = 0; count < list.size(); ++count)
        //    m_data[count] = list[count]; //error  //initializer_list�� []�� �� �� ����
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
    int my_arr1[5] = { 1, 2, 3, 4, 5 };         //���� �迭
    int* my_arr2 = new int[5]{ 1, 2, 3, 4, 5 }; //���� �迭

    auto il = { 10, 20, 30 };   //std::initializer_list�� �ڵ����� type�� ����ش�

    
    
    
    //IntArray int_array { 1, 2, 3, 4, 5 }; //uniform initialization  //class���� initializer_list ���
    IntArray int_array = { 1, 2, 3, 4, 5 };
    cout << int_array << endl;








    return 0;
}