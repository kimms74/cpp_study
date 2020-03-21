//Regular expression(정규 표현식)

#include <iostream>
#include <regex>

using namespace std;

int main()
{
    //regex re("\\d+");             //첫번째 \: 뒤에있는 \가 진짜 \라는 것을 의미, 두번째 \: \n처럼 \d는 digit이냐를 묻는것
    //                              //즉 숫자 하나 들어왔냐를 말하는 것
    //                              //"\\d+": 숫자 하나 이상 들어와도 된다, "\\d*": 입력을 안받아도 괜찮다
    //regex re("[[:digit:]]{3}");   //[:digit:]이 \d와 같은 의미다, 바깥 [] 의미:[]안에 있는 것들은 ok이다, {}의미: {}안의 숫자만큼 []안의 것을 받겠다
    //regex re("[A-Z]+");           //A-Z중에 하나이상 받아도 상관 없다                    
    //regex re("[A-Z]{1,5}");       //A-Z 중에 최소 1개, 최대 5개 받겠다
    regex re("([0-9]{1})([-]?)([0-9]{1,4})");   //()으로 그룹을 묶는다, ?의미: 있어도 되고 없어도 된다

    string str;

    while (true)
    {
        getline(cin, str);

        if (std::regex_match(str, re))  //regex_match를 쓰면 str과 re가 맞는지 안맞는지 비교해준다
            cout << "Match" << endl;
        else
            cout << "No match" << endl;

        //print matches
        {
            auto begin = std::sregex_iterator(str.begin(), str.end(), re);
            auto end = std::sregex_iterator();
            for (auto itr = begin; itr != end; ++itr)
            {
                std::smatch match = *itr;   //sregex_iterator를 이용해 smatch로 match하는 부분만 출력하게 만듬
                cout << match.str() << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    //연습문제? 입력받은 문자열이 이메일 주소 문자열 규칙에 맞는지 안맞는지 확인(@이 들어있는지, .이 있는지 없는지 ...)

    return 0;
}
