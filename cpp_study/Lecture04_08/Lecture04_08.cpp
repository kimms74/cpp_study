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

    Color color = Color::RED;   //enum���� �ٸ��� classó�� �����ϹǷ� Color::RED���� ������� ����(�ٸ� enum�鳢�� �񱳸� ���ϰ� scope�� �ع����� ��)
    Color color1 = Color::BLUE;
    Fruit fruit = Fruit::BANANA;

    if (color == fruit) // enum class�� �����θ� data�� �ش��ϴ� ���ڰ� ���Ƶ� �ٸ� ������ �ν��ϰ� �Ѵ�(enum���� ������ٸ� ���� ���ٰ� �ν��Ѵ�)
        cout << "Color is fruit ? " << endl;    //��, �ٸ� enum���� �񱳸� ���ϰ� ������ش�
    if (color == color1) // ���� enum ������ �� ����
        cout << "Color is fruit ? " << endl;



    return 0;
}
