#include <iostream>

using namespace std;

struct Rectangle
{
	int length;
	int width;
};

enum StudentName
{
	JACKJACK,		// = 0
	DASH,			// = 1
	VIOLET,			// = 2
	NUM_STUDENTS,	// = 3
};

int main()
{
	//int one_student_score;
	//int students_scores[5];

	////cout << sizeof(one_student_score) << endl;
	////cout << sizeof(students_scores) << endl;

	//students_scores[0] = 100;	// 1st element
	//students_scores[1] = 90;	// 2nd element
	//students_scores[2] = 70;	// 3rd element
	//students_scores[3] = 50;	// 4th element
	//students_scores[4] = 0;		// 5th element
	////students_scores[5] = 30;	// 6th element

	//cout << students_scores[0] << endl;
	//cout << students_scores[1] << endl;
	//cout << students_scores[2] << endl;
	//cout << students_scores[3] << endl;
	//cout << students_scores[4] << endl;
	////cout << students_scores[5] << endl;

	//cout << (students_scores[0] + students_scores[1]) / 2.0 << endl;



	//cout << sizeof(Rectangle) << endl;

	//Rectangle rect_arr[10];

	//cout << sizeof(rect_arr) << endl;

	//rect_arr[0].length = 1;
	//rect_arr[0].width = 2;




	//int my_array[5] { 1,2,3,4,5 };

	//cout << my_array[JACKJACK] << endl;
	//cout << my_array[DASH] << endl;
	//cout << my_array[VIOLET] << endl;
	//cout << my_array[3] << endl;
	//cout << my_array[4] << endl;



	//int students_scores[NUM_STUDENTS];

	//students_scores[JACKJACK] = 0;
	//students_scores[DASH] = 100;



	int num_students = 0;
	cin >> num_students;

	int students_scores[num_students]; // []는 runtime때 정해져있어야하므로 안됨

	const int num_students1 = 5;

	int students_scores[num_students1]; // const int 로 대입 가능! (그냥 int는 안됨)


	return 0;
}
