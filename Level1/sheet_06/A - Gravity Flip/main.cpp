#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    unsigned short i, n, arr[105];

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for(i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << '\n';

    return 0;
}
