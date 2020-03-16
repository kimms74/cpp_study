//std::string construction & casting
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

template <typename T>
string ToString(T x)
{
    std::ostringstream osstream;

    osstream << x;

    return osstream.str();
}

template <typename T>
bool FromString(const string& str, T& x)
{
    std::istringstream isstream(str);   //str�� �־ isstream�� �ʱ�ȭ �ϴ� ��

    return (isstream >> x) ? true : false;
}

int main()
{
    ////string my_string("my string");      
    //const char* my_string = "my string";        //c-style

    //////string second_string(my_string);            //���� ������ ����
    ////string second_string(my_string, 3, 5);     //�ι�° parameter: ���ڸ�ŭ �տ��� �ڸ���
    ////                                            //����° parameter: ���ڸ�ŭ�� �����

    //string second_string(10, 'A');              //A�� 10�� �������

    //cout << my_string << endl;
    //cout << second_string << endl;




    //vector<char> vec;
    //for (auto& e : "Today is a good day.")
    //    vec.push_back(e);

    ////string second_string(vec.begin(), vec.end());
    //string second_string(vec.begin(), std::find(vec.begin(), vec.end(), 'y'));  //y�� ã�� �� �տ����� ������

    //cout << second_string << endl;




    ////string my_str(4);   //�׳� ���ڸ� ������ ����ȯ�� �����༭ �����߻�
    //string my_str(std::to_string(1024));    //std::to_string ����ؼ� ����ȯ��Ŵ

    //my_str += std::to_string(128);  //���ڿ��� �ڿ� ������

    //int i = std::stoi(my_str);
    //float f = std::stof(my_str);

    //cout << my_str << endl;
    //cout << i << endl;
    //cout << f << endl;




    //string my_str(ToString(3.141592));  //ToString()�� ���� �������� 2�� ©����
    //                                    //���߿� iostream ���ǿ��� �˷���
    string my_str("Hello");

    cout << my_str << endl;

    double d;

    if (FromString(my_str, d))          //3.141592�� ���� ��ȯ������ Hello�� ��ȯ ����
        cout << d << endl;              //Hello�� double�� �ٲ� �� ���� �����̴�
    else
        cout << "Cannot convert string to double" << endl;


    return 0;
}
