//function overloading

#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x + y;
}

int add(double x, double y) //function �̸��� ���Ƶ� parameter�� �ٸ��� �ٸ� �Լ��� �ν��Ѵ�
{                           
    return x + y;
}



//int getRandomValue() {}
//
//double getRandomValue() {}  //��� return type�� �޶� parameter�� ������ ���� �Լ��� �ν��Ѵ�
//
////���
//void getRandom(int &x) {}       //call by reference�� �̿��� void return type �Լ��� �����Ѵ�
//
//void getRandom(double &x) {}    



//typedef int my_int;
//
//void print(int x) {}
//void print(my_int) {}   //typedef�� �̸��� �ٲ� ���� parameter�� ����ϴ� ��� �Ȱ��� �ɷ� �ν��Ѵ�


//�μ� ������ ���� case
void print(char *value) {}
void print(int value) {}

//�� �� ������ case
void print1(unsigned int value) {}
void print1(float value) {}

int main()
{
    //add(1, 2);      //� add�� ��������� compile�� �� �����ȴ�
    //add(3.0, 4.0);




    //int x;
    //getRandom(x);   //����: x�� return���� ���� �������� ����, input���� ������ �ȵ�
    //                //�Լ��� Ȯ���غ��� �ȴ�
    ////python������ x = getRandom()���� ����Ѵ�
    ////c++������ int x = getRandomInt(x);, =getRandom(int());�� �ؾ��Ѵ�




    //print(0);
    //print('a');     // parameter�� int�� �ν��Ѵ�
    //print("a");     // string�� ��� �ν� ���Ѵ�    
    //                //�ذ��: �Լ� parameter�� const char *�� �� ��� string���� �ν��Ѵ�




    print1('a');        //ambiguous //�ذ�å:casting ��� ex) unsigned int('a')
    print1(0);          //ambiguous //�ذ�å:0u(unsigned �ǹ�)
    print1(3.14159);    //ambiguous //�ذ�å:3.141592f

    //�Լ� overloading�� ������ �ϱ⺸�� ��Ȯ�� �������ִ� �͵� �߿��ϴ�
    //�ʿ��ϴٸ� �ּ��� �� �����ִ� ���� ������

    return 0;
}
