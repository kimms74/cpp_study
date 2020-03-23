//Lamdas(익명함수) & std::function & std::bind & for_each

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

    //[](const int& i) -> void {cout << "Hello, World!" << endl; } (1234);    //진정한 의미의 lambdas는 익명일 때 나타난다
    //                                                                        //함수를 작성한 뒤 뒤에 (parameter)를 붙이면 바로 실행이 된다  
    //                                                                        //함수 작성이 번거로울 때는 람다함수를 사용하여 유연하게 작성 가능하다
    //{
    //    string name = "JackJack";
    //    [&]() {std::cout << name << endl; } (); //[]안의 & 의미: {}로 묶여있는 영역 안에서 윗줄에 있는 변수를 reference로 가져온다
    //}                                           //&(reference), this(class), =(copy) 등등 여러가지가 있다
    //                                            //scope안에 있는 변수를 parameter가 아닌 lambda-introducer로 가져온다

    //vector<int> v;
    //v.push_back(1);
    //v.push_back(2);                                     //v의 원소들에 대해서 각각 실행이 되는 기능을 구현하기 위해 사용
    //                                                    //수행할 기능을 따로 정의하고 함수 포인터를 집어넣고하는 식으로 구현하면 너무 번거로워진다
    ////auto func2 = [](int val) {cout << val << endl; };
    ////for_each(v.begin(), v.end(), func2);                //함수 포인터(func2)을 parameter로 넣는다
    //
    //for_each(v.begin(), v.end(), [](int val) {cout << val << endl;});   //보통 lambda함수는 이런식으로 사용한다

    //cout << []() -> int{ return 1; }() << endl;




    auto func2 = [](int val) {cout << val << endl; };   //lambda함수의 경우 return type이 void이면 생략한다
    std::function<void(int)> func3 = func2;     //std::function : function pointer를 좀더 체계화시켜놓은 것    //template: <return type(parameter)>
    func3(123);

    std::function<void()>func4 = std::bind(func3, 456); //std::bind를 사용하면 std::function에 parameter를 안넣어도 된다
    func4();                                            //456이 parameter로 묶여있기 때문이다
                                                        //std::bind의 parameter로 function pointer를 넣는다

    // https://en.cppreference.com/w/cpp/utility/functional/placeholders
    {
        Object instance;

        auto f = std::bind(&Object::hello, &instance, std::placeholders::_1);   //mumber function일 경우 parmaeter: 함수의 pointer, 인스턴스의 pointer, placeholders::_1,_2 ... 지정

        f(string("World")); //string빼도 실행이 된다   //bind로 만든 함수의 parameter는 placeholders의 _1, _2,...에 해당하는 것
                                                        //_1하나므로 변수는 1개
        auto f2 = std::bind(&goodbye, std::placeholders::_1);   //function일 경우 parameter: 함수의 pointer, placeholders _1,_2, ... 사용

        f2(string("World"));                            //_1하나므로 변수는 1개
    }


    return 0;
}
