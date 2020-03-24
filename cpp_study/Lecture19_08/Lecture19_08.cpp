//Type Inference: auto & decltype

#include <iostream>
#include <vector>
#include <algorithm>    //std::min

//Reference : http://thbecker.net/articles/auto_and_decltype/section_01.html

using namespace std;

class Examples
{
public:
    void ex1()
    {
        std::vector<int> vect;
        for (std::vector<int>::iterator itr = vect.begin(); itr != vect.end(); ++itr)
            cout << *itr;

        for (auto itr = vect.begin(); itr != vect.end(); itr++) //auto가 자동으로 std::vector<int>::iterator라고 잡아줌
            cout << *itr;

        for (auto itr : vect) // for (const auto & itr : vect)  //더 간단하게 줄어들었다
            cout << itr;
    }

    void ex2()
    {
        int x = int();

        auto auto_x = x;

        const int& crx = x;

        auto auto_crx1 = crx;   //auto는 추론할 때 const, reference를 다 때버린다

        const auto& auto_crx2 = crx;    //const int&로 나타내려면 auto 앞뒤로 const, &를 붙여줘야한다

        volatile int vx = 1024; //volatile: 값이 자주 변하므로 최적화할 때 빼달라

        auto avx = vx;  //이 경우에도 volatile이 빠진다

        volatile auto vavx = vx;    //직접 volatile을 넣어줘야함
    }

    //template<class T>       //template의 경우에도 const, reference를 빼버린다
    //void func_ex3(T arg)
    //{}

    template<class T>     //직접 parameter에 const, reference를 붙이면 된다
    void func_ex3(const T& arg)
    {}

    void ex3()
    {
        const int& crx = 123;

        func_ex3(crx);
    }

    void ex4()
    {
        const int c = 0;
        auto rc0 = c;   //const가 빠짐
        auto& rc = c;   //reference만 붙여줬는데 const int&로 선언됨  //c가 const이기 때문에 reference로 받아오는 것도 const가 당연하다
        //rc = 123;     //rc에 값을 넣으려하면 error
    }

    void ex5()  //ammendment
    {
        int i = 42;         //auto&&로 하면 l-value는 l-value로, r-value는 r-value로 선언됨
        auto&& ri_1 = i;    //i라는 것 자체는 l-value이므로 l-value로 선언된다
        auto&& ri_2 = 42;   //42는 r-value이므로 r-value로 선언된다
    }

    void ex6()
    {
        int x = 42;
        const int* p1 = &x;
        auto p2 = p1;   //pointer는 자동으로 찾아준다    //const pointer를 받아오기 때문에 const int*로 선언된다
        //*p2 = 43;     //p2는 const이기 때문에 값을 넣으면 error
    }

    template<typename T, typename S>
    void func_ex7(T lhs, S rhs)
    {
        auto prod1 = lhs * rhs; //lhs와 rhs의 type을 모르기 때문에 auto를 안쓰면 너무 번거로워진다

        //typedef typeof(lhs* rhs) product_type;    //pre-c++11 'some' compilers    //typeof: 곱하기 결과의 data type을 return 해주는 함수
        typedef decltype(lhs* rhs) product_type;    //decltype: 공식적으로 지원하게 되는 함수
                                                    //값을 구해주는 것이 아닌 return type을 추론만 해줌
        product_type prod2 = lhs * rhs;             //그러므로 auto자리에 decltype(,)넣는 것

        decltype(lhs * rhs) prod3 = lhs * rhs;      //typedef 안쓰고 바로 작성도 가능
    }

    template<typename T,typename S>
    //decltype(lhs * rhs) func_ex8(T lhs, S rhs)        //auto 자리에 decltype()넣으면 error  
                                                        //lhs와 rhs는 func_ex8 함수의 parameter로 받는데 decltype(lhs * rhs)가 함수보다 앞에 적혀있으면
                                                        //lhs와 rhs를 알 수 없기 때문이다
    auto func_ex8(T lhs, S rhs) -> decltype(lhs* rhs)   //-> decltype: trailing return type(후행 반환 형식), return type을 명시적으로 알려줌
    {
        return lhs * rhs;
    }

    void ex7_8()
    {
        func_ex7(1.0, 345);
        func_ex8(1.2, 345);
    }

    struct S
    {
        int m_x;

        S()
        {
            m_x = 42;
        }
    };

    void ex9()
    {
        int x;
        const int cx = 42;
        const int& crx = x;
        const S* p = new S();

        auto a = x;
        auto b = cx;        //const 빠짐
        auto c = crx;       //cosnt, ref 빠짐
        auto d = p;         //const, * 다 따라옴
        auto e = p->m_x;    //pointer p는 const지만 p안의 m_x를 복사해온 e는 const가 아니어도 된다    
                            //그러므로 e는 int

        typedef decltype(x)         x_type;     //int   //decltype은 auto와는 다르게 선언된 것 그대로 들어온다
        typedef decltype(cx)        cx_type;    //const int
        typedef decltype(crx)       crx_type;   //const int&
        typedef decltype(p->m_x)    m_x_type;   //m_x는 int로 선언돼있기 때문에 cosnt가 안따라온다

        typedef decltype((x))       x_with_parens_type;     //int&  //()를 더 붙이면 reference를 더해준다
        typedef decltype((cx))      cx_with_parens_type;    //const int&
        typedef decltype((crx))     crx_with_parens_type;   //const int&    //원래 reference인 경우에는 추가로 &를 더 붙이지는 않는다
        typedef decltype((p->m_x))  m_x_with_parens_type;   //const int&    //p가 const이기 때문에 m_x를 reference로 가져오면 const가 붙는다!
    }

    const S foo()
    {
        return S();
    }

    const int& foobar()
    {
        return 123;
    }

    void ex10()
    {
        std::vector<int> vect = { 42, 43 };

        auto a = foo();                                 //S
        typedef decltype(foo()) foo_type;               //const S

        auto b = foobar();                              //int
        typedef decltype(foobar()) foobar_type;         //const int&

        auto itr = vect.begin();                        //std::vector<int>::iterator
        typedef decltype(vect.begin()) iterator_type;   //std::vector<int>::iterator

        auto first_element = vect[0];                   //int
        decltype(vect[1]) second_element = vect[1];     //int&  //vect[1]에서 []은 vector의 reference를 return한다
    }                                                   //그러므로 int&가 나옴

    void ex11()
    {
        int x = 0;
        int y = 0;
        const int cx = 42;
        const int cy = 43;
        double d1 = 3.14;
        double d2 = 2.72;

        typedef decltype(x* y) prod_xy_type;                //int
        auto a = x * y;                                     //int

        typedef decltype(cx* cy) prod_cxcy_type;            //int    //result is prvalue(pure r-value)
        auto b = cx * cy;                                   //int    //const끼리 곱한 숫자는 그냥 숫자이므로

        typedef decltype(d1 < d2 ? d1 : d2) cond_type;      //double&    //result is lvalue. & is added // ? : condition operator는 lvalue를 return한다 //https://stackoverflow.com/questions/54688464/why-and-when-does-the-ternary-operator-return-an-lvalue
        auto c = d1 < d2 ? d1 : d2;                         //double    

        typedef decltype(x < d2 ? x : d2) cond_type_mixed;  //double    //promotion of x to double  // condition operator에서 비교대상의 type이 다를경우에는 rvalue를 return한다
        auto d = x < d2 ? x : d2;                           //double

        //auto d = std::min(x, dl);   //std::min은 두개의 type이 같을때만 작동   //error
    }

    template<typename T, typename S>
    auto fpmin_wrong(T x, S y) -> decltype(x < y ? x : y)
    {
        return x < y ? x : y;
    }

    template<typename T, typename S>
    auto fpmin(T x, S y) -> typename std::remove_reference<decltype(x < y ? x : y)>::type   //std::remove_reference: reference를 제거해줌
    {
        return x < y ? x : y;
    }

    void ex12()
    {
        int i = 42;
        double d = 45.1;
        //auto a = std::min(i, d);    //error: 'std::min' : no matching overloaded function found
        auto a = std::min(static_cast<double>(i), d);

        int& j = i;

        typedef decltype(fpmin_wrong(d, d))  fpmin_return_type1;    //double&
        typedef decltype(fpmin_wrong(i, d))  fpmin_return_type2;    //double
        typedef decltype(fpmin_wrong(j, d))  fpmin_return_type3;    //double    //종류마다 return type이 달라진다
    }

    void ex13()
    {
        std::vector<int> vect;  //vect is empty
        typedef decltype(vect[0]) integer;  //vect는 비어있지만 decltype은 직접 수행하지않고 type만 추론하므로 vect[0]라고 적어도 오류발생하지 않는다
    }

    template<typename R>
    class SomeFunctor
    {
    public:
        typedef R result_type;

        SomeFunctor()
        {}

        result_type operator() ()
        {
            return R();
        }
    };

    void ex14()
    {
        SomeFunctor<int> func;
        typedef decltype(func)::result_type integer;    //nested type도 decltype으로 쉽게 접근 가능하다
    }

    void ex15()
    {
        auto lambda = []() {return 42; };
        decltype(lambda) lambda2(lambda);
        decltype((lambda)) lambda3(lambda); //괄호를 하나 더 치면 reference로 받아옴

        cout << "Lambda functions" << endl;
        cout << &lambda << " " << &lambda2 << endl; //주소가 다르게 나옴
        cout << &lambda << " " << &lambda3 << endl; //주소가 같게 나옴
    }

    void ex16()
    {
        //generic lambda
        auto lambda = [](auto x, auto y)    //다른 함수에서는 parameter로 auto를 못 쓰지만, lambda에서는 auto 사용 가능
        {
            return x + y;
        };

        cout << lambda(1.1, 2) << " " << lambda(3, 4) << " " << lambda(4.5, 2.2) << endl;   //double, int, double
    }
};

int main()
{
    Examples examples;

    examples.ex1();
    examples.ex2();
    examples.ex3();
    examples.ex7_8();
    examples.ex10();
    examples.ex12();
    examples.ex14();
    examples.ex15();
    examples.ex16();

    //main()은 신경쓰지말고 코드 순서대로 보기






    return 0;
}
