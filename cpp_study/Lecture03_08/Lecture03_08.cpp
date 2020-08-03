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
    //cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;    //bitset<>: <>���� ���ڸ�ŭ�� bit �ڸ����� 2���� ���� �����ش�
    //cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
    //cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
    //cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;
    ////unsigned�� �� �� 2�� ������ �ϰ� ������ pow���� shift operator�� ����ϴ°� �ξ� ������.



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
