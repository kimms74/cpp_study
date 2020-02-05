//static member variable

#include <iostream>

using namespace std;

//int generateID()    //�Լ��� �θ� ������ 1�� �ö� // �����ѹ��� ������ �� ����
//{
//    static int s_id = 0;
//    return ++s_id;
//}

//class Something
//{
//public:
//    static int s_value;  //class ���ּ��� static member variable�� �ʱ�ȭ ���� �ʴ´�
//};                      //static�� internal linkage������ class�� ����� ���� external linkageó�� ���Ǳ⿡
//                        //������ cpp���� �ȿ��� ���� initialization�ؾ��Ѵ�
//
//int Something::s_value = 1; //static variable�̹Ƿ� s_�� ���δ�
//                            // class�ۿ��� static member variable�� ���� �־��ش�
//                            //define�� header�� �ƴ� cpp�� �صα�!(header�� �ϸ� ������)


//class Something
//{
//public:
//    static const int s_value =1;    //static const�� ��� class �ȿ��� ������ �� �ִ�
//};                                  //��� cpp���Ͽ����� const�̹Ƿ� ���� �ٲ� ������ ���� ������
////const int Something::s_value = 1;



class Something
{
public:
    static constexpr int s_value = 1;    //static constexpr�� ��쿡�� compile time�� ���� ����������
};                                      //design ���� �߿��� single turn�� static const�� ���δ�


int main()
{
    //cout << generateID() << endl;
    //cout << generateID() << endl;
    //cout << generateID() << endl;




    //cout << &Something::s_value << " " << Something::s_value << endl;   //s_value�� instance�� ���� ���� �ּҸ� ������
    //                                                                    //static�� �޸𸮿� �������� �����ϹǷ� �ʱ�ȭ�� �� �� �ּҸ� ������ �����̴�
    //Something st1;
    //Something st2;

    //st1.s_value = 2;
    //cout << &st1 << " " << &st2 << endl;
    //cout << &st1.s_value << " " << st1.s_value << endl;   
    //cout << &st2.s_value << " " << st2.s_value << endl;   //st1�� st2�� �ּҴ� �ٸ����� _value�� �ּҴ� ����

    //Something::s_value = 1024;

    //cout << &Something::s_value << " " << Something::s_value << endl;




    cout << &Something::s_value << " " << Something::s_value << endl;
    return 0;
}
