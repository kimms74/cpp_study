// Early binding and late binding

#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    int x, y;
    cin >> x >> y;

    int op;
    cout << "0 : add, 1 : subtract, 2 : multiply" << endl;
    cin >> op;

    ////static binding (early binding) ���� ���ε�
    //int result;
    //switch (op)
    //{
    //case 0: result = add(x, y); break;
    //case 1: result = subtract(x, y); break;
    //case 2: result = multiply(x, y); break;
    //}

    //cout << result << endl;           //�̹� ������ Ÿ�ӿ� �� �������ֱ� ������ ������



    //Dynamic binding (late binding)    ���� ���ε�
    int(*func_ptr)(int, int) = nullptr; //function pointer  //�ٸ� �Լ��� pointer�� ������ �ִ� �Լ�(�����Ҵ� ����)
    switch (op)
    {
    case 0: func_ptr = add; break;
    case 1: func_ptr = subtract; break;
    case 2: func_ptr = multiply; break;
    }

    cout << func_ptr(x, y) << endl;     //�ּҸ� �ѹ� Ÿ�����ϱ� ������ ���� ���ε��� ���� ������
                                        //��� ���α׷����� �� ����������(���߿� �������� ex) 12_01 for��)
                                        //Ư�� virtual function�� for ���� �ȿ� �ִ´ٵ���, functino pointer�� ������ �°� �ݺ��� ���� �κп� ����Ѵٵ����� ���ϸ�
                                        //���� ���ε��� ����!(Ư�� ���ӿ��� ������ �ܺο��� �����̳ʰ� �Է��ѰͿ� ���� �ű⿡ ���缭 ���α׷����ϴ� ����̹Ƿ� �����ϰ� ���α׷����ϴ� �Ϳ� �ʼ����̴�)
    return 0;
}
