#include <iostream>
//#include <iomanip>

using namespace std;

int main()
{
    unsigned short a, b;

    cin >> a >> b;

    cout << ( ( (a - b) / 3.0D ) + b ) << "\n";
    //cout << fixed << setprecision(7) << ( ( (a - b) / 3.0D ) + b ) << "\n";

    return 0;
}
