#include <iostream>

int main()
{
    using namespace std;


    //sizeof opeartor
    //float a;
    //sizeof(float); //sizeof는 operator다
    //cout << sizeof(a) << endl; //표현 단위는 bytes
    //sizeof a; // operator라 변수에는 ()없이 사용가능

    //comma operator
    //int x = 3;
    //int y = 10;
    //int z = (++x, ++y); // 콤마 앞뒤를 계산한 뒤 콤마 뒤의 값을 대입해줌 ++x, ++y, int z=y라는 뜻,
    //                     //for문에서 자주 사용
    //cout << x << " " << y << " " << z << endl;

    //int a = 1, b = 10;
    //int z;

    //z = a, b;
    //cout << z << endl; // =가 ,보다 우선순위가 높아 (z=a), b로 풀이함

    //z = (a, a + b++); // 11 , for문에서 자주 사용
    //cout << z << " " << b << endl;



    //conditional operator(arithmetric if)
    bool onSale = true;

    const int price = (onSale == true) ? 10 : 100; //if문으로는 price를 const 로 지정 못함!, 조건이 복잡할 때는 if문으로 쪼개서 하기

    //if (onSale)           // if로 const int 하고 싶으면 if로 함수를 짠 뒤 cost int price에 대입해야함
    //     price = 10;
    //else
    //     price = 100;

    cout << price << endl;

    int x = 5;
    cout << ((x % 2 == 0) ? "even" : "odd") << endl; // conditional operator 바깥에 ()씌워야함 ?:는 우선순위가 comma 다음으로 꼴찌이므로

    return 0;
}
