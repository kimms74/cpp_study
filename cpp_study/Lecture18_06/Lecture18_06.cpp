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
    //    ofstream ofs("my_first_file.txt"); //ofs("")를 이용하면 ""안에 있는 이름으로 파일을 만들어줌

    //    if (!ofs)                           //파일이 안열렸을 경우 오류 표시
    //    {
    //        cerr << "Couldn't open file " << endl;
    //        exit(1);
    //    }

    //    ofs << "Line 1" << endl;    //ofs를 이용해 입력하면 ASCII로 입력 돼 메모장에서 열어볼 수 있다
    //    ofs << "Line 2" << endl;    //보통 ASCIII 입력으로 사용할 때는 파일 확장자를 .txt를 사용한다
    //}


    //if (true)
    //{                                     
    //    ofstream ofs("my_first_file.txt", ios::app);  //ios::app : 이미 파일이 만들어져있을 경우 파일에 추가로 작성해줌

    //    if (!ofs)                           //파일이 안열렸을 경우 오류 표시
    //    {
    //        cerr << "Couldn't open file " << endl;
    //        exit(1);
    //    }

    //    ofs << "Line 1" << endl;    //ofs를 이용해 입력하면 ASCII로 입력 돼 메모장에서 열어볼 수 있다
    //    ofs << "Line 2" << endl;    //보통 ASCIII 입력으로 사용할 때는 파일 확장자를 .txt를 사용한다
    //}



        //if (true)
    //{                                    
    //    ofstream ofs("my_first_file.txt",ios::binary);  //ios::binary : binary 모드로 파일을 쓴다

    //    if (!ofs)                           //파일이 안열렸을 경우 오류 표시
    //    {
    //        cerr << "Couldn't open file " << endl;
    //        exit(1);
    //    }

    //    ofs << "Line 1" << endl;    //ofs를 이용해 입력하면 ASCII로 입력 돼 메모장에서 열어볼 수 있다
    //    ofs << "Line 2" << endl;    //보통 ASCIII 입력으로 사용할 때는 파일 확장자를 .txt를 사용한다
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

    //    while (ifs)             //ASCII로 읽어들이는 구조
    //    {
    //        std::string str;
    //        getline(ifs, str);  //한줄씩 읽고 다 읽으면 while이 끝난다
    //                            //getline(para1,para2): para1에서 한줄을 읽어와서 string인 para2에 저장하는 것, para2에 숫자가 들어가면 한줄에 최대 몇글자를 받아들이겠다라는 말
    //        std::cout << str << endl;
    //    }

    //}


    //if (true)
    //{
    //    ifstream ifs("my_first_file_wrong.txt");    //파일 이름을 잘못 입력하면 cannot open file이라 나온다

    //    if (!ifs)
    //    {
    //        cerr << "Cannot open file" << endl;
    //        exit(1);                                //강제로 끝냄
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
        ofstream ofs("my_first_file.dat",ios::binary); //실무에서는 ASCII로 저장하면 실행시키는데 매우 느려서 binary로 저장한다

        if (!ofs)                           
        {
            cerr << "Couldn't open file " << endl;
            exit(1);
        }

        const unsigned num_data = 10;       //binary로 저장할 경우 이 파일이 어디까지인지 알 수 없어 미리 정해둬야한다
        ofs.write((char*)&num_data, sizeof(num_data));  //num_data의 pointer를 char*로 casting해서 parameter로 넣어준다
                                                        //num_data 크기만큼의 사이즈로 만들겠다
        for (int i = 0; i < num_data; ++i)
            ofs.write((char*)&i, sizeof(i));

    }


    //reading
    if (true)
    {
        ifstream ifs("my_first_file.dat", ios::binary); //ios::binary : 파일을 binary 모드로 실행시킨다

        if (!ifs)
        {
            cerr << "Cannot open file" << endl;
            exit(1);
        }

        unsigned num_data = 0;
        ifs.read((char*)&num_data, sizeof(num_data));

        for (unsigned i = 0; i < num_data; ++i) //binary를 이용하면 notepad에서 읽을 수 없다
        {                                       //debugging에 신경써야함
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

    //    stringstream ss;                    //string에 한번에 쫙 담아놓고 사용하는 경우
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

    //    unsigned str_len = 0;           //string의 size를 미리 읽어들이고, data를 읽어들임 
    //    ifs.read((char*)&str_len, sizeof(str_len));

    //    string str;                         
    //    str.resize(str_len);
    //    ifs.read(&str[0], str_len);

    //    cout << str << endl;
    //}

    return 0;
}
