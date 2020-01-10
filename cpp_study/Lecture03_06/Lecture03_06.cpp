#include <iostream>

int main()
{
    using namespace std;

    //// logical NOT
    //bool x = true;

    //cout << !x << endl;

    ////logcial AND
    //bool x = true;
    //bool y = false;

    //cout << (x && y) << endl;

    //bool hit = true;
    //int health = 10;

    //if (hit == true && health < 20) // if 두개로 표현하는 거 보다 논리 연산자로 하나로 표시하는게 좋다, else쓸 때 복잡해지므로
    //    cout << "die" << endl;
    //else
    //    health -= 20;



    ////logcial OR
    //bool x = true;
    //bool y = false;

    //cout << (x || y) << endl;

    
    //int x = 5;
    //int y = 7;
    //
    //if (x != y)
    //    cout << " x does not equal y" << endl;
    //else
    //    cout << " x equals y" << endl;

    //int v = 1;

    //if (v == 0 || v == 1)
    //    cout << "v is 0 or 1" << endl;
    


    ////short circut evaluation
    //int x = 2;
    //int y = 2;

    //if (x == 1 && y++ == 2) // &&입장에서 왼쪽이 false면 오른쪽은 계산 안 함!
    //{
    //    //do something
    //}
    //cout << y << endl;



    ////De Morgan's Law
    //bool x = true;
    //bool y = false;

    //!(x && y);
    //!x || !y;



    //// XOR
    //// false false false
    //// false true true
    //// true false true
    //// true true false
    //bool x = true;
    //bool y = false;
    //cout << std::boolalpha;
    //cout << (x != y) << endl;



    bool v1 = true;
    bool v2 = false;
    bool v3 = false;

    bool r1 = v1 || v2 && v3; // &&이 ||보다 우선순위가 높다, 괄호 쳐서 표시하기 (다른 사람은 모를 수도 있기 때문에)
    bool r2 = (v1 || v2) && v3;
    bool r3 = v1 || (v2 && v3);

    cout << r1 << endl;
    cout << r2 << endl;

    return 0;
}
