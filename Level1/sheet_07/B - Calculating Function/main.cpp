#include <iostream>

using namespace std;

int main()
{
    long long n;

    cin >> n;

    if(n % 2 == 0) cout << (n >> 1) << '\n';
    else cout << (-1 * ((n + 1) >> 1)) << '\n';


    return 0;
}
