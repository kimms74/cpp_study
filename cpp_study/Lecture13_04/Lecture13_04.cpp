// Function template specialization

#include <iostream>
#include "Storage.h"

using namespace std;

template<typename T>
T getMax(T x, T y)
{
    return (x > y) ? x : y;
}

template<>  //function template specialization  //�� ��쿡�� typename �ۼ��ʿ� x  
char getMax(char x, char y) //Ư���� ��츸�� ���� templateȭ �Ѵ�
{                           //getMax �߿��� char�� ���� ��쿡�� �ߵ��ȴ�
    cout << "Warning : comparing chars" << endl;

    return (x > y) ? x : y;
}

int main()
{
    //cout << getMax(1, 2) << endl;   //class templateó�� getMax<double>(1,2)�� ���൵ �ȴ�
    //                                //������ type�� �����ְ� ���� ��쿡!

    //cout << getMax('a', 'b') << endl;   //char�� ���ϴ� ��� ����ڿ��� �˷��ִ°� ����
    //                                    //������ compile time�� �������� ���̹Ƿ� if�� ��� �Ұ����ϴ�(if���� run time�� ã���ش�)
    //                                    //function template specialization ����ϸ� �ȴ�



    Storage<int> nValue(5);
    Storage<double> dValue(6.7);    //double type�� �� scientific notation�� ���� ������ template specialization ����ϸ� �ȴ�
                                    //template specialization ����� �� cpp�� ���� �������� main���� �ν��� ���Ѵ� 
    nValue.print();                 //cpp�� �������� header�� �״�� �ΰ� ���(header only)
    dValue.print();

    return 0;
}
