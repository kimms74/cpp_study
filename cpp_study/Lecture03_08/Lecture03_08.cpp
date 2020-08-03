//Bitwise operators

#include <iostream>
#include <bitset>

int main()
{
    using namespace std;
    
    
    /*
    << left shift
    >> right shift
    ~, &, |, ^
    */
    


    //unsigned int a = 3;
    //cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;    //bitset<>: <>안의 숫자만큼의 bit 자리수의 2진법 수를 보여준다
    //cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
    //cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
    //cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;
    ////unsigned를 쓸 때 2의 제곱을 하고 싶으면 pow보다 shift operator를 사용하는게 훨씬 빠르다.



    //unsigned int a = 1024;
    //cout << std::bitset<16>(a) << " " << a << endl;
    //cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;
    //cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;
    //cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;
    //cout << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl;

    ////bitwise not
    //unsigned int a = 1024;
    //cout << std::bitset<16>(a) << " " << a << endl;
    //cout << std::bitset<16>(~a) << " " << (~a) << endl;


    //// bitwise and, or, xor
    //unsigned int a = 0b1100;
    //unsigned int b = 0b0110;

    //cout << a << " " << b << endl;
    //cout << std::bitset<4>(a & b) << endl;
    //cout << std::bitset<4>(a | b) << endl;
    //cout << std::bitset<4>(a ^ b) << endl;



    //Quiz
    //0110 >> 2 - > decimal;
        cout << (0b0110 >> 2) << endl;
    //5 | 12;
        cout << (5 | 12) << " " << std::bitset<4>(5 | 12) << endl;
    //5 & 12;
        cout << (5 & 12) << " " << std::bitset<4>(5 & 12) << endl;
    //5 ^ 12;
        cout << (5 ^ 12) << " " << std::bitset<4>(5 ^ 12) << endl;
    
    return 0;
}
