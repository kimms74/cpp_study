#include <iostream>

auto add(int x, int y) // input���� auto ��� �Ұ���
{
	return x + double(y);
}

auto add(double x, double y)
{
	return x + y;
}
//template ����ϸ� ���ϰ� ��Ÿ�� �� �ִ�

auto add(int x, int y) -> int; //trailing return type, ����ϰ� ������ �� �־??
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
