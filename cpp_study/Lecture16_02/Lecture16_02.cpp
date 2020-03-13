//STL iterators overview

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

int main()
{
    //vector<int> container;
    //for (int i = 0; i < 10; ++i)
    //    container.push_back(i);

    ////vector<int>::const_iterator itr;    //const가 붙었으므로 값 변경 안됨? //iterator 실행해줌
    ////itr = container.begin();            //begin()하면 container의 iterator 값을 retrun해줌
    ////while (itr != container.end())      //요즘은 for-each를 주로 쓴다
    ////{
    ////    cout << *itr << " ";

    ////    ++itr;
    ////}
    ////cout << endl;

    //for (auto itr = container.begin(); itr != container.end(); ++itr)   //auto로 좀 더 편하게 작성가능    //요즘엔 for-each 사용
    //    cout << *itr << " ";
    //cout << endl;




    //list<int> container;        //list는 vector와 똑같이 사용가능    //자세한 기능은 자료구조 공부하면 배울 수 있다
    //for (int i = 0; i < 10; ++i)//vector와 list는 내부에 데이터를 저장하는 방식이 많이 다르다
    //    container.push_back(i);

    //for (auto itr = container.begin(); itr != container.end(); ++itr)    //요즘엔 for-each 사용
    //    cout << *itr << " ";
    //cout << endl;




    //set<int> container;        //자세한 기능은 자료구조 공부하면 배울 수 있다
    //for (int i = 0; i < 10; ++i)
    //    container.insert(i); //push_back 대신 insert로 값을 넣음

    //for (auto itr = container.begin(); itr != container.end(); ++itr)    //요즘엔 for-each 사용
    //    cout << *itr << " ";
    //cout << endl;




    map<int,char> container;        //map은 tuple이므로 parameter가 여러개 들어감        //자세한 기능은 자료구조 공부하면 배울 수 있다
    for (int i = 0; i < 10; ++i)
        container.insert(make_pair(i, char(i + 65))); //push_back 대신 insert로 값을 넣음

    for (auto itr = container.begin(); itr != container.end(); ++itr)    //요즘엔 for-each 사용
        cout << itr->first << " " << itr->second << endl;   //map에서는 itr가 가르키는게 pair기 때문에 first, second 사용한다
    cout << endl;



    return 0;
}
