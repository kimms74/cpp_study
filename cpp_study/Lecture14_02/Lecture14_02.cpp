// Exceptions, functions, and stack unwinding

#include <iostream>

using namespace std;

// void last() throw(int) //함수 뒤에 throw(type) 적는 것: exception specifier(안 쓰는 것을 추천)
// void last() throw(...) //type을 throw할 수도 있다는 것을 말함 항상 그 type을 throw한다는 것은 아님
//                         //throw()로 쓰면 이 함수는 예외를 던지지 않겠다는 것을 의미함
//                          //하지만 함수 안에서 예외를 던지면 error 발생 

void last()
{
    cout << "last " << endl;
    cout << "Throw exception" << endl;

    //throw - 1;  //throw를 하면 그 아래 코드는 무시됨
    throw 'a'; //이 경우 catch할 수 있는 곳이 없으므로 runtime error 발생한다
                //catch (...)을 사용하면 받을 수 있다
    cout << "End last " << endl;
}

void third()
{
    cout << "third" << endl;

    last(); //last()에서 throw한 것을 third()에서는 catch하는 코드가 없으므로 second()로 올라감
            //stack unwiding
    cout << "End third " << endl;
}

void second()
{
    cout << "second" << endl;

    try
    {
        third();
    }

    catch (double)  //catch가 존재하지만 double을 catch하므로 -1은 int이기 때문에 first()로 올라감
    {               //stack unwinding
        cerr << "second caught int exception" << endl;
    }

    cout << "End second " << endl;
}

void first()    //catch에서 -1을 받음
{
    cout << "first" << endl;

    try
    {
        second();
    }

    //catch (int)
    catch (double)
    {
        cerr << "first caught int exception" << endl;
    }

    cout << "End first " << endl;
}


int main()
{
    cout << "Start" << endl;

    try
    {
        first();
    }

    catch (int) //try한 것을 frist()에서 catch했으므로 main()의 catch는 무시된다
    {           //first에 catch(int)가 없었다면 main의 catch가 받는다

        cerr << "main caught int exception" << endl;    //cout, cerr, clog의 출력 방식이 있다, endl은 '\n'뿐만아니라 flush(buffer에 남아있는 데이터를 다 출력)도 해준다
    }                                                   //cerr의 경우 '\n'나 flush가 없어도 화면으로 buffer를 안통하고 출력을 한다



    //uncaught exceptions

    catch (...) // catch-all handlers //(...): 생략기호, ellipses //모든 것을 다 받아준다는 것
    {           //안전망으로 catch (...)을 쓰는 것도 좋다(최후의 보루)
      cerr << "main caught ellipses exception" << endl;
    }

    cout << "End main" << endl;












    return 0;
}
