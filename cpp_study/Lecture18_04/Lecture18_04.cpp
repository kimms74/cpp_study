//Stream states and input validation

#include <iostream>
#include <cctype>	//std::isalnum(),isblank(), isdigit(), islower(), isupper()
#include <string>
#include <bitset>

using namespace std;

void printCharacterClassification(const int& i) 
{
	cout << boolalpha;
	cout << "isalnum " << bool(std::isalnum(i)) << endl;	//alphabet or number?	//단점: return type이 integer라 bool로 casting해줘야한다
	cout << "isblank " << bool(std::isblank(i)) << endl;	//blank?
	cout << "isdigit " << bool(std::isdigit(i)) << endl;	//digit?
	cout << "islower " << bool(std::islower(i)) << endl; //lower?
	cout << "isupper " << bool(std::isupper(i)) << endl;	//upper?
}

void printStates(const std::ios& stream) //ios: stream을 이용하면 file stream과 console input,output받는 iostream에 공통적으로 사용가능하다(편하다)
{										//c에서는 file 입출력을 위해 fprintf를 사용하고 console input,output에는 printf를 사용한다(불편하다)
	cout << boolalpha;
	cout << "good() = " << stream.good() << endl;	//상태가 좋으면 true, 안좋으면 false
	cout << "eof() = " << stream.eof() << endl;	//eof: end of file, 파일을 다 읽었느냐	//ctrl + Z하고 입력하면 eof()가 true가 나온다
	cout << "fail() = " << stream.fail() << endl;	//실패했을 때 true
	cout << "bad( ) =" << stream.bad() << endl;
}												//이렇게 함수로 만들어두면 코딩하기 편하다

bool isAllDigit(const string& str) 
{
	bool ok_flag = true;

	for (auto& e : str)			//문자를 하나씩 비교하는 것
		if (!std::isdigit(e))
		{
			ok_flag = false;
			break;
		}
}

void classifyCharacters(const string& str)
{
	for (auto& e : str)			//문자를 하나씩 비교하는 것
	{
		std::cout << "isdigit " << std::isdigit(e) << endl;	//return 값이 0이 아니면 true, 0이면 false
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

		//printStates(cin);	//i가 int일 때 double을 넣으면 소수점 아래는 절삭되면서 good()은 true가 나온다

		////cout << boolalpha;
		////cout << std::bitset<8>(cin.rdstate()) << endl;			//rdstate: error state flags(bitflag)를 return해줌	
		////														//rdstate에도 good, eof, fail, 그리고 bad 가 있다
		////cout << std::bitset<8>(std::istream::goodbit) << endl;	//goodbit, failbit은 bit masks이다
		////cout << std::bitset<8>(std::istream::failbit) << endl;
		////cout << !bool((cin.rdstate() & std::istream::failbit) != 0) << endl;	//bit flags를 가져와서 bit mask를 비교하는 방법도 있다
		////																		//printStates 함수 안의 good()을 이용하는게 훨씬 깔끔하다
		////																		//데이터가 너무 많아 검증하는데 시간이 오래걸릴 거 같으면 bit masks를 이용하는게 좋을 수도 있다(무조건 빠르다고 보장은 ㄴㄴ)
		//


		//cin.clear();			//fail mode에 빠졌을 경우 error state flag를 지우고 normal operation mode로 돌려줌
		//cin.ignore(1024, '\n');	//buffer에서 1024개수 만큼 지우겠다, '\n'을 만나면 도중에 끝내겠다
		//cout << endl;



		char i;
		cin >> i;

		printStates(cin);

		printCharacterClassification(i);	//만약 int i인데 char을 넣을 경우 cin으로 값이 안들어가므로 isalnum은 false가 나옴

		cin.clear();			
		cin.ignore(1024, '\n');	
		cout << endl;
	}


	cout << boolalpha;
	cout << isAllDigit("1234") << endl;	//문자를 하나씩 비교하는 것	//true
	cout << isAllDigit("a1234") << endl;	//false



	cout << boolalpha;
	classifyCharacters("1234");	//문자를 하나씩 비교하는 것	//true
	classifyCharacters("a 1234");	//false

	//regular expression(정규식)을 이용하면 훨씬 편하게 할 수 있다(다음 강의에서 설명)
	return 0;
}