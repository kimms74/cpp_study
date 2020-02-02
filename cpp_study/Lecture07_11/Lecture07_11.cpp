#include <iostream>
#include <vector>

using namespace std;

void printStack(const std::vector<int> &stack)
{
    for (auto element : stack)
        cout << element << " ";
    cout << endl;
}

int main()
{
    //std::vector<int> v{ 1,2,3 };    //���������δ� int *v_ptr = new int[3] {1, 2, 3 };�� ����ϴ�
    //                                //vector�ȿ��� pointer�Ӹ��ƴ϶� size � ���� ��ɵ� �� ����ִ�
    ////size, capacity �ǹ�
    //for (auto element : v)
    //    cout << element << " ";
    //cout << endl;                                       // 1 2 3

    //cout << v.size() << " " << v.capacity() << endl;   // 3 3



    //v.resize(10);

    //for (auto element : v)
    //    cout << element << " ";
    //cout << endl;                                       // 1 2 3 0 0 0 0 0 0 0

    //cout << v.size() << " " << v.capacity() << endl;    // 10 10



    //v.resize(2);

    //for (auto element : v)      //���ſ��� for (unsigned int i=0;i < v.size(); ++i)
    //    cout << element << " "; //            cout << v[i] << endl;�� ���� �ۼ��ߴ�
    //cout << endl;                                       // 1 2 

    //cout << v.size() << " " << v.capacity() << endl;    // 2 10



    ////cout << v[2] << endl; // ����° �� ���
    ////cout << v.at(2) << endl;  //�� �ٰ� ���� error�߻�



    //int *ptr = v.data();

    //cout << ptr[2] << endl; // 3�� ���´�   //resize�� 10�� 2�� �ٿ����� �����ʹ� �״�� ������ �ִ�
    //                        //vector�� size�� �� �۰� resize�� �� new, delete�ϸ� �������⶧���� 2���� �ִ�ô�� �Ѵ�
    //                        //v.size()�� 2�ε� v.capacity�� 10�� ���� ���� �� �� �ִ�




    //std::vector<int> v{ 1,2,3 };

    //v.reserve(1024);    //reserve: �޸𸮸� �̸� Ȯ���صδ� �Լ�

    //for (auto element : v)
    //    cout << element << " ";
    //cout << endl;                                       // 1 2 

    //cout << v.size() << " " << v.capacity() << endl;    // 3 1024
    //                                                    //reserve�ϸ� v.size()�� �Ⱥ��Ѵ� v.capacity�� 1024�� ����
    //                                                    //capacity�� ũ�� ���Ұ� �߰��� �� �� ���� �޸𸮸� �޾ƿ���, ��ü�ϴ� �۾��� ���Ѵ�
    //                                                    //�ӵ��� ������(Ȯ���� ���̳���!)





    std::vector<int> stack; //����Լ��� ����ϴµ� stack overflow�� �߻��ϸ� vector�� stackó�� ����ϴ� �� ����� ���� �ɰ��̴�

    stack.reserve(1024);    //capacity�� ũ���Ͽ� new,delete ���� push,back�� �̿��� std vector�� ����� ������
                            //����:reserve�� �ʹ� ũ���ϸ� �޸𸮸� ������ �� �ִ�(Ư�� �����͸� �ٷ� ��,Ȥ�� gpu �� ���� gpu �޸𸮰� �����Ƿ�)
    stack.push_back(3); //push_back: stack�� �״� ��
    printStack(stack);  

    stack.push_back(5);
    printStack(stack);

    stack.push_back(7);
    printStack(stack);

    stack.pop_back();   //pop_back: stack���� ���� ��
    printStack(stack);

    stack.pop_back();
    printStack(stack);

    stack.pop_back();
    printStack(stack);
    return 0;
}
