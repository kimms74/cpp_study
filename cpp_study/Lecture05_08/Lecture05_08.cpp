#include <iostream>

using namespace std;

void breakOrReturn()
{
    while (true)
    {
        char ch;
        cin >> ch;

        if (ch == 'b')
            break;
        else if (ch == 'r')
            return;
    }

    cout << "Hello" << endl;
}


int main()
{
    //breakOrReturn();
    
    
    
    //for (int i = 0; i < 10; ++i)
    //{
    //    cout << i << endl;
    //    if (i == 5) break;
    //}



    //for (int i = 0; i < 10; ++i)
    //{
    //    if (i % 2 == 0) continue; // continue�� ������ �ؿ� �ִ� �ڵ� ���� ���� �ʰ� for������ ���ư�

    //    cout << i << endl;
    //}



    //int count(0);

    //do
    //{
    //    if (count == 5)
    //        continue;

    //    cout << count << endl;
    //} while (++count < 10); // ++ count�� do �ȿ� �־������ 5���� ���� ���� ������

    


    int count(0);
    char ch;
    //bool escape_flag = false;

    //while (!escape_flag)
    while (true)
    {
        cin >> ch;

        if (ch == 'x')
            //escape_flag = true;
            break;

        cout << ch << " " << count++ << endl;
               
    }


    return 0;
}
