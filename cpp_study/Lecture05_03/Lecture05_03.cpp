#include <iostream>

using namespace std;

enum class Colors
{
    BLACK,
    WHITE,
    RED,
    GREEN,
    BLUE
};

void printColorName(Colors color)
{
    //if (color == Colors::BLACK)
    //    cout << "Black" << endl;
    //else if (color == Colors::BLUE)
    //    cout << "Blue" << endl;
    //else if (color == Colors::GREEN)
    //    cout << "Green" << endl;

    //switch (color)
    //{
    //case Colors::BLACK :
    //    cout << "Black" << endl;
    //    break;
    //case Colors::BLUE :
    //    cout << "Blue" << endl;
    //    break;
    //}

    switch (static_cast<int>(color)) //static_cast를 사용해 간단히 표현
    {
    case 0 :
        cout << "Black" << endl;
        break;
    case 1 :
        cout << "White" << endl;
        break;
    }
}


int main()
{
    //printColorName(Colors::BLACK);
    
    //int x;
    //cin >> x;

    //switch (x)
    //{
    //case 0:
    //    cout << "Zero";
    //    break;
    //case 1:
    //    cout << "One";
    //    break;
    //case 2:
    //    cout << "Two";
    //    break;          // break를 일부러 안 넣을때도 있다, 해당 case 이후를 전부 다 실행시키고 싶을 때!
    //}

    //cout << endl;

    


    int x;
    cin >> x;

    switch (x)
    {
        int a;
       // int b = 5; // 선언만 가능하고 초기화는 불가능

        case 0:
        {
            int y=5; // case 안에서 선언한 것은 밖에서 한 것과 같다
            y = y + x;
            cout << y << endl;
            break;
        }
        
        case 1:
        {
            int y = 5;
            y = y - x;  // 변수 선언, 초기화는 switch 밖에서 하는게 좋다
            cout << y << endl;
            break;
        }
        default:
            cout << "Undefined input " << x << endl;
            //break;
    }
    
    return 0;
}
