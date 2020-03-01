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
//    for (int count = 0; count < size; ++count)    //class�� function �������� for each ���Ұ�(compile time �� array�� ������� ���� �����Ƿ�)
//        cout << array[count] << ' ';
//    cout << endl;
//}
//
//template <int size>      //Partial template specialization
//void print(StaticArray<char, size>& array)
//{
//    for (int count = 0; count < size; ++count)
//        cout << array[count];    //char�� ���ؼ��� ��ĭ ����
//    cout << endl;
//}



//member function�� Partial template specialization�ϴ� ��
template <class T, int size>        //print()�� member function���� ������
class StaticArray_BASE              //�����ִ� class�� Base�� �ٲ�
{
private:
    T m_array[size];

public:
    T* getArray() { return m_array; }   //return by pointer: �����Ҵ��� return�� �� ����

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
class StaticArray : public StaticArray_BASE<T, size>    //����� �޴� ����: template�� ��°�� specialization�ϴ� �� ���� ���ϱ� �����̴�
{};

template <int size>     //member function�� Partial template specialization�ϴ� ��
class StaticArray<char, size> : public StaticArray_BASE<char, size> //Ư��ȭ�ϰ� ���� �Լ��� overriding�� �Ѵ�
{                                                                   //�������� ��ӹ޾����Ƿ� �״�� ���´�
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
    //strcpy_s(char13.getArray(), 13, "Hello, World");    //strcpy_s: string copy, _s:security enhanced version�� ����(strcpy�� ���׷��̵� ����)
    ////strcpy_s((char*)&char13[0], 13 * sizeof(char), "Hello, World");

    //print(char13);  //char type�� ���ؼ��� ���⸦ ���ְ� �ʹٸ� Partial template specialization ����ϸ� �ȴ�



    //member function�� partial template specialization�ϴ� ��
    StaticArray<int, 4> int4;
    int4[0] = 1;
    int4[1] = 2;
    int4[2] = 3;
    int4[3] = 4;

    int4.print();   //member function�̹Ƿ� �ٲ���


    StaticArray<char, 13> char13;
    strcpy_s(char13.getArray(), 13, "Hello, World");    //string�� ���� ���ڿ��� �ϳ� �� �����Ƿ� 13���� �ϴ� ��

    char13.print();  //member function�̹Ƿ� �ٲ���

    return 0;
}
