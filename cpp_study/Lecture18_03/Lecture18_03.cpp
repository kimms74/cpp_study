//Stream classes for strings

#include <iostream>
#include <sstream>  //string stream

using namespace std;

int main()
{
    //stringstream os;

    //os << "Hello, World!";          //<< : insertion operator, >> : extraction operator
    //os << "Hello, World2" << endl;  //�ڷ� �ٴ´�
    ////os.str("Hello, World!\n");      //���� ����ִ� ���� ���������� ���� ����
    ////                                //�ٹٲ�('\n'), endl�� stringstream�� ���� ���� 
    //string str;

    ////os >> str;    //Hello,    //��ĭ�� ������ �߶����
    ////str = os.str(); //Hello, World!    //os�� ��ä�� ������
    ////cout << str << endl;
    //cout << os.str() << endl;   //os.str()�� ���� ��µ� ����



    //stringstream os;

    ////os << "1234567.89";    //�߰��� ���� ������ str1�� �޾Ƶ���
    //os << "12345 67.89";    //�߰��� ���� ������ str1 str2�� ���� �޾Ƶ���

    //string str1;
    //string str2;

    //os >> str1 >> str2;

    //cout << str1 << "|" << str2 << endl;    



    //stringstream os;

    //int i = 12345;
    //double d = 67.89;

    ////os << i << d;   //i�� d ���̿� ���� �ȳ����� os���� �����ɷ� �ν��ؼ� str1���� ��
    //os << i << " " << d;    //i�� d�� str1�� str2�� ���� ��

    //string str1;
    //string str2;

    //os >> str1 >> str2;

    //cout << str1 << "|" << str2 << endl;



    //stringstream os;

    //int i = 12345;
    //double d = 67.89;

    //os << i << " " << d;    

    //int i2;
    //double d2;

    //os >> i2 >> d2; //int�� double�� ���� �޾Ƶ���

    //cout << i2 << "|" << d2 << endl;



    //stringstream os;

    //os << "12345 67.89";

    //int i2;
    //double d2;

    //os >> i2 >> d2; //string���� �־ int�� double�� ���� �޾Ƶ���

    //cout << i2 << "|" << d2 << endl;




    stringstream os;

    os << "12345 67.89";
    
    os.str("");         //os�� �������
    os.str(string());   //���ٰ� �Ȱ���
    os.clear();         //state���� �ʱ�ȭ�� �ع�����(���� ���ǿ��� ����)

    cout << os.str() << endl;   //str()���� parameter�� ������ �� ������ �������ִµ�
                                //parameter�� ������ ������ �ִ� ���� return ����





    return 0;
}