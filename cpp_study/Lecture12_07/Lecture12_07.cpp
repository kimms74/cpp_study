//Pure virtual functions, abstract base classes, and interface classes

#include <iostream>
#include <string>

using namespace std;

//Pure virtual function: body�� ���� class member function
//Abstract base class: pure virtual function�� ������ �� base class(�� Ŭ������ object�� ������ �� ����)
//Interface class: pure virtual function���θ� �̷���� class

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

    virtual void speak() const = 0;     //function�� body�� ����( ??? �ߴ°� �̻��ϹǷ�)
};                                     //body�� ���� =0�� ���� �Լ��� pure virtual function�̶�� ��
                                        //pure virtual function�� class�� ������ �� ��ӱ��� ��ü�� �Ѳ����� ������ �� �ֵ��� �����ִ� �����̴� 


//void Animal::speak() const              //the body of the pure virtual function
//{                                       //pure virtual function�̹Ƿ� ������ ���� ������ ȣ��ȵȴ�
//    cout << m_name << "???" << endl;    //���� ���� �ڵ�!
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

    void speak() const          //pure virtual function�� ���� ��� derived class���� �� �Լ��� �������� ������ object�� ���� �� ����
    {
        cout << m_name << " Moooo" << endl;
    }
};



class IErrorLog     //pure virtual function���θ� �̷���� interface class
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

void doSomething(IErrorLog& log)        //reportError �Լ� �����Ŵ
{
    log.reportError("Runtime error!!");
}

int main()
{
    ////Animal ani("Hi");   //Animal�� abstract base class �̱⶧���� object ���� �Ұ�


    //Cow cow("Hi");      //pure virtual function�� ���� ��� derived class���� �� �Լ��� �������� ������ object�� ���� �� ����



    FileErrorLog file_log;
    ConsoleErrorLog console_log;

    doSomething(file_log);      //parameter�� base class�̸� derived class�� ���� �� �ִ�
    doSomething(console_log);   //doSomething �Լ��� if���� ����� ¥�� ���ŷ����� interface class�� ���� �������� 
                                //�ſ� ������ ���!, ��Ȱ�뵵 �����ϴ�
    return 0;
}
