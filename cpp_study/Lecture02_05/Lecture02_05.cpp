#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
    using namespace std;

    float f(3.141592);
    double d(3.141592);
    long double ld(3.141592);




    //cout << sizeof(f) << endl;
    //cout << sizeof(d) << endl;
    //cout << sizeof(ld) << endl;

    //cout << numeric_limits<float>::lowest() << endl;
    //cout << numeric_limits<double>::lowest() << endl;
    //cout << numeric_limits<long double>::lowest() << endl;

    //cout << 3.14 << endl;
    //cout << 3.14e-1 << endl;
    //cout << 3.14e-2 << endl;
    //cout << 3.14e1 << endl;
    //cout << 3.14e2 << endl;

    //cout << setprecision(16);
    //cout << 1.0 / 3.0 << endl;

    //float ff(123456789.0); // 10 significant digits
    //cout << setprecision(9);
    //cout << ff << endl; // 123456792 ·Î ³ªÅ¸³ª ¿ÀÂ÷°¡ »ý±è

    //double dd(0.1);
    //cout << dd << endl;
    //cout << setprecision(17);
    //cout << dd << endl; // 0.10000000000000001 ·Î ³ª¿È

    //double d1(1.0);
    //double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
    //cout << d1 << endl;
    //cout << d2 << endl;
    //cout << setprecision(17);
    //cout << d1 << endl;
    //cout << setprecision(17);
    //cout << d2 << endl; // 0.99999999999999989 ·Î ³ª¿È

    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 / zero;
    double nan = zero / zero;
    
    cout << posinf << " " << isinf(posinf) << endl; // inf 1, inf = inifinite
    cout << neginf << " " << isnan(neginf) << endl; // -inf 0
    cout << nan << " " << isnan(nan) << endl; // -nan(ind) 1, nan = Not-a-Number, ind=indeterminated
    cout << 1.0 << " " << isnan(1.0) << endl;

    return 0;
}
