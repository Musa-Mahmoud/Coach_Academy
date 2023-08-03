#include <iostream>

using namespace std;

int main()
{
    unsigned short n , a, b, i;
    int minCap = 0, sum = 0;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> a >> b;

        sum += b - a;
        minCap = max(minCap, sum);
    }

    cout << minCap << '\n';

    return 0;
}
