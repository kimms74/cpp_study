// Container classes    //홈페이지 코드랑 짠 거 비교해보기

#include <iostream>
#include <vector>
#include <array>
#include <cassert>

using namespace std;

class IntArray      //직접 기능 구현해보기
{
private:
    int m_length = 0;
    int* m_data = nullptr;

public:
    //Constructors
    IntArray(int length_in)
        :m_length(length_in)
    {
        m_data = new int[m_length];
    }
    IntArray(const std::initializer_list<int>& array_in)
        :IntArray(array_in.size())
    {
        int count = 0;
        for (auto& ele : array_in)  //initializer_list는 []를 쓸 수 없으므로 for each로 만든 뒤 count로 m_data에 대입한다
        {
            m_data[count] = ele;
            ++count;
        }
        
    }

    //Destructors
    ~IntArray()
    {
        delete[] m_data;
    }

    ////reset()
    //void reset()
    //{
    //    m_data = nullptr;
    //}


    ////resize() parameter 존재한다
    //void resize(const int& size_in)
    //{
    //    reset();
    //    m_data = new int[size_in];
    //}

    ////insertBefore(const int& value, const int& ix)
    //IntArray& insertBefore(const int& value, const int& ix)
    //{
    //    int* data1 = m_data;
    //    resize(m_length + 1);
    //    m_length += 1;
    //    for (int i = 0; i < ix; ++i)
    //        m_data[i] = data1[i];
    //    m_data[ix] = value;
    //    for (int i = ix; i < (m_length - 1); ++i)
    //        m_data[i + 1] = data1[i];

    //    return *this;
    //}

    ////remove(const int& ix)
    //IntArray& remove(const int& ix)
    //{
    //    int* data1 = m_data;
    //    resize(m_length - 1);

    //    for (int i = 0; i < ix; ++i)
    //        m_data[i] = data1[i];
    //    for (int i = ix; i < (m_length-1); ++i)
    //        m_data[i] = data1[i + 1];

    //    m_length -= 1;

    //    return *this;
    //}

    //push_back(const int& value)
    //IntArray& push_back(const int& value)
    //{
    //    int* data1 = m_data;
    //    resize(m_length+1);

    //    for (int i = 0; i < m_length; ++i)
    //        m_data[i] = data1[i];
    //    
    //    m_data[m_length] = value;
    //    m_length += 1;                  //m_length랑 array의 몇번째랑 헷갈리지말기!((m_length-1)=원소 마지막번째)

    //    return *this;
    //}

    //output operator <<
    friend ostream& operator << (ostream& out, IntArray& arr)
    {
        for (unsigned i = 0; i < arr.m_length; ++i)
            out << arr.m_data[i] << " ";
        out << endl;

        return out;
    }



    //홈페이지에 있는 코드(확실히 기능이 깔끔하다, 특히 resize()를 하면 커지는지 작아지는지 스스로 판단해서 값까지 옮겨줌,내가 생각한 기능은 reallocate()이다)
    void erase()
    {
        delete[] m_data;
        // We need to make sure we set m_data to nullptr here, otherwise it will
        // be left pointing at deallocated memory!
        m_data = nullptr;
        m_length = 0;
    }

    int& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    // reallocate resizes the array.  Any existing elements will be destroyed.  This function operates quickly.
    void reallocate(int newLength)
    {
        // First we delete any existing elements
        erase();

        // If our array is going to be empty now, return here
        if (newLength <= 0)
            return;

        // Then we have to allocate new elements
        m_data = new int[newLength];
        m_length = newLength;
    }

    // resize resizes the array.  Any existing elements will be kept.  This function operates slowly.
    void resize(int newLength)
    {
        // if the array is already the right length, we're done
        if (newLength == m_length)
            return;

        // If we are resizing to an empty array, do that and return
        if (newLength <= 0)
        {
            erase();
            return;
        }

        // Now we can assume newLength is at least 1 element.  This algorithm
        // works as follows: First we are going to allocate a new array.  Then we
        // are going to copy elements from the existing array to the new array.
        // Once that is done, we can destroy the old array, and make m_data
        // point to the new array.

        // First we have to allocate a new array
        int* data{ new int[newLength] };

        // Then we have to figure out how many elements to copy from the existing
        // array to the new array.  We want to copy as many elements as there are
        // in the smaller of the two arrays.
        if (m_length > 0)
        {
            int elementsToCopy{ (newLength > m_length) ? m_length : newLength };

            // Now copy the elements one by one
            for (int index{ 0 }; index < elementsToCopy; ++index)
                data[index] = m_data[index];
        }

        // Now we can delete the old array because we don't need it any more
        delete[] m_data;

        // And use the new array instead!  Note that this simply makes m_data point
        // to the same address as the new array we dynamically allocated.  Because
        // data was dynamically allocated, it won't be destroyed when it goes out of scope.
        m_data = data;
        m_length = newLength;
    }

    IntArray& push_back(const int& value)
    {
        int* data1 = m_data;
        resize(m_length + 1);

        m_data[m_length-1] = value;

        return *this;
    }

    IntArray& insertBefore(int value, int index)
    {
        // Sanity check our index value
        assert(index >= 0 && index <= m_length);

        // First create a new array one element larger than the old array
        int* data{ new int[m_length + 1] };

        // Copy all of the elements up to the index
        for (int before{ 0 }; before < index; ++before)
            data[before] = m_data[before];

        // Insert our new element into the new array
        data[index] = value;

        // Copy all of the values after the inserted element
        for (int after{ index }; after < m_length; ++after)
            data[after + 1] = m_data[after];

        // Finally, delete the old array, and use the new array instead
        delete[] m_data;
        m_data = data;
        ++m_length;

        return *this;
    }

    IntArray& remove(int index)
    {
        // Sanity check our index value
        assert(index >= 0 && index < m_length);

        // If we're removing the last element in the array, we can just erase the array and return early
        if (m_length == 1)
        {
            erase();
            return *this;
        }

        // First create a new array one element smaller than the old array
        int* data{ new int[m_length - 1] };

        // Copy all of the elements up to the index
        for (int before{ 0 }; before < index; ++before)
            data[before] = m_data[before];

        // Copy all of the values after the removed element
        for (int after{ index + 1 }; after < m_length; ++after)
            data[after - 1] = m_data[after];

        // Finally, delete the old array, and use the new array instead
        delete[] m_data;
        m_data = data;
        --m_length;

        return *this;
    }

    // A couple of additional functions just for convenience
    void insertAtBeginning(int value) { insertBefore(value, 0); }
    void insertAtEnd(int value) { insertBefore(value, m_length); }

    int getLength() const { return m_length; }
};

int main()
{
    IntArray my_arr{ 1, 3, 5, 7, 9 };
    cout << my_arr.insertBefore(10, 1) << endl;           // 1, 10, 3, 5, 7, 9
    cout << my_arr.remove(3) << endl;                     // 1, 10, 3, 7, 9   //1,10,3은 그대로 두고 5자리에 7,9를 끌어오면 됨, 메모리가 하나 남으므로 메모리를 새로 할당받아서 쫙 복사해주면 됨
    cout << my_arr.push_back(13) << endl;                 // 1, 10, 3, 7, 9, 13


    std::vector<int> int_vec;
    std::array<int, 10> int_arr;

    return 0;
}
