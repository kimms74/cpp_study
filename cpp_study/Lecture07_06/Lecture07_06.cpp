#include <iostream>

using namespace std;

inline int min(int x, int y)    // 보통 header file에 inline을 붙여 적음
{                               //요즘에는 compiler가 스스로 판단해서 inline을 붙이기도 함
    return x > y ? y : x;       //쓴다고 많이 빠르지도 않고, 안써도 그렇게 느리지 않다
}                               //technic에 의존적인 최적화는 비추한다!
                                //단점은 compiler 파일의 크기가 커진다
int main()
{
    cout << min(5, 6) << endl;      //프로그램이 시작되면 min함수를 실행한 뒤, int x,y를 선언하고
    cout << min(3, 2) << endl;      // (5,6),(3,2) 값이 min()안으로 들어가고 x > y ? y : x를 실행시킨뒤 결과를 return한다 
                                    // 이 함수를 여러번 호출하면 과정이 반복되므로 프로그램이 느려진다        
                                     
    cout << (5 > 6 ? 6 : 5) << endl;    // inline을 붙이면 min(5,6)이 이렇게 작동한다
    cout << (3 > 2 ? 2 : 3) << endl;






    return 0;
}
