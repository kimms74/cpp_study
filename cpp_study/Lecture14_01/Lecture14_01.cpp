// Basic exception handling

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int findFirstChar(const char* string, char ch)  //char*: string�� ����
{
    for (std::size_t index = 0; index < strlen(string); ++index)
        if (string[index] == ch)
            return index;

    return -1;  //no match
}

double divide(int x, int y, bool& success)  //parameter�� double�� �ְ� ��°����� bool�� �ص� �������
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
    //bool success;   //flag ����
    //double result = divide(5, 3, success);

    //if (!success)
    //    std::cerr << "An error occured" << std::endl;
    //else
    //    std::cout << "Result is " << result << std::endl;

    //std::ifstream input_file("temp.txt");   //input_file �ʱ�ȭ �õ�
    //if (!input_file)                        //input_file�� �ֳ� ���� Ȯ���ϴ� ��
    //    std::cerr << "Cannot open file" << std::endl;

    ////����ó���� �ӵ��� �����Ƿ� ������ �� ���� ��Ȳ���� ����ؾ��Ѵ�
    ////ex) ���Ӽ���, ���ͳݼ������� ������ �� ���� ���� ���� �� ������ ��� �۵��ϰ� ����� ���� ����Ѵ�
    ////�о߿� ���� �Ⱦ��� �оߵ� �ִ�, ������ �� �ڵ�ó�� �ۼ��ϴ°� �ӵ��鿡�� ����



    ////try, catch, throw
    //double x;
    //cin >> x;

    //try
    //{
    //    if (x < 0.0) throw std::string("Negative input");   //throw���� std::string()�� ���� catch���� �޾Ƶ������� ���Ѵ�
    //                                                        //try, catch ����ȯ�� �����ϰ� �����ϱ� �����̴�
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
        //throw - 1.0;        //double�� throw�ϸ� catch�� int�� ����ȯ�Ͽ� ���� �ʰ� runtime error �߻���Ų��
        throw "My error message";
        //throw std::string("My error message");    //throw�ϴ� type�� ���� catch�� �޴´�
    }                                               //catch�� ���� �� ����ȯ�� ������ ����!

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
