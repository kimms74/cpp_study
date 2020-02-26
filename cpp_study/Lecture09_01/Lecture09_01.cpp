//Overloading the arithmetic operators using friend functions(산술 연산자)

#include <iostream>

using namespace std;

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents=0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int& getCents() { return m_cents; }     //return by reference는 lvalue
       
    //friend Cents operator + (const Cents& c1, const Cents& c2);   




    Cents operator + (const Cents& c2)          //operator +를 member function으로 사용할 때
    {                                           //parameter를 한개만 써야한다(왼쪽 피연산자가 연산자를 호출하는 형태이므로)
                                                //cents1.operator+(cents2)처럼 작동한다
                                                //실제는 operator+(&cents1,cents2)로 작동함(위와 똑같다)
       
        return Cents((*this).m_cents + c2.m_cents); //left operand는 this pointer가 적용이 돼 parameter에 안넣어도 된다
    }
};

//void add(const Cents& c1, const Cents& c2, Cents& c_out)
//{
//    c_out.getCents() = c1.getCents() + c2.getCents();
//}

//Cents add(const Cents& c1, const Cents& c2)     //요즘은 return으로 출력하는게 대세!
//{
//    return Cents( c1.getCents() + c2.getCents());
//}

//Cents operator + (const Cents& c1, const Cents& c2)       //operator + (cents1,cents2)이지만 실제로 사용할 때는 cents1 + cents2처럼 쓰면 된다
//{                                                         //operator +가 스스로 operator + (&cents1,cents2)로 바꿔서 사용한다  
//    return Cents(c1.getCents() + c2.getCents());           
//}

//Cents operator + (const Cents& c1, const Cents& c2)     
//{
//    return Cents(c1.m_cents + c2.m_cents);  //friend로 등록해서 getCents()제거함
//}

int main()
{
    //Cents cents1(6);
    //Cents cents2(8);

    //Cents sum;      //Cents(int)에 default parameter 넣어서 default constructor생성 안해도 error 안뜨게 함
    //add(cents1, cents2, sum);

    //cout << sum.getCents() << endl; //class를 이용한 산술(복잡하다)

    ////int i = 6, j = 8; cout << i + j << endl; //정수로 나타내면 이렇게 쉬운걸!




    //Cents cents1(6);
    //Cents cents2(8);

    //cout << add(cents1, cents2).getCents() << endl; // I/O operator가 정의 안 돼 있어 add()만으로는 사용안됨!
    //                                                //조금 더 편해졌다



    Cents cents1(6);
    Cents cents2(8);

    cout << (cents1 + cents2 + Cents(6)).getCents() << endl;  // operator +로 간단히 나타낼 수 있다
                                                            //Cents(6): anonymous object
                                                            

    cout << (cents1 + cents2 + Cents(6)).getCents() << endl;    //operator +를 friend로 등록해두면 함수 안에서 getCents()안 써도 된다
                                    
    
    // ?:(조건 연산자), ::(스코프 연산자), sizeof, .(member access from an object), .*(member object selector)
    //들은 operator overloading 불가능(+,-,/,* 등 나머지는 다 가능하다!)
    //operator overloading한 것들 사이의 우선순위는 operator 우선순위와 동일( *가 +보다 우선이다)
    //그러므로 우선순위를 확실히 알 수 있는 것들에 대해서만 operator overloading쓰고
    //나머지는 그냥 함수 이름을 통해서 실행시켜라(위험한거보단 귀찮은게 낫다)
    //특히 ^(bitwise xor)은 우선순위가 매우 낮으므로 무조건 ()를 써서 사용해야함(오버로딩 하지마!)
    
    
    cout << (cents1 + cents2 + Cents(6)).getCents() << endl;    //operator +를 member function으로 정의


    // =(assignment), [](subscript), ()(function call), ->(member selection operator)
    //들은 member function으로만 overloading 가능하다!

    return 0;
}
