//Basic file I/O

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>  //exit()
#include <sstream>

using namespace std;

int main()
{
    ////writing
    //if (true)
    //{                                     //ofstream: output file stream
    //    ofstream ofs("my_first_file.txt"); //ofs("")�� �̿��ϸ� ""�ȿ� �ִ� �̸����� ������ �������

    //    if (!ofs)                           //������ �ȿ����� ��� ���� ǥ��
    //    {
    //        cerr << "Couldn't open file " << endl;
    //        exit(1);
    //    }

    //    ofs << "Line 1" << endl;    //ofs�� �̿��� �Է��ϸ� ASCII�� �Է� �� �޸��忡�� ��� �� �ִ�
    //    ofs << "Line 2" << endl;    //���� ASCIII �Է����� ����� ���� ���� Ȯ���ڸ� .txt�� ����Ѵ�
    //}


    //if (true)
    //{                                     
    //    ofstream ofs("my_first_file.txt", ios::app);  //ios::app : �̹� ������ ����������� ��� ���Ͽ� �߰��� �ۼ�����

    //    if (!ofs)                           //������ �ȿ����� ��� ���� ǥ��
    //    {
    //        cerr << "Couldn't open file " << endl;
    //        exit(1);
    //    }

    //    ofs << "Line 1" << endl;    //ofs�� �̿��� �Է��ϸ� ASCII�� �Է� �� �޸��忡�� ��� �� �ִ�
    //    ofs << "Line 2" << endl;    //���� ASCIII �Է����� ����� ���� ���� Ȯ���ڸ� .txt�� ����Ѵ�
    //}



        //if (true)
    //{                                    
    //    ofstream ofs("my_first_file.txt",ios::binary);  //ios::binary : binary ���� ������ ����

    //    if (!ofs)                           //������ �ȿ����� ��� ���� ǥ��
    //    {
    //        cerr << "Couldn't open file " << endl;
    //        exit(1);
    //    }

    //    ofs << "Line 1" << endl;    //ofs�� �̿��� �Է��ϸ� ASCII�� �Է� �� �޸��忡�� ��� �� �ִ�
    //    ofs << "Line 2" << endl;    //���� ASCIII �Է����� ����� ���� ���� Ȯ���ڸ� .txt�� ����Ѵ�
    //}


    //reading
    //if (true)
    //{
    //    ifstream ifs("my_first_file.txt"); //ifs:input file stream

    //    if (!ifs)
    //    {
    //        cerr << "Cannot open file" << endl;
    //        exit(1);
    //    }

    //    while (ifs)             //ASCII�� �о���̴� ����
    //    {
    //        std::string str;
    //        getline(ifs, str);  //���پ� �а� �� ������ while�� ������
    //                            //getline(para1,para2): para1���� ������ �о�ͼ� string�� para2�� �����ϴ� ��, para2�� ���ڰ� ���� ���ٿ� �ִ� ����ڸ� �޾Ƶ��̰ڴٶ�� ��
    //        std::cout << str << endl;
    //    }

    //}


    //if (true)
    //{
    //    ifstream ifs("my_first_file_wrong.txt");    //���� �̸��� �߸� �Է��ϸ� cannot open file�̶� ���´�

    //    if (!ifs)
    //    {
    //        cerr << "Cannot open file" << endl;
    //        exit(1);                                //������ ����
    //    }

    //    while (ifs)
    //    {
    //        std::string str;
    //        getline(ifs, str);  

    //        std::cout << str << endl;
    //    }
    //}





    //writing
    if (true)
    {                                     
        ofstream ofs("my_first_file.dat",ios::binary); //�ǹ������� ASCII�� �����ϸ� �����Ű�µ� �ſ� ������ binary�� �����Ѵ�

        if (!ofs)                           
        {
            cerr << "Couldn't open file " << endl;
            exit(1);
        }

        const unsigned num_data = 10;       //binary�� ������ ��� �� ������ ���������� �� �� ���� �̸� ���ص־��Ѵ�
        ofs.write((char*)&num_data, sizeof(num_data));  //num_data�� pointer�� char*�� casting�ؼ� parameter�� �־��ش�
                                                        //num_data ũ�⸸ŭ�� ������� ����ڴ�
        for (int i = 0; i < num_data; ++i)
            ofs.write((char*)&i, sizeof(i));

    }


    //reading
    if (true)
    {
        ifstream ifs("my_first_file.dat", ios::binary); //ios::binary : ������ binary ���� �����Ų��

        if (!ifs)
        {
            cerr << "Cannot open file" << endl;
            exit(1);
        }

        unsigned num_data = 0;
        ifs.read((char*)&num_data, sizeof(num_data));

        for (unsigned i = 0; i < num_data; ++i) //binary�� �̿��ϸ� notepad���� ���� �� ����
        {                                       //debugging�� �Ű�����
            int num;
            ifs.read((char*)&num, sizeof(num));

            cout << num << endl;
        }

    }





    ////writing
    //if (true)
    //{
    //    ofstream ofs("my_first_file.dat");  

    //    if (!ofs)                           
    //    {
    //        cerr << "Couldn't open file " << endl;
    //        exit(1);
    //    }

    //    stringstream ss;                    //string�� �ѹ��� �� ��Ƴ��� ����ϴ� ���
    //    ss << "Line 1" << endl;
    //    ss << "Line 2" << endl;
    //    string str = ss.str();

    //    unsigned str_length = str.size();           
    //    ofs.write((char*)&str_length, sizeof(str_length));
    //    ofs.write(str.c_str(), str_length);

    //}


    ////reading
    //if (true)
    //{
    //    ifstream ifs("my_first_file.dat"/*, ios::binary*/); //ifs:input file stream

    //    if (!ifs)
    //    {
    //        cerr << "Cannot open file" << endl;
    //        exit(1);
    //    }

    //    unsigned str_len = 0;           //string�� size�� �̸� �о���̰�, data�� �о���� 
    //    ifs.read((char*)&str_len, sizeof(str_len));

    //    string str;                         
    //    str.resize(str_len);
    //    ifs.read(&str[0], str_len);

    //    cout << str << endl;
    //}

    return 0;
}
