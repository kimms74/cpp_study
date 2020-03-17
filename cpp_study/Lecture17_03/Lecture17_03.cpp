//std::string length and capacity

#include <iostream>

using namespace std;

int main()
{
    //string my_str("012345678"); 
    //                            
    //cout << my_str.size() << endl;  //c-style ���ڿ������� null ���ڿ��� �ϳ� �����־� +1�̴�.(���ڿ��� ������ �ȳ����� Ȯ�ο�)
    //                                //c++���� string�� null ���ڿ��� �����Ƿ� 9���� ���´�(string ��ü�� ���̸� ������ �־ null�� �ʿ����)


    //string my_str("");

    //cout << std::boolalpha;
    //cout << my_str.empty() << endl; //string�� ������� �� ������� Ȯ�ο�
    //                                //c-style���� �ٸ��� null�� �������� ������ Ȯ���� �� �ִ�


    string my_str("01234567");

    cout << my_str.length() << endl;    //8
    cout << my_str.size() << endl;      //8
    cout << my_str.capacity() << endl;  //15    //memory rellocate�� ���ϱ����� ������ �뷮�� �δ� ��
    cout << my_str.max_size() << endl;  //9223372036854775807

    my_str.reserve(1000);               //�ּ��� 1000�̶�� �뷮 Ȯ���ش޶�� ��
    cout << my_str.capacity() << endl;
    return 0;
}
