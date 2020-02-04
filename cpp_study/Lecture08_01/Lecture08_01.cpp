#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Friend: name. address, age, height, weight, ...

void print(const string &name, const string &address, const int &age,
    const double &height, const double &weight)
{
    cout << name << " " << address << " " << age << " " << height << " " 
        << weight << endl;
}

struct Friend
{
    string name;
    string address;
    int age;
    double height;
    double weight;
};

void print(const Friend &fr)
{
    cout << fr.name << " " << fr.address << " " << fr.age << " " << fr.height << " "
        << fr.weight << endl;
}

class Friend1  //struct �ȿ� ����� �������� class�� �ٲ���
{               //class: object��� ������ ���α׷��� ���� �����ϴ� ���� class�� �Ѵ�
public: // access specifier (public, private, protected)
    string m_name;      //��� ������ �̸��� m_�� �ٿ��ش�(������)
    string address_;    //google�� �ڿ� _�� �ٿ��ش�
    int _age;           //�ֱٿ��� �տ� _ ���δ� (�̰� ���� ���ҵ�)
    double m_height;
    double m_weight;

    void print()    //������ �����ϹǷ� parameter�� ���� �ʿ䰡 ������
    {               //data�� ����� �����ִ� ���� object��� �θ�
        cout << m_name << " " << address_ << " " << _age << " " << m_height << " "
            << m_weight << endl;
    }
};

int main()
{
    Friend jj{ "Jack Jack", "Uptown", 2, 180.0, 75.0 };

    print(jj.name, jj.address, jj.age, jj.height, jj.weight);
    //jj���� �ٸ� ģ���� ���� �ۼ��Ϸ��� �� �� �� ������Ѵ�!// ������!

    vector<string> name_vec;
    vector<string> addr_vec;
    vector<int> age_vec;
    vector<double> height_vec;
    vector<double> weight_vec;

    print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);
    //���ŷӴ�!


    
    print(jj);  //struct�� ¥�� �Լ��� ������ ����������




    Friend1 jj1{ "Jack Jack", "Uptown", 2, 180.0, 75.0 };   //instanciation: class�� �޸𸮸� �����ϵ��� �����ϴ� ��(���� ����� ���)
    jj1.print();                                            //instance: class�� ������ ����Ű�� ��(�޸𸮿� �����Ѵٴ� ��)
                                                            //jj1�� �ּҸ� ������ �������� Friend1�� �ּҴ� ���� �� ����(���� �޸� �� �������� �����Ƿ�)
    
    
    
    
    vector<Friend1> my_friends;
    
    my_friends.resize(2);

    //my_friends[0].print();
    //my_friends[1].print();
    for (auto &element : my_friends)    //����� �������� ġ�� ����Ƿ� for each ����Ѵ�!
        element.print();



    return 0;
}
