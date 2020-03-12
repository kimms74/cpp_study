//The Standard Library & STL containers overview

#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>

using namespace std;

void sequence_containers()
{
    ////vector
    //{
    //    vector<int> vec;    // #include vector
    //    for (int i = 0; i < 10; ++i)
    //        vec.push_back(i); //vector는 array가 있을 때 주로 뒤에 더한다
    //                          //push_front가 없다                            
    //    for (auto& e : vec)
    //        cout << e << " ";
    //    cout << endl;
    //}



    //deque
    {
        deque<int> deq;     //#include deque
        for (int i = 0; i < 10; ++i)
        {
            deq.push_back(i);
            deq.push_front(i);  //deque는 array가 있을 때 앞, 뒤로 다 더할 때 사용한다
        }

        for (auto& e : deq)
            cout << e << " ";
        cout << endl;
    }
}

void associative_containers()
{
    ////set   //같은 원소 중복이 안된다
    //{
    //    set<string> str_set;

    //    str_set.insert("Hello");
    //    str_set.insert("World");
    //    str_set.insert("Hello");

    //    cout << str_set.size() << endl; //Hello가 2개라 3이 아니라 2가 나온다

    //    for (auto& e : str_set)
    //        cout << e << " ";
    //    cout << endl;
    //}



    ////multiset : duplication is allowed //원소 중복 가능하다
    //{
    //    std::multiset<string> str_set;

    //    str_set.insert("Hello");
    //    str_set.insert("World");
    //    str_set.insert("Hello");

    //    cout << str_set.size() << endl;

    //    for (auto& e : str_set)
    //        cout << e << " ";       //Hello Hello World라고 나온다
    //    cout << endl;
    //}



    //map : key / value
    {
        std::map<char, int> map;    //map은 2개의 input을 대응시키는 것   //앞이 key, 뒤가 value이다
        map['c'] = 50;
        map['a'] = 10;
        map['b'] = 20;              //자동으로 알파벳 순으로 정렬을 해준다


        cout << map['a'] << endl;

        map['a'] = 100;

        cout << map['a'] << endl;

        for (auto& e : map)
            cout << e.first << " " << e.second << " ";  //first가 key, second가 value이다
        cout << endl;
    }



    //multimap : duplicated keys        //key가 여러개일 수 있다
    {
        std::multimap<char, int> map;
        map.insert(std::pair('a', 10));   //Before c++ 14, pair<char, int>('a', 10)
        map.insert(std::pair('b', 10));
        map.insert(std::pair('c', 10));
        map.insert(std::pair('a', 100));

        cout << map.count('a') << endl; //중복 key가 몇개인지 알려줌

        for (auto& e : map)
            cout << e.first << " " <<e.second << " ";   //알아서 정렬해준다 a a b c
        cout << endl;

    }
}

void container_adapters()
{
    ////stack
    //{
    //    cout << "Stack" << endl;

    //    std::stack<int> stack;
    //    stack.push(1);                  //push adds a copy
    //    stack.emplace(2);               //emplace constructs a new object
    //    stack.emplace(3);
    //    cout << stack.top() << endl;    //stack은 쌓는 구조이기 때문에 top은 제일 위에있는 것을 알려준다
    //    stack.pop();                    //pop은 제일 위에 있는 것을 제거하는 것
    //    cout << stack.top() << endl;    //stack은 늦게 추가 된 것이 먼저 pop이 된다
    //}

    

    //queue
    {
        cout << "Queue" << endl;

        std::queue<int> queue;
        queue.push(1);
        queue.push(2);
        queue.push(3);
        cout << queue.front() << " " << queue.back() << endl;   //front: 제일 앞에 있는 것 보여줌, back: 제일 뒤에 있는 것 보여줌
        queue.pop();                    //queue는 먼저 추가된 것이 먼저 pop이 된다
        cout << queue.front() << " " << queue.back() << endl;
    }



    ////Priority queue
    //{
    //    cout << "Priority queue" << endl;

    //    std::priority_queue<int> queue;       //priority queue는 sorting을 해주기 때문에       
    //                                          //사용자 정의 class를 사용할 때는 크기비교 연산자를 overloading 해줘야한다

    //    for (const int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})    //for-each문을 이렇게도 사용할 수 있다
    //        queue.push(n);

    //    for (int i = 0; i < 10; ++i)
    //    {
    //        cout << queue.top() << endl;                      //알아서 정렬된 것이 나옴
    //        queue.pop();
    //    }
    //}
}

int main()
{
    //sequence_containers();

    //associative_containers();

    container_adapters();


    return 0;
}
