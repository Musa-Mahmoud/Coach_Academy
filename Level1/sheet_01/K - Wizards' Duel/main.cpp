#include <iostream>

using namespace std;

int main()
{
    unsigned short p, q;
    double l;

    cin >> l;
    cin >> p;
    cin >> q;

    cout << ( (p * l) / (p + q) ) << "\n";

    return 0;
}
