//Random file I/O

#include <iostream>
#include <fstream>
#include <string>
#include <string>
#include <cstdlib>  //exit()
#include <sstream>

using namespace std;

int main()
{
    const string filename = "my_file.txt";

    //make a file
    {
        ofstream ofs(filename);

        for (char i = 'a'; i <= 'z'; ++i)
            ofs << i;
        ofs << endl;
    }

    //read a file
    //{
    //    ifstream ifs(filename);

    //    ifs.seekg(5);   //5bytes �̵��� �ڿ� �о�鿩��
    //    //ifs.seekg(5, ios::beg);   //default�� ios::beg�̹Ƿ� ���� �������൵ �ȴ�
    //    cout << (char)ifs.get() << endl;    //get()���� ������ ���� char�� casting

    //    ifs.seekg(5, ios::cur); //���� ��ġ���� �ٽ� 5bytes �̵��� �ڿ� �о��
    //    cout << (char)ifs.get() << endl;

    //    //ifs.seekg(-5, ios::end);  //������ ���� 5bytes �̵��� �ڿ� �о��(-5�̹Ƿ� �Ųٷ� �̵��ϴ� ��)

    //    ifs.seekg(0, ios::end);   //end�� ���� 0�̹Ƿ� �������� �о��
    //    cout << ifs.tellg() << endl;  //tellg(): ���� ��ġ�� �˷��� //���ĺ� 26���� endl�����ؼ� 28??
    //}




    ////read a file
    //{
    //    ifstream ifs(filename);

    //    ifs.seekg(5);   //5bytes �̵��� �ڿ� �о�鿩��
    //    //ifs.seekg(5, ios::beg);   //default�� ios::beg�̹Ƿ� ���� �������൵ �ȴ�
    //    cout << (char)ifs.get() << endl;    //get()���� ������ ���� char�� casting

    //    ifs.seekg(5, ios::cur); //���� ��ġ���� �ٽ� 5bytes �̵��� �ڿ� �о��
    //    cout << (char)ifs.get() << endl;

    //    string str;             //�� �ٿ��� ���� �͵��� �� �о��
    //    getline(ifs, str);

    //    cout << str << endl;
    //}




    //read & write a file
    {
        //fstream iofs(filename, ios::in | ios::out);   // |�� �̿��� flag�� �ѹ��� ������ ����� �� �ִ�
        fstream iofs(filename);                         //in, out flags�� �� �־��൵ �� �۵��Ѵ�

        iofs.seekg(5);

        cout << (char)iofs.get() << endl;   //read

        iofs.seekg(5);
        iofs.put('A');  //write //����� ��
    }







    return 0;
}
