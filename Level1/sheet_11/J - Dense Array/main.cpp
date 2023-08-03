#include <iostream>

using namespace std;

#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define SPC  ' '
#define ll   long long


int main()
{
    FIO

    int t;

    cin >> t;

    while(t--)
    {
        int  n, arr [50], added = 0;

        cin >> n;

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        for(int i = 0; i < n - 1; i++)
        {
            int mx = max(arr[i], arr[i + 1]);
            int mn = min(arr[i], arr[i + 1]);

            while(mx > 2 * mn)
            {
                added++;
                mn *= 2;
            }
        }

        cout << added << ENDL;
    }

    return 0;
}
