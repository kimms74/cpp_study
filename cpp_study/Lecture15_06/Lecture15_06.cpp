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
    //        //std::shared_ptr<Resource> ptr2(res);    //�̷��� ����ϸ� pt2�� res�� ���� �������� ptr1�� �� ���� ���� ���� �߻��Ѵ�
    //        std::shared_ptr<Resource> ptr2(ptr1);

    //        ptr2->setAll(3);
    //        ptr2->print();

    //        std::cout << "Going out of the block" << std::endl;
    //    }

    //    ptr1->print();

    //    std::cout << "Going out of the outer block" << std::endl;
    //}   //block�� ���������鼭 res�� destory�Ѵ�





    {
        auto ptr1 = std::make_shared<Resource>(3);  //Resource* res = new Resource(3)ó�� �ϱ⺸�ٴ� �������� �ʱ�ȭ ����� �� ��ȣ��
        ptr1->setAll(1);

        ptr1->print();

        {
            auto ptr2 = ptr1;   //���� ����� ���

            ptr2->setAll(3);
            ptr2->print();

            std::cout << "Going out of the block" << std::endl;
        }

        ptr1->print();

        std::cout << "Going out of the outer block" << std::endl;
    }   //������ shared_ptr�� �Ҹ��� �� �� Resource�� destroy�Ѵ�
        //shared_ptr�� unique_ptr���ٴ� �� �� �����ϴ�
    return 0;
}
