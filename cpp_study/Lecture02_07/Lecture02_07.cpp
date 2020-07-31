//Chars

#include <iostream>
#include <limits>
int main()
{
    using namespace std;

    char c1(65);
    //char c2('A'); // "Hello, world", 글자 하나는 ' '로 표현

    //cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

    //// c-style casting
    //cout << (char)65 << endl;
    //cout << (int)'A' << endl;

    ////cpp style
    //cout << char(65) << endl;
    //cout << int('A') << endl; //위 2가지는 강제로 형변환

    //cout << static_cast<char>(65) << endl;
    //cout << static_cast<int>('A') << endl;    //static_cast는 변환해도 괜찮은지 한번 체크해줌

    //char ch(97);
    //cout << ch << endl;
    //cout << static_cast<int>(ch) << endl;
    //cout << ch << endl;
    //
    //cin >> c1;
    //cout << c1 << " " << static_cast<int>(c1) << endl; //abc input하면 bc는 버퍼에 남아있다가 나머지 cin에 들어감

    //cin >> c1;
    //cout << c1 << " " << static_cast<int>(c1) << endl;

    //cin >> c1;
    //cout << c1 << " " << static_cast<int>(c1) << endl;

    //cout << sizeof(unsigned char) << endl;
    //cout << (int)numeric_limits<unsigned char>::max() << endl;
    //cout << (int)numeric_limits<unsigned char>::lowest() << endl;

    cout << int('\n') << endl;  //\n은 그냥 줄바꿈, std::endl은 버퍼에있는 것들을 다 출력하고 줄바꿈시킴
    cout << int('\t') << endl;  //std::flush: 줄바꿈없이 버퍼에 있는것을 다 출력함
    cout << int('\"') << endl;  //출력하는 문자에 "을 넣고싶으면 \"로 사용하면 된다, \?를 쓰면 ? 표시해줌
    cout << int('\a') << endl;  //\a: 소리난다  //코드에 넣어 작업끝날때 소리나게하면 시간활용하기 좋다!
                                //\n,\t,\",\a 모두 2개의 문자를 가지지만 컴파일러 입장에서는 char로 인식된다(1bit)


    return 0;
}
