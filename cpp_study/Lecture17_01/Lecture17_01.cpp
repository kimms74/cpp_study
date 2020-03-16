//std::string and std::wstring

#include <iostream>
#include <string>
#include <locale>
#include <cstddef>


using namespace std;

int main()
{
    // c-style string example
    {
        char* strHello = new char[7];
        strcpy_s(strHello, sizeof(char) * 7, "hello!");
        std::cout << strHello << std::endl;
    }

    // basic_string<>, string, wstring
    {
        std::string string;     //string과 wstring은 basic_string<> template의 instants중 하나다
        std::wstring wstring;   //string 우클릭 후 go to definition으로 확인하기

        wchar_t wc; //wchar_t: unsigned short   //wide-character/unicode를 표현할 때 사용한다
    }

    // wstring example
    {
        // Stackoverflow.com
        // C++ Code to cout international characters using Visual Studio 2015
        // https://stackoverflow.com/questions/33404685/c-code-to-cout-international-characters-using-visual-studio-2015
        
        const std::wstring texts[] =
        {
            L"안녕하세요", //Korean
            L"Ñá", //Spanish
            L"forêt intérêt", //French
            L"Gesäß", //German
            L"取消波蘇日奇諾", //Chinese
            L"日本人のビット", //Japanese
            L"немного русский", //Russian
            L"ένα κομμάτι της ελληνικής", // Greek
            L"ਯੂਨਾਨੀ ਦੀ ਇੱਕ ਬਿੱਟ", // Punjabi (wtf?). xD
            L"کمی از ایران ", // Persian (I know it, from 300 movie)
            L"కానీ ఈ ఏమి నరకం ఉంది?", //Telugu (telu-what?)
            L"Но какво, по дяволите, е това?" //Bulgarian
        };

        std::locale::global(std::locale(""));
        std::wcout.imbue(std::locale());        //wcout : wide cout

        for (size_t i = 0; i < 11; ++i)
            std::wcout << texts[i] << std::endl;
    }







    return 0;
}
