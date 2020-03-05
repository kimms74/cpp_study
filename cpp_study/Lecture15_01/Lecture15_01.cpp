//Intro to smart pointers and move semantics

#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

//RALI : resource acquisition is initailization (��, memory leak�� �߻����� �ʰ� �ڵ带 �� ¥��� ��(smart pointer�� ���� ����))
                                                //auto_ptr�� c++ 98�� ����������� c++17���ķ� ����

//void doSomething()
//{
//    Resource* res = new Resource;
//
//    // work with res
//    if (true) return; // early return   //�� ��� delete�� �ȵ� memory leak�� �߻��Ѵ�
//
//    delete res; //�����Ҵ��� �ϸ� delete�� �ݵ�� ������Ѵ�
//                //�� ������ �ſ� ������
//
//
//    return;
//}

//void doSomething()
//{
//    try
//    {
//        Resource* res = new Resource;   //dull pointer: ���� delete�� �ʿ��� pointer
//
//        // work with res
//        if (true)
//        {
//            throw - 1; // exception //�� ��쿡�� throw�� �ϰ� �Ǹ� delete ���ϰ� �ȴ�
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
        //AutoPtr<Resource> res = new Resource;  //smart pointer  //��ü�� pointer�� ������ *�� ���̸� �ȵȴ� //<type>�� ���� �� ��� template ��붧���̴�
        AutoPtr<Resource> res(new Resource);   //AutoPtr class �ʱ�ȭ�̹Ƿ� �̷��� ���°� �� ����ϴ�
        
        return; //early return�� ��쿡�� destructor �۵��Ѵ�
                //AutoPtr class destructor ��ü�� delete�� �־� main()�� �������� ��� destructor�� ����Ǹ鼭 delete�� �����Ѵ�
        
        // work with res
        if (true)
        {
            throw - 1; // exception //�� ��쿡�� throw�� �ϰ� �Ǹ� delete ���ϰ� �ȴ�
        }
        //delete res;   //delete �ʿ����
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
    //    AutoPtr<Resource> res1(new Resource);   //constructor �ʱ�ȭ �̹Ƿ� =�� �ƴ� ()�� �ϴ� ��
    //    AutoPtr<Resource> res2;

    //    cout << std::boolalpha;

    //    cout << res1.m_ptr << endl;
    //    cout << res2.m_ptr << endl;

    //    res2 = res1;

    //    cout << res1.m_ptr << endl;
    //    cout << res2.m_ptr << endl;
    //}                               //res2�� res1�� ������ ������ Resource�� constructor�� �ѹ��� ����Ǵµ�
    //                                //{}�� ���������鼭 destructor�� res1, res2���� 2�� ����� runtime error�߻��Ѵ�
    //                                //�̹� ������ ���� �� ������� �ϱ� �����̴�



    {
        AutoPtr<Resource> res1(new Resource); 
        AutoPtr<Resource> res2;

        cout << std::boolalpha;

        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;

        res2 = res1;                //move semantics (�������� �����ϴ� ��)

        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;
    }                               //�̹����� AutoPtr�� �ڵ带 �����ߴ�
                                    //{}�� �������͵� destructor�� �ѹ��� �����(res2���� �����)
                                    //res1�� res2�� ������ �� res1�� m_ptr�� nullptr�� ����Ƿ�

    // syntax vs. semantics
    int x = 1, y = 1;
    x + y;          //add

    string str1("Hello"), str2("World");
    str1 + str2;    //append
    //syntax�� ���������� Ÿ������ Ȯ���ϴ� ��, semantics�� ������ Ÿ���� �ǹ̸� ���ϴ����� �Ǻ��ϴ� ��
    //+�� ��ȣ�����δ� �Ȱ����� �ǹ̰� �ٸ���, string�� ���ؼ� +�� ���� �� ���ڸ� ���ϴ� ��ó�� �����ϸ� �ȵǰ� ���ڿ��� �ڿ� ���δٴ� �������� �����Ѵ�
    //�̷��� �Ǻ��ϴ� ���� semantics��� ��
    //doSomething(res1);�� �� �� res1�� semantics�� ���� doSomething�� ��� ��������� ��������
    //�� �Ѹ�縸 ���� ����� �ٸ� ��� ���δ�

    //value semantics (copy semantics)
    //reference semantics (pointer)
    //move semantics (move) :�������� �Ѱ���

    return 0;
}
