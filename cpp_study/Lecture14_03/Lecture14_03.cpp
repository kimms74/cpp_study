// classes, inheritance, and rethrowing exceptions

#include <iostream>

using namespace std;

//class MyArray
//{
//private:
//    int m_data[5];
//
//public:
//    int& operator [] (const int& index)
//    {
//        if (index < 0 || index >= 5) throw - 1; //member function �ȿ����� throw ����
//
//        return m_data[index];
//    }
//};
//
//void doSomething()
//{
//    MyArray my_array;
//
//    try
//    {
//        my_array[100];
//    }
//    catch (const int& x)
//    {
//        cerr << "Exception" << x << endl;
//    }
//}



class Exception
{
public:
    void report()
    {
        cerr << "Exception report" << endl;
    }
};

class ArrayException : public Exception
{
public:
    void report()   //overriding    
    {
        cerr << "Array exception" << endl;
    }
};

class MyArray
{
private:
    int m_data[5];

public:
    int& operator [] (const int& index)
    {
        //if (index < 0 || index >= 5) throw Exception(); //Exception(): default constructor? anonymous object?
        if (index < 0 || index >= 5) throw ArrayException();
        return m_data[index];
    }
};

//void doSomething()
//{
//    MyArray my_array;
//
//    try
//    {
//        my_array[100];
//    }
//    catch (Exception& e)    //ArrayException�� throw�ϸ� parameter�� Exception�̱� ������ ��ü �߸������� �߻��Ѵ�
//    {                       //parameter���� class���� const ���� �ʴ� ����: const�� �ְ� �Ǹ� member fuction �߿� �ڿ� const�� ���ΰ͸� ���డ���ϱ� �����̴�
//        e.report();
//    }
//
//    catch (ArrayException & e)    //parameter�� ArayException�� �ص� ������ Excpetion�� ������ ������ "Exception report"�� ��µȴ�
//    {                           //�ذ��: parameter�� ArrayException�� catch�� parameter��  exception�� catch ���� �ۼ��ϸ� ��
//        e.report();
//    }
//}






//void doSomething()
//{
//    MyArray my_array;
//
//    try
//    {
//        my_array[100];
//    }
//
//    catch (ArrayException & e)
//    {
//        cout << "doSomething()" << endl;
//        e.report();
//        throw e;    //doSomething() ���� catch�� �����Ƿ� �ٽ� �ѹ� throw�� �ϰ� �Ǹ� main()������ catch�� �ϰ� �ȴ�
//    }
//
//    catch (Exception & e)  //������ throw�� ������ stack unwinding�� ���� ���⼭ catch�� ���� �ʰ� main()���� catch�� �Ѵ�   
//    {                       //throw�� �ϰԵǸ� �� �Ʒ� �ڵ���� �� ���ð� �Ǳ� �����̴�
//        cout << "doSomething()" << endl;
//        e.report();
//    }
//
//}





void doSomething()
{
    MyArray my_array;

    try
    {
        my_array[100];
    }

    catch (Exception & e)  
    {                       
        cout << "doSomething()" << endl;
        e.report();
        //throw e;    //throw e�� �ϸ� �߷����� ��ü�� �����Ƿ� Exception()�� �޴´�
        throw;      //������ �׳� throw�� �ϰ� �Ǹ� ArrayException()�� �ް� �ȴ�(��ü �߸� �߻� x)
    }

}

int main()
{
    //doSomething();



    //try   //doSomething()���� throw�� �ѹ� �� �ϴ� ���
    //{
    //    doSomething();
    //}

    //catch(ArrayException& e)
    //{
    //    cout << "main()" << endl;
    //    e.report();
    //}




    try //doSomething()������ catch(ArrayException& e)�� �����ϰ�
    {   //main()�� catch(Exception& e)�� �߰��� ���
        doSomething();
    }

    catch (ArrayException & e)
    {
        cout << "main()" << endl;
        e.report();
    }

    catch (Exception & e)
    {
        cout << "doSomething()" << endl;
        e.report();
    }

    return 0;
}
