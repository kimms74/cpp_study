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

    if (color == fruit) // �ٸ� enum ������ �� �ȵǰ� ��
        cout << "Color is fruit ? " << endl;
    if (color == color1) // ���� enum ������ �� ����
        cout << "Color is fruit ? " << endl;



    return 0;
}
