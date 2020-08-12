// Move constructors and move assignment

#include <iostream>
#include "Timer.h"
#include "AutoPtr.h"
#include "Resource.h"

using namespace std;

AutoPtr<Resource> generateResource()    //return이 AutoPtr인 function 만든 것
{
    AutoPtr<Resource> res(new Resource(10000000));  //생성자 초기화이므로 =이 아닌, ()로 한것

    return res; //release 모드에서는 copy constructor, assert 실행안된다
}               //어차피 res는 함수를 빠져나가면 사라지므로 그 메모리를 그대로 넘겨준다,또한 assert는 코드 확인용이므로 release에선 필요없다

int main()
{
    //streambuf* org_buf = cout.rdbuf();
    ////cout.rdbuf(NULL); // disconnect cout from buffer
    ////                //이 옵션은 log를 지우고 시간만 표시해주는 것
    ////                //속도 측정을 할때는 화면에 나오는 log를 지우고 하는게 좋다
    //Timer timer;

    //{
    //    AutoPtr<Resource> main_res;
    //    main_res = generateResource();  //generateResource()는 r-value이므로 return할때 constructor 생성하고 main_res로 들어갈 때 또 constructor 생성한다
    //}                                   //debugger찍어서 확인해보기

    //cout.rdbuf(org_buf);
    //cout << timer.elapsed() << endl;
          


    streambuf* org_buf = cout.rdbuf();
    //cout.rdbuf(NULL); // disconnect cout from buffer

    Timer timer;

    {
        AutoPtr<Resource> main_res;
        main_res = generateResource();  //AutoPtr에서 이동 생성자를 이용하는 경우에는 copy assignment나 constructor(deep copy)를 안 쓰고 move assignment를 이용하므로 훨씬 빨라진다 
    }                                   //debugger찍어서 확인해보기

    cout.rdbuf(org_buf);
    cout << timer.elapsed() << endl;

    return 0;
}
