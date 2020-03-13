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

    ////vector<int>::const_iterator itr;    //const�� �پ����Ƿ� �� ���� �ȵ�? //iterator ��������
    ////itr = container.begin();            //begin()�ϸ� container�� iterator ���� retrun����
    ////while (itr != container.end())      //������ for-each�� �ַ� ����
    ////{
    ////    cout << *itr << " ";

    ////    ++itr;
    ////}
    ////cout << endl;

    //for (auto itr = container.begin(); itr != container.end(); ++itr)   //auto�� �� �� ���ϰ� �ۼ�����    //���� for-each ���
    //    cout << *itr << " ";
    //cout << endl;




    //list<int> container;        //list�� vector�� �Ȱ��� ��밡��    //�ڼ��� ����� �ڷᱸ�� �����ϸ� ��� �� �ִ�
    //for (int i = 0; i < 10; ++i)//vector�� list�� ���ο� �����͸� �����ϴ� ����� ���� �ٸ���
    //    container.push_back(i);

    //for (auto itr = container.begin(); itr != container.end(); ++itr)    //���� for-each ���
    //    cout << *itr << " ";
    //cout << endl;




    //set<int> container;        //�ڼ��� ����� �ڷᱸ�� �����ϸ� ��� �� �ִ�
    //for (int i = 0; i < 10; ++i)
    //    container.insert(i); //push_back ��� insert�� ���� ����

    //for (auto itr = container.begin(); itr != container.end(); ++itr)    //���� for-each ���
    //    cout << *itr << " ";
    //cout << endl;




    map<int,char> container;        //map�� tuple�̹Ƿ� parameter�� ������ ��        //�ڼ��� ����� �ڷᱸ�� �����ϸ� ��� �� �ִ�
    for (int i = 0; i < 10; ++i)
        container.insert(make_pair(i, char(i + 65))); //push_back ��� insert�� ���� ����

    for (auto itr = container.begin(); itr != container.end(); ++itr)    //���� for-each ���
        cout << itr->first << " " << itr->second << endl;   //map������ itr�� ����Ű�°� pair�� ������ first, second ����Ѵ�
    cout << endl;



    return 0;
}
