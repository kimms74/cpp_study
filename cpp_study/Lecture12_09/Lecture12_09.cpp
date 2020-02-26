//Object slicing & reference_wrapper

#include <iostream>
#include <vector>
#include <functional>

using namespace std;

class Base
{
public:
    int m_i = 0;

    virtual void print()
    {
        cout << "I'm Base" << endl;
    }
};

class Derived : public Base
{
public:
    int m_j = 1;

    virtual void print() override
    {
        cout << "I'm Derived" << endl;
    }
};

//void doSomething(Base& b) //������ ����
void doSomething(Base b)    //�� ��쵵 ���簡 �ǹǷ� �������� �����
{
    b.print();
}

int main()
{
    //Derived d;
    ////Base& b = d;  //d�� �״�� ���Ƿ� �������� �̿��� I'm Derived ��µ�
    //Base b = d;     //d�� ����� ���Ƿ� Base class�� �´� ������ �� �������� �����, �������� �������� �ȴ�. I'm Base ��µ�           
    //                //�̸� slicing�̶� �ϰ� �ǵ������� �� ����� �� ���� �ּ��� ���� ��������Ѵ�!(�Ƹ� ���� ������?)
    //b.print();
    //   
    //doSomething(d);



    //�ʺ��ڰ� �Ǽ� �����ϴ� ��
    Base b;
    Derived d;

    //std::vector<Base> my_vec;   //slicing �߻�

    //std::vector<Base*> my_vec;                    //pointer�� vector�� �ִ� ��
    //my_vec.push_back(&b);
    //my_vec.push_back(&d);

    //for (auto& ele : my_vec)
    //    ele->print();

    //vector<std::reference_wrapper<int>> my_vec;
    std::vector<reference_wrapper<Base>> my_vec;        //reference�� vector�� �ִ� ��
    my_vec.push_back(b);
    my_vec.push_back(d);

    for (auto& ele : my_vec)
        ele.get().print();  //reference_wrapper�� ���� object�� �޾ƿ��� ���� get()�� ����Ѵ�

    return 0;
}
