#include <iostream>

namespace a
{
    int my_var(10);
    int count(12312313);
}


namespace b
{
    int my_var(20);
}

int main()
{
    //using std::cout;
    //using std::cin;
    using namespace std;



    //using namespace a;
    //using namespace b;

    //cout << a::my_var << endl;
    //cout << b::my_var << endl;

    
    
    {
        using namespace a;  //�������̸� std �ܴ̿� using namespace ���� ���� a:: �̷������� ����ϱ�
        cout << a::my_var << endl;
        cout << count << endl;  // std�ȿ��� count �Լ��� �ִ� a::count�� ǥ���ϱ�

    }

    {
        using namespace b;
        cout << my_var << endl;

    }


    return 0;
}

