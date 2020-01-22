#include <iostream>

using namespace std;

//int doSomething(int n)
//{
//    n = 10;
//
//    cout << n << endl;  //�Լ� ���� int n�� parameter int n�� �ٸ��� ������ ���������鼭 ������� 
//}



//int doSomething(int &n)
//{
//    n = 10;
//
//    cout << n << endl;  //ref�� ����ϸ� �ƿ� ���� ��ü�� �Ѿ�Ƿ� n�� ���� �ּҸ� ������
//}                       //�ּҸ� �����ϱ⸸ �ϹǷ� pointer���� ȿ�����̴�



int doSomething(const int &n)   //n�� doSomething�� ���µ� �Լ��� n�� ���� ���ٲٰ� �ϰ� ������ const�� ���δ�
{                               //c++ 17���� return���� ������ ���� �� �ְ� �� �� ����ϰ� �����ϱ� ���� �̷��� �����
    n = 10;                     //const�� �پ ���� ���� ����

    cout << n << endl;  
}                       

int printElements(int (&arr)[5])    //ref�� array�� ����Ϸ��� array�� ���� �־������
{
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

struct Something
{
    int v1;
    float v2;
};

struct Other
{
    Something st;
};

int main()
{
    //int value = 5;

    //int *ptr = nullptr;
    //ptr = &value;

    //int &ref = value;

    //cout << ref << endl;

    //ref = 10;   // *ptr = 10;   // pointer�� �ٸ��� *�� �Ⱥٿ��� ���� assignment�� �� �ִ�

    //cout << value << " " << ref << endl;

    //cout << &value << endl;
    //cout << &ref << endl;   // &value �� &ref�� �ּҰ��� ����
    //cout << ptr << endl;
    //cout << &ptr << endl;




    //int value = 8;

    //int &ref;   // &ref�� �ݵ�� initalization �ʿ�! �ּҰ��� �����ϹǷ�, literal�� ����(104,"lol"), lvalue�� �־����

    //int x = 6;
    //int &ref = x;

    //const int y = 7;
    //int &ref = y;   //ref�� ���� �ٲٷ��� ���� �ֱ⶧���� const�� �տ� �پ����




    ////re-assignment of refence variable
    //int value1 = 2;
    //int value2 = 4;

    //int &ref1 = value1;

    //cout << ref1 << endl;

    //ref1 = value2;

    //cout << ref1 << endl;




    //int n = 5;

    //cout << n << endl;

    //doSomething(n);     

    //cout << n << endl;      // int n�� ��: 5, int &n�� ��: 10





    //const int length = 5;
    //int arr[length] = { 1, 2, 3, 4, 5 };

    //printElements(arr);




    //Other ot;
    //ot.st.v1 = 1;       //�̸��� ������� ���°� �������� ġ�� ����� ��������
    //int &v1 = ot.st.v1; //refence�� �̿��� �����ϰ� ��Ÿ�� �� �ִ�.
    //v1 = 1;             //�������� ���� ���� ���





    int value = 5;
    int *const ptr = &value;
    int &ref = value;       // *const ptr�� &ref�� �����ϴ�

    *ptr = 10;
    ref = 10;




    return 0;
}
