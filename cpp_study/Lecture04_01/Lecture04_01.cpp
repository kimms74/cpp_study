//Local variable, scope and duration

#include <iostream>

namespace work1::work11::work111	//c++ 17���� namespace�� �������϶� �����ϰ� ���� ���� �� �ִ�
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
	cout << apple << endl;	//�״�� 1�� ��������

	{
		int apple = 2;	//�߰�ȣ �ȿ� �ۿ��� ������ �̸��� �Ȱ��� �̸��� �����ϸ� �߰�ȣ ���� �̸��� ��������
		cout << apple << endl;//�׷��Ƿ� �̸��� ���Ƶ� �ٸ� ����, �׳� �̸� �ٸ��� �����
	}
	cout << apple << endl;	//{}���� apple�� ���� apple�� �ٸ��Ƿ� 1�� ����

	//{
	//    int apple2 = 1;
	//    cout << apple2 << endl;
	//}

	//cout << apple << endl;

	work1::work11::work111::doSomething();

	work2::a;
	work2::doSomething();	//�̸��� ���� �Լ��� ������ �������ϸ� namespace�� ���� ����� ���

	return 0;
}
