#include <iostream>

//auto add(int x, int y) //output에 auto하면 자동으로 추론해준다
//{
//	return x + double(y);
//}

//auto add(auto x, auto y) // input에는 auto 사용 불가능
//{
//	return x + double(y);
//}

auto add(double x, double y)	//input에 auto를 못쓰므로 다양한 type의 변수를 넣으려면 일일이 만들어야한다
{								//이때 template 사용하면 편하게 나타낼 수 있다!
	return x + y;
}


auto add(int x, int y) -> int;		//trailing return type, 깔끔하게 정리할 수 있어서??
auto add(int x, int y) -> double;	//여러개 작성할 때 줄맞춤이 편하다?, 보기편하다?

int main()
{
	using namespace std;

	auto a = 123;
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = add(1, 2);
	return 0;
}
