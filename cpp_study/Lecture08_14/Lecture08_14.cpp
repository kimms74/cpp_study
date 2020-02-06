//Nested types in classes

#include <iostream>

using namespace std;

//class Fruit
//{
//public:
//    enum FruitType          //특정 class에서만 쓰이는 type은 class 안으로 넣어줄 수 있다
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
    enum class FruitType          //특정 class에서만 쓰이는 type은 class 안으로 넣어줄 수 있다
    {                           //다른 곳에서 쓰지지 않는 type이면 class안에 쓰는게 요즘 대세
        APPLE, BANANA, CHERRY,
    };

    class InnerClass            //inner class도 가능
    {

    };

    struct InnerStruct          //inner struct도 가능
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
    //Fruit apple(Fruit::APPLE);      //FruitType이 Fruit class 안에 있으므로 스코프 표시해줘야한다!

    //if (apple.getType() == Fruit::APPLE)
    //{
    //    cout << "Apple" << endl;
    //}

    Fruit apple(Fruit::FruitType::APPLE);      //enum class인 경우 앞에 어떤 enum에 속한지 스코프 표시도 해줘야한다

    if (apple.getType() == Fruit::FruitType::APPLE)
    {
        cout << "Apple" << endl;
    }

    return 0;
}
