//std::string assignment, swapping, appending, and inserting

#include <iostream>

using namespace std;

int main()
{

    //assignment
    //string str1("one");

    //string str2;
    //str2 = str1;
    //str2 = "two";
    //str2.assign("two"); //assign�� return�� return by reference�̴�
    //str2.assign("two", );   //parameter 2��¥���� �ִ�
    //str2.assign("two", , );   //parameter 3��¥���� �ִ�
    //str2.assign("two").append(" ").append("three").append(" ").append("four");  //append�� �ڿ� ���̱� ����
    
    //cout << str2 << endl;



    //swapping
    //string str1("one");
    //string str2("two");

    //cout << str1 << " " << str2 << endl;

    //std::swap(str1, str2);              //swap function�� �̿��� �ΰ��� �ٲ�

    //cout << str1 << " " << str2 << endl;

    //str1.swap(str2);                    //string::swap�� �����Ѵ�

    //cout << str1 << " " << str2 << endl;


    

    ////appending
    //string str1("one");
    //string str2("two");
    // 
    ////str1.append("three");
    ////str1.append("three", );   //append �Լ��� overloading�� �����Ƿ� Ȯ���غ���
    ////str1.push_back('A');        //push_back�� ���ڸ� �ִ� �� ����(���ڿ��� append ����)
    //str1 += "three";                //����ó�� ��밡��
    //str1 = str2 + "four";           //����ó�� ��밡��




    //inserting
    string str("aaaa");

    str.insert(2, "bbb");   //2��°�ڸ����� ""�� �ֱ�

    cout << str << endl;
    return 0;
}
