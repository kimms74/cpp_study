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

    Color color = Color::RED;
    Color color1 = Color::BLUE;
    Fruit fruit = Fruit::BANANA;

    if (color == fruit) // 다른 enum 끼리는 비교 안되게 함
        cout << "Color is fruit ? " << endl;
    if (color == color1) // 같은 enum 끼리는 비교 가능
        cout << "Color is fruit ? " << endl;



    return 0;
}
