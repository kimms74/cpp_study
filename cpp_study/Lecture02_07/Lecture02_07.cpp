//Chars

#include <iostream>
#include <limits>
int main()
{
    using namespace std;

    char c1(65);
    //char c2('A'); // "Hello, world", ���� �ϳ��� ' '�� ǥ��

    //cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

    //// c-style casting
    //cout << (char)65 << endl;
    //cout << (int)'A' << endl;

    ////cpp style
    //cout << char(65) << endl;
    //cout << int('A') << endl; //�� 2������ ������ ����ȯ

    //cout << static_cast<char>(65) << endl;
    //cout << static_cast<int>('A') << endl;    //static_cast�� ��ȯ�ص� �������� �ѹ� üũ����

    //char ch(97);
    //cout << ch << endl;
    //cout << static_cast<int>(ch) << endl;
    //cout << ch << endl;
    //
    //cin >> c1;
    //cout << c1 << " " << static_cast<int>(c1) << endl; //abc input�ϸ� bc�� ���ۿ� �����ִٰ� ������ cin�� ��

    //cin >> c1;
    //cout << c1 << " " << static_cast<int>(c1) << endl;

    //cin >> c1;
    //cout << c1 << " " << static_cast<int>(c1) << endl;

    //cout << sizeof(unsigned char) << endl;
    //cout << (int)numeric_limits<unsigned char>::max() << endl;
    //cout << (int)numeric_limits<unsigned char>::lowest() << endl;

    cout << int('\n') << endl;  //\n�� �׳� �ٹٲ�, std::endl�� ���ۿ��ִ� �͵��� �� ����ϰ� �ٹٲ޽�Ŵ
    cout << int('\t') << endl;  //std::flush: �ٹٲ޾��� ���ۿ� �ִ°��� �� �����
    cout << int('\"') << endl;  //����ϴ� ���ڿ� "�� �ְ������ \"�� ����ϸ� �ȴ�, \?�� ���� ? ǥ������
    cout << int('\a') << endl;  //\a: �Ҹ�����  //�ڵ忡 �־� �۾������� �Ҹ������ϸ� �ð�Ȱ���ϱ� ����!
                                //\n,\t,\",\a ��� 2���� ���ڸ� �������� �����Ϸ� ���忡���� char�� �νĵȴ�(1bit)


    return 0;
}
