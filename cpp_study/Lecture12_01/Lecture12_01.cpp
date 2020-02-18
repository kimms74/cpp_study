//Pointers and references to the base class of derived objects(다형성)

#include <iostream>
#include <string>

using namespace std;

//class Animal
//{
//protected:
//    string m_name;
//
//public:
//    Animal(std::string name_in)
//        : m_name(name_in)
//    {}
//
//public:
//    string getName() { return m_name; }
//
//    void speak() const
//    {
//        cout << m_name << " ??? " << endl;
//    }
//};

class Animal
{
protected:
    string m_name;

public:
    Animal(std::string name_in)
        : m_name(name_in)
    {}

public:
    string getName() { return m_name; }

    virtual void speak() const              //앞에 virtual을 추가해주면 다형성을 이용할 수 있다
    {                                       //base class에 대한 pointer object이더라도 derived class인것처럼 행동한다
        cout << m_name << " ??? " << endl;
    }
};

class Cat : public Animal
{
public:
    Cat(string name)
        :Animal(name)
    {}

    void speak() const
    {
        cout << m_name << " Meow " << endl;
    }
};

class Dog : public Animal
{
public:
    Dog(string name)
        :Animal(name)
    {}

    void speak() const
    {
        cout << m_name << " Woof " << endl;
    }
};

int main()
{
    //Animal animal("my animal");
    //Cat cat("my cat");
    //Dog dog("my dog");

    //animal.speak();
    //cat.speak();
    //dog.speak();

    //Animal* ptr_animal1 = &cat; //derived class를 base class의 pointer를 사용해 casting 시키면 자기가 base class인줄 알고 작동을 한다
    //Animal* ptr_animal2 = &dog;

    //ptr_animal1->speak(); //pet_animals1은 pointer이므로 -> 사용
    //ptr_animal2->speak();


    Cat cats[] = { Cat("cat1"), Cat("cat2"), Cat("cat3"), Cat("cat4") ,Cat("cat5") };
    Dog dogs[] = { Dog("dog1"), Dog("dog2") };

    for (int i= 0; i < 5; ++i)
        cats[i].speak();

    for (int i = 0; i < 2; ++i)     //동물의 종류와 수가 많아지면 일일이 치기 힘들어진다
        dogs[i].speak();

    Animal* my_animals[] = {&cats[0],&cats[1],&cats[2],&cats[3],&cats[4],&dogs[0], &dogs[1]};

    for (int i = 0; i < 7; ++i)
        my_animals[i]->speak(); //my_animals[i]는 pointer이므로 -> 사용


    //다형성: base class의 pointer variable에 derived class instance의 pointer를 할당할 수 있다
    //따라서 instance의 runtime types에 따라 함수의 기능에 차이를 보인다(virtual function을 통한 override 사용)

    return 0;
}
