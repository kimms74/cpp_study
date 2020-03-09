//std::unique_ptr

#include <iostream>
#include <memory>
#include "Resource.h"
using namespace std;

auto doSomething()
{
    //auto res1 = std::make_unique<Resource>(5);        //방법1
    //return res1;

    //return std::unique_ptr<Resource>(new Resource(5));  //방법2

    return std::make_unique<Resource>(5);             //방법3   //가장 간단한 방법
}                                                       //내부적으로 move semantics를 사용함(빠르다!)

void doSomething2(std::unique_ptr<Resource>& res)   //l-value reference를 받는다                 
{
    res->setAll(10);
}

void doSomething3(std::unique_ptr<Resource> res)    //reference로 안넣으면 오류남(unique_ptr을 이용하기 때문에)
             
{
    res->setAll(30);
    res->print();
}

auto doSomething4(std::unique_ptr<Resource> res)    //res1을 계속 사용하고 싶을 때
                
{
    res->setAll(100);
    res->print();

    return res;
}

void doSomething5(Resource* res)                  //pointer만 넘겨주고 작업하는 방법           
{
    res->setAll(50);
    res->print();
}

int main()
{
    //{
    //    Resource* res = new Resource(10000000);

    //    //early return or throw     //delete을 못하므로 memory leak 발생

    //    //delete res;
    //}




    //{
    //    std::unique_ptr<Resource> res(new Resource(10000000));  //res를 constructor하므로 =이 아닌 ()로 적어준다

    //    //early return or throw     //delete을 자동으로 해주므로 memory leak 발생 x

    //    //delete res;
    //}




    //{
    //    std::unique_ptr<int> upi(new int);

//    //std::unique_ptr<Resource> res1(new Resource(5));  //방법1
//    auto res1 = std::make_unique<Resource>(5);          //방법2: 윗줄과 같은 의미지만 좀 더 권장하는 방법!
//    //auto res1 = doSomething();                        //방법3: 함수로 만들어 쓰는법

//    res1->setAll(5);
//    res1->print();

//    std::unique_ptr<Resource> res2;

//    std::cout << std::boolalpha;    //nullptr을 판별할 때도 boolalpha를 쓸 수 있다(nullptr일 경우 false 나옴)
//    std::cout << static_cast<bool>(res1) << std::endl;  //res1은 초기화를 해줬으므로 nullptr이 아니다
//    std::cout << static_cast<bool>(res2) << std::endl;  //res2는 값을 넣어 초기화를 안했으므로 nullptr이다

//    //res2 = res1;  //unique_ptr은 copy 불가   //error 발생함 //unique_ptr은 말그대로 소유권이 unique하므로, 한 군데에서만 소유를 할 수 있다
//    res2 = std::move(res1); //move semantics만 사용가능

//    std::cout << std::boolalpha;
//    std::cout << static_cast<bool>(res1) << std::endl;
//    std::cout << static_cast<bool>(res2) << std::endl;  

//    if (res1 != nullptr) res1->print();
//    if (res2 != nullptr) res2->print(); //move 됐으므로 destructor는 한번만 실행 됨
//    //(*res2).print();  //dereferencing도 내부적으로 구현이 돼 있다
//}





//doSomething2()에서 reference를 parameter로 받을 때
//{         
//    auto res1 = std::make_unique<Resource>(5);
//    res1->setAll(1);
//    res1->print();

//    doSomething2(res1);

//    res1->print();
//}



////doSomething3()에서 그냥 parameter로 받을 때
//{
//    auto res1 = std::make_unique<Resource>(5);
//    res1->setAll(1);
//    res1->print();

//    std::cout << std::boolalpha;
//    std::cout << static_cast<bool>(res1) << std::endl;

//    doSomething3(std::move(res1));  //res1을 넣으면 오류나지만 std::move를 이용하면 오류는 나지 않음
//                                    //함수를 벗어나면서 destructor 실행
//    std::cout << std::boolalpha;
//    std::cout << static_cast<bool>(res1) << std::endl;  //소유권을 넘겨버려서 false가 나옴(nullptr이기 때문에)

//    res1->print();
//}



////doSomething4()에서 그냥 parameter로 받을 때 res1으로 작업하고 싶으면
//{           //그냥 l-value reference쓰는게 편할수도 있지만 이 방법이 python 스타일이다(이 방법도 괜찮음!)
//    auto res1 = std::make_unique<Resource>(5);
//    res1->setAll(1);
//    res1->print();

//    std::cout << std::boolalpha;
//    std::cout << static_cast<bool>(res1) << std::endl;

//    res1 = doSomething4(std::move(res1));  //함수에서 소유권을 다시 돌려받음
//                                          //함수를 벗어나면서 destructor 실행
//    std::cout << std::boolalpha;
//    std::cout << static_cast<bool>(res1) << std::endl;  //소유권을 다시 받아서 true가 나옴

//    res1->print();
//}



////doSomething5()에서 reference를 parameter로 받을 때
//{         
//    auto res1 = std::make_unique<Resource>(5);
//    res1->setAll(1);
//    res1->print();


//    std::cout << std::boolalpha;
//    std::cout << static_cast<bool>(res1) << std::endl;

//    doSomething5(res1.get());   //get():unique_ptr안에 있는 함수, pointer를 return함

//    std::cout << std::boolalpha;
//    std::cout << static_cast<bool>(res1) << std::endl;

//    res1->print();
//}



//하면 안되는 것
{
    Resource* res = new Resource;
    std::unique_ptr<Resource> res1(res);
    std::unique_ptr<Resource> res2(res);    //unique_ptr인 res1에게 이미 줬는데 res2에도 넘김
                                            //하면 안된다

    delete res;                             //unique_ptr은 자동으로 해주는데 delete을 하면 지운걸 다시 지우려고 함                 
                                            //하면 안된다
}


    return 0;
}
