#include <iostream>
#include <vector>
using namespace std;

void addOne(int &y) //call by reference
{
    cout << y << " " << uintptr_t(&y) << endl;

    y = y + 1;
}

void getSinCos(const double &degrees, double &sin_out, double &cos_out)  //c나 c++은 return이 1개밖에 안되므로 parameter를 이용해 여러개 output 사용
{   //const를 붙인건 변수로 생각하고, 안 붙인건 output으로 생각하면 편함
    static const double pi = 3.14314492;    //header로 뽑아쓰면 편함
    //여러번 쓰이는 상수일 경우 static을 사용하면 매번 새로 정의 되는 것이 아닌 그대로 활용함
    const double radians = degrees * pi / 180.0;
    sin_out = sin(radians);
    cos_out = cos(radians);
}

//void foo(const int &x)      //실무에서 가장 많이 쓰는 형식이다!
//{
//    cout << x << endl;
//}

//void foo(int *&ptr)      //parameter 의미: (int *) &ptr   //pointer를 인수로 받을 때 사용
//{
//    cout << ptr << " " << &ptr <<endl;
//}

typedef int *pint;

void foo(pint &ptr)     //int *&ptr와 같다
{
    cout << ptr << " " << uintptr_t(&ptr) << endl;
}

void printElements(const int (&arr)[5])   //정적 배열을 parameter로 사용할 때 array의 크기를 []로 적어줘야함
{                                   //실제로는 array를 parameter로 사용할 때는 동적 배열만 쓴다

}

void printElements(const vector<int> &arr)    //동적 배열은 vector로 간단히 나타낼 수 있다
{

}


int main()
{
    //int x = 5;

    //cout << x << " " << uintptr_t(&x) << endl;

    //addOne(x);

    //cout << x << " " << uintptr_t(&x) << endl;  
    ////참조에 의한 호출은 변수 자체를 넘기기 때문에 주소도 똑같고 복사가 이루어지지 않는다





    //double sin(0.0);
    //double cos(0.0);

    //getSinCos(30.0, sin, cos);  
    ////call by reference를 이용해 함수 밖에서 변수를 정의하고 return 값을 여러개 나오는 것 처럼 사용가능

    //cout << sin << " " << cos << endl;




    //foo(6);     //foo의 parameter를 const int &로 하면 인수에 상수를 넣을 수 있다




    //int x = 5;
    ////int *ptr = &x;
    //pint ptr = &x;    //int *를 pint로 typedef해서 간편히 나타낼 수 있다

    //cout << ptr << " " << uintptr_t(&ptr) << endl;
    //foo(ptr);

    

    
    //int arr[] { 1,2,3,4,5 };
    vector <int> arr{ 1,2,3,4,5 };

    printElements(arr);



    return 0;
}
