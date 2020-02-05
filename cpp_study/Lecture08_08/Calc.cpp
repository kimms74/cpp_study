#include "Calc.h"

using namespace std;	// cpp파일은 다른 파일에 영향을 줄 일이 없기때문에 사용해도 된다

Calc::Calc(int init_value)
	: _value(init_value)
{}

Calc &Calc::add(int value_in)	//header file에 작성한 것을 
{										//Quick actions and refactoring
	_value += value_in;					//>>create declation and definition
	return *this;						//&move definition location 하면
}										//앞에 inline이 붙는데 컴퓨터가 의도를 추측해서 붙인것
										//지워주는게 좋다
Calc &Calc::sub(int value_in)	//inline은 함수를 반복적으로 실행할 때
{										//중복으로 생성돼 느려지는 것을 막게 함수 내부 코드를 compiler로 가져와 실행시키는 것
	_value -= value_in;					//크게 속도 차이 없다
	return *this; 
}

Calc &Calc::mult(int value_in)
{
	_value *= value_in;
	return *this;
}

void Calc::print()
{
	std::cout << _value << std::endl;
}
