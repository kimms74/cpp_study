#include <iostream> // cout, cin, endl, ...

int main()
{
	// namespace ����
	using namespace std;
	
	int x = 1024;
	double pi = 3.141592;
	
	// std::endl �̶� "\n"�̶� ����� ���
	std::cout << "junju travel" << std::endl;
	std::cout << "x is " << x << " pi is " << pi << std::endl;

	// "\t" tab ����ε� �ٸ��� ����
	std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;
	
	// "\a" �Ҹ� ��
	cout << "\a";

	cin >> x;

	cout << "Your input is " << x << endl;

	return 0;
}