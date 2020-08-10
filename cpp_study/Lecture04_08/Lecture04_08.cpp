//Enum classes

#include <iostream>

int main()
{
    using namespace std;

    enum class Color
    {
        RED,
        BLUE,
    };

    enum class Fruit
    {
        BANANA,
        APPLE,
    };

    Color color = Color::RED;   //enum과는 다르게 class처럼 정의하므로 Color::RED같은 방식으로 쓴다(다른 enum들끼리 비교를 못하게 scope를 해버리는 것)
    Color color1 = Color::BLUE;
    Fruit fruit = Fruit::BANANA;

    if (color == fruit) // enum class로 만들어두면 data에 해당하는 숫자가 같아도 다른 것으로 인식하게 한다(enum으로 만들었다면 둘이 같다고 인식한다)
        cout << "Color is fruit ? " << endl;    //즉, 다른 enum끼리 비교를 못하게 만들어준다
    if (color == color1) // 같은 enum 끼리는 비교 가능
        cout << "Color is fruit ? " << endl;



    return 0;
}
