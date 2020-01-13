#include <iostream>

auto add(int x, int y) // input에는 auto 사용 불가능
{
	return x + double(y);
}

auto add(double x, double y)
{
	return x + y;
}
//template 사용하면 편하게 나타낼 수 있다

auto add(int x, int y) -> int; //trailing return type, 깔끔하게 정리할 수 있어서??
auto add(int x, int y) -> double;

int main()
{
	using namespace std;

	auto a = 123;
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = add(1, 2);
	return 0;
}
