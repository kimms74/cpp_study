// std::exception

#include <iostream>
#include <exception>
#include <string>

using namespace std;

class CustomException : public std::exception   //직접 class를 만들기 보다는 std::exception을 상속을 받아서 원하는 기능만 overriding하는 것이 편하다
{
public:
    const char* what() const noexcept override  //noexcept: c++17 이상을 쓰는 경우 반드시 넣어줘야함
    {                                           //적어도 이 함수 내에서는 exception을 던지지 않겠다는 것을 의미
        return "Custom exception";              //override를 명확히 표시하기 위해 뒤에 override 붙임
    }
};

int main()
{
    //try
    //{
    //    std::string s;
    //    s.resize(-1);   //resize를 이상한 숫자로 하면 내부에서 error를 throw하게 코드가 짜져있다
    //                    //-1은 역으로 제일 큰 수를 찾아간다
    //}

    ////catch (std::exception & exception)  //parameter로 자식 class를 쓰고 싶어도 어떤 class가 쓰이는지 모르므로 부모 class를 parameter로 넣는게 좋다
    ////{
    ////    std::cout << typeid(exception).name() << std::endl;
    ////    std::cerr << exception.what() << std::endl;
    ////}





    //catch (std::length_error & exception)   //std::exception의 derived class인 length_error발생 확인
    //{
    //    std::cerr << "Length_Error" << std::endl;
    //    std::cerr << exception.what() << std::endl;
    //}

    //catch (std::exception & exception) 
    //{
    //    std::cout << typeid(exception).name() << std::endl;
    //    std::cerr << exception.what() << std::endl;
    //}





    //try
    //{
    //    throw std::runtime_error("Bad thing happened"); //직접 std::exception의 derived class를 throw할 수 있다
    //}

    //catch (std::exception & exception)
    //{
    //    std::cout << typeid(exception).name() << std::endl;
    //    std::cerr << exception.what() << std::endl;
    //}




    try
    {
        throw CustomException();
    }

    catch (std::exception & exception)
    {
        std::cout << typeid(exception).name() << std::endl;
        std::cerr << exception.what() << std::endl;
    }


    return 0;
}
