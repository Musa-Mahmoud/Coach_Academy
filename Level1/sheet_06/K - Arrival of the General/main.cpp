#include <iostream>

using namespace std;

int main()
{
    unsigned short n, arr[105], mx = 0, mn = 65535, i, j, maxIdx, minIdx, cnt = 0;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> arr[i];

        if(arr[i] > mx)
        {
            mx = arr[i];
            maxIdx = i;
        }
        if(arr[i] <= mn)
        {
            mn = arr[i];
            minIdx = i;
        }
    }

    //cout << mx << '@' << maxIdx << '\n' <<mn << '@' << minIdx << '\n';

    if(arr[maxIdx] == arr[0] && arr[minIdx] == arr[n - 1])
    {
        cout << 0 << '\n';
    }
    else
    {
        for(i = maxIdx; i > 0; i--)
        {
            swap(arr[i], arr[i - 1]);
            cnt++;
        }

        for(i = 0; i < n; i++)
        {
            if(arr[i] <= mn)
            {
                mn = arr[i];
                minIdx = i;
            }
        }

        for(i = minIdx; i < n - 1; i++)
        {
            swap(arr[i], arr[i + 1]);
            cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}
