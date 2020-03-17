//std::string character access and conversion to C-style arrays

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    //string my_str("abcdefg");

    //cout << my_str[0] << endl;
    //cout << my_str[3] << endl;

    //my_str[3] = 'Z';            //vector와 유사하다

    //cout << my_str << endl;




    //string my_str("abcdefg");

    ////my_str[100] = 'X';      //error 발생

    //try {
    //    //my_str[100] = 'X';    //[](대괄호 operator overloading)을 쓰면 느려질까봐 예외처리를 안한다
    //    my_str.at(100) = 'X';   //exception 발생시킴
    //}                           //vector에서도 마찬가지로 []와 at()이 있다
    //                            //퍼포먼스를 중요시 할 경우 []을 사용하고, 안정성을 중요시 할 경우 at()을 써라
    //
    //catch (std::exception & e)
    //{
    //    cout << e.what() << endl;
    //}




    //string my_str("abcdefg");

    //cout << my_str.c_str() << endl;
    ////cout << my_str.data() << endl;    //data()와 c_str()은 거의 동일하다

    ////cout << my_str.c_str()[6] << endl;  //my_str.c_str()자체가 pointer이므로 [6]가능
    //const char* arr = my_str.c_str();   //헷갈리면 새로 만들어 사용하기
    //cout << (int)arr[6] << endl;    //103
    //cout << (int)arr[7] << endl;    //0     //string 자체에는 null-character가 저장안되지만, c_str()로 가져오면 null이 생긴다






    string my_str("abcdefg");

    char buf[20];

    my_str.copy(buf, 5, 1); //copy(첫번째,두번째,세번째), 첫번째:복사하고 싶은 변수, 두번째: 몇글자 복사할 건지
                                                        //세번째: 어디서부터 복사할건지

    cout << buf << endl;    //copy로 복사하면 null character가 안들어가 끝을 모르므로 오류발생
    
    buf[5] = '\0';          //따로 null을 넣어주면 잘 작동한다
    cout << buf << endl;

    return 0;
}
