#include <iostream>

using namespace std;

int g_i = 0;        //���������� ���� �޸𸮿� �ڸ� ����

int second(int x)   //third stack frame //stack�� �ؿ������� �׾Ƽ� ���������� �޸𸮸� �ݳ��Ѵ�
{                   
    return 2 * x;
}

//int first(int x)    //second stack frame
//{
//    int y = 3;
//    return second(x + y);   //second()�� �θ���
//}

void initArray()
{
    int *ptr2 = new int[1000];
    //delete[] ptr2;    
}

int main()  //first stack frame
{
    //int a = 1, b;
    //b = first(a);   //first()�� �θ���
    //cout << b << endl;



    //
    //int array[1000000];  //stack overflow �߻�(���ȣ�� �Լ� ���� �߻��� �� �ִ�)
    //                    //���������� ���̱� ������ �ӵ��� �������� �޸� �뷮�� ����




    //int *ptr = nullptr;
    //ptr = new int[1000000]; //���� �޸� �Ҵ��� heap���� �Ͼ��
    //                        //���ʴ�� ������ �ʾ� �������� �뷮�� ũ��
    //delete[] ptr;           //heap�� �ִ� �޸𸮸� �ݳ��Ѵ�

    //ptr = nullptr;          //�ݳ��� �� ptr�� �θ��� trash���� �����⶧���� nullptr�� �������



    initArray();    //�Լ��� �ҷ����� ���� ������ stack�� �ݳ������� delete�� ���߱⶧���� heap���� �޸𸮸� ��� �ִ�
                    //delete�� ���ϰ� �Ǹ� heap�� ��� �޸𸮸� ��� �ְ� �Ǿ� �ᱹ �������� �� �ִ�
                    //memory leak�߻�

    return 0;
}
