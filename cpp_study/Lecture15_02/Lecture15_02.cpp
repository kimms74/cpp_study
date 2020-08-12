// R-value references

#include <iostream>

using namespace std;

int getResult()
{
    return 100 * 100;
}

void doSomething(int& lref)     //parameter�� l-value reference
{
    cout << "L-value ref" << endl;  //r-value�̱� ������ move semantics �ȵ�(memory�� �����Ƿ� �ٸ� �������� ��밡���ϴ�)
}

void doSomething(int&& ref)         //parameter�� r-value reference
{                                   //parameter�� �ٸ��ٰ� ������������ overloading ����

    cout << "R-value ref" << endl;  //r-value reference�� �޾ƿ� ��쿡�� �ȿ� ����ִ� data�� move�ؼ� �����͵� �ȴ�
}                                   //������ �ٸ� ������ �� ���� ���� �����̴�(memory�� ���� �ֵ��̹Ƿ�)

int main()
{
    int x = 5;  //x(l-vlaue)�� �޸𸮸� ������ ������ 5(r-vlaue)�� �� ������ ������ �������
    int y = getResult();    //getResult() : R-value
    const int cx = 6;
    const int cy = getResult();




    //l-value references
    int& lr1 = x;           //Modifiable l-values
    //int& lr2 = cx;        //Non-modifiable l-values //const int�� int�� ���� �Ұ���
    //int& lr3 = 5;         //R-values    //int&�� r-value�� �ִ� �� �Ұ���(�޸𸮸� �����͸� ���� �� �ִ�)

    const int& lr4 = x;     //Modifiable l-values
    const int& lr5 = cx;    //Non-modifiable l-values   //const�̹Ƿ� ����
    const int& lr6 = 5;     //R-values  //const int&���� r-value�ִ� �� ����!(���� �ȹٲ� ���̹Ƿ�)




    //R-value references(r-value�� ���԰���!)    //&&�� �񱳿����ڿʹ� ���� ����!
                                                //���� ��ȣ�� �����ؼ� ����� ��
    //int&& rr1 = x;        //Modifiable l-vlaues       //l-value�� �Ұ���
    //int&& rr2 = cx;       //Non-modifiable l-vlaues   //l-value�� �Ұ���
    int&& rr3 = 5;          //R-values  //�޸𸮸� ������ �ʴ� �ֵ鸸 ����
    int&& rrr = getResult();

    //const int&& rr4 = x;  //Modifiable l-values       //l-value�� �Ұ���
    //const int&& rr5 = cx; //Non-modifiable l-values   //l-value�� �Ұ���
    const int&& rr6 = 5;    //R-values


    cout << rr3 << endl;
    rr3 = 10;               //������ ���� �ٲ� �� �ִ�
    cout << rr3 << endl;    //l-value�ʹ� �ٸ��� �ϳ��� �����ϹǷ� �ڵ����� move semantics ����?
                            //�ٸ� ���� �����ϸ� ���� ��ü�� �Ű�����




    // L/R-value reference parameters
    doSomething(x);             //parameter�� l-value reference
    //doSomething(cx);          //cx�� const int&�̹Ƿ� �Ұ���
    doSomething(5);             //parameter�� r-value reference
    doSomething(getResult());   //parameter�� r-value reference


    return 0;
}
