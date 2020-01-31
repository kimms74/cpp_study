#include <iostream>
#include <vector>
using namespace std;

void addOne(int &y) //call by reference
{
    cout << y << " " << uintptr_t(&y) << endl;

    y = y + 1;
}

void getSinCos(const double &degrees, double &sin_out, double &cos_out)  //c�� c++�� return�� 1���ۿ� �ȵǹǷ� parameter�� �̿��� ������ output ���
{   //const�� ���ΰ� ������ �����ϰ�, �� ���ΰ� output���� �����ϸ� ����
    static const double pi = 3.14314492;    //header�� �̾ƾ��� ����
    //������ ���̴� ����� ��� static�� ����ϸ� �Ź� ���� ���� �Ǵ� ���� �ƴ� �״�� Ȱ����
    const double radians = degrees * pi / 180.0;
    sin_out = sin(radians);
    cos_out = cos(radians);
}

//void foo(const int &x)      //�ǹ����� ���� ���� ���� �����̴�!
//{
//    cout << x << endl;
//}

//void foo(int *&ptr)      //parameter �ǹ�: (int *) &ptr   //pointer�� �μ��� ���� �� ���
//{
//    cout << ptr << " " << &ptr <<endl;
//}

typedef int *pint;

void foo(pint &ptr)     //int *&ptr�� ����
{
    cout << ptr << " " << uintptr_t(&ptr) << endl;
}

void printElements(const int (&arr)[5])   //���� �迭�� parameter�� ����� �� array�� ũ�⸦ []�� ���������
{                                   //�����δ� array�� parameter�� ����� ���� ���� �迭�� ����

}

void printElements(const vector<int> &arr)    //���� �迭�� vector�� ������ ��Ÿ�� �� �ִ�
{

}


int main()
{
    //int x = 5;

    //cout << x << " " << uintptr_t(&x) << endl;

    //addOne(x);

    //cout << x << " " << uintptr_t(&x) << endl;  
    ////������ ���� ȣ���� ���� ��ü�� �ѱ�� ������ �ּҵ� �Ȱ��� ���簡 �̷������ �ʴ´�





    //double sin(0.0);
    //double cos(0.0);

    //getSinCos(30.0, sin, cos);  
    ////call by reference�� �̿��� �Լ� �ۿ��� ������ �����ϰ� return ���� ������ ������ �� ó�� ��밡��

    //cout << sin << " " << cos << endl;




    //foo(6);     //foo�� parameter�� const int &�� �ϸ� �μ��� ����� ���� �� �ִ�




    //int x = 5;
    ////int *ptr = &x;
    //pint ptr = &x;    //int *�� pint�� typedef�ؼ� ������ ��Ÿ�� �� �ִ�

    //cout << ptr << " " << uintptr_t(&ptr) << endl;
    //foo(ptr);

    

    
    //int arr[] { 1,2,3,4,5 };
    vector <int> arr{ 1,2,3,4,5 };

    printElements(arr);



    return 0;
}
