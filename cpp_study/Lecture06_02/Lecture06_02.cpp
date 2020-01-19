#include <iostream>

using namespace std;

void doSomething(int students_scores[])   // arry를 함수의 parameter로 넣을 수 있음
{
    cout << (size_t)&students_scores << endl;       // students_scores는 int main()에 저장된 array의 첫 번째 변수 값의 주소값을 저장하는 pointer이기 때문에
    cout << &students_scores[0] << endl;    // 다른 주소값을 가지고 있다, students_scores[0]은 main()안의 [0]과 같은 주소값을 가지고 있다
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;
    cout << "Size in doSomething " << sizeof(students_scores) << endl; // pointer로 넘어왔기 때문에 x64에선 8이다
}


int main()
{
    //const int num_students = 20;

    //int students_scores[num_students];

    //cout << &students_scores << endl;
    //cout << &students_scores[0] << endl;
    //cout << &students_scores[1] << endl;
    //cout << &students_scores[2] << endl;
    //cout << &students_scores[3] << endl;
    //
    //cout << sizeof(students_scores) << endl;



    const int num_students = 20;

    int students_scores[num_students]{ 1,2,3,4,5, };

    cout << (size_t)students_scores << endl;
    cout << &students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;
    cout << "Size in main " << sizeof(students_scores) << endl;

    doSomething(students_scores);

    return 0;
}
