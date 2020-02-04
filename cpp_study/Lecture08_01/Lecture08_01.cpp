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

class Friend1  //struct 안에 기능을 넣으려면 class로 바꾸자
{               //class: object라는 개념을 프로그래밍 언어로 구현하는 것을 class라 한다
public: // access specifier (public, private, protected)
    string m_name;      //멤버 변수는 이름에 m_을 붙여준다(교과서)
    string address_;    //google은 뒤에 _만 붙여준다
    int _age;           //최근에는 앞에 _ 붙인다 (이게 제일 편할듯)
    double m_height;
    double m_weight;

    void print()    //변수를 공유하므로 parameter를 넣을 필요가 없어짐
    {               //data와 기능이 묶여있는 것을 object라고 부름
        cout << m_name << " " << address_ << " " << _age << " " << m_height << " "
            << m_weight << endl;
    }
};

int main()
{
    Friend jj{ "Jack Jack", "Uptown", 2, 180.0, 75.0 };

    print(jj.name, jj.address, jj.age, jj.height, jj.weight);
    //jj말고 다른 친구에 대해 작성하려면 또 몇 줄 적어야한다!// 귀찮다!

    vector<string> name_vec;
    vector<string> addr_vec;
    vector<int> age_vec;
    vector<double> height_vec;
    vector<double> weight_vec;

    print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);
    //번거롭다!


    
    print(jj);  //struct를 짜고 함수에 넣으면 간결해진다




    Friend1 jj1{ "Jack Jack", "Uptown", 2, 180.0, 75.0 };   //instanciation: class를 메모리를 차지하도록 정의하는 것(변수 선언과 비슷)
    jj1.print();                                            //instance: class의 변수를 가르키는 말(메모리에 실존한다는 것)
                                                            //jj1의 주소를 찍으면 나오지만 Friend1의 주소는 찍을 수 없다(아직 메모리 상에 존재하지 않으므로)
    
    
    
    
    vector<Friend1> my_friends;
    
    my_friends.resize(2);

    //my_friends[0].print();
    //my_friends[1].print();
    for (auto &element : my_friends)    //사람이 많아지면 치기 힘드므로 for each 사용한다!
        element.print();



    return 0;
}
