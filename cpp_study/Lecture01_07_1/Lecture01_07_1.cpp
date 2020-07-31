#include <iostream>

using namespace std;

void DoSomething(int x)
{
	x = 123;
	cout << x << " " << &x << endl;
}


int main()
{
	int x = 0;
	cout << x << " " << &x <<endl;
	DoSomething(x);
	cout << x << " " << &x << endl;

	return 0;
}
