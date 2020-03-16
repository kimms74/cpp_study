//STL algorithms overview

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    //vector<int> container;
    //for (int i = 0; i < 10; ++i)
    //    container.push_back(i);

    //auto itr = min_element(container.begin(), container.end());
    //cout << *itr << endl;

    //itr = max_element(container.begin(), container.end());
    //cout << *itr << endl;

    //cout << endl;

    //itr = find(container.begin(), container.end(), 3);  //user-defined data type에서는 비교 연산자를 구현해줘야 값을 찾을 수 있다
    //container.insert(itr, 128);                         //3을 뒤로 밀어내고 그 자리에 128이 들어감

    //for (auto& e : container) cout << e << " ";
    //cout << endl;

    //sort(container.begin(), container.end());   //sort: 정렬

    //for (auto& e : container) cout << e << " ";
    //cout << endl;

    //reverse(container.begin(), container.end());

    //for (auto& e : container) cout << e << " ";
    //cout << endl;





    list<int> container;
    for (int i = 0; i < 10; ++i)
        container.push_back(i);

    //auto itr = container.begin();
    //list<int>::const_iterator itr;
    auto itr = min_element(container.begin(), container.end());
    cout << *itr << endl;

    itr = max_element(container.begin(), container.end());
    cout << *itr << endl;

    cout << endl;

    itr = find(container.begin(), container.end(), 3);  //user-defined data type에서는 비교 연산자를 구현해줘야 값을 찾을 수 있다
    container.insert(itr, 128);                         //3을 뒤로 밀어내고 그 자리에 128이 들어감

    for (auto& e : container) cout << e << " ";
    cout << endl;

    container.sort();       //list안에 sort()가 들어있다

    for (auto& e : container) cout << e << " ";
    cout << endl;

    container.reverse();    //list안에 reverse()가 들어있다

    for (auto& e : container) cout << e << " ";
    cout << endl;





    return 0;
}
