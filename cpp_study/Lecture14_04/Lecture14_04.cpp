// std::exception

#include <iostream>
#include <exception>
#include <string>

using namespace std;

class CustomException : public std::exception   //���� class�� ����� ���ٴ� std::exception�� ����� �޾Ƽ� ���ϴ� ��ɸ� overriding�ϴ� ���� ���ϴ�
{
public:
    const char* what() const noexcept override  //noexcept: c++17 �̻��� ���� ��� �ݵ�� �־������
    {                                           //��� �� �Լ� �������� exception�� ������ �ʰڴٴ� ���� �ǹ�
        return "Custom exception";              //override�� ��Ȯ�� ǥ���ϱ� ���� �ڿ� override ����
    }
};

int main()
{
    //try
    //{
    //    std::string s;
    //    s.resize(-1);   //resize�� �̻��� ���ڷ� �ϸ� ���ο��� error�� throw�ϰ� �ڵ尡 ¥���ִ�
    //                    //-1�� ������ ���� ū ���� ã�ư���
    //}

    ////catch (std::exception & exception)  //parameter�� �ڽ� class�� ���� �; � class�� ���̴��� �𸣹Ƿ� �θ� class�� parameter�� �ִ°� ����
    ////{
    ////    std::cout << typeid(exception).name() << std::endl;
    ////    std::cerr << exception.what() << std::endl;
    ////}





    //catch (std::length_error & exception)   //std::exception�� derived class�� length_error�߻� Ȯ��
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
    //    throw std::runtime_error("Bad thing happened"); //���� std::exception�� derived class�� throw�� �� �ִ�
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
