#include <iostream>

using namespace std;
int main()
{
    //int value = 5;
    //int *ptr = &value;
    //*ptr = 6;           // de-referencing�� ���� assignment ����



    //const int value = 5;
    //const int *ptr = &value;    //const int�� pointer�� ���� ����
    //// *ptr = 6;                //de-refence�� ���� assignment �Ұ���

    //cout << *ptr << endl;
    
    
    
    //int value = 5;
    //const int *ptr = &value;    //const int *�� int�� �ּ� �ִ� �� ����
    ////*ptr = 6;                 //de-refence�� ���� assignment �Ұ���
    //value = 6;                  //value�� �� ���� ���� -> ptr ���� ����

    //cout << value << " " << *ptr << endl;   // 6 6



    //int value1 = 5;
    //const int *ptr = &value1;   // ptr�� �ּҸ� �ȹٲ۴ٴ� ������ ptr�� ����Ǵ� �ּҴ� ���ص� ��

    //int value2 = 6;
    //ptr = &value2;
    //// *ptr =8 // �Ұ��� const�� �پ����Ƿ�


    
    //int value = 5;
    //int *const ptr = &value;

    //*ptr = 10;                  //pointer�� ����� �ּҰ� ����Ű�� ���� �ٲ� �� �ִ�.
    //cout << *ptr << endl;

    //int value2 = 8;
    ////ptr = &value2;              // pointer�� ����Ǵ� �ּҰ��� ���ٲ۴�.



    //int value = 5;
    //const int *const ptr;           //�տ� const�� �پ����Ƿ� initialization���ϸ� �ȵ�




    int value = 5;
    const int *ptr1 = &value;       //const int *: ��°��� ���
    int *const ptr2 = &value;       //int * const: ptr�� ���
    const int *const ptr3 = &value; //const int *const: ��°�, ptr �� �� ���



    return 0;
}
