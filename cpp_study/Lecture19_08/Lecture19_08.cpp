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

        for (auto itr = vect.begin(); itr != vect.end(); itr++) //auto�� �ڵ����� std::vector<int>::iterator��� �����
            cout << *itr;

        for (auto itr : vect) // for (const auto & itr : vect)  //�� �����ϰ� �پ�����
            cout << itr;
    }

    void ex2()
    {
        int x = int();

        auto auto_x = x;

        const int& crx = x;

        auto auto_crx1 = crx;   //auto�� �߷��� �� const, reference�� �� ��������

        const auto& auto_crx2 = crx;    //const int&�� ��Ÿ������ auto �յڷ� const, &�� �ٿ�����Ѵ�

        volatile int vx = 1024; //volatile: ���� ���� ���ϹǷ� ����ȭ�� �� ���޶�

        auto avx = vx;  //�� ��쿡�� volatile�� ������

        volatile auto vavx = vx;    //���� volatile�� �־������
    }

    //template<class T>       //template�� ��쿡�� const, reference�� ��������
    //void func_ex3(T arg)
    //{}

    template<class T>     //���� parameter�� const, reference�� ���̸� �ȴ�
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
        auto rc0 = c;   //const�� ����
        auto& rc = c;   //reference�� �ٿ���µ� const int&�� �����  //c�� const�̱� ������ reference�� �޾ƿ��� �͵� const�� �翬�ϴ�
        //rc = 123;     //rc�� ���� �������ϸ� error
    }

    void ex5()  //ammendment
    {
        int i = 42;         //auto&&�� �ϸ� l-value�� l-value��, r-value�� r-value�� �����
        auto&& ri_1 = i;    //i��� �� ��ü�� l-value�̹Ƿ� l-value�� ����ȴ�
        auto&& ri_2 = 42;   //42�� r-value�̹Ƿ� r-value�� ����ȴ�
    }

    void ex6()
    {
        int x = 42;
        const int* p1 = &x;
        auto p2 = p1;   //pointer�� �ڵ����� ã���ش�    //const pointer�� �޾ƿ��� ������ const int*�� ����ȴ�
        //*p2 = 43;     //p2�� const�̱� ������ ���� ������ error
    }

    template<typename T, typename S>
    void func_ex7(T lhs, S rhs)
    {
        auto prod1 = lhs * rhs; //lhs�� rhs�� type�� �𸣱� ������ auto�� �Ⱦ��� �ʹ� ���ŷο�����

        //typedef typeof(lhs* rhs) product_type;    //pre-c++11 'some' compilers    //typeof: ���ϱ� ����� data type�� return ���ִ� �Լ�
        typedef decltype(lhs* rhs) product_type;    //decltype: ���������� �����ϰ� �Ǵ� �Լ�
                                                    //���� �����ִ� ���� �ƴ� return type�� �߷и� ����
        product_type prod2 = lhs * rhs;             //�׷��Ƿ� auto�ڸ��� decltype(,)�ִ� ��

        decltype(lhs * rhs) prod3 = lhs * rhs;      //typedef �Ⱦ��� �ٷ� �ۼ��� ����
    }

    template<typename T,typename S>
    //decltype(lhs * rhs) func_ex8(T lhs, S rhs)        //auto �ڸ��� decltype()������ error  
                                                        //lhs�� rhs�� func_ex8 �Լ��� parameter�� �޴µ� decltype(lhs * rhs)�� �Լ����� �տ� ����������
                                                        //lhs�� rhs�� �� �� ���� �����̴�
    auto func_ex8(T lhs, S rhs) -> decltype(lhs* rhs)   //-> decltype: trailing return type(���� ��ȯ ����), return type�� ��������� �˷���
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
        auto b = cx;        //const ����
        auto c = crx;       //cosnt, ref ����
        auto d = p;         //const, * �� �����
        auto e = p->m_x;    //pointer p�� const���� p���� m_x�� �����ؿ� e�� const�� �ƴϾ �ȴ�    
                            //�׷��Ƿ� e�� int

        typedef decltype(x)         x_type;     //int   //decltype�� auto�ʹ� �ٸ��� ����� �� �״�� ���´�
        typedef decltype(cx)        cx_type;    //const int
        typedef decltype(crx)       crx_type;   //const int&
        typedef decltype(p->m_x)    m_x_type;   //m_x�� int�� ������ֱ� ������ cosnt�� �ȵ���´�

        typedef decltype((x))       x_with_parens_type;     //int&  //()�� �� ���̸� reference�� �����ش�
        typedef decltype((cx))      cx_with_parens_type;    //const int&
        typedef decltype((crx))     crx_with_parens_type;   //const int&    //���� reference�� ��쿡�� �߰��� &�� �� �������� �ʴ´�
        typedef decltype((p->m_x))  m_x_with_parens_type;   //const int&    //p�� const�̱� ������ m_x�� reference�� �������� const�� �ٴ´�!
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
        decltype(vect[1]) second_element = vect[1];     //int&  //vect[1]���� []�� vector�� reference�� return�Ѵ�
    }                                                   //�׷��Ƿ� int&�� ����

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
        auto b = cx * cy;                                   //int    //const���� ���� ���ڴ� �׳� �����̹Ƿ�

        typedef decltype(d1 < d2 ? d1 : d2) cond_type;      //double&    //result is lvalue. & is added // ? : condition operator�� lvalue�� return�Ѵ� //https://stackoverflow.com/questions/54688464/why-and-when-does-the-ternary-operator-return-an-lvalue
        auto c = d1 < d2 ? d1 : d2;                         //double    

        typedef decltype(x < d2 ? x : d2) cond_type_mixed;  //double    //promotion of x to double  // condition operator���� �񱳴���� type�� �ٸ���쿡�� rvalue�� return�Ѵ�
        auto d = x < d2 ? x : d2;                           //double

        //auto d = std::min(x, dl);   //std::min�� �ΰ��� type�� �������� �۵�   //error
    }

    template<typename T, typename S>
    auto fpmin_wrong(T x, S y) -> decltype(x < y ? x : y)
    {
        return x < y ? x : y;
    }

    template<typename T, typename S>
    auto fpmin(T x, S y) -> typename std::remove_reference<decltype(x < y ? x : y)>::type   //std::remove_reference: reference�� ��������
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
        typedef decltype(fpmin_wrong(j, d))  fpmin_return_type3;    //double    //�������� return type�� �޶�����
    }

    void ex13()
    {
        std::vector<int> vect;  //vect is empty
        typedef decltype(vect[0]) integer;  //vect�� ��������� decltype�� ���� ���������ʰ� type�� �߷��ϹǷ� vect[0]��� ��� �����߻����� �ʴ´�
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
        typedef decltype(func)::result_type integer;    //nested type�� decltype���� ���� ���� �����ϴ�
    }

    void ex15()
    {
        auto lambda = []() {return 42; };
        decltype(lambda) lambda2(lambda);
        decltype((lambda)) lambda3(lambda); //��ȣ�� �ϳ� �� ġ�� reference�� �޾ƿ�

        cout << "Lambda functions" << endl;
        cout << &lambda << " " << &lambda2 << endl; //�ּҰ� �ٸ��� ����
        cout << &lambda << " " << &lambda3 << endl; //�ּҰ� ���� ����
    }

    void ex16()
    {
        //generic lambda
        auto lambda = [](auto x, auto y)    //�ٸ� �Լ������� parameter�� auto�� �� ������, lambda������ auto ��� ����
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

    //main()�� �Ű澲������ �ڵ� ������� ����






    return 0;
}
