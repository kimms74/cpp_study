// Move constructors and move assignment

#include <iostream>
#include "Timer.h"
#include "AutoPtr.h"
#include "Resource.h"

using namespace std;

AutoPtr<Resource> generateResource()    //return이 AutoPtr인 함수 만든 것
{
    AutoPtr<Resource> res(new Resource(10000000));  //생성자 초기화이므로 =이 아닌, ()로 한것

    return res;
}

int main()
{
    streambuf* org_buf = cout.rdbuf();
    //cout.rdbuf(NULL); // disconnect cout from buffer

    Timer timer;

    {
        AutoPtr<Resource> main_res;
        main_res = generateResource();
    }

    cout.rdbuf(org_buf);
    cout << timer.elapsed() << endl;
          



    return 0;
}
