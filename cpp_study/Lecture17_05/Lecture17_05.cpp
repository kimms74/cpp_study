//std::string assignment, swapping, appending, and inserting

#include <iostream>

using namespace std;

int main()
{

    //assignment
    //string str1("one");

    //string str2;
    //str2 = str1;
    //str2 = "two";
    //str2.assign("two"); //assign의 return은 return by reference이다
    //str2.assign("two", );   //parameter 2개짜리도 있다
    //str2.assign("two", , );   //parameter 3개짜리도 있다
    //str2.assign("two").append(" ").append("three").append(" ").append("four");  //append로 뒤에 붙이기 가능
    
    //cout << str2 << endl;



    //swapping
    //string str1("one");
    //string str2("two");

    //cout << str1 << " " << str2 << endl;

    //std::swap(str1, str2);              //swap function을 이용해 두개를 바꿈

    //cout << str1 << " " << str2 << endl;

    //str1.swap(str2);                    //string::swap도 존재한다

    //cout << str1 << " " << str2 << endl;


    

    ////appending
    //string str1("one");
    //string str2("two");
    // 
    ////str1.append("three");
    ////str1.append("three", );   //append 함수도 overloading이 있으므로 확인해보기
    ////str1.push_back('A');        //push_back은 문자만 넣는 것 가능(문자열은 append 쓰기)
    //str1 += "three";                //수식처럼 사용가능
    //str1 = str2 + "four";           //수식처럼 사용가능




    //inserting
    string str("aaaa");

    str.insert(2, "bbb");   //2번째자리부터 ""를 넣기

    cout << str << endl;
    return 0;
}
