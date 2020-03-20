//Stream states and input validation

#include <iostream>
#include <cctype>	//std::isalnum(),isblank(), isdigit(), islower(), isupper()
#include <string>
#include <bitset>

using namespace std;

void printCharacterClassification(const int& i) 
{
	cout << boolalpha;
	cout << "isalnum " << bool(std::isalnum(i)) << endl;	//alphabet or number?	//����: return type�� integer�� bool�� casting������Ѵ�
	cout << "isblank " << bool(std::isblank(i)) << endl;	//blank?
	cout << "isdigit " << bool(std::isdigit(i)) << endl;	//digit?
	cout << "islower " << bool(std::islower(i)) << endl; //lower?
	cout << "isupper " << bool(std::isupper(i)) << endl;	//upper?
}

void printStates(const std::ios& stream) //ios: stream�� �̿��ϸ� file stream�� console input,output�޴� iostream�� ���������� ��밡���ϴ�(���ϴ�)
{										//c������ file ������� ���� fprintf�� ����ϰ� console input,output���� printf�� ����Ѵ�(�����ϴ�)
	cout << boolalpha;
	cout << "good() = " << stream.good() << endl;	//���°� ������ true, �������� false
	cout << "eof() = " << stream.eof() << endl;	//eof: end of file, ������ �� �о�����	//ctrl + Z�ϰ� �Է��ϸ� eof()�� true�� ���´�
	cout << "fail() = " << stream.fail() << endl;	//�������� �� true
	cout << "bad( ) =" << stream.bad() << endl;
}												//�̷��� �Լ��� �����θ� �ڵ��ϱ� ���ϴ�

bool isAllDigit(const string& str) 
{
	bool ok_flag = true;

	for (auto& e : str)			//���ڸ� �ϳ��� ���ϴ� ��
		if (!std::isdigit(e))
		{
			ok_flag = false;
			break;
		}
}

void classifyCharacters(const string& str)
{
	for (auto& e : str)			//���ڸ� �ϳ��� ���ϴ� ��
	{
		std::cout << "isdigit " << std::isdigit(e) << endl;	//return ���� 0�� �ƴϸ� true, 0�̸� false
		std::cout << "isdigit " << std::isdigit(e) << endl;
		std::cout << "isalpha " << std::isalpha(e) << endl;
	}
}

int main()
{
	while (true)
	{
		//int i;
		//cin >> i;

		//printStates(cin);	//i�� int�� �� double�� ������ �Ҽ��� �Ʒ��� ����Ǹ鼭 good()�� true�� ���´�

		////cout << boolalpha;
		////cout << std::bitset<8>(cin.rdstate()) << endl;			//rdstate: error state flags(bitflag)�� return����	
		////														//rdstate���� good, eof, fail, �׸��� bad �� �ִ�
		////cout << std::bitset<8>(std::istream::goodbit) << endl;	//goodbit, failbit�� bit masks�̴�
		////cout << std::bitset<8>(std::istream::failbit) << endl;
		////cout << !bool((cin.rdstate() & std::istream::failbit) != 0) << endl;	//bit flags�� �����ͼ� bit mask�� ���ϴ� ����� �ִ�
		////																		//printStates �Լ� ���� good()�� �̿��ϴ°� �ξ� ����ϴ�
		////																		//�����Ͱ� �ʹ� ���� �����ϴµ� �ð��� �����ɸ� �� ������ bit masks�� �̿��ϴ°� ���� ���� �ִ�(������ �����ٰ� ������ ����)
		//


		//cin.clear();			//fail mode�� ������ ��� error state flag�� ����� normal operation mode�� ������
		//cin.ignore(1024, '\n');	//buffer���� 1024���� ��ŭ ����ڴ�, '\n'�� ������ ���߿� �����ڴ�
		//cout << endl;



		char i;
		cin >> i;

		printStates(cin);

		printCharacterClassification(i);	//���� int i�ε� char�� ���� ��� cin���� ���� �ȵ��Ƿ� isalnum�� false�� ����

		cin.clear();			
		cin.ignore(1024, '\n');	
		cout << endl;
	}


	cout << boolalpha;
	cout << isAllDigit("1234") << endl;	//���ڸ� �ϳ��� ���ϴ� ��	//true
	cout << isAllDigit("a1234") << endl;	//false



	cout << boolalpha;
	classifyCharacters("1234");	//���ڸ� �ϳ��� ���ϴ� ��	//true
	classifyCharacters("a 1234");	//false

	//regular expression(���Խ�)�� �̿��ϸ� �ξ� ���ϰ� �� �� �ִ�(���� ���ǿ��� ����)
	return 0;
}