#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])    //���ڿ��� array: 2�� array?
{
    for (int count = 0; count < argc; ++count)
    {
        string argv_single = argv[count];

        if (count == 1)
        {
            int input_number = std::stoi(argv_single);  //stoi: string to int
            cout << input_number + 1 << endl;
        }
        else
            cout << argv[count] << endl;
    }
    //���� command line���� �����ؾ��� ���� �ִ� ex)ros �� ��,scripting �� ��
    //����: ����ڰ� �Է��� �߸����� �� ����ó���� �Ź� �ڼ��� �������
    //      ���ġ ���ϰ� ���� �Է��� �߸��Ѵ� ���� �������� �ִ�
    //Boost.Program_options��� library �Լ��� �̿��ϸ� ����(��ǥ�� library)






    return 0;
}
