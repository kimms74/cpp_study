//Enumerated types  //주로 헤더파일에 만들어서 사용한다

#include <iostream>
#include <typeinfo>
#include <string>

//int computeDamage(int weapon_id)  //무기에 해당하는 번호를 붙이는 것
//{                                 //이렇게 하면 불편하다
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
    COLOR_BLACK = -3,//다음부터는 -2,-1 ... 나온다
    COLOR_RED,
    COLOR_BLUE = 5, //다음부터는 6,7,...나온다
    COLOR_GREEN,
    COLOR_SKYBLUE,
};

enum Feeling    //만약 enum Fruit안에 BLUE라는 것이 있으면 오류 발생한다
{               //다른 enum이라도 같은 이름을 가진 data를 만들 수 없다(대신 enum class 사용하기)
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

    //Color my_color2 = 3;  //Color에 int를 넣을 수 없다   //숫자대신에 이름을 이용하려고 enum을 쓰는 것이므로!

    Color my_color1 = static_cast<Color>(3);    //변환으로는 넣을 수 있음

    cout << my_color1 << endl;




    //cin >> my_color; // 불가능

    //int in_number;    //우회해서 cin으로 받을 수는 있지만 귀찮다
    //cin >> in_number;
    ////if (in_number == 0) my_color = COLOR_BLACK;
    //if (in_number == static_cast<Color>(0)) my_color = static_cast<Color>(0);
    //// ...


    string str_input;   //문자열로도 입력받을 수 있다

    std::getline(cin, str_input); // string 비추
    
    if (str_input == "COLOR_BLACK") // 프로그래머도 사람이기 때문에 오타발생 가능하므로 string으로 받는 건 비추한다
        my_color = static_cast<Color>(0);

    return 0;
}
