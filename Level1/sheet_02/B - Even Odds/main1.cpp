#include <iostream>

using namespace std;

int main()
{
    long long n, k, half;

    cin >> n >> k;

    half = ( (n + 1) >> 1);

    if( k > half )
    {
        k -= half;
        cout << (k << 1) << "\n";
    }
    else
    {
        cout << (2 * k - 1) << "\n";
    }

    return 0;
}
