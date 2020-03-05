//Overloading the subscript operator([] ÷�� ������)

#include <iostream>
#include <cassert>

using namespace std;

class Intlist
{
private:
    int m_list[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

public:
    //void setItem(int index, int value)
    //{
    //    m_list[index] = value;
    //}

    //int getItem(int index)    //my_list[index]�� return
    //{
    //    return m_list[index];
    //}
    //int* getList()            //my_list ��ü�� return
    //{
    //    return m_list;
    //}

    int& operator[] (const int index)   //parameter type�� �뵵�� ���� int���� ��밡��(map������ key�� string���� parameter ����Ѵ�)
    {                                   //lvalue�� �������� int&�̿���(�� ���� ����)

        assert(index >= 0);             //assert�� debugging �ð� �Ʋ���
        assert(index < 10);             //[]�� ���־��̱⶧���� inline�ص� ���ڶ� �ǿ� if�� ���� �� ������
                                        //���� assert�� ��� ����ִ� ��
        return m_list[index];
    }

    const int& operator[]  (const int index) const 
    {           
        assert(index >= 0);             
        assert(index < 10);

        return m_list[index];
    }
};

int main()
{
    //Intlist my_list;
    //my_list.setItem(3, 1);
    //cout << my_list.getItem(3) << endl;

    //my_list.getList()[3] = 20;
    //cout << my_list.getList()[3] << endl;



    //Intlist my_list;
    //my_list[3] = 10;
    //cout << my_list[3] << endl;

    //const Inlist my_list1;      //const class�� const member function�� ��밡��
    //cout << my_list1[3]<< endl; //���� �� ���� �ȵȴ�



    Intlist my_list;
    Intlist* list = new Intlist;    //���� �Ҵ������� array�� �ƴϴ� (�����Ҵ� array�� new Intlist[length] �̷� ������ ���� ���̴�)
                                    //�׳� pointer���� ������: �޸𸮸� heap���� �����´�(pointer�� stack���� ������)

    (*list)[3] = 10;                //(*list)�� object���� //operator overloading ����� ��
    
    list[3] = my_list;              //list[3]�ǹ�: list�� �׳� �����Ҵ��ε� list�� ��ġ �����Ҵ� array�� ��ó�� ���� �߸��� �����̴�




    return 0;
}
