//std::shared_ptr

#include <iostream>
#include "Resource.h"

using namespace std;

int main()
{
    //Resource* res = new Resource(3);
    //res->setAll(1);

    //{
    //    std::shared_ptr<Resource> ptr1(res);

    //    //auto ptr1 = std::make_shared<Resource>(3);
    //    //ptr1->setAll(3);

    //    ptr1->print();

    //    {
    //        //std::shared_ptr<Resource> ptr2(res);    //이렇게 사용하면 pt2의 res에 대한 소유권을 ptr1은 알 수가 없어 오류 발생한다(순서를 지키자!)
    //        std::shared_ptr<Resource> ptr2(ptr1);

    //        ptr2->setAll(3);
    //        ptr2->print();

    //        std::cout << "Going out of the block" << std::endl;
    //    }

    //    ptr1->print();                                //ptr2가 사라져도 ptr1이 소유권을 가지고 있으므로 res에 대한 ptr이 사라지지 않는다!

    //    std::cout << "Going out of the outer block" << std::endl;
    //}                                                 //block을 빠져나오면서 res를 마지막으로 소유하고 있던 ptr1이 사라지므로 res를 destory한다





    {
        auto ptr1 = std::make_shared<Resource>(3);  //shared_ptr을 쓸 때는 Resource* res = new Resource(3)처럼 하기보다는 직접적인 초기화 방식을 더 선호한다
        ptr1->setAll(1);

        ptr1->print();

        {
            auto ptr2 = ptr1;   //가장 깔끔한 방법

            ptr2->setAll(3);
            ptr2->print();

            std::cout << "Going out of the block" << std::endl;
        }

        ptr1->print();

        std::cout << "Going out of the outer block" << std::endl;
    }   //마지막 shared_ptr가 소멸이 될 때 Resource를 destroy한다
        //shared_ptr이 unique_ptr보다는 좀 더 느슨하다
    return 0;
}
