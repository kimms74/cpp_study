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

    switch (static_cast<int>(color)) //static_cast�� ����� ������ ǥ��
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
    //    break;          // break�� �Ϻη� �� �������� �ִ�, �ش� case ���ĸ� ���� �� �����Ű�� ���� ��!
    //}

    //cout << endl;

    


    int x;
    cin >> x;

    switch (x)
    {
        int a;
       // int b = 5; // ���� �����ϰ� �ʱ�ȭ�� �Ұ���

        case 0:
        {
            int y=5; // case �ȿ��� ������ ���� �ۿ��� �� �Ͱ� ����
            y = y + x;
            cout << y << endl;
            break;
        }
        
        case 1:
        {
            int y = 5;
            y = y - x;  // ���� ����, �ʱ�ȭ�� switch �ۿ��� �ϴ°� ����
            cout << y << endl;
            break;
        }
        default:
            cout << "Undefined input " << x << endl;
            //break;
    }
    
    return 0;
}
