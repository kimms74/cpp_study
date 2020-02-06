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
    static const double fraction = 1.0 / (RAND_MAX + 1.0);  //(std::rand() * fraction)�� 1�� �ȳѰ� ����
                                                            //������� �����Ƿ� static���� �����ؼ� ����Ѵ�
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}       //static_cast<int>�� �ϸ� �Ҽ��� �Ʒ��� �����Ƿ� �ִ� 3.999...���� �� 3�� ���´�

int main()
{
    //for (int count = 1; count <= 100; ++count)
    //{
    //    cout << prng() << "\t";

    //    if (count % 5 == 0) cout << endl;
    //}
    


    ////std::srand(5323); // seed //������� ���� ���� ���� �־ �ϴ°� ����(����� �Ȱ��� �����Ƿ�)
    //std::srand(static_cast<unsigned int> (std::time(0))); //random �ѹ� ���� ��

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
    //    cout << rand() % 4 + 5 << "\t";   // rand() % 4�ϸ� 0,1,2,3�� �����Ƿ�

    //    if (count % 5 == 0) cout << endl;
    //}



    std::random_device rd;                      //������ ���õ� ��� ����
    std::mt19937_64 mersenne(rd());             // create a mersenne twister, ���� ������
    std::uniform_int_distribution<> dice(1, 6); // ���(uniform distribution, normal, poisson ... ������ �ִ�)

    for (int count = 1; count <= 20; ++count)
        cout << dice(mersenne) << endl;         //random_device�� ���� ������ �����ϰ� 
                                                //� ������ �������Ĵ� ������ ���ؼ� ������ ���� �������
    return 0;
}
