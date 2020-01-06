#include <iostream>

void my_function()
{

}


int main()
{
	using namespace std;

	int i = 123;
	float f = 123.456;

	void* my_void;

	my_void = (void*)&i;
	my_void = (void*)&f;

	return 0;
}
