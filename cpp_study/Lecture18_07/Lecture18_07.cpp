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

    //    ifs.seekg(5);   //5bytes 이동한 뒤에 읽어들여라
    //    //ifs.seekg(5, ios::beg);   //default는 ios::beg이므로 따로 안적어줘도 된다
    //    cout << (char)ifs.get() << endl;    //get()으로 가져온 것을 char로 casting

    //    ifs.seekg(5, ios::cur); //현재 위치에서 다시 5bytes 이동한 뒤에 읽어라
    //    cout << (char)ifs.get() << endl;

    //    //ifs.seekg(-5, ios::end);  //끝에서 부터 5bytes 이동한 뒤에 읽어라(-5이므로 거꾸로 이동하는 것)

    //    ifs.seekg(0, ios::end);   //end로 부터 0이므로 마지막을 읽어라
    //    cout << ifs.tellg() << endl;  //tellg(): 현재 위치를 알려줌 //알파벳 26개에 endl까지해서 28??
    //}




    ////read a file
    //{
    //    ifstream ifs(filename);

    //    ifs.seekg(5);   //5bytes 이동한 뒤에 읽어들여라
    //    //ifs.seekg(5, ios::beg);   //default는 ios::beg이므로 따로 안적어줘도 된다
    //    cout << (char)ifs.get() << endl;    //get()으로 가져온 것을 char로 casting

    //    ifs.seekg(5, ios::cur); //현재 위치에서 다시 5bytes 이동한 뒤에 읽어라
    //    cout << (char)ifs.get() << endl;

    //    string str;             //그 줄에서 남은 것들을 다 읽어옴
    //    getline(ifs, str);

    //    cout << str << endl;
    //}




    //read & write a file
    {
        //fstream iofs(filename, ios::in | ios::out);   // |을 이용해 flag를 한번에 여러개 사용할 수 있다
        fstream iofs(filename);                         //in, out flags를 안 넣어줘도 잘 작동한다

        iofs.seekg(5);

        cout << (char)iofs.get() << endl;   //read

        iofs.seekg(5);
        iofs.put('A');  //write //덮어쓰는 것
    }







    return 0;
}
