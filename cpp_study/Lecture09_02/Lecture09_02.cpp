//Overloading the I/O operators

#include <iostream>
#include <fstream>  //file stream
#include <string>

using namespace std;

class Point
{
private:
    double m_x, m_y, m_z;

public:
    Point(double x = 0.0, double y = 0.0, double z = 0.0)
        :m_x(x),m_y(y),m_z(z)
    {}

    double getX() { return m_x; }
    double getY() { return m_y; }
    double getZ() { return m_z; }

    //void print()
    //{
    //    cout << m_x << " " << m_y << " " << m_z;
    //}

    friend std::ostream& operator << (std::ostream& out, const Point& point)    
    {
        out << "(" << point.m_x << " " << point.m_y << " " << point.m_z << ")"; //member function이 아니기 때문에 자동으로 this->를 안붙여주므로 point.를 직접 넣어줘야함
                                                                                //parameter로 ostream library의 class를 사용하기에 member function으로 사용하지 않는다                                                  
                                                                                //(산술 연산자일 경우 다른 library를 사용하지 않아 member function으로 바로 작성해도 된다)
        
        return out; //out을 return하는 이유: chaining하기 위해(p1을 출력하고 p2를 연달아 출력할 수 있게해줌)
    }

    friend std::istream& operator >> (std::istream& in, Point& point)   //입력 받는 경우 parameter에 const를 빼줘야한다!(ostream과 비교해봐)
    {
        in >> point.m_x >> point.m_y >> point.m_z;  //지금은 간단하게 작성했지만 실제로는 7.13의 방어적 프로그래밍을 해줘야한다
                                                    //(input을 3개가 아닌 다른 것을 받았을 때 경고문을 날리거나 등등..)
        return in; 
    }
};

int main()
{
    //Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.0);

    //p1.print();
    //cout << " ";
    //p2.print();
    //cout << endl;   //p1과 p2를 출력하는데 4줄을 작성해야한다(귀찮다)




    //Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.0);

    //cout << p1 << " " << p2 << endl; //point class가 I/O operator overloading이 돼있다면 이렇게 표현 가능
    //  
    //ofstream of("out.txt");         //ostream을 쓸때 장점: ofstream도 동일하게 사용가능!(friend function의 parameter로 ostream 사용함)
    //of << p1 << " " << p2 << endl;  //내용을 file로 출력함(c에서는 fprintf로 출력)

    //of.close();



    Point p1, p2;

    cin >> p1 >> p2;
    cout << p1 << " " << p2 << endl;

    ifstream iff("out.txt");    //출력하는 stream
    string in_line;
    while(getline(iff, in_line))
    {
        cout << in_line << endl;
    }
    iff.close();


    return 0;
}
