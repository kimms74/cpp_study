//Overloading the assignment operator, 	Shallow vs. deep copying
                                        //shallow는 그냥 주소값을 복사해버리지만 deep copying은 값들을 복사해서, shallow에서 발생할 수 있는 문제점을 차단한다
#include <iostream>
#include <cassert>

using namespace std;

class MyString
{
    //private:
public:
    char* m_data = nullptr;
    int m_length = 0;

public:
    MyString(const char* source = "")
    {
        assert(source);

        m_length = std::strlen(source) + 1; //글자수 외에 '\0'를 추가하기 위해 +1을 함
        m_data = new char[m_length];

        for (int i = 0; i < m_length; ++i)
            m_data[i] = source[i];

        m_data[m_length - 1] = '\0';    //마지막 문자열은 '\0'이다
    }

    MyString(const MyString& source)    //copy constructor
    {
        cout << "Copy constructor" << endl;

        m_length = source.m_length;

        if (source.m_data != nullptr)
        {
            m_data = new char[m_length];        //단순히 주소값을 복사하는 대신에 메모리를 다시 할당받아 값을 복사함
                                                //deep copy
            
            for (int i = 0; i < m_length; ++i)  //다른 주소를 가지는 heap을 만듬
                m_data[i] = source.m_data[i];
        }
        else
            m_data = nullptr;
    }

    //MyString(const MyString& source) = delete;    //직접 copy constructor를 만들지 못하는 경우(바빠서?)
                                                    //shallow copy가 발생하지 않게 아얘 지워버리는 것도 하나의 방법이다

    MyString& operator = (const MyString& source)   //copy assignment
    {
        ////shallow copy
        //this->m_data = source.m_data;     //default copy constructor는 얉은 복사를 한다(주소값을 그대로 복사해옴)
        //this->m_length = source.m_length; //동적할당되는 메모리와 연관돼있을 경우에는 문제가 발생한다(destructor에서 heap을 지워버림)

        cout << "Assignment operator" << endl;

        if (this == &source) //prevent self-assignment
            return *this;

        delete[] m_data;            //constructor는 호출되기 전 동적할당 된 memory를 가지고 있는 경우가 없지만
                                    //assignment operator의 경우에는 memory를 가지고 있을 수도 있다
        m_length = source.m_length; //그러므로 m_data를 지워버리고, m_length를 변경하고, m_data에 메모리를 할당받아 복사하는 것
                                    //copy constructor와 코드가 중복되는 부분이 있는데 이럴 경우에는 그 부분만 함수로 만들어서 쓰는게 좋다!
        if (source.m_data != nullptr)
        {
            m_data = new char[m_length];

            for (int i = 0; i < m_length; ++i)  //다른 주소를 가지는 heap을 만듬
                m_data[i] = source.m_data[i];
        }
        else
            m_data = nullptr;

        return *this;
    }

    ~MyString()         //memory leak을 막기위해 소멸자에 delete[]넣어줌(new를 쓸 때는 반드시 해야함)
    {
        delete[] m_data;
    }

    char* getString() { return m_data; }
    int getLength() { return m_length; }
};

int main()
{
    //MyString hello("Hello");

    //cout << (int*)hello.m_data << endl; //new로 할당받은 주소를 찍어봄, cout에서 char*는 문자열로 인식하므로 강제로 int*로 변환해서 보는것
    //cout << hello.getString() << endl;  //char*은 문자열로 인식한다

    //{
    //    MyString copy = hello;          //copy를 생성하므로 assignment operator가 아닌 copy constructor 호출(헷갈림 주의!)
    //    cout << (int*)copy.m_data << endl;
    //    cout << copy.getString() << endl;   
    //}                                       

    //cout << hello.getString() << endl;    //중괄호를 벗어나면서 heap에 있는 data를 지워버려
                                            //hello의 m_data 데이터가 날아가버림(같은 주소를 가지고 있으므로)



    MyString hello("hello");

    //MyString str1 = hello;  //copy constructor 호출(str1이 만들어지는 순간이므로)
    MyString str1(hello);   //헷갈리지 않게 ()를 이용하는 것도 괜찮다
    
    MyString str2;
    str2 = hello;           //assignment operator 호출



    //가장 좋은 건 std::string을 써서 new 동적할당 사용을 하지 않는 것이다!!

    return 0;
}
