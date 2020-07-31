//Operator precedence and associativity(우선순위와 결합법칙)

#include <iostream>

using namespace std;

int main()
{
    int x = 3 * 4 / 2; //같은 우선순위 일때는 left-to-right 순으로 함, operators in c++ 검색해보기
                        //https://www.learncpp.com/cpp-tutorial/operator-precedence-and-associativity/
                        //associativity 1.L->R 2.R->L : 우선순위가 같은 것끼리 만났을 때 왼쪽을 먼저 계산할거냐(ex) 4*3/2,i++), 
                        //오른쪽을 먼저 계산할거냐를 나타냄(ex) +3(>0),-3(<0),++i,?:(비교연산자),=(assignment operator))
                        //i++는 i를 출력하고 +1 ,++i는 +1하고 i를 출력을 나타냄
                        //코딩할때 우선순위가 헷갈릴 경우 괄호를 이용해 명확하게 표시해주는게 좋다
    return 0;
}
