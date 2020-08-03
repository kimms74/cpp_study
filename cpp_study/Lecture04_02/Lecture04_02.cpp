//Global variable, static variable, internal linkage, and external linkage

#include <iostream>
#include "MyConstant.h"

using namespace std;

//void doSomething()
//{
//    int a = 1; 
//                      
//    ++a;
//
//    cout << a << endl;
//}

//void doSomething()
//{
//    static int a = 1; //메모리가 정적으로 선언됨(함수 밖에서도 메모리에 남아있다),초기화 필수!,한번만 초기화하면 함수를 여러번 실행해도 초기화가 되지않고 그대로 사용
//                      //디버깅할때 주로 사용, static: 이 변수가 받은 메모리가 static하다는 것
//    ++a;
//
//    cout << a << endl;
//}

int g_value = 123;      //전역변수는 앞에 g_를 붙여 알아보기 쉽게 표현하는게 좋다
						//external linkage //초기화는 한 군데에서만 해야한다!
						//전역변수는 웬만하면 쓰지마!  //class 이용해 객체지향으로 표현하기!
						//다른 cpp파일에서도 전역변수의 값을 바꿀 수 있기 때문에 추적하기 힘듬                     

static int a = 1;     //internal linkage //다른 cpp파일에서 접근 불가능한 전역변수



// forward declaration	//다른 cpp파일에 정의된 변수나 함수를 사용하려면 반드시 forward declaration을 해줘야한다
						//이때는 변수의 경우 extern을 반드시 붙여줘야한다, 함수는 안붙여도 됨
						//constexpr는 forward decalaration이 불가능하므로 constexpr을 전역변수로 사용하지마!(const를 사용해라)

extern void doWhat();   //doWhat()은 test.cpp에 있는 함수이므로, forward declaration으로 다른 cpp파일에서 선언을 해주면 test.cpp를 include 안해도 사용가능하다
						//external linkage  //외부 cpp파일에서 접근 가능  //extern은 보통 생략돼 있음
						//이 cpp파일이나 다른 cpp파일 어딘가에 doWhat()이라는 function의 몸체가 있으므로 찾아서 써라라는 의미

extern int a;           //변수도 역시 선언을 해주면 다른 cpp파일에 있는 변수도 사용가능하다, 이때 extern을 반드시 붙여줘야함
						//대신 초기화를 한번 더 하게 되면 오류가 발생한다(초기화를 2번하는 꼴이므로)

int main()
{
	//cout << value << endl;
	//
	//int value = 1;        //local variable //linkage가 없다(외부와 연결되지 않았으므로)

	//cout << ::value << endl;  //:: global scope operator를 이용해 전역 변수를 가져올 수 있다
	//cout << value << endl;



	//doSomething();    //doSomething()에서 a를 int로 정의했을 경우 결과는 계속 2가 나오지만
	//doSomething();    //static int로 정의하면 a가 함수밖에서도 살아있기때문에 2,3,4,5 로 나온다
	//doSomething();
	//doSomething();


	//doWhat();
	//cout << a <<endl;



	cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << endl;	
	doWhat();																		//만약 MyConstants에 대한 헤더파일만 있고 cpp파일이 없으면 pi에 대한 주소가 다르게 나온다
																					// header파일과 cpp파일을 만들어야 pi에 대한 메모리를 똑같이 잡을 수 있다.

/*	총정리
	//초기화 없이 정의만 할 경우
	int g_x; // external linkage
	static int g_x; // internal linkage // 다른 cpp파일에서 사용 불가능!
	const int g_x; // 오류, const는 반드시 초기화를 같이 해줘야함!

	//forward declaration인 경우
	extern int g_z;			//다른 곳에서 초기화가 한번 돼 있어야 사용가능
	extern cosnt int g_z;

	//초기화하는 경우
	int g_y(1);			//external linkage
	static int g_y(1);	//internal linkage

	extern int g_w(1);			//알기쉽게 extern 붙여준 것
	extern const int g_w(1);	//const의 경우 extern을 붙여줘야 external linkage로 사용가능
*/

	return 0;
}
