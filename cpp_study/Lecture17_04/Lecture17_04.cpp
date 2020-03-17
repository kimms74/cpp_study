//std::string character access and conversion to C-style arrays

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    //string my_str("abcdefg");

    //cout << my_str[0] << endl;
    //cout << my_str[3] << endl;

    //my_str[3] = 'Z';            //vector�� �����ϴ�

    //cout << my_str << endl;




    //string my_str("abcdefg");

    ////my_str[100] = 'X';      //error �߻�

    //try {
    //    //my_str[100] = 'X';    //[](���ȣ operator overloading)�� ���� ��������� ����ó���� ���Ѵ�
    //    my_str.at(100) = 'X';   //exception �߻���Ŵ
    //}                           //vector������ ���������� []�� at()�� �ִ�
    //                            //�����ս��� �߿�� �� ��� []�� ����ϰ�, �������� �߿�� �� ��� at()�� ���
    //
    //catch (std::exception & e)
    //{
    //    cout << e.what() << endl;
    //}




    //string my_str("abcdefg");

    //cout << my_str.c_str() << endl;
    ////cout << my_str.data() << endl;    //data()�� c_str()�� ���� �����ϴ�

    ////cout << my_str.c_str()[6] << endl;  //my_str.c_str()��ü�� pointer�̹Ƿ� [6]����
    //const char* arr = my_str.c_str();   //�򰥸��� ���� ����� ����ϱ�
    //cout << (int)arr[6] << endl;    //103
    //cout << (int)arr[7] << endl;    //0     //string ��ü���� null-character�� ����ȵ�����, c_str()�� �������� null�� �����






    string my_str("abcdefg");

    char buf[20];

    my_str.copy(buf, 5, 1); //copy(ù��°,�ι�°,����°), ù��°:�����ϰ� ���� ����, �ι�°: ����� ������ ����
                                                        //����°: ��𼭺��� �����Ұ���

    cout << buf << endl;    //copy�� �����ϸ� null character�� �ȵ� ���� �𸣹Ƿ� �����߻�
    
    buf[5] = '\0';          //���� null�� �־��ָ� �� �۵��Ѵ�
    cout << buf << endl;

    return 0;
}
