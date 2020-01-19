#include <iostream>

using namespace std;

void doSomething(int students_scores[])   // arry�� �Լ��� parameter�� ���� �� ����
{
    cout << (size_t)&students_scores << endl;       // students_scores�� int main()�� ����� array�� ù ��° ���� ���� �ּҰ��� �����ϴ� pointer�̱� ������
    cout << &students_scores[0] << endl;    // �ٸ� �ּҰ��� ������ �ִ�, students_scores[0]�� main()���� [0]�� ���� �ּҰ��� ������ �ִ�
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;
    cout << "Size in doSomething " << sizeof(students_scores) << endl; // pointer�� �Ѿ�Ա� ������ x64���� 8�̴�
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
