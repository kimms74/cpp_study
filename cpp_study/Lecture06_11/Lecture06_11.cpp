#include <iostream>

using namespace std;

int main()
{
    ////// ���� �Ҵ��� stack�� ��, stack�� �뷮�� �۴� <-> �����Ҵ��� ���� ��&���� �뷮�� ũ��
    ////int array[1000000000]; 

    //int var;
    //var = 7;

    //int *ptr = new int{ 7 };    //new: type�� ����� ���� os���� �޸𸮸� �޾ƿ� �� �� �޸� �ּҸ� �츮���� �˷���
    //                            //�׷��Ƿ� pointer�� �޾ƾ��Ѵ�    
    //cout << ptr << endl;
    //cout << *ptr << endl;

    //delete ptr;


    //cout << "After delete" << endl;
    //cout << ptr << endl;
    //cout << *ptr << endl;   //���뿡�� �ް����� ���� ã�ư��µ� �̻縦 �������� �ٸ� ����� ����ִ� ���

    



    //delete ptr;
    //ptr = nullptr;  // ������ ���ֱ� ���� delte ptr�� ���� �ٴ�

    //if (ptr != nullptr)
    //{
    //    cout << ptr << endl;
    //    cout << *ptr << endl;   
    //}
    //else
    //{
    //cout << "Could not allocate memory" << endl;
    //}





    // �ٸ� ���α׷��� �޸𸮸� �� ���� �־ �Ҵ���� ���� �� �޸� ���� ���� ��ٷȴ� �Ҵ� �޴� ��
    int *ptr = new (std::nothrow) int{ 7 };
    int *ptr2 = ptr;

    delete ptr;
    ptr = nullptr;
    ptr2 = nullptr; // ptr2�� nullptr�� ó������� ���� ������, �ֱٿ��� smart pointer�� ó����(��� �ӵ��� ���� ����)



    //memory leak
    while (true)
    {
        int *ptr = new int;     //delete ���� ����ϸ� �޸� ��뷮�� ��� �þ��
        cout << ptr << endl;

        delete ptr;     // �޸𸮸� �����ϰ� ����Ѵ� //new, delete�� ������, ���� ����ϴ°� ����
    }








    return 0;
}
