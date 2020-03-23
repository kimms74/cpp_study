//Lamdas(�͸��Լ�) & std::function & std::bind & for_each

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>    //for_each
#include <functional>

using namespace std;

void goodbye(const string& s)
{
    cout << "Goodbye " << s << endl;
}

class Object
{
public:
    void hello(const string& s)
    {
        cout << "Hello " << s << endl;
    }
};

int main()
{
    //// lambda-introducer                //[]
    //// lambda-parameter-declaratioin    //(const int& i)
    //// lambda-return-type-cluase        //-> void
    //// compound-statement               //{cout << "Hello, World!" << endl; };
    //auto func = [](const int& i) -> void {cout << "Hello, World!" << endl; };

    //func(123);

    //[](const int& i) -> void {cout << "Hello, World!" << endl; } (1234);    //������ �ǹ��� lambdas�� �͸��� �� ��Ÿ����
    //                                                                        //�Լ��� �ۼ��� �� �ڿ� (parameter)�� ���̸� �ٷ� ������ �ȴ�  
    //                                                                        //�Լ� �ۼ��� ���ŷο� ���� �����Լ��� ����Ͽ� �����ϰ� �ۼ� �����ϴ�
    //{
    //    string name = "JackJack";
    //    [&]() {std::cout << name << endl; } (); //[]���� & �ǹ�: {}�� �����ִ� ���� �ȿ��� ���ٿ� �ִ� ������ reference�� �����´�
    //}                                           //&(reference), this(class), =(copy) ��� ���������� �ִ�
    //                                            //scope�ȿ� �ִ� ������ parameter�� �ƴ� lambda-introducer�� �����´�

    //vector<int> v;
    //v.push_back(1);
    //v.push_back(2);                                     //v�� ���ҵ鿡 ���ؼ� ���� ������ �Ǵ� ����� �����ϱ� ���� ���
    //                                                    //������ ����� ���� �����ϰ� �Լ� �����͸� ����ְ��ϴ� ������ �����ϸ� �ʹ� ���ŷο�����
    ////auto func2 = [](int val) {cout << val << endl; };
    ////for_each(v.begin(), v.end(), func2);                //�Լ� ������(func2)�� parameter�� �ִ´�
    //
    //for_each(v.begin(), v.end(), [](int val) {cout << val << endl;});   //���� lambda�Լ��� �̷������� ����Ѵ�

    //cout << []() -> int{ return 1; }() << endl;




    auto func2 = [](int val) {cout << val << endl; };   //lambda�Լ��� ��� return type�� void�̸� �����Ѵ�
    std::function<void(int)> func3 = func2;     //std::function : function pointer�� ���� ü��ȭ���ѳ��� ��    //template: <return type(parameter)>
    func3(123);

    std::function<void()>func4 = std::bind(func3, 456); //std::bind�� ����ϸ� std::function�� parameter�� �ȳ־ �ȴ�
    func4();                                            //456�� parameter�� �����ֱ� �����̴�
                                                        //std::bind�� parameter�� function pointer�� �ִ´�

    // https://en.cppreference.com/w/cpp/utility/functional/placeholders
    {
        Object instance;

        auto f = std::bind(&Object::hello, &instance, std::placeholders::_1);   //mumber function�� ��� parmaeter: �Լ��� pointer, �ν��Ͻ��� pointer, placeholders::_1,_2 ... ����

        f(string("World")); //string���� ������ �ȴ�   //bind�� ���� �Լ��� parameter�� placeholders�� _1, _2,...�� �ش��ϴ� ��
                                                        //_1�ϳ��Ƿ� ������ 1��
        auto f2 = std::bind(&goodbye, std::placeholders::_1);   //function�� ��� parameter: �Լ��� pointer, placeholders _1,_2, ... ���

        f2(string("World"));                            //_1�ϳ��Ƿ� ������ 1��
    }


    return 0;
}
