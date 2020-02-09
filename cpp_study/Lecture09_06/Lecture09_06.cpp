//Overloading the subscript operator([] 첨자 연산자)

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

    //int getItem(int index)    //my_list[index]를 return
    //{
    //    return m_list[index];
    //}
    //int* getList()            //my_list 자체를 return
    //{
    //    return m_list;
    //}

    int& operator[] (const int index)   //parameter type은 용도에 따라 int말고도 사용가능(map에서는 key를 string으로 parameter 사용한다)
    {                                   //lvalue로 쓰기위해 int&이용함(값 대입 가능)

        assert(index >= 0);             //assert로 debugging 시간 아껴줌
        assert(index < 10);             //[]은 자주쓰이기때문에 inline해도 모자랄 판에 if문 쓰면 더 느려짐
                                        //따라서 assert로 경고문 띄워주는 것
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

    //const Inlist my_list1;      //const class는 const member function만 사용가능
    //cout << my_list1[3]<< endl; //또한 값 변경 안된다



    Intlist my_list;
    Intlist* list = new Intlist;    //동적 할당(Intlist type에 해당하는 크기의 메모리를 가져와 그 메모리 주소를 반환해주는것)
                                    //동적 array 만들 거 아니면 이렇게 쓰지마(헷갈린다)

    (*list)[3] = 10;                //(*list)로 object접근 //operator overloading 사용한 것
    
    list[3] = my_list;              //list[3]의미: list array의 3번째 인자에 class my_list를 넣겠다고 가정하는것
                                    //실제로는 list는 array가 아니다, 이상한 문법이므로 쓰지말 것




    return 0;
}
