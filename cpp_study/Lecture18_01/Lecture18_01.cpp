//Input with istream

#include <iostream>
#include <string>
#include <iomanip>  // input/output manipulators

using namespace std;

int main()
{
    //cout << "Enter a number" << endl;

    //int i;
    //cin >> i;

    //cout << i << endl;



    //���ڸ� �ѹ��� �޴� ���
    //char buf[5];

    ////cin >> buf;     //10���� �Ѿ�� �Է��ϸ� �����߻��Ѵ�
    //cin >> setw(5) >> buf;  //cin�� buffer�� ������ �ִ�, �Է��� �� ���� buffer�� ���� ���� setw()�� ��ŭ�� buf�� ���� �ȴ�
    //                        //�������� null-character�� ���Ƿ� abcdefg�� �Է��ϸ� abcd�� ������
    //                        //���� �������� ��� buffer�� ���� �ִ´�
    //cout << buf << endl;

    //cin >> setw(5) >> buf;
    //cout << buf << endl;

    //cin >> setw(5) >> buf;
    //cout << buf << endl;



    //int i;
    //float f;

    //cin >> i >> f;      //��ĭ���� i�� f�� �� ���� ������ �� �� �ִ�

    //cout << i << " " << f << endl;



    //���ڸ� �ѱ��ھ� �޴� ���
    //char ch;

    ////while (cin >> ch)   //�׳� �޾ƿ� ���� ��ĭ�� ���ֹ���
    ////    cout << ch;     //ex) Hello world -> Helloworld

    //while (cin.get(ch)) //cin.get()�� �̿��ϸ� ��ĭ�� �޾Ƶ���
    //    cout << ch;     //ex) Hello, world -> Hello, world



    //char buf[5];

    //cin.get(buf, 5);    //buf��� variable�� 5���� �ְڴ�
    //                    //���� null-character ���ڸ� ���� ����
    //cout << cin.gcount() << buf << endl;    //cin.gcout(): ����ڸ� �о�鿴������ �˷���(null-character����)

    //cin.get(buf, 5);    //buffer�� ���� �������� �޾Ƶ��δ�
    //cout << cin.gcount() << buf << endl;




    //char buf[5];

    //cin.getline(buf, 5);    //�� ���� ��ä�� �޾Ƶ���
    //cout << cin.gcount() << buf << endl;

    //cin.getline(buf, 5);    //cin.get()�� �޸� buffer�� �������� �ʴ´�(ù��° getline���� �Է��� ���� �� �������� �����̴�)
    //cout << cin.gcount() << buf << endl;




    //char buf[100];

    //cin.get(buf, 100);      //hello�� ������ 5 hello��� ����
    //cin.getline(buf, 100);  //hello�� ������ 6 hello��� ����   //getline���� �ٹٲ� character���� ���� �о���̱� �����̴�
    //cout << cin.gcount() << buf << endl;

    //cin.getline(buf, 100);
    //cout << cin.gcount() << buf << endl;




    //string buf;     //string�� ����� ��� buffer ����� ��ξ��ص� �ȴ�(���ϴ�)

    //getline(cin, buf);  //�׳� getline�� �� ���� cin�� parameter�� ����
    //cout << cin.gcount() << " " << buf << endl; //cin.getline�� �ƴ� getline���� ��⶧���� cin.gcount()�� 0�� ����




    //char buf[1024];

    //cin.ignore();   //cin.ignore(): �Է��� �� �����ϴ� ���̴�, default�� 1��, ���� ������ ���� �� ��ŭ ����

    //cin >> buf;
    //cout << buf << endl;



    //char buf[1024];

    //cout << (char)cin.peek() <<endl;    //cin.peek(): �Է��� �� ù���� Ȯ���ϴ� ��, but buffer���� �״�� �����ִ�

    //cin >> buf;
    //cout << buf << endl;




        
    //char buf[1024];

    //cin >> buf;
    //cout << buf << endl;    ///hello

    //cin.unget();            //�Է��� ���� ������ ���ڸ� �ٽ� buffer�� �־��ִ� ��

    //cin >> buf;             
    //cout << buf << endl;    //o




    char buf[1024];

    cin >> buf;
    cout << buf << endl;    ///hello

    cin.putback('A');            //putback()���� ���ڸ� buffer�� �������� �����ִ� ��

    cin >> buf;
    cout << buf << endl;




    return 0;
}
