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
        using namespace a;  //가급적이면 std 이외는 using namespace 쓰지 말고 a:: 이런식으로 사용하기
        cout << a::my_var << endl;
        cout << count << endl;  // std안에도 count 함수가 있다 a::count로 표시하기

    }

    {
        using namespace b;
        cout << my_var << endl;

    }


    return 0;
}

