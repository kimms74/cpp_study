#include <iostream>

//auto add(int x, int y) //output�� auto�ϸ� �ڵ����� �߷����ش�
//{
//	return x + double(y);
//}

//auto add(auto x, auto y) // input���� auto ��� �Ұ���
//{
//	return x + double(y);
//}

auto add(double x, double y)	//input�� auto�� �����Ƿ� �پ��� type�� ������ �������� ������ �������Ѵ�
{								//�̶� template ����ϸ� ���ϰ� ��Ÿ�� �� �ִ�!
	return x + y;
}


auto add(int x, int y) -> int;		//trailing return type, ����ϰ� ������ �� �־??
auto add(int x, int y) -> double;	//������ �ۼ��� �� �ٸ����� ���ϴ�?, �������ϴ�?

int main()
{
	using namespace std;

	auto a = 123;
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = add(1, 2);
	return 0;
}
