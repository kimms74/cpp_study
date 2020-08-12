// R-value references

#include <iostream>

using namespace std;

int getResult()
{
    return 100 * 100;
}

void doSomething(int& lref)     //parameter가 l-value reference
{
    cout << "L-value ref" << endl;  //r-value이기 때문에 move semantics 안됨(memory가 있으므로 다른 곳에서도 사용가능하다)
}

void doSomething(int&& ref)         //parameter가 r-value reference
{                                   //parameter가 다르다고 인정해줌으로 overloading 가능

    cout << "R-value ref" << endl;  //r-value reference로 받아온 경우에는 안에 담겨있는 data를 move해서 가져와도 된다
}                                   //어차피 다른 곳에서 쓸 일이 없기 때문이다(memory가 없는 애들이므로)

int main()
{
    int x = 5;  //x(l-vlaue)는 메모리를 가지고 있지만 5(r-vlaue)는 이 문장이 끝나면 사라진다
    int y = getResult();    //getResult() : R-value
    const int cx = 6;
    const int cy = getResult();




    //l-value references
    int& lr1 = x;           //Modifiable l-values
    //int& lr2 = cx;        //Non-modifiable l-values //const int를 int에 대입 불가능
    //int& lr3 = 5;         //R-values    //int&에 r-value를 넣는 것 불가능(메모리를 가진것만 넣을 수 있다)

    const int& lr4 = x;     //Modifiable l-values
    const int& lr5 = cx;    //Non-modifiable l-values   //const이므로 가능
    const int& lr6 = 5;     //R-values  //const int&에는 r-value넣는 것 가능!(값을 안바꿀 것이므로)




    //R-value references(r-value만 대입가능!)    //&&는 비교연산자와는 관련 없다!
                                                //단지 기호가 부족해서 사용할 뿐
    //int&& rr1 = x;        //Modifiable l-vlaues       //l-value라 불가능
    //int&& rr2 = cx;       //Non-modifiable l-vlaues   //l-value라 불가능
    int&& rr3 = 5;          //R-values  //메모리를 가지지 않는 애들만 가능
    int&& rrr = getResult();

    //const int&& rr4 = x;  //Modifiable l-values       //l-value라 불가능
    //const int&& rr5 = cx; //Non-modifiable l-values   //l-value라 불가능
    const int&& rr6 = 5;    //R-values


    cout << rr3 << endl;
    rr3 = 10;               //심지어 값도 바꿀 수 있다
    cout << rr3 << endl;    //l-value와는 다르게 하나만 존재하므로 자동으로 move semantics 가능?
                            //다른 곳에 대입하면 존재 자체가 옮겨진다




    // L/R-value reference parameters
    doSomething(x);             //parameter가 l-value reference
    //doSomething(cx);          //cx는 const int&이므로 불가능
    doSomething(5);             //parameter가 r-value reference
    doSomething(getResult());   //parameter가 r-value reference


    return 0;
}
