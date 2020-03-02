// Basic exception handling

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int findFirstChar(const char* string, char ch)  //char*: string을 말함
{
    for (std::size_t index = 0; index < strlen(string); ++index)
        if (string[index] == ch)
            return index;

    return -1;  //no match
}

double divide(int x, int y, bool& success)  //parameter로 double을 넣고 출력값으로 bool을 해도 상관없다
{
    if (y == 0) 
    {
        success = false;
        return 0.0;
    }
    
    success = false;
    return static_cast<double>(x) / y;
}

int main()
{
    //bool success;   //flag 역할
    //double result = divide(5, 3, success);

    //if (!success)
    //    std::cerr << "An error occured" << std::endl;
    //else
    //    std::cout << "Result is " << result << std::endl;

    //std::ifstream input_file("temp.txt");   //input_file 초기화 시도
    //if (!input_file)                        //input_file이 있나 없나 확인하는 것
    //    std::cerr << "Cannot open file" << std::endl;

    ////예외처리는 속도가 느리므로 예측할 수 없는 상황에만 사용해야한다
    ////ex) 게임서버, 인터넷서버에서 예측할 수 없는 일이 생길 때 서버가 계속 작동하게 만들기 위해 사용한다
    ////분야에 따라 안쓰는 분야도 있다, 보통은 위 코드처럼 작성하는게 속도면에서 좋다



    ////try, catch, throw
    //double x;
    //cin >> x;

    //try
    //{
    //    if (x < 0.0) throw std::string("Negative input");   //throw에서 std::string()을 빼면 catch에서 받아들이지를 못한다
    //                                                        //try, catch 형변환을 엄격하게 진행하기 때문이다
    //    cout << std::sqrt(x) << endl;
    //}

    //catch (std::string error_message)
    //{
    //    //do something to respond
    //    cout << error_message << endl;
    //}




    try
    {
        //something happened
        //throw - 1;
        //throw - 1.0;        //double을 throw하면 catch는 int로 형변환하여 받지 않고 runtime error 발생시킨다
        throw "My error message";
        //throw std::string("My error message");    //throw하는 type에 따라 catch가 받는다
    }                                               //catch로 받을 때 형변환을 해주지 않음!

    catch (int x)
    {
        cout << "Catch integer " << x << endl;
    }

    catch (double x)
    {
        cout << "Catch double " << x << endl;
    }

    catch (const char* error_message)
    {
        cout << "Char* " << error_message << endl;
    }

    catch (std::string error_message)
    {
        cout << "String " << error_message << endl;
    }

    return 0;
}
