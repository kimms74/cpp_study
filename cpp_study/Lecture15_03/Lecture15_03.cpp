// Move constructors and move assignment

#include <iostream>
#include "Timer.h"
#include "AutoPtr.h"
#include "Resource.h"

using namespace std;

AutoPtr<Resource> generateResource()    //return�� AutoPtr�� function ���� ��
{
    AutoPtr<Resource> res(new Resource(10000000));  //������ �ʱ�ȭ�̹Ƿ� =�� �ƴ�, ()�� �Ѱ�

    return res; //release ��忡���� copy constructor, assert ����ȵȴ�
}               //������ res�� �Լ��� ���������� ������Ƿ� �� �޸𸮸� �״�� �Ѱ��ش�,���� assert�� �ڵ� Ȯ�ο��̹Ƿ� release���� �ʿ����

int main()
{
    streambuf* org_buf = cout.rdbuf();
    //cout.rdbuf(NULL); // disconnect cout from buffer
    //                //�� �ɼ��� log�� ����� �ð��� ǥ�����ִ� ��
    //                //�ӵ� ������ �Ҷ��� ȭ�鿡 ������ log�� ����� �ϴ°� ����
    Timer timer;

    {
        AutoPtr<Resource> main_res;
        main_res = generateResource();
    }

    cout.rdbuf(org_buf);
    cout << timer.elapsed() << endl;
          



    return 0;
}
