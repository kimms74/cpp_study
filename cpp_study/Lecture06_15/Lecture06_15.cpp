#include <iostream>

using namespace std;

void doSomething(const int& x)      // const int&�� parameter�� ����ϸ� �����ϴ°� �ƴ� �� �� �״�� ��밡��
{                                   // ����� �Լ��� parameter�� �־ ��� �����ϴ�
    cout << x << endl;
}

using namespace std;

int main()
{
    //int x = 5;
    //const int &ref_x = x;



    //const int x = 5;
    //const int &ref_x = x;     //reference variable�� const lvalue ���� �Ұ����ϹǷ� variable�� const�ٿ��ش�

    //const int &ref_x2 = ref_x;
     
    
    
    // int x = 5;
    // int &ref_x = x;

    //const int &ref_x2 = ref_x;

    

    

    const int &ref_x = 3+4;     //const int &�� type�� �ϸ� ����� ���� �� �ְ�, �ּҵ� ������ �ȴ�
    int ref_x2 = 3 + 4;         // �׳� int�� ������: const int &�� �Լ� parameter�� ���� ����!

    cout << ref_x2 << endl;
    cout << &ref_x2 << endl;




    int a = 1;
    doSomething(a);
    doSomething(1);     // doSomething�� parameter�� const int &�� ����ϸ� ����� ���� �� �ִ� 
    doSomething(a + 3);
    doSomething(3 * 4);
    
    
    
    
    
    
    
    
    return 0;
}
