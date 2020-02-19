//Pure virtual functions, abstract base classes, and interface classes

#include <iostream>
#include <string>

using namespace std;

//Pure virtual function: body가 없는 class member function
//Abstract base class: pure virtual function이 포함이 된 base class(그 클래스는 object를 생성할 수 없다)
//Interface class: pure virtual function으로만 이루어진 class

class Animal
{
protected:
    string m_name;

public:
    Animal(string name_in)
        :m_name(name_in)
    {}

public:
    string getName() { return m_name; }

    virtual void speak() const = 0;     //function의 body를 없앰( ??? 뜨는게 이상하므로)
};                                     //body가 없고 =0이 붙은 함수를 pure virtual function이라고 함
                                        //pure virtual function은 class를 설계할 때 상속구조 자체를 한꺼번에 설계할 수 있도록 도와주는 문법이다 


//void Animal::speak() const              //the body of the pure virtual function
//{                                       //pure virtual function이므로 구현할 수는 있지만 호출안된다
//    cout << m_name << "???" << endl;    //쓸모 없는 코드!
//}

class Cat : public Animal
{
public:
    Cat(string name_in)
        :Animal(name_in)
    {}

    void speak() const
    {
        cout << m_name << " Meow" << endl;
    }
};

class Dog : public Animal
{
public:
    Dog(string name_in)
        :Animal(name_in)
    {}

    void speak() const
    {
        cout << m_name << " Woof" << endl;
    }
};

class Cow : public Animal
{
public:
    Cow(string name_in)
        :Animal(name_in)
    {}

    void speak() const          //pure virtual function이 있을 경우 derived class에서 그 함수를 정의하지 않으면 object를 만들 수 없다
    {
        cout << m_name << " Moooo" << endl;
    }
};



class IErrorLog     //pure virtual function으로만 이루어진 interface class
{
public:
    virtual bool reportError(const char* errorMessage) = 0;

    virtual ~IErrorLog() {}
};

class FileErrorLog : public IErrorLog
{
public:
    bool reportError(const char* errorMessage) override
    {
        cout << "Writing error to a file" << endl;
        return true;
    }
};

class ConsoleErrorLog : public IErrorLog
{
public:
    bool reportError(const char* errorMessage) override
    {
        cout << "Printing error to a file" << endl;
        return true;
    }
};

void doSomething(IErrorLog& log)        //reportError 함수 실행시킴
{
    log.reportError("Runtime error!!");
}

int main()
{
    ////Animal ani("Hi");   //Animal은 abstract base class 이기때문에 object 생성 불가


    //Cow cow("Hi");      //pure virtual function이 있을 경우 derived class에서 그 함수를 정의하지 않으면 object를 만들 수 없다



    FileErrorLog file_log;
    ConsoleErrorLog console_log;

    doSomething(file_log);      //parameter가 base class이면 derived class도 넣을 수 있다
    doSomething(console_log);   //doSomething 함수를 if문을 사용해 짜면 번거롭지만 interface class를 쓰면 편해진다 
                                //매우 유용한 기능!, 재활용도 가능하다
    return 0;
}
