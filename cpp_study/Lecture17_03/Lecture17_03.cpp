//std::string length and capacity

#include <iostream>

using namespace std;

int main()
{
    //string my_str("012345678"); 
    //                            
    //cout << my_str.size() << endl;  //c-style 문자열에서는 null 문자열이 하나 숨어있어 +1이다.(문자열이 끝났나 안끝났나 확인용)
    //                                //c++에서 string은 null 문자열이 없으므로 9개가 나온다(string 자체에 길이를 가지고 있어서 null이 필요없음)


    //string my_str("");

    //cout << std::boolalpha;
    //cout << my_str.empty() << endl; //string이 비었는지 안 비었는지 확인용
    //                                //c-style과는 다르게 null을 저장하지 않음을 확인할 수 있다


    string my_str("01234567");

    cout << my_str.length() << endl;    //8
    cout << my_str.size() << endl;      //8
    cout << my_str.capacity() << endl;  //15    //memory rellocate를 피하기위해 여분의 용량을 두는 것
    cout << my_str.max_size() << endl;  //9223372036854775807

    my_str.reserve(1000);               //최소한 1000이라는 용량 확보해달라는 것
    cout << my_str.capacity() << endl;
    return 0;
}
