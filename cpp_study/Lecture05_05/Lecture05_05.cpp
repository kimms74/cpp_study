#include <iostream>

using namespace std;

int main()
{
    cout << "While-loop test" << endl;

    //int count = 0;

    //while (true)
    //{
    //    //static int count = 0; // ���� ��� ����, ���� while�� �ۿ��� ���� 
    //    cout << count << endl;
    //    ++count;

    //    if (count == 10) break;
    //}
    


    //unsigned int count = 10; // �����ϴ� ��� 0���� max������ �Ѿ�� ������ unsigned�� �ǵ��� ������
    //                        // ��� unsigned�� �ӵ��� ������

    //while (count >= 0)
    //{
    //    if (count == 0) cout << "zero";
    //    else cout << count << " ";

    //    count--;
    //}



    //int count = 1;

    //while (count < 100)
    //{
    //    if (count % 5 == 0) cout << "Hello " << count << endl; // �������� �� ������ �κкκ� Ȯ�ο����� ���

    //    count ++;
    //}

    

    int outer_count = 5;

    while (outer_count >= 1) //while �ȿ� while
    {
        int inner_count = 5;
        while (inner_count >= outer_count)
        {
            cout << inner_count-- << " ";
        }
        cout << endl;
        --outer_count;
    }

    // ���� while ���� for�� ���� �����

    return 0;
}
