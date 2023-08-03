#include <iostream>

using namespace std;

int a[150005];

int main()
{
    int t, n, bd, a_min;

    cin >> t;

    while(t--)
    {
        bd = 0;
        a_min = 2147483647;

        cin >> n;

        for(int i = 0; i < n; i++)
            cin >> a[i];

        if(1 != n)
        {
            for(int i = n - 1; i >= 0; i--)
            {
                if(a[i] > a_min)
                    bd++;

                a_min = (a[i] > a_min)? a_min : a[i];
            }
        }

        cout << bd << '\n';
    }


    return 0;
}
