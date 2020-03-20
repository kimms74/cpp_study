#include <iostream>


using namespace std;

int getInt()
{
    while (true)    //���� �Է��� ������ ���� loop�� ���������� �ڵ��ϴ°� ����
    {
        cout << "Enter an integer number : ";
        int x;
        cin >> x;

        if (std::cin.fail())    //cin�� int�� �ƴ� �ٸ� type�� �� ��� failure mode�� ������ �Ǵµ�
        {                       //cin.fail()�� �̸� �����Ͽ� failure mode�� ��� 1, true�� ��ȯ�Ѵ�
            std::cin.clear();   //failure mode�� normal mode�� �ǵ����ش�
            std::cin.ignore(32767, '\n');   //buffer���� 1024���� ��ŭ ����ڴ�, '\n'�� ������ ���߿� �����ڴ�
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
