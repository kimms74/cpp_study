//Intro to smart pointers and move semantics

#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

//RALI : resource acquisition is initailization (즉, memory leak이 발생하지 않게 코드를 잘 짜라는 것(smart pointer를 쓰면 좋다))
                                                //auto_ptr는 c++ 98에 만들어졌지만 c++17이후로 없앰

//void doSomething()
//{
//    Resource* res = new Resource;
//
//    // work with res
//    if (true) return; // early return   //이 경우 delete이 안돼 memory leak이 발생한다
//
//    delete res; //동적할당을 하면 delete도 반드시 해줘야한다
//                //이 과정이 매우 귀찮다
//
//
//    return;
//}

//void doSomething()
//{
//    try
//    {
//        Resource* res = new Resource;   //dull pointer: 직접 delete이 필요한 pointer
//
//        // work with res
//        if (true)
//        {
//            throw - 1; // exception //이 경우에도 throw를 하게 되면 delete 못하게 된다
//        }
//        delete res;
//    }
//
//    catch (...)
//    {
//    }
//
//    return;
//}

void doSomething()
{
    try
    {
        //AutoPtr<Resource> res = new Resource;  //smart pointer  //자체가 pointer기 때문에 *을 붙이면 안된다 //<type>을 쓰는 건 모두 template 사용때문이다
        AutoPtr<Resource> res(new Resource);   //AutoPtr class 초기화이므로 이렇게 쓰는게 더 깔끔하다
        
        return; //early return의 경우에도 destructor 작동한다
                //AutoPtr class destructor 자체에 delete을 넣어 main()을 빠져나올 경우 destructor가 실행되면서 delete을 진행한다
        
        // work with res
        if (true)
        {
            throw - 1; // exception //이 경우에도 throw를 하게 되면 delete 못하게 된다
        }
        //delete res;   //delete 필요없다
    }

    catch (...)
    {
    }

    return;
}

int main()
{
    //doSomething();



    //{
    //    AutoPtr<Resource> res1(new Resource);   //constructor 초기화 이므로 =가 아닌 ()로 하는 것
    //    AutoPtr<Resource> res2;

    //    cout << std::boolalpha;

    //    cout << res1.m_ptr << endl;
    //    cout << res2.m_ptr << endl;

    //    res2 = res1;

    //    cout << res1.m_ptr << endl;
    //    cout << res2.m_ptr << endl;
    //}                               //res2에 res1을 복사해 넣으면 Resource의 constructor는 한번만 실행되는데
    //                                //{}을 빠져나오면서 destructor가 res1, res2에서 2번 실행돼 runtime error발생한다
    //                                //이미 지워진 것을 또 지우려고 하기 때문이다



    {
        AutoPtr<Resource> res1(new Resource); 
        AutoPtr<Resource> res2;

        cout << std::boolalpha;

        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;

        res2 = res1;                //move semantics (소유권을 이전하는 것)

        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;
    }                               //이번에는 AutoPtr의 코드를 수정했다
                                    //{}을 빠져나와도 destructor가 한번만 실행됨(res2에서 실행됨)
                                    //res1을 res2에 복사할 때 res1의 m_ptr을 nullptr로 만드므로

    // syntax vs. semantics
    int x = 1, y = 1;
    x + y;          //add

    string str1("Hello"), str2("World");
    str1 + str2;    //append
    //syntax는 문법적으로 타당한지 확인하는 것, semantics는 문장이 타당한 의미를 지니는지를 판별하는 것
    //+가 기호적으로는 똑같지만 의미가 다르다, string에 대해서 +를 봤을 때 숫자를 더하는 것처럼 생각하면 안되고 문자열을 뒤에 붙인다는 개념으로 봐야한다
    //이렇게 판별하는 것을 semantics라고 함
    //doSomething(res1);을 볼 때 res1이 semantics에 따라 doSomething이 어떻게 기능할지가 정해진다
    //즉 겉모양만 같지 기능은 다른 경우 쓰인다

    //value semantics (copy semantics)
    //reference semantics (pointer)
    //move semantics (move) :소유권을 넘겨줌

    return 0;
}
