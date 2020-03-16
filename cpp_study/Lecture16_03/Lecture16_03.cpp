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

    //itr = find(container.begin(), container.end(), 3);  //user-defined data type������ �� �����ڸ� ��������� ���� ã�� �� �ִ�
    //container.insert(itr, 128);                         //3�� �ڷ� �о�� �� �ڸ��� 128�� ��

    //for (auto& e : container) cout << e << " ";
    //cout << endl;

    //sort(container.begin(), container.end());   //sort: ����

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

    itr = find(container.begin(), container.end(), 3);  //user-defined data type������ �� �����ڸ� ��������� ���� ã�� �� �ִ�
    container.insert(itr, 128);                         //3�� �ڷ� �о�� �� �ڸ��� 128�� ��

    for (auto& e : container) cout << e << " ";
    cout << endl;

    container.sort();       //list�ȿ� sort()�� ����ִ�

    for (auto& e : container) cout << e << " ";
    cout << endl;

    container.reverse();    //list�ȿ� reverse()�� ����ִ�

    for (auto& e : container) cout << e << " ";
    cout << endl;





    return 0;
}
