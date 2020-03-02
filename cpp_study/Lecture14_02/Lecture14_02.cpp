// Exceptions, functions, and stack unwinding

#include <iostream>

using namespace std;

// void last() throw(int) //�Լ� �ڿ� throw(type) ���� ��: exception specifier(�� ���� ���� ��õ)
// void last() throw(...) //type�� throw�� ���� �ִٴ� ���� ���� �׻� �� type�� throw�Ѵٴ� ���� �ƴ�
//                         //throw()�� ���� �� �Լ��� ���ܸ� ������ �ʰڴٴ� ���� �ǹ���
//                          //������ �Լ� �ȿ��� ���ܸ� ������ error �߻� 

void last()
{
    cout << "last " << endl;
    cout << "Throw exception" << endl;

    //throw - 1;  //throw�� �ϸ� �� �Ʒ� �ڵ�� ���õ�
    throw 'a'; //�� ��� catch�� �� �ִ� ���� �����Ƿ� runtime error �߻��Ѵ�
                //catch (...)�� ����ϸ� ���� �� �ִ�
    cout << "End last " << endl;
}

void third()
{
    cout << "third" << endl;

    last(); //last()���� throw�� ���� third()������ catch�ϴ� �ڵ尡 �����Ƿ� second()�� �ö�
            //stack unwiding
    cout << "End third " << endl;
}

void second()
{
    cout << "second" << endl;

    try
    {
        third();
    }

    catch (double)  //catch�� ���������� double�� catch�ϹǷ� -1�� int�̱� ������ first()�� �ö�
    {               //stack unwinding
        cerr << "second caught int exception" << endl;
    }

    cout << "End second " << endl;
}

void first()    //catch���� -1�� ����
{
    cout << "first" << endl;

    try
    {
        second();
    }

    //catch (int)
    catch (double)
    {
        cerr << "first caught int exception" << endl;
    }

    cout << "End first " << endl;
}


int main()
{
    cout << "Start" << endl;

    try
    {
        first();
    }

    catch (int) //try�� ���� frist()���� catch�����Ƿ� main()�� catch�� ���õȴ�
    {           //first�� catch(int)�� �����ٸ� main�� catch�� �޴´�

        cerr << "main caught int exception" << endl;    //cout, cerr, clog�� ��� ����� �ִ�, endl�� '\n'�Ӹ��ƴ϶� flush(buffer�� �����ִ� �����͸� �� ���)�� ���ش�
    }                                                   //cerr�� ��� '\n'�� flush�� ��� ȭ������ buffer�� �����ϰ� ����� �Ѵ�



    //uncaught exceptions

    catch (...) // catch-all handlers //(...): ������ȣ, ellipses //��� ���� �� �޾��شٴ� ��
    {           //���������� catch (...)�� ���� �͵� ����(������ ����)
      cerr << "main caught ellipses exception" << endl;
    }

    cout << "End main" << endl;












    return 0;
}
