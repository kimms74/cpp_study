#include <iostream>
#include <typeinfo>
#include <string>

//int computeDamage(int weapon_id)
//{
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
    COLOR_BLACK = -3,
    COLOR_RED,
    COLOR_BLUE = 5,
    COLOR_GREEN,
    COLOR_SKYBLUE,
};

enum Feeling
{
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

    Color my_color1 = static_cast<Color>(3);

    cout << my_color1 << endl;




    //cin >> my_color; // �Ұ���

    //int in_number;
    //cin >> in_number;
    //if (in_number == 0) my_color = COLOR_BLACK;
    //// ...


    string str_input;

    std::getline(cin, str_input); // string ����
    
    if (str_input == "COLOR_BLACK") // ���α׷��ӵ� ����̱� ������ ��Ÿ�߻� ������
        my_color = static_cast<Color>(0);

    return 0;
}
