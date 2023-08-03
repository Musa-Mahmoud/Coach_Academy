#include <iostream>
#include <algorithm>

using namespace std;

unsigned int d[100005];

int main()
{
    unsigned int i, n, m, c, uc;
    unsigned long long sum = 0;

    cin >> n >> m;

    for(i = 0; i < n; i++)
    {
        cin >> uc >> c;

        d[i] = uc - c;

        sum += uc;
    }

    sort(d, d + n, greater<int>());

    unsigned int idx = 0;
    while(sum > m && idx < n)
    {
        sum -= d[idx];
        idx++;
    }

    (sum > m)? cout << -1 << '\n' : cout << idx << '\n';

    return 0;

}
