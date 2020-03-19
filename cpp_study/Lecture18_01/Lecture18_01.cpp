//Input with istream

#include <iostream>
#include <string>
#include <iomanip>  // input/output manipulators

using namespace std;

int main()
{
    //cout << "Enter a number" << endl;

    //int i;
    //cin >> i;

    //cout << i << endl;



    //글자를 한번에 받는 방법
    //char buf[5];

    ////cin >> buf;     //10개를 넘어가게 입력하면 오류발생한다
    //cin >> setw(5) >> buf;  //cin이 buffer를 가지고 있다, 입력을 한 것이 buffer에 들어가고 그중 setw()안 만큼만 buf에 들어가게 된다
    //                        //마지막엔 null-character가 들어가므로 abcdefg를 입력하면 abcd만 들어가진다
    //                        //남은 나머지는 계속 buffer에 남아 있는다
    //cout << buf << endl;

    //cin >> setw(5) >> buf;
    //cout << buf << endl;

    //cin >> setw(5) >> buf;
    //cout << buf << endl;



    //int i;
    //float f;

    //cin >> i >> f;      //빈칸으로 i와 f에 들어갈 것을 구분을 할 수 있다

    //cout << i << " " << f << endl;



    //글자를 한글자씩 받는 방법
    //char ch;

    ////while (cin >> ch)   //그냥 받아올 때는 빈칸을 없애버림
    ////    cout << ch;     //ex) Hello world -> Helloworld

    //while (cin.get(ch)) //cin.get()을 이용하면 빈칸도 받아들임
    //    cout << ch;     //ex) Hello, world -> Hello, world



    //char buf[5];

    //cin.get(buf, 5);    //buf라는 variable에 5개를 넣겠다
    //                    //역시 null-character 한자리 빼고 들어간다
    //cout << cin.gcount() << buf << endl;    //cin.gcout(): 몇글자를 읽어들였는지를 알려줌(null-character빼고)

    //cin.get(buf, 5);    //buffer에 남은 나머지를 받아들인다
    //cout << cin.gcount() << buf << endl;




    //char buf[5];

    //cin.getline(buf, 5);    //한 줄을 통채로 받아들임
    //cout << cin.gcount() << buf << endl;

    //cin.getline(buf, 5);    //cin.get()과 달리 buffer에 남아있지 않는다(첫번째 getline에서 입력한 것을 다 가져갔기 때문이다)
    //cout << cin.gcount() << buf << endl;




    //char buf[100];

    //cin.get(buf, 100);      //hello를 넣으면 5 hello라고 나옴
    //cin.getline(buf, 100);  //hello를 넣으면 6 hello라고 나옴   //getline에는 줄바꿈 character까지 같이 읽어들이기 때문이다
    //cout << cin.gcount() << buf << endl;

    //cin.getline(buf, 100);
    //cout << cin.gcount() << buf << endl;




    //string buf;     //string을 사용할 경우 buffer 사이즈를 고민안해도 된다(편하다)

    //getline(cin, buf);  //그냥 getline을 할 때는 cin이 parameter로 들어간단
    //cout << cin.gcount() << " " << buf << endl; //cin.getline이 아닌 getline으로 썼기때문에 cin.gcount()는 0이 나옴




    //char buf[1024];

    //cin.ignore();   //cin.ignore(): 입력한 것 무시하는 것이다, default는 1개, 숫자 넣으면 넣은 수 만큼 무시

    //cin >> buf;
    //cout << buf << endl;



    //char buf[1024];

    //cout << (char)cin.peek() <<endl;    //cin.peek(): 입력한 것 첫글자 확인하는 것, but buffer에는 그대로 남아있다

    //cin >> buf;
    //cout << buf << endl;




        
    //char buf[1024];

    //cin >> buf;
    //cout << buf << endl;    ///hello

    //cin.unget();            //입력한 것의 마지막 글자를 다시 buffer에 넣어주는 것

    //cin >> buf;             
    //cout << buf << endl;    //o




    char buf[1024];

    cin >> buf;
    cout << buf << endl;    ///hello

    cin.putback('A');            //putback()안의 글자를 buffer의 마지막에 더해주는 것

    cin >> buf;
    cout << buf << endl;




    return 0;
}
