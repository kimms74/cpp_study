//Overloading the assignment operator, 	Shallow vs. deep copying
                                        //shallow�� �׳� �ּҰ��� �����ع������� deep copying�� ������ �����ؼ�, shallow���� �߻��� �� �ִ� �������� �����Ѵ�
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

        m_length = std::strlen(source) + 1; //���ڼ� �ܿ� '\0'�� �߰��ϱ� ���� +1�� ��
        m_data = new char[m_length];

        for (int i = 0; i < m_length; ++i)
            m_data[i] = source[i];

        m_data[m_length - 1] = '\0';    //������ ���ڿ��� '\0'�̴�
    }

    MyString(const MyString& source)    //copy constructor
    {
        cout << "Copy constructor" << endl;

        m_length = source.m_length;

        if (source.m_data != nullptr)
        {
            m_data = new char[m_length];        //�ܼ��� �ּҰ��� �����ϴ� ��ſ� �޸𸮸� �ٽ� �Ҵ�޾� ���� ������
                                                //deep copy
            
            for (int i = 0; i < m_length; ++i)  //�ٸ� �ּҸ� ������ heap�� ����
                m_data[i] = source.m_data[i];
        }
        else
            m_data = nullptr;
    }

    //MyString(const MyString& source) = delete;    //���� copy constructor�� ������ ���ϴ� ���(�ٺ���?)
                                                    //shallow copy�� �߻����� �ʰ� �ƾ� ���������� �͵� �ϳ��� ����̴�

    MyString& operator = (const MyString& source)   //copy assignment
    {
        ////shallow copy
        //this->m_data = source.m_data;     //default copy constructor�� ���� ���縦 �Ѵ�(�ּҰ��� �״�� �����ؿ�)
        //this->m_length = source.m_length; //�����Ҵ�Ǵ� �޸𸮿� ���������� ��쿡�� ������ �߻��Ѵ�(destructor���� heap�� ��������)

        cout << "Assignment operator" << endl;

        if (this == &source) //prevent self-assignment
            return *this;

        delete[] m_data;            //constructor�� ȣ��Ǳ� �� �����Ҵ� �� memory�� ������ �ִ� ��찡 ������
                                    //assignment operator�� ��쿡�� memory�� ������ ���� ���� �ִ�
        m_length = source.m_length; //�׷��Ƿ� m_data�� ����������, m_length�� �����ϰ�, m_data�� �޸𸮸� �Ҵ�޾� �����ϴ� ��
                                    //copy constructor�� �ڵ尡 �ߺ��Ǵ� �κ��� �ִµ� �̷� ��쿡�� �� �κи� �Լ��� ���� ���°� ����!
        if (source.m_data != nullptr)
        {
            m_data = new char[m_length];

            for (int i = 0; i < m_length; ++i)  //�ٸ� �ּҸ� ������ heap�� ����
                m_data[i] = source.m_data[i];
        }
        else
            m_data = nullptr;

        return *this;
    }

    ~MyString()         //memory leak�� �������� �Ҹ��ڿ� delete[]�־���(new�� �� ���� �ݵ�� �ؾ���)
    {
        delete[] m_data;
    }

    char* getString() { return m_data; }
    int getLength() { return m_length; }
};

int main()
{
    //MyString hello("Hello");

    //cout << (int*)hello.m_data << endl; //new�� �Ҵ���� �ּҸ� ��, cout���� char*�� ���ڿ��� �ν��ϹǷ� ������ int*�� ��ȯ�ؼ� ���°�
    //cout << hello.getString() << endl;  //char*�� ���ڿ��� �ν��Ѵ�

    //{
    //    MyString copy = hello;          //copy�� �����ϹǷ� assignment operator�� �ƴ� copy constructor ȣ��(�򰥸� ����!)
    //    cout << (int*)copy.m_data << endl;
    //    cout << copy.getString() << endl;   
    //}                                       

    //cout << hello.getString() << endl;    //�߰�ȣ�� ����鼭 heap�� �ִ� data�� ��������
                                            //hello�� m_data �����Ͱ� ���ư�����(���� �ּҸ� ������ �����Ƿ�)



    MyString hello("hello");

    //MyString str1 = hello;  //copy constructor ȣ��(str1�� ��������� �����̹Ƿ�)
    MyString str1(hello);   //�򰥸��� �ʰ� ()�� �̿��ϴ� �͵� ������
    
    MyString str2;
    str2 = hello;           //assignment operator ȣ��



    //���� ���� �� std::string�� �Ἥ new �����Ҵ� ����� ���� �ʴ� ���̴�!!

    return 0;
}
