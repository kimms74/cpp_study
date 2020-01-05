// Lecture01_07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int x = 0;

	cout << x << " " << &x << endl;

	{
		//int x = 1;
		x = 1;
		cout << x << " " << &x << endl;

	}
	{
		int x = 2;
	}
	cout << x << " " << &x << endl;


	return 0;
}
