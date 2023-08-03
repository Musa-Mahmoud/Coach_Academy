#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    unsigned short t;

    cin >> t;

    while(t--)
    {
        unsigned short n, d;

        cin >> n >> d;

        unsigned short arr[105];

        for(short i = 0; i < n; i++) cin >> arr[i];

        sort(arr, arr + n);

        if(arr[n - 1] <= d || arr[0] + arr[1] <= d)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

    }

    return 0;
}
