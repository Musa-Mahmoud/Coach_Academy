#include <iostream>
#include <algorithm>

using namespace std;

#define FIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define st   first
#define nd   second
#define ENDL '\n'
#define SPC  ' '
#define ll   long long


int main()
{
    int n, arr[100];

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    if(n > 1)
        cout << arr[n - 1] << SPC;

    for(int i = 1; i < n - 1; i++)
        cout << arr[i] << SPC;

    cout << arr[0] << ENDL;

    return 0;
}
