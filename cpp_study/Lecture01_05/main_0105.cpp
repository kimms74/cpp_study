#include <iostream>

using namespace std;

void print()
{
	cout << "Hello World" << endl;
}

int multiplyTwoNumbers(int num_a, int num_b)
{
	int sum = num_a * num_b;

	return sum;
}

void printHelloWorld()
{
	cout << "Hello World" << endl;
	print();
	return;

	cout << "Hello World" << endl;

}

int main(void)
{
	cout << multiplyTwoNumbers(1,2) << endl;
	cout << multiplyTwoNumbers(3, 4) << endl;
	cout << multiplyTwoNumbers(8, 13) << endl;
	printHelloWorld();

	return 0;
}