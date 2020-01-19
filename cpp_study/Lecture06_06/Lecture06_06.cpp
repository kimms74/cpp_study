#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    //char myString[] = "string";     //문자 마지막에 끝을 나타내는 null character가 숨어있다

    //for (int i = 0; i < 7; ++i)
    //{
    //    cout << (int)myString[i] << endl;
    //}
    //
    //cout << sizeof(myString) / sizeof(myString[0]) << endl;
    
    
    
    //char myString[255];

    ////cin >> myString;
    //cin.getline(myString, 255);     //띄어쓰기도 인식함

    ////myString[0] = 'A';
    ////myString[0] = '\0';     // '\0'은 null character로 이걸 만나면 출력을 중단해버린다

    //cout << myString << endl;

    //int ix = 0;
    //while (true)
    //{
    //    if (myString[ix] == '\0') break;

    //        cout << myString[ix] << " " << (int)myString[ix] << endl;
    //    ++ix;
    //}
    



    char source[] = "Copy this!"; // 선언하면 const로 고정됨, 함수를 이용해 값을 변경해야함
    char dest[50];
    strcpy_s(dest,50, source);

    cout << source << endl;
    cout << dest << endl;


    //strcat() // 한 문자열 뒤에 다른 문자열 붙여줌
    //strcmp() // 두 문자열이 동일한지 비교함
    strcat_s(dest, source);
    cout << dest << endl;

    char dest1[]= "Copy this!";
    cout << strcmp(source, dest1) << endl; // 주의!!: 같으면 0, 다르면 -1을 내보냄
   
    if (strcmp(source, dest1) == 0)         // 이렇게 해야 같을 때 true가 나온다
    {
        cout << "Same" << endl;
    }


    std::string; // 실전에서는 string을 이용함
    
    return 0;
}
