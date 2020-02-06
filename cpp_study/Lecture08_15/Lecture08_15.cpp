//Timing your code

#include <iostream>
#include <vector>
#include <algorithm>    //sort
#include <random>       //random number generation
#include <chrono>       //시간 재주는 library(boost에 있다가 표준으로 편입됨)
                        //hight_resolution_clock, duration<,>,time_point,duration_cast
using namespace std;

class Timer
{
    using clock_t = std::chrono::high_resolution_clock;             //모던c++부터는 typedef가 아닌 using을 쓴다
    using second_t = std::chrono::duration<double, std::ratio<1>>;  

    std::chrono::time_point<clock_t> start_time = clock_t::now();

public:
    void elapsed()
    {
        std::chrono::time_point<clock_t> end_time = clock_t::now();

        cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl;
    }
};

int main()
{
    random_device rnd_device;
    mt19937 mersenne_engine{ rnd_device() };

    vector<int> vec(100000);                            //debug 모드에서는 0.27초, release 모드에서는 0.008초 걸림
    for (unsigned int i = 0; i < vec.size(); ++i)       //실제 테스트하고 싶으면 release모드에서 해봐야한다
        vec[i] = i;                                     //컴퓨터 프로그램 최적화는 매우 어려우므로 시간이 완전히 정확하게 안나옴
                                                        //매우 낮은 소수점 자리수까지 볼필요 x
    std::shuffle(begin(vec), end(vec), mersenne_engine);//그러므로 시간을 여러번 재서 평균 내보기(적어도 3번 해보기)

    //for (auto& e : vec) cout << e << " ";
    //cout << endl;

    Timer timer;

    std::sort(begin(vec), end(vec));

    timer.elapsed();

    //for (auto& e : vec) cout << e << " ";
    //cout << endl;



    return 0;
}
