#include <iostream>
#include <algorithm>

using namespace std;

#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define ll   long long


int main()
{
    int n, m, arr[55];

    cin >> n >> m;

    for(int i = 0; i < m; i++)
        cin >> arr[i];

    sort(arr, arr + m);

    int mn = 2000;
    for(int i = 0; n + i <= m; i++)
        mn = min(mn, arr[n + i - 1] - arr[i]);

    cout << mn << ENDL;

    return 0;
}
