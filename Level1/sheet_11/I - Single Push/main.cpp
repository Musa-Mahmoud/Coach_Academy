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
        int n, a[100000], b[100000];

        cin >> n;

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++)
            cin >> b[i];

        int idx = n, dif;
        for(int i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                dif = b[i] - a[i];

                idx = i;

                break;
            }
        }

        for(int i = idx; i < n && dif > 0; i++)
        {
            if(a[i] != b[i])
            {
                a[i] += dif;
            }
            else
                break;
        }

        bool requal = true;
        for(int i = 0; i < n && requal; i++)
        {
            if(a[i] != b[i])
                requal =false;
        }

        if(requal)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
