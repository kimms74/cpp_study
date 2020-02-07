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
        out << "(" << point.m_x << " " << point.m_y << " " << point.m_z << ")"; //member function�� �ƴϱ� ������ �ڵ����� this->�� �Ⱥٿ��ֹǷ� point.�� ���� �־������
                                                                                //parameter�� ostream library�� class�� ����ϱ⿡ member function���� ������� �ʴ´�                                                  
                                                                                //(��� �������� ��� �ٸ� library�� ������� �ʾ� member function���� �ٷ� �ۼ��ص� �ȴ�)
        
        return out; //out�� return�ϴ� ����: chaining�ϱ� ����(p1�� ����ϰ� p2�� ���޾� ����� �� �ְ�����)
    }

    friend std::istream& operator >> (std::istream& in, Point& point)   //�Է� �޴� ��� parameter�� const�� ������Ѵ�!(ostream�� ���غ�)
    {
        in >> point.m_x >> point.m_y >> point.m_z;  //������ �����ϰ� �ۼ������� �����δ� 7.13�� ����� ���α׷����� ������Ѵ�
                                                    //(input�� 3���� �ƴ� �ٸ� ���� �޾��� �� ����� �����ų� ���..)
        return in; 
    }
};

int main()
{
    //Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.0);

    //p1.print();
    //cout << " ";
    //p2.print();
    //cout << endl;   //p1�� p2�� ����ϴµ� 4���� �ۼ��ؾ��Ѵ�(������)




    //Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.0);

    //cout << p1 << " " << p2 << endl; //point class�� I/O operator overloading�� ���ִٸ� �̷��� ǥ�� ����
    //  
    //ofstream of("out.txt");         //ostream�� ���� ����: ofstream�� �����ϰ� ��밡��!(friend function�� parameter�� ostream �����)
    //of << p1 << " " << p2 << endl;  //������ file�� �����(c������ fprintf�� ���)

    //of.close();



    Point p1, p2;

    cin >> p1 >> p2;
    cout << p1 << " " << p2 << endl;

    ifstream iff("out.txt");    //����ϴ� stream
    string in_line;
    while(getline(iff, in_line))
    {
        cout << in_line << endl;
    }
    iff.close();


    return 0;
}
