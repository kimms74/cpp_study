//Enumerated types  //�ַ� ������Ͽ� ���� ����Ѵ�

#include <iostream>
#include <typeinfo>
#include <string>

//int computeDamage(int weapon_id)  //���⿡ �ش��ϴ� ��ȣ�� ���̴� ��
//{                                 //�̷��� �ϸ� �����ϴ�
//    if (weapon_id == 0) //sword
//    {
//        return 1;
//    }
//
//    if (weapon_id == 1) // hammer
//    {
//        return 1;
//    }
//}

enum Color // user-defined data types
{
    COLOR_BLACK = -3,//�������ʹ� -2,-1 ... ���´�
    COLOR_RED,
    COLOR_BLUE = 5, //�������ʹ� 6,7,...���´�
    COLOR_GREEN,
    COLOR_SKYBLUE,
};

enum Feeling    //���� enum Fruit�ȿ� BLUE��� ���� ������ ���� �߻��Ѵ�
{               //�ٸ� enum�̶� ���� �̸��� ���� data�� ���� �� ����(��� enum class ����ϱ�)
    HAPPY,
    JOY,
    TIRED,
    BLUE,
};

int main()
{
    using namespace std;

    //Color paint = COLOR_BLACK;
    //Color house(COLOR_BLUE);
    //Color apple{ COLOR_RED };

    Color my_color = COLOR_BLACK;
    
    cout << my_color << " " << COLOR_GREEN << endl;

    
    

    int color_id = COLOR_RED;

    //Color my_color2 = 3;  //Color�� int�� ���� �� ����   //���ڴ�ſ� �̸��� �̿��Ϸ��� enum�� ���� ���̹Ƿ�!

    Color my_color1 = static_cast<Color>(3);    //��ȯ���δ� ���� �� ����

    cout << my_color1 << endl;




    //cin >> my_color; // �Ұ���

    //int in_number;    //��ȸ�ؼ� cin���� ���� ���� ������ ������
    //cin >> in_number;
    ////if (in_number == 0) my_color = COLOR_BLACK;
    //if (in_number == static_cast<Color>(0)) my_color = static_cast<Color>(0);
    //// ...


    string str_input;   //���ڿ��ε� �Է¹��� �� �ִ�

    std::getline(cin, str_input); // string ����
    
    if (str_input == "COLOR_BLACK") // ���α׷��ӵ� ����̱� ������ ��Ÿ�߻� �����ϹǷ� string���� �޴� �� �����Ѵ�
        my_color = static_cast<Color>(0);

    return 0;
}
