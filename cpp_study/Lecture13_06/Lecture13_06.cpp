// Partial template specialization

#include <iostream>

using namespace std;

//template <class T, int size>        //class template
//class StaticArray
//{
//private:
//    T m_array[size];
//
//public:
//    T* getArray() { return m_array; }
//
//    T& operator[](int index)
//    {
//        return m_array[index];
//    }
//};
//
//template <typename T,int size>      //function template
//void print(StaticArray<T, size>& array)
//{
//    for (int count = 0; count < size; ++count)    //class나 function 내에서는 for each 사용불가(compile time 때 array가 만들어져 있지 않으므로)
//        cout << array[count] << ' ';
//    cout << endl;
//}
//
//template <int size>      //Partial template specialization
//void print(StaticArray<char, size>& array)
//{
//    for (int count = 0; count < size; ++count)
//        cout << array[count];    //char에 대해서는 빈칸 제거
//    cout << endl;
//}



//member function을 Partial template specialization하는 법
template <class T, int size>        //print()를 member function으로 가져옴
class StaticArray_BASE              //원래있던 class를 Base로 바꿈
{
private:
    T m_array[size];

public:
    T* getArray() { return m_array; }   //return by pointer: 동적할당을 return할 때 쓰임

    T& operator[](int index)
    {
        return m_array[index];
    }

    void print()
    {
        for (int count = 0; count < size; ++count)
            cout << (*this)[count] << ' ';
        cout << endl;
    }
};

template <class T, int size>
class StaticArray : public StaticArray_BASE<T, size>    //상속을 받는 이유: template을 통째로 specialization하는 거 보다 편하기 때문이다
{};

template <int size>     //member function을 Partial template specialization하는 법
class StaticArray<char, size> : public StaticArray_BASE<char, size> //특수화하고 싶은 함수만 overriding을 한다
{                                                                   //나머지는 상속받았으므로 그대로 들어온다
public:
    void print()
    {
        for (int count = 0; count < size; ++count)
            cout << (*this)[count];
        cout << endl;
    }
};

int main()
{
    //StaticArray<int, 4> int4;
    //int4[0] = 1;
    //int4[1] = 2;
    //int4[2] = 3;
    //int4[3] = 4;

    //print(int4);


    //StaticArray<char, 13> char13;
    //char13[0] = 'H';
    //char13[1] = 'e';
    //// ...
    //strcpy_s(char13.getArray(), 13, "Hello, World");    //strcpy_s: string copy, _s:security enhanced version을 뜻함(strcpy의 업그레이드 버전)
    ////strcpy_s((char*)&char13[0], 13 * sizeof(char), "Hello, World");

    //print(char13);  //char type에 대해서는 띄어쓰기를 없애고 싶다면 Partial template specialization 사용하면 된다



    //member function을 partial template specialization하는 법
    StaticArray<int, 4> int4;
    int4[0] = 1;
    int4[1] = 2;
    int4[2] = 3;
    int4[3] = 4;

    int4.print();   //member function이므로 바꿔줌


    StaticArray<char, 13> char13;
    strcpy_s(char13.getArray(), 13, "Hello, World");    //string에 숨은 문자열이 하나 더 있으므로 13으로 하는 것

    char13.print();  //member function이므로 바꿔줌

    return 0;
}
