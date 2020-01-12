#include <iostream>

int main()
{
    using namespace std;

    bool item1_flag = false;
    bool item2_flag = false;
    bool item3_flag = false;
    bool item4_flag = false;

    // event!
    item2_flag = true;

    // die! item2 los
    item2_flag = false;

    if (item3_flag == true)
    {
        // event 문을 통과
    }

    if (item3_flag == true)
    {
        item3_flag = false;
        item4_flag = true;
    }
}
