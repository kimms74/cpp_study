#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    //int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

    //////output
    ////for (int number : fibonacci)
    ////    cout << number << " ";
    ////cout << endl;



    ////change array values
    ////for (const int number : fibonacci)    //�Լ� parameteró�� for ������ number�� ���������� �������( output���� 10���� �ȳ���)
    ////    number = 10;                      //�׷��� ���� const int�� ���� ���� ���ϰ� ���

    ////for (auto &number : fibonacci)           //int &�� �״�� �������� ���̱⶧���� ���� ������ �� �ִ�(int&�� lvalue�̴�)
    ////    number *= 10;                        //���� type�� auto�� ������

    //////output
    ////for (int number : fibonacci)
    ////    cout << number << " ";
    ////cout << endl;




    //int max_number = numeric_limits<int>::lowest();

    //for (const auto &n : fibonacci)
    //    max_number = max(max_number, n);

    //cout << max_number << endl;





    vector<int> fibonacci = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };    //�����Ҵ� array ��ſ� vector ��밡��
                                                                            //�۾��ӵ� ������
    int max_number = numeric_limits<int>::lowest();

    for (const auto &n : fibonacci)
        max_number = max(max_number, n);

    cout << max_number << endl; 

    return 0;
}
