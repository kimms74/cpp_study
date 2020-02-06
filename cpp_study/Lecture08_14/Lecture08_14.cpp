//Nested types in classes

#include <iostream>

using namespace std;

//class Fruit
//{
//public:
//    enum FruitType          //Ư�� class������ ���̴� type�� class ������ �־��� �� �ִ�
//    {
//        APPLE, BANANA, CHERRY,
//    };
//
//private:
//    FruitType m_type;
//
//public:
//    Fruit(FruitType type) : m_type(type)
//    {}
//
//    FruitType getType() { return m_type; }
//};

class Fruit
{
public:
    enum class FruitType          //Ư�� class������ ���̴� type�� class ������ �־��� �� �ִ�
    {                           //�ٸ� ������ ������ �ʴ� type�̸� class�ȿ� ���°� ���� �뼼
        APPLE, BANANA, CHERRY,
    };

    class InnerClass            //inner class�� ����
    {

    };

    struct InnerStruct          //inner struct�� ����
    {

    };

private:
    FruitType m_type;

public:
    Fruit(FruitType type) : m_type(type)
    {}

    FruitType getType() { return m_type; }
};


int main()
{
    //Fruit apple(Fruit::APPLE);      //FruitType�� Fruit class �ȿ� �����Ƿ� ������ ǥ��������Ѵ�!

    //if (apple.getType() == Fruit::APPLE)
    //{
    //    cout << "Apple" << endl;
    //}

    Fruit apple(Fruit::FruitType::APPLE);      //enum class�� ��� �տ� � enum�� ������ ������ ǥ�õ� ������Ѵ�

    if (apple.getType() == Fruit::FruitType::APPLE)
    {
        cout << "Apple" << endl;
    }

    return 0;
}
