#include <iostream> // cout, cin, endl, ...

int main()
{
	// namespace 지정
	using namespace std;
	
	int x = 1024;
	double pi = 3.141592;
	
	// std::endl 이랑 "\n"이랑 비슷한 기능
	std::cout << "junju travel" << std::endl;
	std::cout << "x is " << x << " pi is " << pi << std::endl;

	// "\t" tab 기능인데 줄맞춤 해줌
	std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;
	
	// "\a" 소리 남
	cout << "\a";

	cin >> x;

	cout << "Your input is " << x << endl;

	return 0;
}