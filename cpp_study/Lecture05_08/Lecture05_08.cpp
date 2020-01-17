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
    //    if (i % 2 == 0) continue; // continue를 만나면 밑에 있는 코드 실행 하지 않고 for문으로 돌아감

    //    cout << i << endl;
    //}



    //int count(0);

    //do
    //{
    //    if (count == 5)
    //        continue;

    //    cout << count << endl;
    //} while (++count < 10); // ++ count를 do 안에 넣어버리면 5에서 무한 루프 갇힌다

    


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
