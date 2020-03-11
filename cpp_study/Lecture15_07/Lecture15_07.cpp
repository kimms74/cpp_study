//Circular dependency issues with std::shared_ptr, and std::weak_ptr

#include <iostream>
#include <memory>
#include <string>

using namespace std;

//class Person
//{
//    std::string m_name;
//    std::shared_ptr<Person> m_partner;    
//
//public:
//    Person(const std::string& name) : m_name(name)
//    {
//        std::cout << m_name << " created\n";
//    }
//
//    ~Person()
//    {
//        std::cout << m_name << " destroyed\n";
//    }
//
//    friend bool partnerUp(std::shared_ptr<Person>& p1, std::shared_ptr<Person>& p2)
//    {
//        if (!p1 || !p2)
//            return false;
//
//        p1->m_partner = p2;
//        p2->m_partner = p1;
//
//        std::cout << p1->m_name << " is partnered with " << p2->m_name << "\n";
//
//        return true;
//    }
//
//    const std::string& getName() const
//    {
//        return m_name;
//    }
//};




class Person
{
    std::string m_name;
    std::weak_ptr<Person> m_partner;    //weak_ptr을 사용하면 순환 의존성 문제를 해결할 수 있다

public:
    Person(const std::string& name) : m_name(name)
    {
        std::cout << m_name << " created\n";
    }

    ~Person()
    {
        std::cout << m_name << " destroyed\n";
    }

    friend bool partnerUp(std::shared_ptr<Person>& p1, std::shared_ptr<Person>& p2)
    {
        if (!p1 || !p2)
            return false;

        p1->m_partner = p2;
        p2->m_partner = p1;

        std::cout << p1->m_name << " is partnered with " << p2->m_name << "\n";

        return true;
    }

    const std::shared_ptr<Person> getPartner() const
    {
        return m_partner.lock();    //weak_ptr를 쓸 때는 lock()을 반드시 해줘야함
    }                               //lock(): weak_ptr을 shared_ptr로 바꿔줌

    const std::string& getName() const
    {
        return m_name;
    }
};

int main()
{
    auto lucy = std::make_shared<Person>("Lucy");
    auto ricky = std::make_shared<Person>("Ricky");

    partnerUp(lucy, ricky); //lucy와 ricky가 서로 파트너가 돼 컴파일이 끝날 때 destructor가 실행이 안된다




    auto lucy = std::make_shared<Person>("Lucy");
    auto ricky = std::make_shared<Person>("Ricky");

    partnerUp(lucy, ricky);

    std::cout << lucy->getPartner()->getName() << std::endl;    //weak_ptr을 사용하면 weak_ptr을 shared_ptr로 바꿔주는 과정을 한번 더 해야한다



    return 0;
}
