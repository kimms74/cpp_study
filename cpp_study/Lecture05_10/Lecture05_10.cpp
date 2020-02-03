#include <iostream>


using namespace std;

int getInt()
{
    while (true)    //옳은 입력이 들어왔을 때만 loop를 빠져나오게 코딩하는게 좋다
    {
        cout << "Enter an integer number : ";
        int x;
        cin >> x;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            cout << "Invalid number, please try agin" << endl;
        }
        else
        {
            std::cin.ignore(32767, '\n');
            return x;
        }
    }
}

char getOperator()
{
    while (true)
    {
        cout << "Enter an operator (+,-) : "; // TODO: more operator *;, / etc.
        char op;
        cin >> op;
        std::cin.ignore(32767, '\n');
    
        if (op == '+' || op == '-')
            return op;
        else
            cout << "Invalid operator, please try again" << endl;
    }
}

void printResult(int x, char op, int y)
{
    if (op == '+') cout << x + y << endl;
    else if (op == '-') cout << x - y << endl;
    //else
    //{
    //    cout << "Invalid operator" << endl;
    //}
}

int main()
{
    int x = getInt();
    char op = getOperator();
    int y = getInt();

    printResult(x, op, y);




    return 0;
}
