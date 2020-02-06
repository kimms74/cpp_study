//Timing your code

#include <iostream>
#include <vector>
#include <algorithm>    //sort
#include <random>       //random number generation
#include <chrono>       //�ð� ���ִ� library(boost�� �ִٰ� ǥ������ ���Ե�)
                        //hight_resolution_clock, duration<,>,time_point,duration_cast
using namespace std;

class Timer
{
    using clock_t = std::chrono::high_resolution_clock;             //���c++���ʹ� typedef�� �ƴ� using�� ����
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

    vector<int> vec(100000);                            //debug ��忡���� 0.27��, release ��忡���� 0.008�� �ɸ�
    for (unsigned int i = 0; i < vec.size(); ++i)       //���� �׽�Ʈ�ϰ� ������ release��忡�� �غ����Ѵ�
        vec[i] = i;                                     //��ǻ�� ���α׷� ����ȭ�� �ſ� �����Ƿ� �ð��� ������ ��Ȯ�ϰ� �ȳ���
                                                        //�ſ� ���� �Ҽ��� �ڸ������� ���ʿ� x
    std::shuffle(begin(vec), end(vec), mersenne_engine);//�׷��Ƿ� �ð��� ������ �缭 ��� ������(��� 3�� �غ���)

    //for (auto& e : vec) cout << e << " ";
    //cout << endl;

    Timer timer;

    std::sort(begin(vec), end(vec));

    timer.elapsed();

    //for (auto& e : vec) cout << e << " ";
    //cout << endl;



    return 0;
}
