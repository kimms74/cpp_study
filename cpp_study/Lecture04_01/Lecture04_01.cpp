//Local variable, scope and duration

#include <iostream>

namespace work1::work11::work111	//c++ 17부터 namespace가 여러개일때 간편하게 쓰게 만들 수 있다
{
	int a = 1;
	void doSomething()
	{
		a += 3;
	}
}

namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 5;
	}
}

int main()
{
	using namespace std;

	int apple = 5;
	cout << apple << endl;

	{
		apple = 1;
		cout << apple << endl;
	}
	cout << apple << endl;	//그대로 1로 남아있음

	{
		int apple = 2;	//중괄호 안에 밖에서 정의한 이름과 똑같은 이름을 정의하면 중괄호 밖의 이름은 숨겨진다
		cout << apple << endl;//그러므로 이름은 같아도 다른 존재, 그냥 이름 다르게 지어라
	}
	cout << apple << endl;	//{}안의 apple과 밖의 apple은 다르므로 1이 나옴

	//{
	//    int apple2 = 1;
	//    cout << apple2 << endl;
	//}

	//cout << apple << endl;

	work1::work11::work111::doSomething();

	work2::a;
	work2::doSomething();	//이름이 같은 함수나 변수를 만들어야하면 namespace를 따로 만들어 써라

	return 0;
}
