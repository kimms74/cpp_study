#include <iostream>
#include <string>

using namespace std;

//void print(int x = 1024)   // default argument
//{
//    cout << x << endl;
//}

//void print1(int x, int y = 10, int z)   //��� parameter�� default���� ������ ������ parameter���� default ���� �־���Ѵ�

//void print2(int x = 10, int y = 20, int z = 30) //in header file
//void print2(int x = 10, int y = 20, int z = 30) // default ���� ����� ���� �� �߿� �ϳ������� �־���Ѵ�
//{                                               // ���� �Լ� ���� default ���� �־��ش�
//    cout << x << " " << y << " " << z << endl;
//}


//void print(std::string str) {}
//void print(char ch = ' ') {}


void print(int x) {}
void print(int x, int y = 20) {}

int main()
{
    //print(10);
    //print();


    //print2();
    //print2(100);
    //print2(100, 200);
    //print2(100, 200, 300);




    //print(); //char ' '�� ���� parameter char�� �ν��Ѵ�




    print(10); //ambiguous

    //default value ���: log ������ ������ �� �̸��� �⺻������ log.txt�ϰų�, fps�� �Ҷ� 30�� �־��ְų� ..
    return 0;
}
