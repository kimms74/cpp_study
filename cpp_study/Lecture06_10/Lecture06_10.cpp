#include <iostream>

using namespace std;

const char *getName()
{
    return "Jackjack";
}

int main()
{
    //const char *name = "Jack Jack";     // literal�� ���� �޸� ������ �ȵ����� const�� ���̸� pointer�� ���� �� �ִ�.
    //const char *name2 = "Jack Jack";    // ���� literal�� ��� ���� �ּҸ� ������ ��(ȿ���� ������)
    //const char *name3 = getName();      // return Ÿ�����ε� �����Ϳ� ���� �� �ִ�.

    //cout << uintptr_t(name) << endl;
    //cout << uintptr_t(name2) << endl;
    



    int int_arr[5] = { 1, 2, 3, 4, 5 };
    char char_arr[] = "Hello World";
    const char *name = "Jack Jack";
    
    cout << int_arr << endl;        //�ּҳ���
    cout << char_arr << endl;       //"Hello World"
    cout << name << endl;           //"Jack Jack" //literal�� �����Ϳ� ���� ���������� literal�� ������� ���ش�
    
    

    char c = 'Q';                   

    cout << &c << endl;             // &c�� Ÿ���� char*�̹Ƿ� string�� ����Ϸ��� �ؼ� ��������

    cout << typeid(&c).name() << endl;      //char * // ��ƴ�!
    cout << typeid(*name).name() << endl;
    return 0;
}
