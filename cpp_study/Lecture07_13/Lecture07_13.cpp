#include <iostream>
#include <string>

using namespace std;

int main()
{
    ////semantic errors

    //int x;
    //cin >> x;

    //if (x >= 5)
    //    cout << "x is greater than 5" << endl;  //>=������ greater than���� �ۼ��� ��
    //                                            //�ڵ带 ���� ��� ���忡���� ã�� �����




    //violated assumption
    string hello = "Hello, my name is Myeong soo";

    cout << "Input from 0 to " << hello.size() - 1 << endl;

    while (true)
    {
        int ix;
        cin >> ix;

        if (ix >= 0 && ix <= hello.size() - 1)
        {
            cout << hello[ix] << endl; //string ���̺��� �� ū ���� ������ runtime error�߻��Ѵ�
            break;
        }
        else
            cout << "Please try again" << endl;
    }
    //��õǴ� ��� ���α׷��� �̷��� ������ġ�� �� ���־���Ѵ�
    //���� ���� ����(compiler�� ������ ������ �� �ֵ��� ¥��!)
    //runtime error�� �߻��ϸ� ���� �����Ͱ� �� ���ư���!






    return 0;
}
