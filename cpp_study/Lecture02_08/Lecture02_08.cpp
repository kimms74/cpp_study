#include <iostream>

int main()
{
    using namespace std;


    //���� �տ� 0���̸� 8���� ǥ�� // 0 1 2 3 4 5 6 7 8 10 11 12 ...
    int x = 012;
    cout << x << endl;

    // ���� �տ� 0x���̸� 16���� ǥ�� // 0 1 2 3 4 5 6 7 8 9 A B C D E F G 10 ...
    int y = 0xF;
    cout << y << endl;

    // ���� �տ� 0b���̸� 2���� ǥ��
    int z = 0b1010'1011'1110'0111; // ���� ���̿� 'ǥ�ô� ��ǻ�ʹ� ������, ����� �б� ���ϰ� ǥ��(�ٸ� �������� ��밡��)
    cout << z << endl;

    //const ���̸� ����� ���ܵ�
    const int price_per_item =10;
    int num_items = 123;
    int price = num_items * price_per_item;

    return 0;
}
