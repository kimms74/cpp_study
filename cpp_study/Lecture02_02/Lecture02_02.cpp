//integers

#include <iostream>
#include <cmath>
#include <limits>
int main()
{

	using namespace std;

	short s = 1;
	int i			= 22/4;
	long l			= 1;
	long long ll	= 1;
	unsigned int u = -1;
	cout << sizeof(short) << endl; // 2 bytes = 2 * 8 bits = 16 bits	//signed������ 1bit�� ��ȣ ǥ�ÿ� ���ǹǷ� 2^15�� ���� ǥ���� ���δ�
	cout << sizeof(long) << endl;										//unsigned������ �׻� >0�̹Ƿ� ��� bit�� ���ڷ� ǥ����

	cout << std::pow(2, sizeof(short) * 8 -1) -1 << endl;
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;
	//cout << sizeof(int) << endl;
	//cout << sizeof(long) << endl;
	//cout << sizeof(long long) << endl;

	s = 32767;
	s = s + 1; // 32768

	short y = std::numeric_limits<short>::min() -1;

	cout << s << endl; // overflow! 32767�� �ִ밪�̹Ƿ� �ּҰ����� ���ư� -32768�� �ȴ�!
	cout << y  << endl;

	cout << u << endl;

	cout << i << endl;
	cout << 22 / (float)4 << endl;
	cout << 22 / 4 << endl;

	return 0;

}

