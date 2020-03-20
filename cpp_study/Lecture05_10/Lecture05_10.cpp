#include <iostream>


using namespace std;

int getInt()
{
    while (true)    //옳은 입력이 들어왔을 때만 loop를 빠져나오게 코딩하는게 좋다
    {
        cout << "Enter an integer number : ";
        int x;
        cin >> x;

        if (std::cin.fail())    //cin에 int가 아닌 다른 type이 들어갈 경우 failure mode로 빠지게 되는데
        {                       //cin.fail()이 이를 감지하여 failure mode일 경우 1, true를 반환한다
            std::cin.clear();   //failure mode를 normal mode로 되돌려준다
            std::cin.ignore(32767, '\n');   //buffer에서 1024개수 만큼 지우겠다, '\n'을 만나면 도중에 끝내겠다
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
