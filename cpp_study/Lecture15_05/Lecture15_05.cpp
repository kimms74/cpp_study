//std::unique_ptr

#include <iostream>
#include <memory>
#include "Resource.h"
using namespace std;

auto doSomething()
{
    //auto res1 = std::make_unique<Resource>(5);        //���1
    //return res1;

    //return std::unique_ptr<Resource>(new Resource(5));  //���2

    return std::make_unique<Resource>(5);             //���3   //���� ������ ���
}                                                       //���������� move semantics�� �����(������!)

void doSomething2(std::unique_ptr<Resource>& res)   //l-value reference�� �޴´�                 
{
    res->setAll(10);
}

void doSomething3(std::unique_ptr<Resource> res)    //reference�� �ȳ����� ������(unique_ptr�� �̿��ϱ� ������)
             
{
    res->setAll(30);
    res->print();
}

auto doSomething4(std::unique_ptr<Resource> res)    //res1�� ��� ����ϰ� ���� ��
                
{
    res->setAll(100);
    res->print();

    return res;
}

void doSomething5(Resource* res)                  //pointer�� �Ѱ��ְ� �۾��ϴ� ���           
{
    res->setAll(50);
    res->print();
}

int main()
{
    //{
    //    Resource* res = new Resource(10000000);

    //    //early return or throw     //delete�� ���ϹǷ� memory leak �߻�

    //    //delete res;
    //}




    //{
    //    std::unique_ptr<Resource> res(new Resource(10000000));  //res�� constructor�ϹǷ� =�� �ƴ� ()�� �����ش�

    //    //early return or throw     //delete�� �ڵ����� ���ֹǷ� memory leak �߻� x

    //    //delete res;
    //}




    //{
    //    std::unique_ptr<int> upi(new int);

//    //std::unique_ptr<Resource> res1(new Resource(5));  //���1
//    auto res1 = std::make_unique<Resource>(5);          //���2: ���ٰ� ���� �ǹ����� �� �� �����ϴ� ���!
//    //auto res1 = doSomething();                        //���3: �Լ��� ����� ���¹�

//    res1->setAll(5);
//    res1->print();

//    std::unique_ptr<Resource> res2;

//    std::cout << std::boolalpha;    //nullptr�� �Ǻ��� ���� boolalpha�� �� �� �ִ�(nullptr�� ��� false ����)
//    std::cout << static_cast<bool>(res1) << std::endl;  //res1�� �ʱ�ȭ�� �������Ƿ� nullptr�� �ƴϴ�
//    std::cout << static_cast<bool>(res2) << std::endl;  //res2�� ���� �־� �ʱ�ȭ�� �������Ƿ� nullptr�̴�

//    //res2 = res1;  //unique_ptr�� copy �Ұ�   //error �߻��� //unique_ptr�� ���״�� �������� unique�ϹǷ�, �� ���������� ������ �� �� �ִ�
//    res2 = std::move(res1); //move semantics�� ��밡��

//    std::cout << std::boolalpha;
//    std::cout << static_cast<bool>(res1) << std::endl;
//    std::cout << static_cast<bool>(res2) << std::endl;  

//    if (res1 != nullptr) res1->print();
//    if (res2 != nullptr) res2->print(); //move �����Ƿ� destructor�� �ѹ��� ���� ��
//    //(*res2).print();  //dereferencing�� ���������� ������ �� �ִ�
//}





//doSomething2()���� reference�� parameter�� ���� ��
//{         
//    auto res1 = std::make_unique<Resource>(5);
//    res1->setAll(1);
//    res1->print();

//    doSomething2(res1);

//    res1->print();
//}



////doSomething3()���� �׳� parameter�� ���� ��
//{
//    auto res1 = std::make_unique<Resource>(5);
//    res1->setAll(1);
//    res1->print();

//    std::cout << std::boolalpha;
//    std::cout << static_cast<bool>(res1) << std::endl;

//    doSomething3(std::move(res1));  //res1�� ������ ���������� std::move�� �̿��ϸ� ������ ���� ����
//                                    //�Լ��� ����鼭 destructor ����
//    std::cout << std::boolalpha;
//    std::cout << static_cast<bool>(res1) << std::endl;  //�������� �Ѱܹ����� false�� ����(nullptr�̱� ������)

//    res1->print();
//}



////doSomething4()���� �׳� parameter�� ���� �� res1���� �۾��ϰ� ������
//{           //�׳� l-value reference���°� ���Ҽ��� ������ �� ����� python ��Ÿ���̴�(�� ����� ������!)
//    auto res1 = std::make_unique<Resource>(5);
//    res1->setAll(1);
//    res1->print();

//    std::cout << std::boolalpha;
//    std::cout << static_cast<bool>(res1) << std::endl;

//    res1 = doSomething4(std::move(res1));  //�Լ����� �������� �ٽ� ��������
//                                          //�Լ��� ����鼭 destructor ����
//    std::cout << std::boolalpha;
//    std::cout << static_cast<bool>(res1) << std::endl;  //�������� �ٽ� �޾Ƽ� true�� ����

//    res1->print();
//}



////doSomething5()���� reference�� parameter�� ���� ��
//{         
//    auto res1 = std::make_unique<Resource>(5);
//    res1->setAll(1);
//    res1->print();


//    std::cout << std::boolalpha;
//    std::cout << static_cast<bool>(res1) << std::endl;

//    doSomething5(res1.get());   //get():unique_ptr�ȿ� �ִ� �Լ�, pointer�� return��

//    std::cout << std::boolalpha;
//    std::cout << static_cast<bool>(res1) << std::endl;

//    res1->print();
//}



//�ϸ� �ȵǴ� ��
{
    Resource* res = new Resource;
    std::unique_ptr<Resource> res1(res);
    std::unique_ptr<Resource> res2(res);    //unique_ptr�� res1���� �̹� ��µ� res2���� �ѱ�
                                            //�ϸ� �ȵȴ�

    delete res;                             //unique_ptr�� �ڵ����� ���ִµ� delete�� �ϸ� ����� �ٽ� ������� ��                 
                                            //�ϸ� �ȵȴ�
}


    return 0;
}
