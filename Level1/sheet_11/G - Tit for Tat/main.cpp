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
        int n, k, arr[100];

        cin >> n >> k;

        for(int i = 0; i < n; i++)
            cin >> arr[i];


        int bgnA = 0, endA = n - 1;
        while(k && bgnA != endA)
        {
            if(arr[bgnA] == 0)
            {
                bgnA++;
            }
            else
            {
                arr[bgnA]--;
                arr[endA]++;
                k--;
            }
        }

        for(int i = 0; i < n; i++)
            cout << arr[i] << SPC;

        cout << ENDL;

    }

    return 0;
}
