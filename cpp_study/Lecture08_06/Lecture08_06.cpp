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

    ~Simple()   //destructor는 parameter가 없다
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

    ~IntArray()     //동적할당 할 때마다 destructor로 delete하는게 귀찮으면 vector써라
    {               //new,delete은 느리다, vector는 size, capacity가 구별돼있어 빠르다
        if(_arr != nullptr) 
            delete[] _arr;
    }
};

int main()
{
    //Simple s1(0);
    //Simple s2(1);   //destructor는 main()이 끝날 때 실행된다 (constructor와 역순으로 작동)



    //Simple *s1 = new Simple(0);
    //Simple s2(1);
    //delete s1;    //동적할당으로 만들면 main()을 빠져나가도 delete을 안할 경우 메모리에서 안사라진다
    //            //그러므로 직접 delete을 해야하고 이번에는 destructor가 constructor와 같은 순서로 작동한다 
    //            //소멸자를 프로그래머가 작성해서 쓰는거는 대부분의 경우 권장하지 않음




    while (true)
    {
        IntArray my_int_arr(10000); //delete[]을 안하므로 memory leak 발생
        //delete[] my_int_arr._arr;   //_arr는 private이므로 이런식으로 쓰지 않고 destructor 이용한다
    }

    return 0;
}
