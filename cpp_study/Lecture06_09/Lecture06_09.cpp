#include <iostream>

using namespace std;

int main()
{
    //int value = 7;
    //int *ptr = &value;

    //cout << uintptr_t(ptr) << endl;
    //cout << uintptr_t(ptr-1) << endl;   // type�� ���� type�� bytes��ŭ �̵�
    //cout << uintptr_t(ptr+3) << endl;   // short�� 2, int�� 4, double�� 8 ...




    //int array[] = { 9, 7 ,5, 3, 1 };
    //
    //int *ptr = array;

    //for (int i = 0; i < 5; ++i)
    //{
    //    //cout << array[i] << " " << uintptr_t(&array[i]) << endl;    //�ּҴ� 4�� ����
    //    cout << *(ptr + i) << " " << uintptr_t(ptr + i) << endl;      //���ٰ� �Ȱ��� ����
    //}



    char name[] = "Jack Jack";

    const int n_name = sizeof(name) / sizeof(char);

    char *ptr = name;

    //for (int i = 0; i < n_name; ++i)
    //{
    //    cout << *(ptr + i);
    //}
    //cout << endl;


    // while,break, ++ptr�� �̿��� ������
    while (true)
    {
        if (*ptr == '\0')
            break;
        cout << *ptr;
        ++ptr;
    }
    cout << endl;
    return 0;
}
