//Boolean values    //������ ���ǹ��� �ִ´�

#include <iostream>

bool isEqual(int a, int b)
{
    bool result = (a == b);

    return result;
}

int main()
{
    using namespace std;

    bool b1 = true;// copy initialization
    bool b2(true); // direct ''
    bool b3{ true }; // uniform ''
    b3 = false;

    //cout << std::boolalpha;   //�� �ڵ� �Ʒ����� bool ����� true,false�� ���ش�
    //cout << !b3 << endl;
    //cout << !b1 << endl;  

    ////and operator
    //cout << (true && true) << endl;
    //cout << (true && false) << endl;
    //cout << (false && true) << endl;
    //cout << (false && false) << endl;

    ////or operator
    //cout << (true || true) << endl;
    //cout << (true || false) << endl;
    //cout << (false || true) << endl;
    //cout << (false || false) << endl;

    //if (3>1)
    //{
    //    cout << "This is true" << endl;
    //    cout << "True second lines" << endl;
    //}
    //else
    //{
    //    cout << "This is false" << endl;
    //}

    //cout << std::boolalpha;
    //cout << isEqual(1, 1) << endl;
    //cout << isEqual(3, 2) << endl;

    //if (5)
    //{
    //    cout << "True" << endl;
    //}
    //else
    //    cout << "False" << endl;

    //bool b;

    //cin >> b;
    //cout << std::boolalpha;
    //cout << "your input : " << b << endl;

    int a;
    cin >> a;
    if (a % 2 == 0)
        cout << " This number is even number." << endl;
    else
        cout << " This number is odds number." << endl;

    return 0;
}
