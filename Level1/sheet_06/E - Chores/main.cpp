#include <iostream>

using namespace std;

int main()
{
    unsigned short n, k, x, arr[105], i, sum = 0;

    cin >> n >> k >> x;

    n -= k;

    for(i = 0; i < n; i++)
    {
        cin >> arr[i];

        sum += arr[i];
    }

    sum += (k * x);

    cout << sum << '\n';

    return 0;
}
