#include <iostream>
#include <cstdlib> //std::radn(), std::srand()
#include <ctime> //std::time()
#include <random>   //random_device, mt19337_64, uniform_int_distribution<> dice(,)
                    
using namespace std;

//unsigned int PRNG() // Pseudo Random Number Generator
//{
//    static unsigned int seed = 5523; //seed number
//
//    seed = 8253729 * seed + 2396403;
//
//    return seed % 32768;
//}



int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (RAND_MAX + 1.0);  //(std::rand() * fraction)이 1이 안넘게 만듬
                                                            //나누기는 느리므로 static으로 저장해서 사용한다
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}       //static_cast<int>를 하면 소수점 아래는 버리므로 최대 3.999...나올 때 3이 나온다

int main()
{
    //for (int count = 1; count <= 100; ++count)
    //{
    //    cout << prng() << "\t";

    //    if (count % 5 == 0) cout << endl;
    //}
    


    ////std::srand(5323); // seed //디버깅할 때는 직접 값을 넣어서 하는게 좋다(결과가 똑같이 나오므로)
    //std::srand(static_cast<unsigned int> (std::time(0))); //random 넘버 만들 때

    //for (int count = 1; count <= 100; ++count)
    //{
    //    cout << std::rand() << "\t";

    //    if (count % 5 == 0) cout << endl;
    //}



    //for (int count = 1; count <= 100; ++count)
    //{
    //    cout << getRandomNumber(5,8) << "\t";

    //    if (count % 5 == 0) cout << endl;
    //}



    //for (int count = 1; count <= 100; ++count)
    //{
    //    cout << rand() % 4 + 5 << "\t";   // rand() % 4하면 0,1,2,3이 나오므로

    //    if (count % 5 == 0) cout << endl;
    //}



    std::random_device rd;                      //난수와 관련된 기능 제공
    std::mt19937_64 mersenne(rd());             // create a mersenne twister, 난수 생성기
    std::uniform_int_distribution<> dice(1, 6); // 통계(uniform distribution, normal, poisson ... 여러개 있다)

    for (int count = 1; count <= 20; ++count)
        cout << dice(mersenne) << endl;         //random_device를 통해 난수를 생성하고 
                                                //어떤 분포를 따를꺼냐는 분포를 정해서 분포에 따라 만들어줌
    return 0;
}
