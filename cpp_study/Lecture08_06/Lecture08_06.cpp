#include <iostream>

using namespace std;

class Simple
{
private:
    int _id;

public:
    Simple(const int &id_in)
        : _id(id_in)
    {
        cout << "Constructor " << _id << endl;
    }

    ~Simple()   //destructor�� parameter�� ����
    {
        cout << "Destructor " << _id << endl;
    }
};

class IntArray
{
private:
    int *_arr = nullptr;
    int _length = 0;

public:
    IntArray(const int &length_in)
    {
        _length = length_in;
        _arr = new int[_length];

        //cout << "Constructor " << endl;
    }

    int size() { return _length; }

    ~IntArray()     //�����Ҵ� �� ������ destructor�� delete�ϴ°� �������� vector���
    {               //new,delete�� ������, vector�� size, capacity�� �������־� ������
        if(_arr != nullptr) 
            delete[] _arr;
    }
};

int main()
{
    //Simple s1(0);
    //Simple s2(1);   //destructor�� main()�� ���� �� ����ȴ� (constructor�� �������� �۵�)



    //Simple *s1 = new Simple(0);
    //Simple s2(1);
    //delete s1;    //�����Ҵ����� ����� main()�� ���������� delete�� ���� ��� �޸𸮿��� �Ȼ������
    //            //�׷��Ƿ� ���� delete�� �ؾ��ϰ� �̹����� destructor�� constructor�� ���� ������ �۵��Ѵ� 
    //            //�Ҹ��ڸ� ���α׷��Ӱ� �ۼ��ؼ� ���°Ŵ� ��κ��� ��� �������� ����




    while (true)
    {
        IntArray my_int_arr(10000); //delete[]�� ���ϹǷ� memory leak �߻�
        //delete[] my_int_arr._arr;   //_arr�� private�̹Ƿ� �̷������� ���� �ʰ� destructor �̿��Ѵ�
    }

    return 0;
}
