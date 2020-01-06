#include <iostream>

using namespace std;

void DoSomething(int x)
{
	x = 123;
	cout << x << endl;
}


int main()
{
	int x = 0;
	cout << x << endl;
	DoSomething(x);
	cout << x << endl;

	return 0;
}
