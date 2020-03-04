// Exception dangers and downsides(����)

#include <iostream>
#include <memory>

using namespace std;

class A
{
public:
    ~A()                //�Ҹ��� �ȿ��� throw�� �õ���    //�ݱ�� �Ǵ� ����
    {                   //�Ҹ��ڿ����� ���ܸ� throw �� �� ����      
        throw "error";
    }
};

int main()
{
    //try
    //{
    //    int* i = new int[100000];

    //    // do something with i
    //    throw "error";  //���ܰ� throw �ȴٸ� delete�� �ȵǰ� ���������Ƿ� memory leak �߻��Ѵ�

    //    delete[] i;
    //}

    //catch (...)
    //{
    //    cout << "Catch" << endl;
    //}




    //try
    //{
    //    int* i = new int[100000];
    //    unique_ptr<int> up_i(i);    //smart pointer�� ����ϸ� delete[]�� �ʿ� ���� scope�� ����� �ڵ����� delete ���ش�

    //    // do something with i
    //    throw "error";  //throw�� �ϴ��� unique_ptr�� �˾Ƽ� �����ش�

    //    //delete[] i;   //��� �ȴ�
    //}

    //catch (...)
    //{
    //    cout << "Catch" << endl;
    //}



    try
    {
        A a;
    }

    catch (A a)
    {
        cerr << "wow" << endl;
    }


    //for�� �ȿ��� ����ϰ� ȣ��Ǵ� ������ throw, catch�� ���� ���α׷��� ���� �������Ƿ� ����!!
    //�������̸� main() �ٷ� �ȿ��� ���°��� ��õ(for�� ��������!)





    return 0;
}
