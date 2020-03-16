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
    std::istringstream isstream(str);   //str을 넣어서 isstream을 초기화 하는 것

    return (isstream >> x) ? true : false;
}

int main()
{
    ////string my_string("my string");      
    //const char* my_string = "my string";        //c-style

    //////string second_string(my_string);            //복사 생성도 가능
    ////string second_string(my_string, 3, 5);     //두번째 parameter: 숫자만큼 앞에서 자른다
    ////                                            //세번째 parameter: 숫자만큼만 남긴다

    //string second_string(10, 'A');              //A를 10개 만들어줌

    //cout << my_string << endl;
    //cout << second_string << endl;




    //vector<char> vec;
    //for (auto& e : "Today is a good day.")
    //    vec.push_back(e);

    ////string second_string(vec.begin(), vec.end());
    //string second_string(vec.begin(), std::find(vec.begin(), vec.end(), 'y'));  //y를 찾고 그 앞에까지 보여줌

    //cout << second_string << endl;




    ////string my_str(4);   //그냥 숫자를 넣으면 형변환을 안해줘서 오류발생
    //string my_str(std::to_string(1024));    //std::to_string 사용해서 형변환시킴

    //my_str += std::to_string(128);  //문자열로 뒤에 더해줌

    //int i = std::stoi(my_str);
    //float f = std::stof(my_str);

    //cout << my_str << endl;
    //cout << i << endl;
    //cout << f << endl;




    //string my_str(ToString(3.141592));  //ToString()에 들어가는 과정에서 2가 짤렸음
    //                                    //나중에 iostream 강의에서 알려줌
    string my_str("Hello");

    cout << my_str << endl;

    double d;

    if (FromString(my_str, d))          //3.141592일 때는 변환됐지만 Hello는 변환 못함
        cout << d << endl;              //Hello를 double로 바꿀 수 없기 때문이다
    else
        cout << "Cannot convert string to double" << endl;


    return 0;
}
