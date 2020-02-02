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
    //std::vector<int> v{ 1,2,3 };    //내부적으로는 int *v_ptr = new int[3] {1, 2, 3 };와 비슷하다
    //                                //vector안에는 pointer뿐만아니라 size 등에 대한 기능도 더 들어있다
    ////size, capacity 의미
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

    //for (auto element : v)      //과거에는 for (unsigned int i=0;i < v.size(); ++i)
    //    cout << element << " "; //            cout << v[i] << endl;로 많이 작성했다
    //cout << endl;                                       // 1 2 

    //cout << v.size() << " " << v.capacity() << endl;    // 2 10



    ////cout << v[2] << endl; // 세번째 꺼 출력
    ////cout << v.at(2) << endl;  //위 줄과 같이 error발생



    //int *ptr = v.data();

    //cout << ptr[2] << endl; // 3이 나온다   //resize로 10을 2로 줄였지만 데이터는 그대로 가지고 있다
    //                        //vector는 size를 더 작게 resize할 때 new, delete하면 느려지기때문에 2개만 있는척만 한다
    //                        //v.size()가 2인데 v.capacity는 10인 것을 보면 알 수 있다




    //std::vector<int> v{ 1,2,3 };

    //v.reserve(1024);    //reserve: 메모리를 미리 확보해두는 함수

    //for (auto element : v)
    //    cout << element << " ";
    //cout << endl;                                       // 1 2 

    //cout << v.size() << " " << v.capacity() << endl;    // 3 1024
    //                                                    //reserve하면 v.size()는 안변한다 v.capacity가 1024로 변함
    //                                                    //capacity가 크면 원소가 추가가 될 때 새로 메모리를 받아오고, 교체하는 작업을 안한다
    //                                                    //속도가 빨라짐(확실히 차이난다!)





    std::vector<int> stack; //재귀함수를 사용하는데 stack overflow가 발생하면 vector를 stack처럼 사용하는 이 방법을 쓰게 될것이다

    stack.reserve(1024);    //capacity를 크게하여 new,delete 없이 push,back을 이용해 std vector를 만들어 빠르다
                            //단점:reserve를 너무 크게하면 메모리를 낭비할 수 있다(특히 빅데이터를 다룰 때,혹은 gpu 쓸 때는 gpu 메모리가 적으므로)
    stack.push_back(3); //push_back: stack에 쌓는 것
    printStack(stack);  

    stack.push_back(5);
    printStack(stack);

    stack.push_back(7);
    printStack(stack);

    stack.pop_back();   //pop_back: stack에서 빼는 것
    printStack(stack);

    stack.pop_back();
    printStack(stack);

    stack.pop_back();
    printStack(stack);
    return 0;
}
