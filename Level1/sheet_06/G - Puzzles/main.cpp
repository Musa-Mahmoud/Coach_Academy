#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    unsigned short n, m, arr[1005], i;

    cin >> n >> m;

    for(i = 0; i < m; i++)
        cin >> arr[i];

    sort(arr, arr + m);

    unsigned short d = arr[n - 1] - arr[0];

    for(i = 0; i <= m - n; i++)
    {
        if(d > (arr[n + i - 1] - arr[i]))
            d = arr[n + i - 1] - arr[i];
    }

    cout << d << '\n';

    return 0;
}
