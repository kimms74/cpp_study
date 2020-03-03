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
//        if (index < 0 || index >= 5) throw - 1; //member function 안에서도 throw 가능
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
//    catch (Exception& e)    //ArrayException을 throw하면 parameter가 Exception이기 때문에 객체 잘림현상이 발생한다
//    {                       //parameter에서 class에는 const 쓰지 않는 이유: const를 넣게 되면 member fuction 중에 뒤에 const를 붙인것만 실행가능하기 때문이다
//        e.report();
//    }
//
//    catch (ArrayException & e)    //parameter로 ArayException을 해도 위에서 Excpetion에 잡히기 때문에 "Exception report"가 출력된다
//    {                           //해결법: parameter가 ArrayException인 catch를 parameter가  exception인 catch 위에 작성하면 됨
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
//        throw e;    //doSomething() 안의 catch가 잡으므로 다시 한번 throw를 하게 되면 main()에서도 catch를 하게 된다
//    }
//
//    catch (Exception & e)  //위에서 throw를 하지만 stack unwinding에 의해 여기서 catch를 하지 않고 main()에서 catch를 한다   
//    {                       //throw를 하게되면 그 아래 코드들은 다 무시가 되기 때문이다
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
        //throw e;    //throw e를 하면 잘려나간 객체가 나가므로 Exception()이 받는다
        throw;      //하지만 그냥 throw를 하게 되면 ArrayException()이 받게 된다(객체 잘림 발생 x)
    }

}

int main()
{
    //doSomething();



    //try   //doSomething()에서 throw를 한번 더 하는 경우
    //{
    //    doSomething();
    //}

    //catch(ArrayException& e)
    //{
    //    cout << "main()" << endl;
    //    e.report();
    //}




    try //doSomething()내에서 catch(ArrayException& e)를 제거하고
    {   //main()에 catch(Exception& e)를 추가한 경우
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
