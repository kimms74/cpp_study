#include <iostream>

using namespace std;

int main()
{
    //const int num_students = 5;
    //int score0 = 84;
    //int score1 = 92;
    //int score2 = 76;
    //int score3 = 81;
    //int score4 = 56;

    //int total_score = score0 + score1 + score2 + score3 + score4;

    //double avg_score = static_cast<double>(total_score) / num_students;
    ////Note: double(total_score) / num_students != double(total_score / num_students);
    //// 후자는 나눈 후에 casting 하므로 나눌 때 값을 버릴 수 있다




    int scores[]{ 84, 92, 76, 81, 56 };

    const int num_students = sizeof(scores) / sizeof(int);
    cout << num_students << endl;

    int total_score = 0;
    int max_score = 0;
    int min_score = 100;

    for (int i = 0; i < num_students; ++i)
    {
        total_score += scores[i];
        
        max_score = (max_score < scores[i]) ? scores[i] : max_score;
        // if (max_score < scores[i]) max_score = scores[i];
        
        min_score = (min_score > scores[i]) ? scores[i] : min_score;
    }
    cout << min_score << " " << max_score << endl;

    return 0;
}
