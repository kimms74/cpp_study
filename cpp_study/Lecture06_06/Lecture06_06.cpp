#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    //char myString[] = "string";     //���� �������� ���� ��Ÿ���� null character�� �����ִ�

    //for (int i = 0; i < 7; ++i)
    //{
    //    cout << (int)myString[i] << endl;
    //}
    //
    //cout << sizeof(myString) / sizeof(myString[0]) << endl;
    
    
    
    //char myString[255];

    ////cin >> myString;
    //cin.getline(myString, 255);     //���⵵ �ν���

    ////myString[0] = 'A';
    ////myString[0] = '\0';     // '\0'�� null character�� �̰� ������ ����� �ߴ��ع�����

    //cout << myString << endl;

    //int ix = 0;
    //while (true)
    //{
    //    if (myString[ix] == '\0') break;

    //        cout << myString[ix] << " " << (int)myString[ix] << endl;
    //    ++ix;
    //}
    



    char source[] = "Copy this!"; // �����ϸ� const�� ������, �Լ��� �̿��� ���� �����ؾ���
    char dest[50];
    strcpy_s(dest,50, source);

    cout << source << endl;
    cout << dest << endl;


    //strcat() // �� ���ڿ� �ڿ� �ٸ� ���ڿ� �ٿ���
    //strcmp() // �� ���ڿ��� �������� ����
    strcat_s(dest, source);
    cout << dest << endl;

    char dest1[]= "Copy this!";
    cout << strcmp(source, dest1) << endl; // ����!!: ������ 0, �ٸ��� -1�� ������
   
    if (strcmp(source, dest1) == 0)         // �̷��� �ؾ� ���� �� true�� ���´�
    {
        cout << "Same" << endl;
    }


    std::string; // ���������� string�� �̿���
    
    return 0;
}
