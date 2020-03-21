//Regular expression(���� ǥ����)

#include <iostream>
#include <regex>

using namespace std;

int main()
{
    //regex re("\\d+");             //ù��° \: �ڿ��ִ� \�� ��¥ \��� ���� �ǹ�, �ι�° \: \nó�� \d�� digit�̳ĸ� ���°�
    //                              //�� ���� �ϳ� ���Գĸ� ���ϴ� ��
    //                              //"\\d+": ���� �ϳ� �̻� ���͵� �ȴ�, "\\d*": �Է��� �ȹ޾Ƶ� ������
    //regex re("[[:digit:]]{3}");   //[:digit:]�� \d�� ���� �ǹ̴�, �ٱ� [] �ǹ�:[]�ȿ� �ִ� �͵��� ok�̴�, {}�ǹ�: {}���� ���ڸ�ŭ []���� ���� �ްڴ�
    //regex re("[A-Z]+");           //A-Z�߿� �ϳ��̻� �޾Ƶ� ��� ����                    
    //regex re("[A-Z]{1,5}");       //A-Z �߿� �ּ� 1��, �ִ� 5�� �ްڴ�
    regex re("([0-9]{1})([-]?)([0-9]{1,4})");   //()���� �׷��� ���´�, ?�ǹ�: �־ �ǰ� ��� �ȴ�

    string str;

    while (true)
    {
        getline(cin, str);

        if (std::regex_match(str, re))  //regex_match�� ���� str�� re�� �´��� �ȸ´��� �����ش�
            cout << "Match" << endl;
        else
            cout << "No match" << endl;

        //print matches
        {
            auto begin = std::sregex_iterator(str.begin(), str.end(), re);
            auto end = std::sregex_iterator();
            for (auto itr = begin; itr != end; ++itr)
            {
                std::smatch match = *itr;   //sregex_iterator�� �̿��� smatch�� match�ϴ� �κи� ����ϰ� ����
                cout << match.str() << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    //��������? �Է¹��� ���ڿ��� �̸��� �ּ� ���ڿ� ��Ģ�� �´��� �ȸ´��� Ȯ��(@�� ����ִ���, .�� �ִ��� ������ ...)

    return 0;
}
